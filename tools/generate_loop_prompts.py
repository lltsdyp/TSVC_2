from __future__ import annotations

import re
from pathlib import Path

TEMPLATE = """### SYSTEM ROLE
You are an expert Static Code Analysis Agent. Your goal is to understand the semantic intent of code loops.

### INSTRUCTION
Analyze the provided code snippet. Focus specifically on the loop structures (for, while, nested loops).
Do not simply translate the code line-by-line. Instead, identify the high-level algorithmic purpose.

Please answer the following three points based on the code:
1. **Loop Intent**: A short, high-level summary of what the loop is accomplishing (e.g., "Searching", "Aggregation", "Matrix Operation").
2. **Mathematical/Logical Description**: Describe the operation using algorithmic terminology.
3. **Transform**: Transform the given code snippet into MLIR Linalg Dialect.

### INPUT CODE
```{{YOUR CODE}}```

### YOUR ANALYSIS
"""

FUNCTION_PATTERN = re.compile(r"^\s*real_t\s+\w+\s*\(")


def extract_function(code: str) -> str | None:
    lines = code.splitlines()
    in_function = False
    brace_balance = 0
    collected: list[str] = []

    for line in lines:
        if not in_function and FUNCTION_PATTERN.match(line):
            in_function = True

        if in_function:
            collected.append(line)
            brace_balance += line.count("{")
            brace_balance -= line.count("}")
            if brace_balance == 0 and "}" in line:
                break

    if not collected:
        return None

    return "\n".join(collected).rstrip() + "\n"


def main() -> None:
    project_root = Path(__file__).resolve().parent.parent
    loops_dir = project_root / "src" / "loops"
    output_dir = project_root / "loop_prompts"
    output_dir.mkdir(parents=True, exist_ok=True)

    for loop_file in sorted(loops_dir.glob("*.c")):
        function_body = extract_function(loop_file.read_text())
        if not function_body:
            raise ValueError(f"Could not find function in {loop_file}")

        prompt_text = TEMPLATE.replace("{{YOUR CODE}}", function_body)
        output_file = output_dir / f"{loop_file.stem}_prompt.txt"
        output_file.write_text(prompt_text)


if __name__ == "__main__":
    main()
