#include "loop_list.h"

#define LOOP_ENTRY(name, arg_kind) {#name, name, arg_kind}

const struct loop_entry LOOP_ENTRIES[] = {
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s000)
    LOOP_ENTRY(s000, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s111)
    LOOP_ENTRY(s111, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1111)
    LOOP_ENTRY(s1111, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s112)
    LOOP_ENTRY(s112, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1112)
    LOOP_ENTRY(s1112, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s113)
    LOOP_ENTRY(s113, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1113)
    LOOP_ENTRY(s1113, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s114)
    LOOP_ENTRY(s114, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s115)
    LOOP_ENTRY(s115, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1115)
    LOOP_ENTRY(s1115, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s116)
    LOOP_ENTRY(s116, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s118)
    LOOP_ENTRY(s118, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s119)
    LOOP_ENTRY(s119, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1119)
    LOOP_ENTRY(s1119, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s121)
    LOOP_ENTRY(s121, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s123)
    LOOP_ENTRY(s123, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s124)
    LOOP_ENTRY(s124, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s125)
    LOOP_ENTRY(s125, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s126)
    LOOP_ENTRY(s126, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s127)
    LOOP_ENTRY(s127, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s128)
    LOOP_ENTRY(s128, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s131)
    LOOP_ENTRY(s131, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s132)
    LOOP_ENTRY(s132, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s141)
    LOOP_ENTRY(s141, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s151)
    LOOP_ENTRY(s151, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s152)
    LOOP_ENTRY(s152, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s161)
    LOOP_ENTRY(s161, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1161)
    LOOP_ENTRY(s1161, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s162)
    LOOP_ENTRY(s162, ARG_N1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s171)
    LOOP_ENTRY(s171, ARG_N1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s173)
    LOOP_ENTRY(s173, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s175)
    LOOP_ENTRY(s175, ARG_N1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s176)
    LOOP_ENTRY(s176, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s211)
    LOOP_ENTRY(s211, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s212)
    LOOP_ENTRY(s212, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1213)
    LOOP_ENTRY(s1213, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s221)
    LOOP_ENTRY(s221, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1221)
    LOOP_ENTRY(s1221, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s222)
    LOOP_ENTRY(s222, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s231)
    LOOP_ENTRY(s231, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s232)
    LOOP_ENTRY(s232, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1232)
    LOOP_ENTRY(s1232, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s233)
    LOOP_ENTRY(s233, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2233)
    LOOP_ENTRY(s2233, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s235)
    LOOP_ENTRY(s235, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s241)
    LOOP_ENTRY(s241, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s243)
    LOOP_ENTRY(s243, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s244)
    LOOP_ENTRY(s244, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1244)
    LOOP_ENTRY(s1244, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2244)
    LOOP_ENTRY(s2244, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s251)
    LOOP_ENTRY(s251, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1251)
    LOOP_ENTRY(s1251, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2251)
    LOOP_ENTRY(s2251, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s3251)
    LOOP_ENTRY(s3251, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s252)
    LOOP_ENTRY(s252, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s253)
    LOOP_ENTRY(s253, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s254)
    LOOP_ENTRY(s254, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s255)
    LOOP_ENTRY(s255, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s256)
    LOOP_ENTRY(s256, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s257)
    LOOP_ENTRY(s257, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s258)
    LOOP_ENTRY(s258, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s261)
    LOOP_ENTRY(s261, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s271)
    LOOP_ENTRY(s271, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s272)
    LOOP_ENTRY(s272, ARG_S1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s273)
    LOOP_ENTRY(s273, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s274)
    LOOP_ENTRY(s274, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s275)
    LOOP_ENTRY(s275, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2275)
    LOOP_ENTRY(s2275, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s276)
    LOOP_ENTRY(s276, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s277)
    LOOP_ENTRY(s277, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s278)
    LOOP_ENTRY(s278, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s279)
    LOOP_ENTRY(s279, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1279)
    LOOP_ENTRY(s1279, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2710)
    LOOP_ENTRY(s2710, ARG_S1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2711)
    LOOP_ENTRY(s2711, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2712)
    LOOP_ENTRY(s2712, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s281)
    LOOP_ENTRY(s281, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1281)
    LOOP_ENTRY(s1281, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s291)
    LOOP_ENTRY(s291, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s292)
    LOOP_ENTRY(s292, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s293)
    LOOP_ENTRY(s293, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2101)
    LOOP_ENTRY(s2101, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2102)
    LOOP_ENTRY(s2102, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s2111)
    LOOP_ENTRY(s2111, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s311)
    LOOP_ENTRY(s311, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s31111)
    LOOP_ENTRY(s31111, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s312)
    LOOP_ENTRY(s312, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s313)
    LOOP_ENTRY(s313, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s314)
    LOOP_ENTRY(s314, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s315)
    LOOP_ENTRY(s315, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s316)
    LOOP_ENTRY(s316, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s317)
    LOOP_ENTRY(s317, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s318)
    LOOP_ENTRY(s318, ARG_N1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s319)
    LOOP_ENTRY(s319, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s3110)
    LOOP_ENTRY(s3110, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s13110)
    LOOP_ENTRY(s13110, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s3111)
    LOOP_ENTRY(s3111, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s3112)
    LOOP_ENTRY(s3112, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s3113)
    LOOP_ENTRY(s3113, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s321)
    LOOP_ENTRY(s321, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s322)
    LOOP_ENTRY(s322, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s323)
    LOOP_ENTRY(s323, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s331)
    LOOP_ENTRY(s331, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s332)
    LOOP_ENTRY(s332, ARG_S1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s341)
    LOOP_ENTRY(s341, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s342)
    LOOP_ENTRY(s342, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s343)
    LOOP_ENTRY(s343, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s351)
    LOOP_ENTRY(s351, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1351)
    LOOP_ENTRY(s1351, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s352)
    LOOP_ENTRY(s352, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s353)
    LOOP_ENTRY(s353, ARG_IP),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s421)
    LOOP_ENTRY(s421, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s1421)
    LOOP_ENTRY(s1421, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s422)
    LOOP_ENTRY(s422, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s423)
    LOOP_ENTRY(s423, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s424)
    LOOP_ENTRY(s424, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s431)
    LOOP_ENTRY(s431, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s441)
    LOOP_ENTRY(s441, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s442)
    LOOP_ENTRY(s442, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s443)
    LOOP_ENTRY(s443, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s451)
    LOOP_ENTRY(s451, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s452)
    LOOP_ENTRY(s452, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s453)
    LOOP_ENTRY(s453, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s471)
    LOOP_ENTRY(s471, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s481)
    LOOP_ENTRY(s481, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s482)
    LOOP_ENTRY(s482, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s491)
    LOOP_ENTRY(s491, ARG_IP),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s4113)
    LOOP_ENTRY(s4113, ARG_IP),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s4115)
    LOOP_ENTRY(s4115, ARG_IP),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s4117)
    LOOP_ENTRY(s4117, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_s4121)
    LOOP_ENTRY(s4121, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_va)
    LOOP_ENTRY(va, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vag)
    LOOP_ENTRY(vag, ARG_IP),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vas)
    LOOP_ENTRY(vas, ARG_IP),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vif)
    LOOP_ENTRY(vif, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vpv)
    LOOP_ENTRY(vpv, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vtv)
    LOOP_ENTRY(vtv, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vpvtv)
    LOOP_ENTRY(vpvtv, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vpvts)
    LOOP_ENTRY(vpvts, ARG_S1),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vpvpv)
    LOOP_ENTRY(vpvpv, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vtvtv)
    LOOP_ENTRY(vtvtv, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vsumr)
    LOOP_ENTRY(vsumr, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vdotr)
    LOOP_ENTRY(vdotr, ARG_NONE),
#endif
#if defined(ENABLE_ALL_LOOPS) || defined(ENABLE_vbor)
    LOOP_ENTRY(vbor, ARG_NONE),
#endif
};

const size_t LOOP_ENTRY_COUNT = sizeof(LOOP_ENTRIES) / sizeof(LOOP_ENTRIES[0]);
