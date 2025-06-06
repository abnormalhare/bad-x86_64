#ifndef BD6C694D_1681_47C6_8F9C_5C15CFF88DFD
#define BD6C694D_1681_47C6_8F9C_5C15CFF88DFD

#include "data.h"
#include "alu.h"

void ASM_01(u8 rm_code, u8 sib, s32 disp);
void ASM_03(u8 rm_code, u8 sib, s32 disp);
void ASM_0B(u8 rm_code, u8 sib, s32 disp);
void ASM_0C(u8 val);

void ASM_0F(u8 index, Data* data);
bool _ASM_0F_82(Data *data);
bool _ASM_0F_83(Data *data);
bool _ASM_0F_84(Data *data);
bool _ASM_0F_85(Data *data);
bool _ASM_0F_87(Data *data);
bool _ASM_0F_88(Data *data);
bool _ASM_0F_89(Data *data);
bool _ASM_0F_8E(Data *data);
#define ASM_0F_J(ix, data, t) if (_ASM_0F_## ix (data)) goto JMP_##t; ASM_end()
#define ASM_0F_R(ix, data) if (_ASM_0F_## ix (data)) return; ASM_end()

void ASM_23(u8 rm_code, u8 sib, s32 disp);
void ASM_2B(u8 rm_code, u8 sib, s32 disp);
void ASM_31(u8 rm_code, u8 sib, s32 disp);
void ASM_32(u8 rm_code, u8 sib, s32 disp);
void ASM_33(u8 rm_code, u8 sib, s32 disp);
void ASM_38(u8 rm_code, u8 sib, s32 disp);
void ASM_39(u8 rm_code, u8 sib, s32 disp);
void ASM_3B(u8 rm_code, u8 sib, s32 disp);
void ASM_3D(s32 val);
void ASM_4X(u8 in_rex);
void ASM_5L(u8 in);
void ASM_5H(u8 in);
void ASM_63(u8 rm_code, u8 sib, s32 disp);
void ASM_64(void);
void ASM_65(void);
void ASM_66(void);
void ASM_67(void);
bool _ASM_72(s8 val);
bool _ASM_73(s8 val);
bool _ASM_74(s8 val);
bool _ASM_75(s8 val);
bool _ASM_76(s8 val);
bool _ASM_77(s8 val);
bool _ASM_78(s8 val);
bool _ASM_79(s8 val);
bool _ASM_7C(s8 val);
bool _ASM_7E(s8 val);
#define ASM_72(val, t) if (_ASM_72(val)) goto JMP_##t
#define ASM_73(val, t) if (_ASM_73(val)) goto JMP_##t
#define ASM_74(val, t) if (_ASM_74(val)) goto JMP_##t
#define ASM_75(val, t) if (_ASM_75(val)) goto JMP_##t
#define ASM_76(val, t) if (_ASM_76(val)) goto JMP_##t
#define ASM_77(val, t) if (_ASM_77(val)) goto JMP_##t
#define ASM_78(val, t) if (_ASM_78(val)) goto JMP_##t
#define ASM_79(val, t) if (_ASM_79(val)) goto JMP_##t
#define ASM_7C(val, t) if (_ASM_7C(val)) goto JMP_##t
#define ASM_7E(val, t) if (_ASM_7E(val)) goto JMP_##t
void ASM_80(u8 rm_code, u8 sib, s32 disp, u8 val);
void ASM_81(u8 rm_code, u8 sib, s32 disp, u32 val);
void ASM_83(u8 rm_code, u8 sib, s32 disp, u8 val);
void ASM_84(u8 rm_code, u8 sib, s32 disp);
void ASM_85(u8 rm_code, u8 sib, s32 disp);
void ASM_88(u8 rm_code, u8 sib, s32 disp);
void ASM_89(u8 rm_code, u8 sib, s32 disp);
void ASM_8A(u8 rm_code, u8 sib, s32 disp);
void ASM_8B(u8 rm_code, u8 sib, s32 disp);
void ASM_8D(u8 rm_code, u8 sib, s32 disp);
void ASM_90(void);
void ASM_A8(u8 val);
void ASM_AA(void);
void ASM_BL(u8 in, u8 val);
void ASM_BH(u8 in, u64 val);
void ASM_C1(u8 rm_code, u8 sib, s32 disp, u8 val);
void _ASM_C3(void);
#define ASM_C3() _ASM_C3(); return
void ASM_C6(u8 rm_code, u8 sib, s32 disp, u8 val);
void ASM_C7(u8 rm_code, u8 sib, s32 disp, u32 val);
void ASM_D1(u8 rm_code, u8 sib, s32 disp);
void ASM_E8(u32 val);
bool ASM_E9(u32 val, bool call);
#define ASM_E9_J(val, t) ASM_E9(val, false); goto JMP_##t
void _ASM_EB(u8 val);
#define ASM_EB(val, t) _ASM_EB(val); goto JMP_##t
void ASM_F0(void);
void ASM_F2(void);
void ASM_F3(void);
void ASM_F6(u8 rm_code, u8 sib, s32 disp, u8 val);
void ASM_F7(u8 rm_code, u8 sib, s32 disp, u32 val);
void ASM_FF(u8 rm_code, u8 sib, s32 disp);

#endif /* BD6C694D_1681_47C6_8F9C_5C15CFF88DFD */
