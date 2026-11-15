#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 3
#define BUFFER_SIZE 994

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} xJpl8Irf_ctx_t;

void init_ctx(xJpl8Irf_ctx_t *ctx) {
    ctx->id = 6123;
    ctx->coefficient = 6.9;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} hr9x3P1F_ctx_t;

void init_ctx(hr9x3P1F_ctx_t *ctx) {
    ctx->id = 6863;
    ctx->coefficient = 3.3;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} yjQQgqNx_ctx_t;

void init_ctx(yjQQgqNx_ctx_t *ctx) {
    ctx->id = 4438;
    ctx->coefficient = 4.8;
    ctx->flags = 110;
}

int compute_fCBjGyH(int input) {
    int result = input * 8;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_Wnk74vh(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_wRhtBUA(int input) {
    int result = input * 29;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} n321BHI4_ctx_t;

void init_ctx(n321BHI4_ctx_t *ctx) {
    ctx->id = 3232;
    ctx->coefficient = 8.8;
    ctx->flags = 230;
}

int compute_tHIb1bC(int input) {
    int result = input * 54;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} ygcanADO_ctx_t;

void init_ctx(ygcanADO_ctx_t *ctx) {
    ctx->id = 8615;
    ctx->coefficient = 9.9;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} BTI6scZ7_ctx_t;

void init_ctx(BTI6scZ7_ctx_t *ctx) {
    ctx->id = 6042;
    ctx->coefficient = 8.2;
    ctx->flags = 137;
}

int compute_PUvKUqg(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_9oPomwt(int input) {
    int result = input * 15;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} gVuid8Et_ctx_t;

void init_ctx(gVuid8Et_ctx_t *ctx) {
    ctx->id = 4498;
    ctx->coefficient = 2.8;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} WFKEqKWJ_ctx_t;

void init_ctx(WFKEqKWJ_ctx_t *ctx) {
    ctx->id = 5668;
    ctx->coefficient = 8.2;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} SGZEY7bh_ctx_t;

void init_ctx(SGZEY7bh_ctx_t *ctx) {
    ctx->id = 3675;
    ctx->coefficient = 9.9;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} RySVfO7G_ctx_t;

void init_ctx(RySVfO7G_ctx_t *ctx) {
    ctx->id = 7235;
    ctx->coefficient = 1.1;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} aUUur4K7_ctx_t;

void init_ctx(aUUur4K7_ctx_t *ctx) {
    ctx->id = 6044;
    ctx->coefficient = 2.6;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} MqD5acdq_ctx_t;

void init_ctx(MqD5acdq_ctx_t *ctx) {
    ctx->id = 9363;
    ctx->coefficient = 4.2;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} WC1Kda9e_ctx_t;

void init_ctx(WC1Kda9e_ctx_t *ctx) {
    ctx->id = 6759;
    ctx->coefficient = 5.6;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} TadAzEUI_ctx_t;

void init_ctx(TadAzEUI_ctx_t *ctx) {
    ctx->id = 2949;
    ctx->coefficient = 9.3;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} mCpjztJ5_ctx_t;

void init_ctx(mCpjztJ5_ctx_t *ctx) {
    ctx->id = 8415;
    ctx->coefficient = 0.3;
    ctx->flags = 190;
}

int compute_IcL1iLy(int input) {
    int result = input * 20;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_B0Bybnv(int input) {
    int result = input * 58;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_goKm4WH(int input) {
    int result = input * 46;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ywDZwmeT_ctx_t;

void init_ctx(ywDZwmeT_ctx_t *ctx) {
    ctx->id = 1783;
    ctx->coefficient = 4.6;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} p3uxXL6q_ctx_t;

void init_ctx(p3uxXL6q_ctx_t *ctx) {
    ctx->id = 8427;
    ctx->coefficient = 9.8;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} j9Lp22Br_ctx_t;

void init_ctx(j9Lp22Br_ctx_t *ctx) {
    ctx->id = 8159;
    ctx->coefficient = 3.6;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} QrpyBpVe_ctx_t;

void init_ctx(QrpyBpVe_ctx_t *ctx) {
    ctx->id = 6377;
    ctx->coefficient = 3.4;
    ctx->flags = 112;
}

int compute_tzOjqBA(int input) {
    int result = input * 23;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} gUt5YLah_ctx_t;

void init_ctx(gUt5YLah_ctx_t *ctx) {
    ctx->id = 3146;
    ctx->coefficient = 2.3;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} lqzfVZIJ_ctx_t;

void init_ctx(lqzfVZIJ_ctx_t *ctx) {
    ctx->id = 6950;
    ctx->coefficient = 5.1;
    ctx->flags = 65;
}

int compute_OKx842A(int input) {
    int result = input * 8;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} oNImiJs1_ctx_t;

void init_ctx(oNImiJs1_ctx_t *ctx) {
    ctx->id = 4684;
    ctx->coefficient = 1.9;
    ctx->flags = 206;
}

int compute_ihLgPhb(int input) {
    int result = input * 67;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} ptjQNE3X_ctx_t;

void init_ctx(ptjQNE3X_ctx_t *ctx) {
    ctx->id = 4115;
    ctx->coefficient = 4.0;
    ctx->flags = 199;
}

int compute_5zoNmih(int input) {
    int result = input * 37;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 4ebjVwqw_ctx_t;

void init_ctx(4ebjVwqw_ctx_t *ctx) {
    ctx->id = 9309;
    ctx->coefficient = 3.4;
    ctx->flags = 147;
}

int compute_n6XQARy(int input) {
    int result = input * 27;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} MJcWDsfD_ctx_t;

void init_ctx(MJcWDsfD_ctx_t *ctx) {
    ctx->id = 2334;
    ctx->coefficient = 0.8;
    ctx->flags = 248;
}

int compute_X4XvSug(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_5p4CxNe(int input) {
    int result = input * 23;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_0SEBDsm(int input) {
    int result = input * 13;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Jnh3ADuN_ctx_t;

void init_ctx(Jnh3ADuN_ctx_t *ctx) {
    ctx->id = 1326;
    ctx->coefficient = 6.7;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} IQXempuE_ctx_t;

void init_ctx(IQXempuE_ctx_t *ctx) {
    ctx->id = 8661;
    ctx->coefficient = 5.1;
    ctx->flags = 190;
}

int compute_mGZSFQY(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} wHL74Sdq_ctx_t;

void init_ctx(wHL74Sdq_ctx_t *ctx) {
    ctx->id = 1877;
    ctx->coefficient = 3.9;
    ctx->flags = 212;
}

int compute_nG9S53O(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} zhpEvTmw_ctx_t;

void init_ctx(zhpEvTmw_ctx_t *ctx) {
    ctx->id = 9753;
    ctx->coefficient = 1.8;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} nBBbxM7w_ctx_t;

void init_ctx(nBBbxM7w_ctx_t *ctx) {
    ctx->id = 4805;
    ctx->coefficient = 2.5;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 6azkaMJw_ctx_t;

void init_ctx(6azkaMJw_ctx_t *ctx) {
    ctx->id = 7514;
    ctx->coefficient = 3.8;
    ctx->flags = 241;
}

int compute_1eWV17H(int input) {
    int result = input * 30;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 7CWLVv8P_ctx_t;

void init_ctx(7CWLVv8P_ctx_t *ctx) {
    ctx->id = 4285;
    ctx->coefficient = 0.8;
    ctx->flags = 150;
}

int compute_CQtyqSU(int input) {
    int result = input * 8;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 43lYhHlz_ctx_t;

void init_ctx(43lYhHlz_ctx_t *ctx) {
    ctx->id = 3130;
    ctx->coefficient = 2.0;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} LsYiSYjr_ctx_t;

void init_ctx(LsYiSYjr_ctx_t *ctx) {
    ctx->id = 8564;
    ctx->coefficient = 7.5;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} sIE2Lm4v_ctx_t;

void init_ctx(sIE2Lm4v_ctx_t *ctx) {
    ctx->id = 8503;
    ctx->coefficient = 4.0;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} RqOFPAmF_ctx_t;

void init_ctx(RqOFPAmF_ctx_t *ctx) {
    ctx->id = 7095;
    ctx->coefficient = 6.8;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} dVrvELb3_ctx_t;

void init_ctx(dVrvELb3_ctx_t *ctx) {
    ctx->id = 4756;
    ctx->coefficient = 6.9;
    ctx->flags = 237;
}

int compute_EGffFOm(int input) {
    int result = input * 70;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} LIeW2yif_ctx_t;

void init_ctx(LIeW2yif_ctx_t *ctx) {
    ctx->id = 1553;
    ctx->coefficient = 7.2;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} W4RzO2Y5_ctx_t;

void init_ctx(W4RzO2Y5_ctx_t *ctx) {
    ctx->id = 4371;
    ctx->coefficient = 5.5;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} ocRIOkjY_ctx_t;

void init_ctx(ocRIOkjY_ctx_t *ctx) {
    ctx->id = 6390;
    ctx->coefficient = 5.6;
    ctx->flags = 23;
}

int compute_r1qbDHV(int input) {
    int result = input * 35;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Pm3V8cfH_ctx_t;

void init_ctx(Pm3V8cfH_ctx_t *ctx) {
    ctx->id = 2104;
    ctx->coefficient = 5.8;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} IlaM6cPB_ctx_t;

void init_ctx(IlaM6cPB_ctx_t *ctx) {
    ctx->id = 4503;
    ctx->coefficient = 0.4;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} OQj2ofrw_ctx_t;

void init_ctx(OQj2ofrw_ctx_t *ctx) {
    ctx->id = 6129;
    ctx->coefficient = 7.7;
    ctx->flags = 114;
}

int compute_Lp2ZgPC(int input) {
    int result = input * 24;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_uaFISYP(int input) {
    int result = input * 10;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 5JqJqssf_ctx_t;

void init_ctx(5JqJqssf_ctx_t *ctx) {
    ctx->id = 4572;
    ctx->coefficient = 10.0;
    ctx->flags = 151;
}

int compute_5Vzi2dM(int input) {
    int result = input * 2;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} t3vt1k7L_ctx_t;

void init_ctx(t3vt1k7L_ctx_t *ctx) {
    ctx->id = 3871;
    ctx->coefficient = 2.2;
    ctx->flags = 121;
}

int compute_ylN3bhk(int input) {
    int result = input * 27;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_dzpjsHY(int input) {
    int result = input * 24;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} FUeUvX10_ctx_t;

void init_ctx(FUeUvX10_ctx_t *ctx) {
    ctx->id = 4188;
    ctx->coefficient = 9.0;
    ctx->flags = 234;
}

int compute_35Dl6Bu(int input) {
    int result = input * 6;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} yG4iUozS_ctx_t;

void init_ctx(yG4iUozS_ctx_t *ctx) {
    ctx->id = 9900;
    ctx->coefficient = 0.4;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} NSNo9STo_ctx_t;

void init_ctx(NSNo9STo_ctx_t *ctx) {
    ctx->id = 7296;
    ctx->coefficient = 3.8;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} EYfGGDQ3_ctx_t;

void init_ctx(EYfGGDQ3_ctx_t *ctx) {
    ctx->id = 4706;
    ctx->coefficient = 7.9;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} JdHFMgOM_ctx_t;

void init_ctx(JdHFMgOM_ctx_t *ctx) {
    ctx->id = 4543;
    ctx->coefficient = 7.6;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} Z4VZSWZ6_ctx_t;

void init_ctx(Z4VZSWZ6_ctx_t *ctx) {
    ctx->id = 1666;
    ctx->coefficient = 9.1;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} KDaMkMHH_ctx_t;

void init_ctx(KDaMkMHH_ctx_t *ctx) {
    ctx->id = 4367;
    ctx->coefficient = 1.3;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} qobVni6s_ctx_t;

void init_ctx(qobVni6s_ctx_t *ctx) {
    ctx->id = 8070;
    ctx->coefficient = 4.6;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 2KBWa6ya_ctx_t;

void init_ctx(2KBWa6ya_ctx_t *ctx) {
    ctx->id = 3948;
    ctx->coefficient = 2.0;
    ctx->flags = 182;
}

int compute_sunjxHV(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} AEFH6e4Q_ctx_t;

void init_ctx(AEFH6e4Q_ctx_t *ctx) {
    ctx->id = 7332;
    ctx->coefficient = 4.2;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 9zDvPWaO_ctx_t;

void init_ctx(9zDvPWaO_ctx_t *ctx) {
    ctx->id = 3780;
    ctx->coefficient = 7.8;
    ctx->flags = 99;
}

int compute_kDZc8le(int input) {
    int result = input * 27;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_01ex9O4(int input) {
    int result = input * 42;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} Ozwx93HZ_ctx_t;

void init_ctx(Ozwx93HZ_ctx_t *ctx) {
    ctx->id = 7784;
    ctx->coefficient = 5.9;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 9Mg2NZnD_ctx_t;

void init_ctx(9Mg2NZnD_ctx_t *ctx) {
    ctx->id = 1271;
    ctx->coefficient = 3.1;
    ctx->flags = 145;
}

int compute_16TcQ8W(int input) {
    int result = input * 56;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 9jjP5XPC_ctx_t;

void init_ctx(9jjP5XPC_ctx_t *ctx) {
    ctx->id = 2362;
    ctx->coefficient = 1.2;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 7ei71xZT_ctx_t;

void init_ctx(7ei71xZT_ctx_t *ctx) {
    ctx->id = 1813;
    ctx->coefficient = 7.8;
    ctx->flags = 177;
}

int compute_QJUglNw(int input) {
    int result = input * 16;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Mm9ygIYS_ctx_t;

void init_ctx(Mm9ygIYS_ctx_t *ctx) {
    ctx->id = 2658;
    ctx->coefficient = 2.0;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} uPuO9oZK_ctx_t;

void init_ctx(uPuO9oZK_ctx_t *ctx) {
    ctx->id = 6766;
    ctx->coefficient = 8.3;
    ctx->flags = 118;
}

int compute_QJhK6O6(int input) {
    int result = input * 26;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_Ye0SalS(int input) {
    int result = input * 62;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} H3xqm5OM_ctx_t;

void init_ctx(H3xqm5OM_ctx_t *ctx) {
    ctx->id = 5748;
    ctx->coefficient = 8.0;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 4CzKkZVW_ctx_t;

void init_ctx(4CzKkZVW_ctx_t *ctx) {
    ctx->id = 5377;
    ctx->coefficient = 4.3;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} Y9uiBW4e_ctx_t;

void init_ctx(Y9uiBW4e_ctx_t *ctx) {
    ctx->id = 8639;
    ctx->coefficient = 0.8;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 5ShIgJXQ_ctx_t;

void init_ctx(5ShIgJXQ_ctx_t *ctx) {
    ctx->id = 1204;
    ctx->coefficient = 0.6;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} M3iuatWL_ctx_t;

void init_ctx(M3iuatWL_ctx_t *ctx) {
    ctx->id = 3054;
    ctx->coefficient = 9.7;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} jvpFkCUN_ctx_t;

void init_ctx(jvpFkCUN_ctx_t *ctx) {
    ctx->id = 8633;
    ctx->coefficient = 7.1;
    ctx->flags = 115;
}

int compute_RmHRmxV(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} UXd7HIXB_ctx_t;

void init_ctx(UXd7HIXB_ctx_t *ctx) {
    ctx->id = 4087;
    ctx->coefficient = 3.9;
    ctx->flags = 154;
}

int compute_IRjBHw6(int input) {
    int result = input * 53;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} W9KDGnds_ctx_t;

void init_ctx(W9KDGnds_ctx_t *ctx) {
    ctx->id = 9218;
    ctx->coefficient = 2.3;
    ctx->flags = 133;
}

int compute_oajn2qW(int input) {
    int result = input * 3;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ia2ya8cI_ctx_t;

void init_ctx(ia2ya8cI_ctx_t *ctx) {
    ctx->id = 8833;
    ctx->coefficient = 0.3;
    ctx->flags = 103;
}

int compute_UXM6lZi(int input) {
    int result = input * 44;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 2ewoZbqH_ctx_t;

void init_ctx(2ewoZbqH_ctx_t *ctx) {
    ctx->id = 6782;
    ctx->coefficient = 0.6;
    ctx->flags = 51;
}

int compute_yhMmelk(int input) {
    int result = input * 65;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} qf4TkotM_ctx_t;

void init_ctx(qf4TkotM_ctx_t *ctx) {
    ctx->id = 8088;
    ctx->coefficient = 5.7;
    ctx->flags = 129;
}

int compute_7PaKzXI(int input) {
    int result = input * 46;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_bErf9ai(int input) {
    int result = input * 2;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} m7CL5n5I_ctx_t;

void init_ctx(m7CL5n5I_ctx_t *ctx) {
    ctx->id = 8293;
    ctx->coefficient = 7.2;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} AOsQUumN_ctx_t;

void init_ctx(AOsQUumN_ctx_t *ctx) {
    ctx->id = 5821;
    ctx->coefficient = 4.7;
    ctx->flags = 23;
}

int compute_31aSqLB(int input) {
    int result = input * 53;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_XBLf2iZ(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} hhxxGPdh_ctx_t;

void init_ctx(hhxxGPdh_ctx_t *ctx) {
    ctx->id = 2135;
    ctx->coefficient = 0.3;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 0kfsFezE_ctx_t;

void init_ctx(0kfsFezE_ctx_t *ctx) {
    ctx->id = 4541;
    ctx->coefficient = 9.3;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} FgOayInI_ctx_t;

void init_ctx(FgOayInI_ctx_t *ctx) {
    ctx->id = 4484;
    ctx->coefficient = 6.3;
    ctx->flags = 92;
}

int compute_vNKzYSV(int input) {
    int result = input * 22;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} urYPdUKq_ctx_t;

void init_ctx(urYPdUKq_ctx_t *ctx) {
    ctx->id = 7003;
    ctx->coefficient = 7.4;
    ctx->flags = 4;
}

int compute_c4zNStu(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_WJbjVrE(int input) {
    int result = input * 66;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} GwM4KKK8_ctx_t;

void init_ctx(GwM4KKK8_ctx_t *ctx) {
    ctx->id = 5339;
    ctx->coefficient = 8.5;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} fwkXNAN1_ctx_t;

void init_ctx(fwkXNAN1_ctx_t *ctx) {
    ctx->id = 1571;
    ctx->coefficient = 8.2;
    ctx->flags = 223;
}

int compute_uxkP7cQ(int input) {
    int result = input * 14;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_FMjizt4(int input) {
    int result = input * 29;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} YN1sXwXW_ctx_t;

void init_ctx(YN1sXwXW_ctx_t *ctx) {
    ctx->id = 2503;
    ctx->coefficient = 5.2;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} rAaN5UfF_ctx_t;

void init_ctx(rAaN5UfF_ctx_t *ctx) {
    ctx->id = 1818;
    ctx->coefficient = 6.7;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} DofdepqO_ctx_t;

void init_ctx(DofdepqO_ctx_t *ctx) {
    ctx->id = 9244;
    ctx->coefficient = 0.5;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} BMdoDLzY_ctx_t;

void init_ctx(BMdoDLzY_ctx_t *ctx) {
    ctx->id = 6570;
    ctx->coefficient = 7.4;
    ctx->flags = 225;
}

int compute_zmAbfOZ(int input) {
    int result = input * 30;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} A33532HU_ctx_t;

void init_ctx(A33532HU_ctx_t *ctx) {
    ctx->id = 1895;
    ctx->coefficient = 3.5;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} dAXtLlwC_ctx_t;

void init_ctx(dAXtLlwC_ctx_t *ctx) {
    ctx->id = 8123;
    ctx->coefficient = 0.7;
    ctx->flags = 252;
}

int compute_ka6qHqY(int input) {
    int result = input * 40;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 1cEHCWRi_ctx_t;

void init_ctx(1cEHCWRi_ctx_t *ctx) {
    ctx->id = 7515;
    ctx->coefficient = 9.9;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} XA27eWQh_ctx_t;

void init_ctx(XA27eWQh_ctx_t *ctx) {
    ctx->id = 5854;
    ctx->coefficient = 4.7;
    ctx->flags = 225;
}

int compute_HPlIjIl(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} M2y1BwJs_ctx_t;

void init_ctx(M2y1BwJs_ctx_t *ctx) {
    ctx->id = 7411;
    ctx->coefficient = 3.6;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} kx1J0Ip2_ctx_t;

void init_ctx(kx1J0Ip2_ctx_t *ctx) {
    ctx->id = 8131;
    ctx->coefficient = 6.4;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} q97brZdQ_ctx_t;

void init_ctx(q97brZdQ_ctx_t *ctx) {
    ctx->id = 9736;
    ctx->coefficient = 3.5;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 1twIYay9_ctx_t;

void init_ctx(1twIYay9_ctx_t *ctx) {
    ctx->id = 8019;
    ctx->coefficient = 0.2;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} jBO0dZMC_ctx_t;

void init_ctx(jBO0dZMC_ctx_t *ctx) {
    ctx->id = 8281;
    ctx->coefficient = 5.4;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} Spejnqez_ctx_t;

void init_ctx(Spejnqez_ctx_t *ctx) {
    ctx->id = 9913;
    ctx->coefficient = 2.4;
    ctx->flags = 219;
}

int compute_S0gVWpi(int input) {
    int result = input * 57;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} WAQqjsWk_ctx_t;

void init_ctx(WAQqjsWk_ctx_t *ctx) {
    ctx->id = 7925;
    ctx->coefficient = 0.1;
    ctx->flags = 165;
}

int compute_38iFOLD(int input) {
    int result = input * 13;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_VMd8ruk(int input) {
    int result = input * 6;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_Mm1hI9E(int input) {
    int result = input * 40;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} DZw6G8Gh_ctx_t;

void init_ctx(DZw6G8Gh_ctx_t *ctx) {
    ctx->id = 9366;
    ctx->coefficient = 9.5;
    ctx->flags = 206;
}

int compute_JAjbqQE(int input) {
    int result = input * 61;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} iazuWE6b_ctx_t;

void init_ctx(iazuWE6b_ctx_t *ctx) {
    ctx->id = 1799;
    ctx->coefficient = 1.9;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} zOnwbynz_ctx_t;

void init_ctx(zOnwbynz_ctx_t *ctx) {
    ctx->id = 2417;
    ctx->coefficient = 7.6;
    ctx->flags = 129;
}

int compute_unkc9Xs(int input) {
    int result = input * 38;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_Gzo1TDL(int input) {
    int result = input * 53;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_CT6yq2a(int input) {
    int result = input * 56;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_OLJ1WAt(int input) {
    int result = input * 27;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_ZInJMKU(int input) {
    int result = input * 49;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} BCaCjqUi_ctx_t;

void init_ctx(BCaCjqUi_ctx_t *ctx) {
    ctx->id = 9334;
    ctx->coefficient = 0.6;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} ZsUrjERG_ctx_t;

void init_ctx(ZsUrjERG_ctx_t *ctx) {
    ctx->id = 4108;
    ctx->coefficient = 10.0;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Skxvjl1G_ctx_t;

void init_ctx(Skxvjl1G_ctx_t *ctx) {
    ctx->id = 5289;
    ctx->coefficient = 9.2;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} e3Tyqw5o_ctx_t;

void init_ctx(e3Tyqw5o_ctx_t *ctx) {
    ctx->id = 1674;
    ctx->coefficient = 7.7;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} NnWMtqqR_ctx_t;

void init_ctx(NnWMtqqR_ctx_t *ctx) {
    ctx->id = 2278;
    ctx->coefficient = 6.5;
    ctx->flags = 45;
}

int compute_azD09Ap(int input) {
    int result = input * 28;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_Z9WcLNN(int input) {
    int result = input * 54;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} EwrzL2C1_ctx_t;

void init_ctx(EwrzL2C1_ctx_t *ctx) {
    ctx->id = 3555;
    ctx->coefficient = 1.2;
    ctx->flags = 252;
}

int compute_HHv6Cu5(int input) {
    int result = input * 23;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} Z0lO6kGW_ctx_t;

void init_ctx(Z0lO6kGW_ctx_t *ctx) {
    ctx->id = 2077;
    ctx->coefficient = 7.8;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} KhekmreQ_ctx_t;

void init_ctx(KhekmreQ_ctx_t *ctx) {
    ctx->id = 4180;
    ctx->coefficient = 2.3;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} FHAiC7hW_ctx_t;

void init_ctx(FHAiC7hW_ctx_t *ctx) {
    ctx->id = 1468;
    ctx->coefficient = 6.6;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} HCq6EYNA_ctx_t;

void init_ctx(HCq6EYNA_ctx_t *ctx) {
    ctx->id = 3969;
    ctx->coefficient = 8.4;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 7eVXPYPX_ctx_t;

void init_ctx(7eVXPYPX_ctx_t *ctx) {
    ctx->id = 3797;
    ctx->coefficient = 3.0;
    ctx->flags = 244;
}

int compute_XBMqzg1(int input) {
    int result = input * 41;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_8IegrqT(int input) {
    int result = input * 16;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} XYqmrf9Z_ctx_t;

void init_ctx(XYqmrf9Z_ctx_t *ctx) {
    ctx->id = 9991;
    ctx->coefficient = 7.2;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} AWLiEff2_ctx_t;

void init_ctx(AWLiEff2_ctx_t *ctx) {
    ctx->id = 7464;
    ctx->coefficient = 9.1;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 8Mw8vk3g_ctx_t;

void init_ctx(8Mw8vk3g_ctx_t *ctx) {
    ctx->id = 6500;
    ctx->coefficient = 6.9;
    ctx->flags = 192;
}

int compute_Rr9hXzY(int input) {
    int result = input * 70;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_lHg80Qw(int input) {
    int result = input * 8;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} UNXMR3oE_ctx_t;

void init_ctx(UNXMR3oE_ctx_t *ctx) {
    ctx->id = 2399;
    ctx->coefficient = 0.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} tKvw4mmn_ctx_t;

void init_ctx(tKvw4mmn_ctx_t *ctx) {
    ctx->id = 7916;
    ctx->coefficient = 5.9;
    ctx->flags = 231;
}

int compute_42vMRYP(int input) {
    int result = input * 65;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} vHbzaBGc_ctx_t;

void init_ctx(vHbzaBGc_ctx_t *ctx) {
    ctx->id = 1943;
    ctx->coefficient = 2.1;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 4RNuTjvs_ctx_t;

void init_ctx(4RNuTjvs_ctx_t *ctx) {
    ctx->id = 9701;
    ctx->coefficient = 9.8;
    ctx->flags = 137;
}

int compute_Nf88CPO(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} PUQY60Q2_ctx_t;

void init_ctx(PUQY60Q2_ctx_t *ctx) {
    ctx->id = 7556;
    ctx->coefficient = 0.8;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} L0xeE8PS_ctx_t;

void init_ctx(L0xeE8PS_ctx_t *ctx) {
    ctx->id = 2765;
    ctx->coefficient = 1.2;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} xI0ktZOh_ctx_t;

void init_ctx(xI0ktZOh_ctx_t *ctx) {
    ctx->id = 9106;
    ctx->coefficient = 9.8;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} VSnCrEOM_ctx_t;

void init_ctx(VSnCrEOM_ctx_t *ctx) {
    ctx->id = 5590;
    ctx->coefficient = 5.0;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} nIaKj8jB_ctx_t;

void init_ctx(nIaKj8jB_ctx_t *ctx) {
    ctx->id = 4352;
    ctx->coefficient = 8.4;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 16s54gPS_ctx_t;

void init_ctx(16s54gPS_ctx_t *ctx) {
    ctx->id = 8456;
    ctx->coefficient = 1.4;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} BN6U3ThF_ctx_t;

void init_ctx(BN6U3ThF_ctx_t *ctx) {
    ctx->id = 1368;
    ctx->coefficient = 5.3;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} tdJ1fUOD_ctx_t;

void init_ctx(tdJ1fUOD_ctx_t *ctx) {
    ctx->id = 2604;
    ctx->coefficient = 7.3;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 2lUr8FrY_ctx_t;

void init_ctx(2lUr8FrY_ctx_t *ctx) {
    ctx->id = 1750;
    ctx->coefficient = 8.0;
    ctx->flags = 2;
}

int compute_2Je8ziR(int input) {
    int result = input * 24;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_PPc1OuE(int input) {
    int result = input * 69;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 2AzC87eL_ctx_t;

void init_ctx(2AzC87eL_ctx_t *ctx) {
    ctx->id = 3227;
    ctx->coefficient = 7.1;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 9TK3Ujfg_ctx_t;

void init_ctx(9TK3Ujfg_ctx_t *ctx) {
    ctx->id = 7040;
    ctx->coefficient = 6.9;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} sxBrtHjM_ctx_t;

void init_ctx(sxBrtHjM_ctx_t *ctx) {
    ctx->id = 7147;
    ctx->coefficient = 2.1;
    ctx->flags = 99;
}

int compute_pKAqDzr(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} TWKcF6v0_ctx_t;

void init_ctx(TWKcF6v0_ctx_t *ctx) {
    ctx->id = 8925;
    ctx->coefficient = 8.9;
    ctx->flags = 226;
}

int compute_Ek16rhO(int input) {
    int result = input * 56;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_oCrOgb3(int input) {
    int result = input * 22;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} CrCnVZnY_ctx_t;

void init_ctx(CrCnVZnY_ctx_t *ctx) {
    ctx->id = 2919;
    ctx->coefficient = 9.8;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} KwSPVQoo_ctx_t;

void init_ctx(KwSPVQoo_ctx_t *ctx) {
    ctx->id = 3122;
    ctx->coefficient = 2.3;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} VPoCiUrb_ctx_t;

void init_ctx(VPoCiUrb_ctx_t *ctx) {
    ctx->id = 1114;
    ctx->coefficient = 8.1;
    ctx->flags = 169;
}

int compute_7zWhV0U(int input) {
    int result = input * 3;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_JpErYx7(int input) {
    int result = input * 45;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_eWGFt5d(int input) {
    int result = input * 49;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 5nPlxKCx_ctx_t;

void init_ctx(5nPlxKCx_ctx_t *ctx) {
    ctx->id = 2037;
    ctx->coefficient = 1.6;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} xJKXwlO4_ctx_t;

void init_ctx(xJKXwlO4_ctx_t *ctx) {
    ctx->id = 9055;
    ctx->coefficient = 10.0;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} edwNwqvg_ctx_t;

void init_ctx(edwNwqvg_ctx_t *ctx) {
    ctx->id = 6558;
    ctx->coefficient = 2.2;
    ctx->flags = 59;
}

int compute_Q1pKxMM(int input) {
    int result = input * 15;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Igz38A6E_ctx_t;

void init_ctx(Igz38A6E_ctx_t *ctx) {
    ctx->id = 6651;
    ctx->coefficient = 5.4;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} EbwK9shR_ctx_t;

void init_ctx(EbwK9shR_ctx_t *ctx) {
    ctx->id = 7618;
    ctx->coefficient = 2.1;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} eVrMMU5H_ctx_t;

void init_ctx(eVrMMU5H_ctx_t *ctx) {
    ctx->id = 1765;
    ctx->coefficient = 8.1;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} FgblmLoS_ctx_t;

void init_ctx(FgblmLoS_ctx_t *ctx) {
    ctx->id = 5928;
    ctx->coefficient = 7.9;
    ctx->flags = 238;
}

int compute_cbKMkjt(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_rjOwEuZ(int input) {
    int result = input * 28;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_qj4yZqb(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} kvfw6q7g_ctx_t;

void init_ctx(kvfw6q7g_ctx_t *ctx) {
    ctx->id = 4587;
    ctx->coefficient = 8.9;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} GxCEzMhb_ctx_t;

void init_ctx(GxCEzMhb_ctx_t *ctx) {
    ctx->id = 9603;
    ctx->coefficient = 1.9;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} cKlNQ1W7_ctx_t;

void init_ctx(cKlNQ1W7_ctx_t *ctx) {
    ctx->id = 4477;
    ctx->coefficient = 3.2;
    ctx->flags = 248;
}

int compute_AlR9Dj5(int input) {
    int result = input * 33;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_ay7xLwv(int input) {
    int result = input * 46;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_OPnPs3k(int input) {
    int result = input * 28;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} NCMEWEk3_ctx_t;

void init_ctx(NCMEWEk3_ctx_t *ctx) {
    ctx->id = 1453;
    ctx->coefficient = 3.2;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Dw06faKi_ctx_t;

void init_ctx(Dw06faKi_ctx_t *ctx) {
    ctx->id = 9733;
    ctx->coefficient = 3.1;
    ctx->flags = 117;
}

int compute_9Gwmq2d(int input) {
    int result = input * 12;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_sluC0Zp(int input) {
    int result = input * 65;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_DLvM1A6(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} ooy7bqxD_ctx_t;

void init_ctx(ooy7bqxD_ctx_t *ctx) {
    ctx->id = 9265;
    ctx->coefficient = 9.8;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} uIWFfjhx_ctx_t;

void init_ctx(uIWFfjhx_ctx_t *ctx) {
    ctx->id = 2653;
    ctx->coefficient = 7.5;
    ctx->flags = 183;
}

int compute_eBtoUAs(int input) {
    int result = input * 26;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} HWc2YNR4_ctx_t;

void init_ctx(HWc2YNR4_ctx_t *ctx) {
    ctx->id = 1145;
    ctx->coefficient = 3.5;
    ctx->flags = 139;
}

int compute_6rj8M3m(int input) {
    int result = input * 68;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} bvwCjnEj_ctx_t;

void init_ctx(bvwCjnEj_ctx_t *ctx) {
    ctx->id = 6213;
    ctx->coefficient = 0.4;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ceOUU1Cx_ctx_t;

void init_ctx(ceOUU1Cx_ctx_t *ctx) {
    ctx->id = 6811;
    ctx->coefficient = 1.2;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 7HwvUwWd_ctx_t;

void init_ctx(7HwvUwWd_ctx_t *ctx) {
    ctx->id = 7112;
    ctx->coefficient = 6.6;
    ctx->flags = 171;
}

int compute_qQuL4Jx(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} veqhGb5h_ctx_t;

void init_ctx(veqhGb5h_ctx_t *ctx) {
    ctx->id = 8977;
    ctx->coefficient = 8.1;
    ctx->flags = 68;
}

int compute_srxbeeV(int input) {
    int result = input * 37;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Vd8JCwho_ctx_t;

void init_ctx(Vd8JCwho_ctx_t *ctx) {
    ctx->id = 6011;
    ctx->coefficient = 0.1;
    ctx->flags = 46;
}

int compute_tN0ypgv(int input) {
    int result = input * 29;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_GapKBUC(int input) {
    int result = input * 31;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} mw8GvC0s_ctx_t;

void init_ctx(mw8GvC0s_ctx_t *ctx) {
    ctx->id = 8862;
    ctx->coefficient = 3.2;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} ohHSO7La_ctx_t;

void init_ctx(ohHSO7La_ctx_t *ctx) {
    ctx->id = 5426;
    ctx->coefficient = 8.0;
    ctx->flags = 31;
}

int compute_EZAyVtk(int input) {
    int result = input * 33;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} vKD0BnD9_ctx_t;

void init_ctx(vKD0BnD9_ctx_t *ctx) {
    ctx->id = 7017;
    ctx->coefficient = 9.6;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} M84m9MV1_ctx_t;

void init_ctx(M84m9MV1_ctx_t *ctx) {
    ctx->id = 6022;
    ctx->coefficient = 8.0;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 1aQus2mH_ctx_t;

void init_ctx(1aQus2mH_ctx_t *ctx) {
    ctx->id = 4033;
    ctx->coefficient = 4.0;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} h8O8Ywwx_ctx_t;

void init_ctx(h8O8Ywwx_ctx_t *ctx) {
    ctx->id = 8078;
    ctx->coefficient = 9.9;
    ctx->flags = 78;
}

int compute_amv6EiQ(int input) {
    int result = input * 64;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} yLN9P4R9_ctx_t;

void init_ctx(yLN9P4R9_ctx_t *ctx) {
    ctx->id = 2787;
    ctx->coefficient = 6.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} fXA782yA_ctx_t;

void init_ctx(fXA782yA_ctx_t *ctx) {
    ctx->id = 7355;
    ctx->coefficient = 9.6;
    ctx->flags = 63;
}

int compute_V9b8clj(int input) {
    int result = input * 5;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_3BSrNDN(int input) {
    int result = input * 48;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_wiAtU0Y(int input) {
    int result = input * 4;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 4tMFA5tF_ctx_t;

void init_ctx(4tMFA5tF_ctx_t *ctx) {
    ctx->id = 3083;
    ctx->coefficient = 1.6;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Xm5ouWqj_ctx_t;

void init_ctx(Xm5ouWqj_ctx_t *ctx) {
    ctx->id = 5964;
    ctx->coefficient = 0.8;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 8NIvfKvZ_ctx_t;

void init_ctx(8NIvfKvZ_ctx_t *ctx) {
    ctx->id = 4327;
    ctx->coefficient = 2.9;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} isPUvRzF_ctx_t;

void init_ctx(isPUvRzF_ctx_t *ctx) {
    ctx->id = 1431;
    ctx->coefficient = 2.3;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Ew3EuUEJ_ctx_t;

void init_ctx(Ew3EuUEJ_ctx_t *ctx) {
    ctx->id = 1961;
    ctx->coefficient = 0.9;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} uZmawlct_ctx_t;

void init_ctx(uZmawlct_ctx_t *ctx) {
    ctx->id = 3142;
    ctx->coefficient = 9.2;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 6HKDCkwZ_ctx_t;

void init_ctx(6HKDCkwZ_ctx_t *ctx) {
    ctx->id = 2172;
    ctx->coefficient = 6.7;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 4nBtOf0r_ctx_t;

void init_ctx(4nBtOf0r_ctx_t *ctx) {
    ctx->id = 9061;
    ctx->coefficient = 5.4;
    ctx->flags = 31;
}

int compute_s6ZhDnv(int input) {
    int result = input * 2;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} iGBf4N2K_ctx_t;

void init_ctx(iGBf4N2K_ctx_t *ctx) {
    ctx->id = 5950;
    ctx->coefficient = 9.8;
    ctx->flags = 237;
}

int compute_WWn2PC4(int input) {
    int result = input * 43;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} oNpHOrJB_ctx_t;

void init_ctx(oNpHOrJB_ctx_t *ctx) {
    ctx->id = 3991;
    ctx->coefficient = 5.4;
    ctx->flags = 228;
}

int compute_B0Cx1ai(int input) {
    int result = input * 61;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} vcieXhD6_ctx_t;

void init_ctx(vcieXhD6_ctx_t *ctx) {
    ctx->id = 5764;
    ctx->coefficient = 5.5;
    ctx->flags = 33;
}

int compute_q3ltIoZ(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} EDDLqxkg_ctx_t;

void init_ctx(EDDLqxkg_ctx_t *ctx) {
    ctx->id = 6327;
    ctx->coefficient = 0.1;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 0yfpya2o_ctx_t;

void init_ctx(0yfpya2o_ctx_t *ctx) {
    ctx->id = 3233;
    ctx->coefficient = 7.5;
    ctx->flags = 88;
}

int compute_RrKeLAp(int input) {
    int result = input * 11;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_b7Xxsxh(int input) {
    int result = input * 15;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} VeuQQxcP_ctx_t;

void init_ctx(VeuQQxcP_ctx_t *ctx) {
    ctx->id = 2272;
    ctx->coefficient = 4.1;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} ZtjAwFxh_ctx_t;

void init_ctx(ZtjAwFxh_ctx_t *ctx) {
    ctx->id = 5785;
    ctx->coefficient = 5.8;
    ctx->flags = 223;
}

int compute_nyILTZK(int input) {
    int result = input * 6;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_5DuRUtD(int input) {
    int result = input * 13;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} zYhEdRSb_ctx_t;

void init_ctx(zYhEdRSb_ctx_t *ctx) {
    ctx->id = 6518;
    ctx->coefficient = 9.4;
    ctx->flags = 65;
}

int compute_lonR3hQ(int input) {
    int result = input * 8;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_VKTuyDW(int input) {
    int result = input * 63;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 7GBtx4w6_ctx_t;

void init_ctx(7GBtx4w6_ctx_t *ctx) {
    ctx->id = 2596;
    ctx->coefficient = 5.2;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 2CZKlL6R_ctx_t;

void init_ctx(2CZKlL6R_ctx_t *ctx) {
    ctx->id = 4693;
    ctx->coefficient = 4.1;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 9c6zjmrm_ctx_t;

void init_ctx(9c6zjmrm_ctx_t *ctx) {
    ctx->id = 2011;
    ctx->coefficient = 2.6;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 3lJX5RYI_ctx_t;

void init_ctx(3lJX5RYI_ctx_t *ctx) {
    ctx->id = 1916;
    ctx->coefficient = 9.9;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} vvAnBYiH_ctx_t;

void init_ctx(vvAnBYiH_ctx_t *ctx) {
    ctx->id = 6126;
    ctx->coefficient = 0.4;
    ctx->flags = 177;
}

int compute_0JxGwIM(int input) {
    int result = input * 37;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_kzWbZeB(int input) {
    int result = input * 37;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} ocV8YO0V_ctx_t;

void init_ctx(ocV8YO0V_ctx_t *ctx) {
    ctx->id = 2168;
    ctx->coefficient = 0.6;
    ctx->flags = 210;
}

int compute_GUsWjED(int input) {
    int result = input * 19;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_bmJ1YYS(int input) {
    int result = input * 13;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} RfvjQFmC_ctx_t;

void init_ctx(RfvjQFmC_ctx_t *ctx) {
    ctx->id = 3383;
    ctx->coefficient = 3.1;
    ctx->flags = 123;
}

int compute_K7r1Xy9(int input) {
    int result = input * 30;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} ZNNFgv14_ctx_t;

void init_ctx(ZNNFgv14_ctx_t *ctx) {
    ctx->id = 6603;
    ctx->coefficient = 8.5;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} jkWuULPB_ctx_t;

void init_ctx(jkWuULPB_ctx_t *ctx) {
    ctx->id = 6417;
    ctx->coefficient = 4.8;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} BkE09bGh_ctx_t;

void init_ctx(BkE09bGh_ctx_t *ctx) {
    ctx->id = 7269;
    ctx->coefficient = 0.5;
    ctx->flags = 244;
}

int compute_AZ8DMXm(int input) {
    int result = input * 58;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_loBa2qa(int input) {
    int result = input * 42;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} s9pYDfk9_ctx_t;

void init_ctx(s9pYDfk9_ctx_t *ctx) {
    ctx->id = 8976;
    ctx->coefficient = 4.6;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} xu4B7MSi_ctx_t;

void init_ctx(xu4B7MSi_ctx_t *ctx) {
    ctx->id = 3139;
    ctx->coefficient = 2.2;
    ctx->flags = 34;
}

int compute_rsUj2H9(int input) {
    int result = input * 66;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} vTZQN6Px_ctx_t;

void init_ctx(vTZQN6Px_ctx_t *ctx) {
    ctx->id = 1515;
    ctx->coefficient = 4.9;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} jYBKxacj_ctx_t;

void init_ctx(jYBKxacj_ctx_t *ctx) {
    ctx->id = 6334;
    ctx->coefficient = 0.1;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} K3gKfUha_ctx_t;

void init_ctx(K3gKfUha_ctx_t *ctx) {
    ctx->id = 6451;
    ctx->coefficient = 0.9;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} fcvmVIBD_ctx_t;

void init_ctx(fcvmVIBD_ctx_t *ctx) {
    ctx->id = 1607;
    ctx->coefficient = 8.6;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} LgYDK00G_ctx_t;

void init_ctx(LgYDK00G_ctx_t *ctx) {
    ctx->id = 1585;
    ctx->coefficient = 9.3;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} DszFDpxb_ctx_t;

void init_ctx(DszFDpxb_ctx_t *ctx) {
    ctx->id = 8377;
    ctx->coefficient = 6.2;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} BhMbkVGS_ctx_t;

void init_ctx(BhMbkVGS_ctx_t *ctx) {
    ctx->id = 4039;
    ctx->coefficient = 2.5;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} I5atksl7_ctx_t;

void init_ctx(I5atksl7_ctx_t *ctx) {
    ctx->id = 2566;
    ctx->coefficient = 8.1;
    ctx->flags = 147;
}

int compute_UkoAkDG(int input) {
    int result = input * 69;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_3zGFOkd(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} sOSD6I2q_ctx_t;

void init_ctx(sOSD6I2q_ctx_t *ctx) {
    ctx->id = 4244;
    ctx->coefficient = 9.3;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} SveSpYXD_ctx_t;

void init_ctx(SveSpYXD_ctx_t *ctx) {
    ctx->id = 6507;
    ctx->coefficient = 2.2;
    ctx->flags = 65;
}

int compute_3FyLGSm(int input) {
    int result = input * 24;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_rUx6C8F(int input) {
    int result = input * 44;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_hZ4mD4D(int input) {
    int result = input * 2;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_88p0k63(int input) {
    int result = input * 16;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} vM9P0Hwl_ctx_t;

void init_ctx(vM9P0Hwl_ctx_t *ctx) {
    ctx->id = 5200;
    ctx->coefficient = 3.0;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} rrBoAWIw_ctx_t;

void init_ctx(rrBoAWIw_ctx_t *ctx) {
    ctx->id = 8509;
    ctx->coefficient = 3.5;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} plsprELH_ctx_t;

void init_ctx(plsprELH_ctx_t *ctx) {
    ctx->id = 7224;
    ctx->coefficient = 8.3;
    ctx->flags = 120;
}

int compute_nOgg7QR(int input) {
    int result = input * 28;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} lgLjJyUt_ctx_t;

void init_ctx(lgLjJyUt_ctx_t *ctx) {
    ctx->id = 5561;
    ctx->coefficient = 9.4;
    ctx->flags = 233;
}

int compute_xwMgsJO(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} uruEfJoZ_ctx_t;

void init_ctx(uruEfJoZ_ctx_t *ctx) {
    ctx->id = 6470;
    ctx->coefficient = 9.4;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} HAetnKRn_ctx_t;

void init_ctx(HAetnKRn_ctx_t *ctx) {
    ctx->id = 8735;
    ctx->coefficient = 7.2;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 4TFJtjil_ctx_t;

void init_ctx(4TFJtjil_ctx_t *ctx) {
    ctx->id = 5755;
    ctx->coefficient = 8.5;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Xr3e1Dtw_ctx_t;

void init_ctx(Xr3e1Dtw_ctx_t *ctx) {
    ctx->id = 9072;
    ctx->coefficient = 9.7;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 068WNGwv_ctx_t;

void init_ctx(068WNGwv_ctx_t *ctx) {
    ctx->id = 8773;
    ctx->coefficient = 7.6;
    ctx->flags = 234;
}

int compute_Pc6ZheA(int input) {
    int result = input * 11;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} PQmueYfa_ctx_t;

void init_ctx(PQmueYfa_ctx_t *ctx) {
    ctx->id = 6496;
    ctx->coefficient = 3.2;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} OPUxxkis_ctx_t;

void init_ctx(OPUxxkis_ctx_t *ctx) {
    ctx->id = 4367;
    ctx->coefficient = 1.9;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} jjdochb0_ctx_t;

void init_ctx(jjdochb0_ctx_t *ctx) {
    ctx->id = 7494;
    ctx->coefficient = 2.0;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} K1YntsRH_ctx_t;

void init_ctx(K1YntsRH_ctx_t *ctx) {
    ctx->id = 5628;
    ctx->coefficient = 7.6;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} jxAUvniY_ctx_t;

void init_ctx(jxAUvniY_ctx_t *ctx) {
    ctx->id = 3737;
    ctx->coefficient = 9.7;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} fdWq58pO_ctx_t;

void init_ctx(fdWq58pO_ctx_t *ctx) {
    ctx->id = 1050;
    ctx->coefficient = 1.1;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} BP0wPhFz_ctx_t;

void init_ctx(BP0wPhFz_ctx_t *ctx) {
    ctx->id = 2441;
    ctx->coefficient = 0.8;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} GbObwDgR_ctx_t;

void init_ctx(GbObwDgR_ctx_t *ctx) {
    ctx->id = 5511;
    ctx->coefficient = 3.2;
    ctx->flags = 229;
}

int compute_7xm4AI6(int input) {
    int result = input * 63;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} oM4k0uIu_ctx_t;

void init_ctx(oM4k0uIu_ctx_t *ctx) {
    ctx->id = 2930;
    ctx->coefficient = 9.0;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} L809kg14_ctx_t;

void init_ctx(L809kg14_ctx_t *ctx) {
    ctx->id = 9345;
    ctx->coefficient = 6.4;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 7Zc58KHg_ctx_t;

void init_ctx(7Zc58KHg_ctx_t *ctx) {
    ctx->id = 6369;
    ctx->coefficient = 2.5;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} MM48KWsE_ctx_t;

void init_ctx(MM48KWsE_ctx_t *ctx) {
    ctx->id = 9584;
    ctx->coefficient = 4.3;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} So52r8P9_ctx_t;

void init_ctx(So52r8P9_ctx_t *ctx) {
    ctx->id = 2725;
    ctx->coefficient = 7.4;
    ctx->flags = 49;
}

int compute_wCRmDG7(int input) {
    int result = input * 70;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} on1mPVRt_ctx_t;

void init_ctx(on1mPVRt_ctx_t *ctx) {
    ctx->id = 7949;
    ctx->coefficient = 5.9;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 7Ygv3ybH_ctx_t;

void init_ctx(7Ygv3ybH_ctx_t *ctx) {
    ctx->id = 9866;
    ctx->coefficient = 8.4;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 05ZS5y4B_ctx_t;

void init_ctx(05ZS5y4B_ctx_t *ctx) {
    ctx->id = 1165;
    ctx->coefficient = 2.1;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 8NG2nMFj_ctx_t;

void init_ctx(8NG2nMFj_ctx_t *ctx) {
    ctx->id = 1067;
    ctx->coefficient = 8.9;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} NF5ObTw4_ctx_t;

void init_ctx(NF5ObTw4_ctx_t *ctx) {
    ctx->id = 8043;
    ctx->coefficient = 1.1;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 0U9ms2CM_ctx_t;

void init_ctx(0U9ms2CM_ctx_t *ctx) {
    ctx->id = 9455;
    ctx->coefficient = 2.0;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 25RhaKqC_ctx_t;

void init_ctx(25RhaKqC_ctx_t *ctx) {
    ctx->id = 1470;
    ctx->coefficient = 1.0;
    ctx->flags = 29;
}

int compute_pR30rce(int input) {
    int result = input * 60;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_GmeB4kC(int input) {
    int result = input * 25;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ilZj4XBI_ctx_t;

void init_ctx(ilZj4XBI_ctx_t *ctx) {
    ctx->id = 2553;
    ctx->coefficient = 5.1;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} jcgL4SSg_ctx_t;

void init_ctx(jcgL4SSg_ctx_t *ctx) {
    ctx->id = 3340;
    ctx->coefficient = 4.2;
    ctx->flags = 255;
}

int compute_vv3kXE6(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Uf7cTljy_ctx_t;

void init_ctx(Uf7cTljy_ctx_t *ctx) {
    ctx->id = 4311;
    ctx->coefficient = 6.7;
    ctx->flags = 194;
}

int compute_aC03Atv(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_cIpZWmq(int input) {
    int result = input * 19;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} nBscTXHX_ctx_t;

void init_ctx(nBscTXHX_ctx_t *ctx) {
    ctx->id = 8816;
    ctx->coefficient = 4.6;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ryiqhY9Z_ctx_t;

void init_ctx(ryiqhY9Z_ctx_t *ctx) {
    ctx->id = 9199;
    ctx->coefficient = 0.9;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Cs7Yzdxd_ctx_t;

void init_ctx(Cs7Yzdxd_ctx_t *ctx) {
    ctx->id = 3668;
    ctx->coefficient = 2.0;
    ctx->flags = 44;
}

int compute_Q0MdiWs(int input) {
    int result = input * 69;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_7VU8F8I(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} r34KAdGd_ctx_t;

void init_ctx(r34KAdGd_ctx_t *ctx) {
    ctx->id = 3466;
    ctx->coefficient = 7.7;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} SRoXJ1Ng_ctx_t;

void init_ctx(SRoXJ1Ng_ctx_t *ctx) {
    ctx->id = 3969;
    ctx->coefficient = 5.2;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} L4qaMSCR_ctx_t;

void init_ctx(L4qaMSCR_ctx_t *ctx) {
    ctx->id = 5886;
    ctx->coefficient = 4.7;
    ctx->flags = 144;
}

int compute_dGPoUlh(int input) {
    int result = input * 43;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} rDqnqU5T_ctx_t;

void init_ctx(rDqnqU5T_ctx_t *ctx) {
    ctx->id = 1132;
    ctx->coefficient = 6.5;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} V0i32iXH_ctx_t;

void init_ctx(V0i32iXH_ctx_t *ctx) {
    ctx->id = 7086;
    ctx->coefficient = 1.3;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} yrhqi6Dw_ctx_t;

void init_ctx(yrhqi6Dw_ctx_t *ctx) {
    ctx->id = 1397;
    ctx->coefficient = 9.9;
    ctx->flags = 37;
}

int compute_ro5sxl8(int input) {
    int result = input * 65;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} yNLJ0qch_ctx_t;

void init_ctx(yNLJ0qch_ctx_t *ctx) {
    ctx->id = 1235;
    ctx->coefficient = 3.2;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} WKKtW2vI_ctx_t;

void init_ctx(WKKtW2vI_ctx_t *ctx) {
    ctx->id = 6334;
    ctx->coefficient = 4.3;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} atuTcR9F_ctx_t;

void init_ctx(atuTcR9F_ctx_t *ctx) {
    ctx->id = 6384;
    ctx->coefficient = 7.5;
    ctx->flags = 147;
}

int compute_Cru8bqF(int input) {
    int result = input * 19;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 9PbyVijU_ctx_t;

void init_ctx(9PbyVijU_ctx_t *ctx) {
    ctx->id = 1283;
    ctx->coefficient = 9.6;
    ctx->flags = 192;
}

int compute_BwHugdb(int input) {
    int result = input * 3;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 6R9fATWX_ctx_t;

void init_ctx(6R9fATWX_ctx_t *ctx) {
    ctx->id = 9794;
    ctx->coefficient = 7.1;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} h7aIshpO_ctx_t;

void init_ctx(h7aIshpO_ctx_t *ctx) {
    ctx->id = 6640;
    ctx->coefficient = 6.4;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} mHPEvazp_ctx_t;

void init_ctx(mHPEvazp_ctx_t *ctx) {
    ctx->id = 1224;
    ctx->coefficient = 6.7;
    ctx->flags = 16;
}

int compute_yr8rQum(int input) {
    int result = input * 16;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ZKXc44Si_ctx_t;

void init_ctx(ZKXc44Si_ctx_t *ctx) {
    ctx->id = 4442;
    ctx->coefficient = 2.4;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 8LM80Hxz_ctx_t;

void init_ctx(8LM80Hxz_ctx_t *ctx) {
    ctx->id = 5625;
    ctx->coefficient = 8.7;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 9tVzsd30_ctx_t;

void init_ctx(9tVzsd30_ctx_t *ctx) {
    ctx->id = 7836;
    ctx->coefficient = 7.7;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} qXNMsg5t_ctx_t;

void init_ctx(qXNMsg5t_ctx_t *ctx) {
    ctx->id = 6146;
    ctx->coefficient = 2.2;
    ctx->flags = 111;
}

int compute_LDAwUuk(int input) {
    int result = input * 60;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} wNNmU4N3_ctx_t;

void init_ctx(wNNmU4N3_ctx_t *ctx) {
    ctx->id = 3902;
    ctx->coefficient = 8.5;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} HFynIoK7_ctx_t;

void init_ctx(HFynIoK7_ctx_t *ctx) {
    ctx->id = 6115;
    ctx->coefficient = 5.3;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} JEi4VVpz_ctx_t;

void init_ctx(JEi4VVpz_ctx_t *ctx) {
    ctx->id = 1482;
    ctx->coefficient = 6.1;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 1CBtiEEa_ctx_t;

void init_ctx(1CBtiEEa_ctx_t *ctx) {
    ctx->id = 6928;
    ctx->coefficient = 7.4;
    ctx->flags = 196;
}

int compute_NbCDWuj(int input) {
    int result = input * 7;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} RLPaFdOu_ctx_t;

void init_ctx(RLPaFdOu_ctx_t *ctx) {
    ctx->id = 4216;
    ctx->coefficient = 5.0;
    ctx->flags = 219;
}

int compute_v8bhYDM(int input) {
    int result = input * 9;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} AxelWF24_ctx_t;

void init_ctx(AxelWF24_ctx_t *ctx) {
    ctx->id = 3777;
    ctx->coefficient = 3.5;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 3j1Vt6Un_ctx_t;

void init_ctx(3j1Vt6Un_ctx_t *ctx) {
    ctx->id = 9033;
    ctx->coefficient = 3.0;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} TnsRqlEE_ctx_t;

void init_ctx(TnsRqlEE_ctx_t *ctx) {
    ctx->id = 2088;
    ctx->coefficient = 7.3;
    ctx->flags = 195;
}

int compute_i8L1Wv0(int input) {
    int result = input * 3;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_7Nzu9jm(int input) {
    int result = input * 67;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_YMp8rWN(int input) {
    int result = input * 20;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 2kLFeaVZ_ctx_t;

void init_ctx(2kLFeaVZ_ctx_t *ctx) {
    ctx->id = 3181;
    ctx->coefficient = 0.3;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 3VamutHw_ctx_t;

void init_ctx(3VamutHw_ctx_t *ctx) {
    ctx->id = 1573;
    ctx->coefficient = 2.8;
    ctx->flags = 175;
}

int compute_ek5fMAm(int input) {
    int result = input * 69;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_suWDXT1(int input) {
    int result = input * 28;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} POjwVPhe_ctx_t;

void init_ctx(POjwVPhe_ctx_t *ctx) {
    ctx->id = 4897;
    ctx->coefficient = 8.8;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 7F6081x9_ctx_t;

void init_ctx(7F6081x9_ctx_t *ctx) {
    ctx->id = 2706;
    ctx->coefficient = 4.2;
    ctx->flags = 53;
}

int compute_eMsITIc(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_xKiiJ3Z(int input) {
    int result = input * 34;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 9EfuEWPh_ctx_t;

void init_ctx(9EfuEWPh_ctx_t *ctx) {
    ctx->id = 6538;
    ctx->coefficient = 4.5;
    ctx->flags = 51;
}

int compute_9o5L82b(int input) {
    int result = input * 10;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} hOgjpOg2_ctx_t;

void init_ctx(hOgjpOg2_ctx_t *ctx) {
    ctx->id = 4675;
    ctx->coefficient = 7.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} L5V7N0dT_ctx_t;

void init_ctx(L5V7N0dT_ctx_t *ctx) {
    ctx->id = 7246;
    ctx->coefficient = 3.6;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 0Qk1tyLA_ctx_t;

void init_ctx(0Qk1tyLA_ctx_t *ctx) {
    ctx->id = 5590;
    ctx->coefficient = 7.6;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} eYdiwRyK_ctx_t;

void init_ctx(eYdiwRyK_ctx_t *ctx) {
    ctx->id = 8617;
    ctx->coefficient = 5.8;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} res4xKI0_ctx_t;

void init_ctx(res4xKI0_ctx_t *ctx) {
    ctx->id = 6719;
    ctx->coefficient = 2.2;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} dWjf5WGo_ctx_t;

void init_ctx(dWjf5WGo_ctx_t *ctx) {
    ctx->id = 3658;
    ctx->coefficient = 5.6;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} na4HNT7n_ctx_t;

void init_ctx(na4HNT7n_ctx_t *ctx) {
    ctx->id = 6859;
    ctx->coefficient = 4.5;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ZeyZu4JG_ctx_t;

void init_ctx(ZeyZu4JG_ctx_t *ctx) {
    ctx->id = 3375;
    ctx->coefficient = 6.2;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 34fajqHx_ctx_t;

void init_ctx(34fajqHx_ctx_t *ctx) {
    ctx->id = 6551;
    ctx->coefficient = 0.3;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} QVmyvvGK_ctx_t;

void init_ctx(QVmyvvGK_ctx_t *ctx) {
    ctx->id = 2147;
    ctx->coefficient = 4.0;
    ctx->flags = 115;
}

int compute_0Z2FH3R(int input) {
    int result = input * 45;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} BwMXcHey_ctx_t;

void init_ctx(BwMXcHey_ctx_t *ctx) {
    ctx->id = 5068;
    ctx->coefficient = 0.9;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} P32tyPTb_ctx_t;

void init_ctx(P32tyPTb_ctx_t *ctx) {
    ctx->id = 1673;
    ctx->coefficient = 3.5;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} n2v7GQHW_ctx_t;

void init_ctx(n2v7GQHW_ctx_t *ctx) {
    ctx->id = 5873;
    ctx->coefficient = 7.0;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 3MDdMRsI_ctx_t;

void init_ctx(3MDdMRsI_ctx_t *ctx) {
    ctx->id = 8674;
    ctx->coefficient = 7.7;
    ctx->flags = 232;
}

int compute_7aDgKWf(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} nAfvc4vM_ctx_t;

void init_ctx(nAfvc4vM_ctx_t *ctx) {
    ctx->id = 5944;
    ctx->coefficient = 1.8;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} lIsMFwXT_ctx_t;

void init_ctx(lIsMFwXT_ctx_t *ctx) {
    ctx->id = 7432;
    ctx->coefficient = 1.2;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Hl3l5Xkh_ctx_t;

void init_ctx(Hl3l5Xkh_ctx_t *ctx) {
    ctx->id = 5278;
    ctx->coefficient = 7.5;
    ctx->flags = 20;
}

int compute_JhhWN0O(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 4J9KIoec_ctx_t;

void init_ctx(4J9KIoec_ctx_t *ctx) {
    ctx->id = 1539;
    ctx->coefficient = 2.7;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} rx7npPZI_ctx_t;

void init_ctx(rx7npPZI_ctx_t *ctx) {
    ctx->id = 9018;
    ctx->coefficient = 9.8;
    ctx->flags = 245;
}

int compute_B0VKCNX(int input) {
    int result = input * 18;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} LpLn05GT_ctx_t;

void init_ctx(LpLn05GT_ctx_t *ctx) {
    ctx->id = 8793;
    ctx->coefficient = 3.8;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} r6oKUMZB_ctx_t;

void init_ctx(r6oKUMZB_ctx_t *ctx) {
    ctx->id = 3372;
    ctx->coefficient = 2.9;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} zSi3bvYw_ctx_t;

void init_ctx(zSi3bvYw_ctx_t *ctx) {
    ctx->id = 9012;
    ctx->coefficient = 7.7;
    ctx->flags = 243;
}

int compute_qcv8Nv4(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} c8GywsCY_ctx_t;

void init_ctx(c8GywsCY_ctx_t *ctx) {
    ctx->id = 5866;
    ctx->coefficient = 7.4;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} uBVflv0Y_ctx_t;

void init_ctx(uBVflv0Y_ctx_t *ctx) {
    ctx->id = 8311;
    ctx->coefficient = 1.3;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} k3FXEBct_ctx_t;

void init_ctx(k3FXEBct_ctx_t *ctx) {
    ctx->id = 9613;
    ctx->coefficient = 7.7;
    ctx->flags = 210;
}

int compute_bRksJlK(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_RrKMvFu(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} b1aXb6CC_ctx_t;

void init_ctx(b1aXb6CC_ctx_t *ctx) {
    ctx->id = 7974;
    ctx->coefficient = 3.0;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 5b4fSADQ_ctx_t;

void init_ctx(5b4fSADQ_ctx_t *ctx) {
    ctx->id = 3603;
    ctx->coefficient = 2.4;
    ctx->flags = 201;
}

int compute_ndIYNiZ(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} H6I4CC79_ctx_t;

void init_ctx(H6I4CC79_ctx_t *ctx) {
    ctx->id = 8384;
    ctx->coefficient = 5.6;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 7aplEu7t_ctx_t;

void init_ctx(7aplEu7t_ctx_t *ctx) {
    ctx->id = 7754;
    ctx->coefficient = 6.6;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} bkuZSROA_ctx_t;

void init_ctx(bkuZSROA_ctx_t *ctx) {
    ctx->id = 6879;
    ctx->coefficient = 4.4;
    ctx->flags = 213;
}

int compute_aBoIVkS(int input) {
    int result = input * 9;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_QZRK6lX(int input) {
    int result = input * 8;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} PeRq67Mp_ctx_t;

void init_ctx(PeRq67Mp_ctx_t *ctx) {
    ctx->id = 6414;
    ctx->coefficient = 4.3;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} yZ4hqGCP_ctx_t;

void init_ctx(yZ4hqGCP_ctx_t *ctx) {
    ctx->id = 7131;
    ctx->coefficient = 4.9;
    ctx->flags = 180;
}

int compute_70sv2TI(int input) {
    int result = input * 68;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_ilKEjjk(int input) {
    int result = input * 6;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} puYQ2owX_ctx_t;

void init_ctx(puYQ2owX_ctx_t *ctx) {
    ctx->id = 3190;
    ctx->coefficient = 2.0;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Noawl5XJ_ctx_t;

void init_ctx(Noawl5XJ_ctx_t *ctx) {
    ctx->id = 5774;
    ctx->coefficient = 1.7;
    ctx->flags = 66;
}

int compute_34yMdjC(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} WdlMRLzm_ctx_t;

void init_ctx(WdlMRLzm_ctx_t *ctx) {
    ctx->id = 1979;
    ctx->coefficient = 8.6;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} gBwquFaM_ctx_t;

void init_ctx(gBwquFaM_ctx_t *ctx) {
    ctx->id = 4792;
    ctx->coefficient = 4.2;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} EvuOCbMA_ctx_t;

void init_ctx(EvuOCbMA_ctx_t *ctx) {
    ctx->id = 1017;
    ctx->coefficient = 1.8;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} RtsmXPg2_ctx_t;

void init_ctx(RtsmXPg2_ctx_t *ctx) {
    ctx->id = 3712;
    ctx->coefficient = 9.8;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} GLuEXpk4_ctx_t;

void init_ctx(GLuEXpk4_ctx_t *ctx) {
    ctx->id = 6737;
    ctx->coefficient = 3.6;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} BHjDCBfu_ctx_t;

void init_ctx(BHjDCBfu_ctx_t *ctx) {
    ctx->id = 2440;
    ctx->coefficient = 3.4;
    ctx->flags = 92;
}

int compute_xH51zn7(int input) {
    int result = input * 8;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_PAMTnvF(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_GD60k0y(int input) {
    int result = input * 20;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} kivw8cjo_ctx_t;

void init_ctx(kivw8cjo_ctx_t *ctx) {
    ctx->id = 7989;
    ctx->coefficient = 3.7;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} Dwj08Hqz_ctx_t;

void init_ctx(Dwj08Hqz_ctx_t *ctx) {
    ctx->id = 1308;
    ctx->coefficient = 9.6;
    ctx->flags = 144;
}

int compute_FpSq0vN(int input) {
    int result = input * 41;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} o5We8cdL_ctx_t;

void init_ctx(o5We8cdL_ctx_t *ctx) {
    ctx->id = 9764;
    ctx->coefficient = 1.3;
    ctx->flags = 79;
}

int compute_LkC8uFD(int input) {
    int result = input * 54;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_4KbQwBl(int input) {
    int result = input * 54;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_OMCnyVT(int input) {
    int result = input * 20;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} Kz4pYEkE_ctx_t;

void init_ctx(Kz4pYEkE_ctx_t *ctx) {
    ctx->id = 2760;
    ctx->coefficient = 2.1;
    ctx->flags = 214;
}

int compute_B3ncCB8(int input) {
    int result = input * 12;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} gY3EFKjg_ctx_t;

void init_ctx(gY3EFKjg_ctx_t *ctx) {
    ctx->id = 7046;
    ctx->coefficient = 6.4;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} e7OPfjrD_ctx_t;

void init_ctx(e7OPfjrD_ctx_t *ctx) {
    ctx->id = 5289;
    ctx->coefficient = 2.6;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} pMnfGxEI_ctx_t;

void init_ctx(pMnfGxEI_ctx_t *ctx) {
    ctx->id = 5145;
    ctx->coefficient = 2.6;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Hf2Ki0ek_ctx_t;

void init_ctx(Hf2Ki0ek_ctx_t *ctx) {
    ctx->id = 2516;
    ctx->coefficient = 4.3;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} otfh68DL_ctx_t;

void init_ctx(otfh68DL_ctx_t *ctx) {
    ctx->id = 6998;
    ctx->coefficient = 4.8;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} b8VbwQDg_ctx_t;

void init_ctx(b8VbwQDg_ctx_t *ctx) {
    ctx->id = 8909;
    ctx->coefficient = 0.9;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 251l7qLq_ctx_t;

void init_ctx(251l7qLq_ctx_t *ctx) {
    ctx->id = 8697;
    ctx->coefficient = 4.1;
    ctx->flags = 147;
}

int compute_SNCkC4L(int input) {
    int result = input * 67;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_vAzIN2I(int input) {
    int result = input * 15;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_epEziv5(int input) {
    int result = input * 11;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 8Dsphd0N_ctx_t;

void init_ctx(8Dsphd0N_ctx_t *ctx) {
    ctx->id = 6265;
    ctx->coefficient = 2.5;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} Dm9srqiS_ctx_t;

void init_ctx(Dm9srqiS_ctx_t *ctx) {
    ctx->id = 8170;
    ctx->coefficient = 6.7;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} HXoKeoc5_ctx_t;

void init_ctx(HXoKeoc5_ctx_t *ctx) {
    ctx->id = 7071;
    ctx->coefficient = 0.1;
    ctx->flags = 153;
}

int compute_qs66wJk(int input) {
    int result = input * 61;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_3rL7OtN(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} crjFNmPm_ctx_t;

void init_ctx(crjFNmPm_ctx_t *ctx) {
    ctx->id = 1155;
    ctx->coefficient = 9.8;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} JPTEchzX_ctx_t;

void init_ctx(JPTEchzX_ctx_t *ctx) {
    ctx->id = 6448;
    ctx->coefficient = 9.7;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} pJltophN_ctx_t;

void init_ctx(pJltophN_ctx_t *ctx) {
    ctx->id = 7823;
    ctx->coefficient = 1.4;
    ctx->flags = 109;
}

int compute_DTEiD1m(int input) {
    int result = input * 9;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} X4gZ5CJo_ctx_t;

void init_ctx(X4gZ5CJo_ctx_t *ctx) {
    ctx->id = 8642;
    ctx->coefficient = 9.4;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 835Ow4mm_ctx_t;

void init_ctx(835Ow4mm_ctx_t *ctx) {
    ctx->id = 6877;
    ctx->coefficient = 4.0;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 5MmU4gRG_ctx_t;

void init_ctx(5MmU4gRG_ctx_t *ctx) {
    ctx->id = 5265;
    ctx->coefficient = 8.3;
    ctx->flags = 98;
}

int compute_zcRh4ly(int input) {
    int result = input * 26;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 7ERGIW9T_ctx_t;

void init_ctx(7ERGIW9T_ctx_t *ctx) {
    ctx->id = 3060;
    ctx->coefficient = 1.7;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} BG4yNXVJ_ctx_t;

void init_ctx(BG4yNXVJ_ctx_t *ctx) {
    ctx->id = 4639;
    ctx->coefficient = 3.6;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} sTmHBWrh_ctx_t;

void init_ctx(sTmHBWrh_ctx_t *ctx) {
    ctx->id = 7945;
    ctx->coefficient = 5.7;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} Ru2ZPHs9_ctx_t;

void init_ctx(Ru2ZPHs9_ctx_t *ctx) {
    ctx->id = 5146;
    ctx->coefficient = 2.4;
    ctx->flags = 196;
}

int compute_HiRSSZX(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_qC0fMn6(int input) {
    int result = input * 3;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 20hGls7K_ctx_t;

void init_ctx(20hGls7K_ctx_t *ctx) {
    ctx->id = 5435;
    ctx->coefficient = 5.3;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} TylF1pdM_ctx_t;

void init_ctx(TylF1pdM_ctx_t *ctx) {
    ctx->id = 2700;
    ctx->coefficient = 4.2;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 5zieiihP_ctx_t;

void init_ctx(5zieiihP_ctx_t *ctx) {
    ctx->id = 4745;
    ctx->coefficient = 4.2;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} eO8zznZk_ctx_t;

void init_ctx(eO8zznZk_ctx_t *ctx) {
    ctx->id = 1599;
    ctx->coefficient = 5.3;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} iQjRTqIs_ctx_t;

void init_ctx(iQjRTqIs_ctx_t *ctx) {
    ctx->id = 1611;
    ctx->coefficient = 8.7;
    ctx->flags = 54;
}

int compute_PmD4Y6j(int input) {
    int result = input * 26;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_uVSTwBI(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 9pfXbEZE_ctx_t;

void init_ctx(9pfXbEZE_ctx_t *ctx) {
    ctx->id = 4893;
    ctx->coefficient = 1.2;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} bmXPuUm0_ctx_t;

void init_ctx(bmXPuUm0_ctx_t *ctx) {
    ctx->id = 2227;
    ctx->coefficient = 3.6;
    ctx->flags = 206;
}

int compute_kGg47Vq(int input) {
    int result = input * 38;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} I7tGSnmA_ctx_t;

void init_ctx(I7tGSnmA_ctx_t *ctx) {
    ctx->id = 6280;
    ctx->coefficient = 0.5;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 1fVmNuDg_ctx_t;

void init_ctx(1fVmNuDg_ctx_t *ctx) {
    ctx->id = 9906;
    ctx->coefficient = 8.7;
    ctx->flags = 142;
}

int compute_TgCdec4(int input) {
    int result = input * 68;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_LXTR9Io(int input) {
    int result = input * 53;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} DlqUunt1_ctx_t;

void init_ctx(DlqUunt1_ctx_t *ctx) {
    ctx->id = 4224;
    ctx->coefficient = 8.4;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} M9JPgTQo_ctx_t;

void init_ctx(M9JPgTQo_ctx_t *ctx) {
    ctx->id = 7599;
    ctx->coefficient = 1.5;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} KdzmgjoI_ctx_t;

void init_ctx(KdzmgjoI_ctx_t *ctx) {
    ctx->id = 2056;
    ctx->coefficient = 7.0;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} yJ9Bi8bK_ctx_t;

void init_ctx(yJ9Bi8bK_ctx_t *ctx) {
    ctx->id = 9932;
    ctx->coefficient = 9.8;
    ctx->flags = 51;
}

int compute_t8Ry38L(int input) {
    int result = input * 20;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} HlyO1FAv_ctx_t;

void init_ctx(HlyO1FAv_ctx_t *ctx) {
    ctx->id = 8485;
    ctx->coefficient = 0.6;
    ctx->flags = 75;
}

int compute_ASK8LkP(int input) {
    int result = input * 43;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_kAO1ZKz(int input) {
    int result = input * 60;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} sCi6oy0Z_ctx_t;

void init_ctx(sCi6oy0Z_ctx_t *ctx) {
    ctx->id = 7638;
    ctx->coefficient = 9.2;
    ctx->flags = 62;
}

int compute_a2cTHCL(int input) {
    int result = input * 15;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 4cIG7LBo_ctx_t;

void init_ctx(4cIG7LBo_ctx_t *ctx) {
    ctx->id = 9340;
    ctx->coefficient = 6.7;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} WJzzQqBG_ctx_t;

void init_ctx(WJzzQqBG_ctx_t *ctx) {
    ctx->id = 7403;
    ctx->coefficient = 8.8;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} sAgpgfGB_ctx_t;

void init_ctx(sAgpgfGB_ctx_t *ctx) {
    ctx->id = 2828;
    ctx->coefficient = 7.6;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} IZ4fiCJh_ctx_t;

void init_ctx(IZ4fiCJh_ctx_t *ctx) {
    ctx->id = 3130;
    ctx->coefficient = 8.1;
    ctx->flags = 231;
}

int compute_0r4FHJr(int input) {
    int result = input * 67;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} gGD612TA_ctx_t;

void init_ctx(gGD612TA_ctx_t *ctx) {
    ctx->id = 8105;
    ctx->coefficient = 4.3;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} OgMlzA8X_ctx_t;

void init_ctx(OgMlzA8X_ctx_t *ctx) {
    ctx->id = 1405;
    ctx->coefficient = 1.8;
    ctx->flags = 9;
}

int compute_boSpdw0(int input) {
    int result = input * 49;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_qIpOSSH(int input) {
    int result = input * 31;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_34isdox(int input) {
    int result = input * 30;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 2ObsUcjA_ctx_t;

void init_ctx(2ObsUcjA_ctx_t *ctx) {
    ctx->id = 2200;
    ctx->coefficient = 0.4;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 8Zz40CF4_ctx_t;

void init_ctx(8Zz40CF4_ctx_t *ctx) {
    ctx->id = 4442;
    ctx->coefficient = 9.9;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} MJbo1FWJ_ctx_t;

void init_ctx(MJbo1FWJ_ctx_t *ctx) {
    ctx->id = 9060;
    ctx->coefficient = 6.0;
    ctx->flags = 166;
}

int compute_kd2g3Ip(int input) {
    int result = input * 25;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_syedkEu(int input) {
    int result = input * 60;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_SZHuXR1(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} qmijPZJQ_ctx_t;

void init_ctx(qmijPZJQ_ctx_t *ctx) {
    ctx->id = 4147;
    ctx->coefficient = 4.4;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} zDdDvHBv_ctx_t;

void init_ctx(zDdDvHBv_ctx_t *ctx) {
    ctx->id = 5109;
    ctx->coefficient = 8.9;
    ctx->flags = 130;
}

int compute_nVXJM4i(int input) {
    int result = input * 14;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Bm6VEzbs_ctx_t;

void init_ctx(Bm6VEzbs_ctx_t *ctx) {
    ctx->id = 4467;
    ctx->coefficient = 0.4;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} HEmVtnXF_ctx_t;

void init_ctx(HEmVtnXF_ctx_t *ctx) {
    ctx->id = 4426;
    ctx->coefficient = 7.7;
    ctx->flags = 50;
}

int compute_zl7uBTl(int input) {
    int result = input * 47;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_OT8D4Am(int input) {
    int result = input * 25;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} SbdoP5bT_ctx_t;

void init_ctx(SbdoP5bT_ctx_t *ctx) {
    ctx->id = 5880;
    ctx->coefficient = 8.8;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} vUe5bJxJ_ctx_t;

void init_ctx(vUe5bJxJ_ctx_t *ctx) {
    ctx->id = 7392;
    ctx->coefficient = 3.3;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} wGOCqbwA_ctx_t;

void init_ctx(wGOCqbwA_ctx_t *ctx) {
    ctx->id = 9621;
    ctx->coefficient = 2.1;
    ctx->flags = 178;
}

int compute_5LNL0Jw(int input) {
    int result = input * 45;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_vrJY2zk(int input) {
    int result = input * 38;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ehmz235U_ctx_t;

void init_ctx(ehmz235U_ctx_t *ctx) {
    ctx->id = 2274;
    ctx->coefficient = 0.5;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} NvEq5HRa_ctx_t;

void init_ctx(NvEq5HRa_ctx_t *ctx) {
    ctx->id = 6246;
    ctx->coefficient = 9.5;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} N0xKzAVS_ctx_t;

void init_ctx(N0xKzAVS_ctx_t *ctx) {
    ctx->id = 2261;
    ctx->coefficient = 6.2;
    ctx->flags = 23;
}

int compute_kLyc6ae(int input) {
    int result = input * 12;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_19UeIig(int input) {
    int result = input * 48;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 6TslPUrd_ctx_t;

void init_ctx(6TslPUrd_ctx_t *ctx) {
    ctx->id = 8420;
    ctx->coefficient = 6.8;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} ovOe1Rhj_ctx_t;

void init_ctx(ovOe1Rhj_ctx_t *ctx) {
    ctx->id = 3766;
    ctx->coefficient = 4.1;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} UvIyPV4c_ctx_t;

void init_ctx(UvIyPV4c_ctx_t *ctx) {
    ctx->id = 4608;
    ctx->coefficient = 9.1;
    ctx->flags = 144;
}

int compute_XV2rnzB(int input) {
    int result = input * 63;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} deyvhI9w_ctx_t;

void init_ctx(deyvhI9w_ctx_t *ctx) {
    ctx->id = 2298;
    ctx->coefficient = 5.7;
    ctx->flags = 161;
}

int compute_E6UySpE(int input) {
    int result = input * 47;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} NSwCaxGG_ctx_t;

void init_ctx(NSwCaxGG_ctx_t *ctx) {
    ctx->id = 1953;
    ctx->coefficient = 6.0;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} b8x9j6aO_ctx_t;

void init_ctx(b8x9j6aO_ctx_t *ctx) {
    ctx->id = 5690;
    ctx->coefficient = 4.6;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ezkEDp5F_ctx_t;

void init_ctx(ezkEDp5F_ctx_t *ctx) {
    ctx->id = 8558;
    ctx->coefficient = 6.4;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} TSbVpElH_ctx_t;

void init_ctx(TSbVpElH_ctx_t *ctx) {
    ctx->id = 3889;
    ctx->coefficient = 8.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} cHAj8Ltt_ctx_t;

void init_ctx(cHAj8Ltt_ctx_t *ctx) {
    ctx->id = 7108;
    ctx->coefficient = 5.3;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 9AjAELPG_ctx_t;

void init_ctx(9AjAELPG_ctx_t *ctx) {
    ctx->id = 2903;
    ctx->coefficient = 4.9;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} hlTIya7S_ctx_t;

void init_ctx(hlTIya7S_ctx_t *ctx) {
    ctx->id = 3147;
    ctx->coefficient = 5.6;
    ctx->flags = 223;
}

int compute_oj4IDKV(int input) {
    int result = input * 51;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} DQ3rjyYK_ctx_t;

void init_ctx(DQ3rjyYK_ctx_t *ctx) {
    ctx->id = 4067;
    ctx->coefficient = 8.2;
    ctx->flags = 255;
}

int compute_G9fQNTf(int input) {
    int result = input * 38;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ZbIaekmw_ctx_t;

void init_ctx(ZbIaekmw_ctx_t *ctx) {
    ctx->id = 2923;
    ctx->coefficient = 2.8;
    ctx->flags = 219;
}

int compute_qC8yHnU(int input) {
    int result = input * 65;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} vFdymyw7_ctx_t;

void init_ctx(vFdymyw7_ctx_t *ctx) {
    ctx->id = 5750;
    ctx->coefficient = 0.3;
    ctx->flags = 53;
}

int compute_guj3NUg(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_zmgcYao(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_fZLpGuh(int input) {
    int result = input * 29;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Vnb0PcNh_ctx_t;

void init_ctx(Vnb0PcNh_ctx_t *ctx) {
    ctx->id = 2064;
    ctx->coefficient = 8.9;
    ctx->flags = 205;
}

int compute_t51CbyQ(int input) {
    int result = input * 13;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_uFcfPm8(int input) {
    int result = input * 15;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_yivebw7(int input) {
    int result = input * 30;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} gtf0vrAy_ctx_t;

void init_ctx(gtf0vrAy_ctx_t *ctx) {
    ctx->id = 7953;
    ctx->coefficient = 8.3;
    ctx->flags = 99;
}

int compute_IUCfHve(int input) {
    int result = input * 11;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_AYrsKw3(int input) {
    int result = input * 2;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} mOGy0OXy_ctx_t;

void init_ctx(mOGy0OXy_ctx_t *ctx) {
    ctx->id = 7408;
    ctx->coefficient = 6.8;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} XTTVJWa8_ctx_t;

void init_ctx(XTTVJWa8_ctx_t *ctx) {
    ctx->id = 7340;
    ctx->coefficient = 1.7;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} zuLiDzhX_ctx_t;

void init_ctx(zuLiDzhX_ctx_t *ctx) {
    ctx->id = 5266;
    ctx->coefficient = 9.8;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 8vYIqke0_ctx_t;

void init_ctx(8vYIqke0_ctx_t *ctx) {
    ctx->id = 9897;
    ctx->coefficient = 2.0;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Q1ZVJDxE_ctx_t;

void init_ctx(Q1ZVJDxE_ctx_t *ctx) {
    ctx->id = 8544;
    ctx->coefficient = 9.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} qKuCZdKc_ctx_t;

void init_ctx(qKuCZdKc_ctx_t *ctx) {
    ctx->id = 1619;
    ctx->coefficient = 3.5;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} QhRIOgwL_ctx_t;

void init_ctx(QhRIOgwL_ctx_t *ctx) {
    ctx->id = 1816;
    ctx->coefficient = 9.3;
    ctx->flags = 35;
}

int compute_1vHZ0bU(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ilnq6CVP_ctx_t;

void init_ctx(ilnq6CVP_ctx_t *ctx) {
    ctx->id = 5913;
    ctx->coefficient = 4.7;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} ygqRxVho_ctx_t;

void init_ctx(ygqRxVho_ctx_t *ctx) {
    ctx->id = 8184;
    ctx->coefficient = 7.0;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} uCiQl1iJ_ctx_t;

void init_ctx(uCiQl1iJ_ctx_t *ctx) {
    ctx->id = 1186;
    ctx->coefficient = 4.3;
    ctx->flags = 199;
}

int compute_9knLwRP(int input) {
    int result = input * 39;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} xMRSwm3z_ctx_t;

void init_ctx(xMRSwm3z_ctx_t *ctx) {
    ctx->id = 1868;
    ctx->coefficient = 1.4;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ZE2TO55F_ctx_t;

void init_ctx(ZE2TO55F_ctx_t *ctx) {
    ctx->id = 4023;
    ctx->coefficient = 2.8;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} yaD1DTAU_ctx_t;

void init_ctx(yaD1DTAU_ctx_t *ctx) {
    ctx->id = 3846;
    ctx->coefficient = 7.5;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} t4CBnNn3_ctx_t;

void init_ctx(t4CBnNn3_ctx_t *ctx) {
    ctx->id = 4386;
    ctx->coefficient = 2.6;
    ctx->flags = 173;
}

int compute_WNm3aRy(int input) {
    int result = input * 32;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} YLWwr3jO_ctx_t;

void init_ctx(YLWwr3jO_ctx_t *ctx) {
    ctx->id = 7669;
    ctx->coefficient = 4.2;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 8Q6hns7Q_ctx_t;

void init_ctx(8Q6hns7Q_ctx_t *ctx) {
    ctx->id = 3975;
    ctx->coefficient = 0.8;
    ctx->flags = 19;
}

int compute_fhR2fOY(int input) {
    int result = input * 22;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_stuP45V(int input) {
    int result = input * 24;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 5cLHF4y5_ctx_t;

void init_ctx(5cLHF4y5_ctx_t *ctx) {
    ctx->id = 9738;
    ctx->coefficient = 10.0;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} vylegNUg_ctx_t;

void init_ctx(vylegNUg_ctx_t *ctx) {
    ctx->id = 8704;
    ctx->coefficient = 5.3;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} MUvTjmMl_ctx_t;

void init_ctx(MUvTjmMl_ctx_t *ctx) {
    ctx->id = 2881;
    ctx->coefficient = 1.3;
    ctx->flags = 142;
}

int compute_UI32B7j(int input) {
    int result = input * 58;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 0bnzvyde_ctx_t;

void init_ctx(0bnzvyde_ctx_t *ctx) {
    ctx->id = 2010;
    ctx->coefficient = 8.5;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} sBKKhYh7_ctx_t;

void init_ctx(sBKKhYh7_ctx_t *ctx) {
    ctx->id = 2703;
    ctx->coefficient = 3.0;
    ctx->flags = 74;
}

int compute_VpXdUki(int input) {
    int result = input * 54;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_kZ8QkRd(int input) {
    int result = input * 68;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_nLJO1hs(int input) {
    int result = input * 33;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_uATdkLR(int input) {
    int result = input * 27;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_FqyDx9F(int input) {
    int result = input * 3;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} choFKCNs_ctx_t;

void init_ctx(choFKCNs_ctx_t *ctx) {
    ctx->id = 3479;
    ctx->coefficient = 2.0;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} u0CFY8zj_ctx_t;

void init_ctx(u0CFY8zj_ctx_t *ctx) {
    ctx->id = 7796;
    ctx->coefficient = 1.4;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} lsLprjEI_ctx_t;

void init_ctx(lsLprjEI_ctx_t *ctx) {
    ctx->id = 7491;
    ctx->coefficient = 7.2;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} ANkc8ToX_ctx_t;

void init_ctx(ANkc8ToX_ctx_t *ctx) {
    ctx->id = 2853;
    ctx->coefficient = 0.3;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} F5Q8Plym_ctx_t;

void init_ctx(F5Q8Plym_ctx_t *ctx) {
    ctx->id = 6081;
    ctx->coefficient = 9.4;
    ctx->flags = 134;
}

int compute_r41OE1k(int input) {
    int result = input * 6;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} uZTQcXhK_ctx_t;

void init_ctx(uZTQcXhK_ctx_t *ctx) {
    ctx->id = 1094;
    ctx->coefficient = 5.6;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} C8upSKgh_ctx_t;

void init_ctx(C8upSKgh_ctx_t *ctx) {
    ctx->id = 6064;
    ctx->coefficient = 2.7;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ZvHH0Yjd_ctx_t;

void init_ctx(ZvHH0Yjd_ctx_t *ctx) {
    ctx->id = 7545;
    ctx->coefficient = 5.1;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} YfKe98fZ_ctx_t;

void init_ctx(YfKe98fZ_ctx_t *ctx) {
    ctx->id = 5105;
    ctx->coefficient = 7.6;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} LoRfawGI_ctx_t;

void init_ctx(LoRfawGI_ctx_t *ctx) {
    ctx->id = 3415;
    ctx->coefficient = 8.5;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} QTmKshzM_ctx_t;

void init_ctx(QTmKshzM_ctx_t *ctx) {
    ctx->id = 3429;
    ctx->coefficient = 6.1;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} LrO84Nkf_ctx_t;

void init_ctx(LrO84Nkf_ctx_t *ctx) {
    ctx->id = 9610;
    ctx->coefficient = 0.9;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} KvdsWKmF_ctx_t;

void init_ctx(KvdsWKmF_ctx_t *ctx) {
    ctx->id = 6297;
    ctx->coefficient = 6.0;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 2qwax1dl_ctx_t;

void init_ctx(2qwax1dl_ctx_t *ctx) {
    ctx->id = 4975;
    ctx->coefficient = 8.0;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} kvt9yqvw_ctx_t;

void init_ctx(kvt9yqvw_ctx_t *ctx) {
    ctx->id = 8871;
    ctx->coefficient = 4.5;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} EAdns1Wt_ctx_t;

void init_ctx(EAdns1Wt_ctx_t *ctx) {
    ctx->id = 9934;
    ctx->coefficient = 6.4;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} R9d7BqjY_ctx_t;

void init_ctx(R9d7BqjY_ctx_t *ctx) {
    ctx->id = 5154;
    ctx->coefficient = 4.9;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} BnHq29Bi_ctx_t;

void init_ctx(BnHq29Bi_ctx_t *ctx) {
    ctx->id = 1037;
    ctx->coefficient = 2.7;
    ctx->flags = 150;
}

int compute_J2hqYmM(int input) {
    int result = input * 18;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} CQPAJypU_ctx_t;

void init_ctx(CQPAJypU_ctx_t *ctx) {
    ctx->id = 3947;
    ctx->coefficient = 9.5;
    ctx->flags = 130;
}

int compute_keI5WX8(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} r0VJkkdz_ctx_t;

void init_ctx(r0VJkkdz_ctx_t *ctx) {
    ctx->id = 9845;
    ctx->coefficient = 7.4;
    ctx->flags = 156;
}

int compute_zHtqf2o(int input) {
    int result = input * 2;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} Ka7Dazw5_ctx_t;

void init_ctx(Ka7Dazw5_ctx_t *ctx) {
    ctx->id = 6502;
    ctx->coefficient = 8.2;
    ctx->flags = 89;
}

int compute_GtcqXCf(int input) {
    int result = input * 13;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_lhqPLHL(int input) {
    int result = input * 69;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} hPP4oVsA_ctx_t;

void init_ctx(hPP4oVsA_ctx_t *ctx) {
    ctx->id = 8380;
    ctx->coefficient = 5.3;
    ctx->flags = 216;
}

int compute_ZZObmix(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} bGKIV6Zd_ctx_t;

void init_ctx(bGKIV6Zd_ctx_t *ctx) {
    ctx->id = 2541;
    ctx->coefficient = 2.4;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} CAg0dfbJ_ctx_t;

void init_ctx(CAg0dfbJ_ctx_t *ctx) {
    ctx->id = 9460;
    ctx->coefficient = 1.0;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} HP3NMcTr_ctx_t;

void init_ctx(HP3NMcTr_ctx_t *ctx) {
    ctx->id = 8221;
    ctx->coefficient = 4.0;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ht9RIGFL_ctx_t;

void init_ctx(ht9RIGFL_ctx_t *ctx) {
    ctx->id = 6977;
    ctx->coefficient = 8.9;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 8aurkjmL_ctx_t;

void init_ctx(8aurkjmL_ctx_t *ctx) {
    ctx->id = 3796;
    ctx->coefficient = 6.7;
    ctx->flags = 212;
}

int compute_vvLF0Qp(int input) {
    int result = input * 20;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} FTO5S7rW_ctx_t;

void init_ctx(FTO5S7rW_ctx_t *ctx) {
    ctx->id = 9893;
    ctx->coefficient = 0.1;
    ctx->flags = 213;
}

int compute_mRBfN18(int input) {
    int result = input * 63;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_1pQTkHg(int input) {
    int result = input * 15;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_OxpQeeB(int input) {
    int result = input * 35;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} cThMY3eQ_ctx_t;

void init_ctx(cThMY3eQ_ctx_t *ctx) {
    ctx->id = 5496;
    ctx->coefficient = 5.2;
    ctx->flags = 33;
}

int compute_3ZVbBGl(int input) {
    int result = input * 34;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_OHzAVX4(int input) {
    int result = input * 12;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_fvKWF8j(int input) {
    int result = input * 36;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_v46JjqF(int input) {
    int result = input * 49;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_E14RNOL(int input) {
    int result = input * 55;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} CqdE0IPm_ctx_t;

void init_ctx(CqdE0IPm_ctx_t *ctx) {
    ctx->id = 6710;
    ctx->coefficient = 2.5;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} oqa7geBp_ctx_t;

void init_ctx(oqa7geBp_ctx_t *ctx) {
    ctx->id = 5160;
    ctx->coefficient = 8.6;
    ctx->flags = 245;
}

int compute_U2SOGpG(int input) {
    int result = input * 30;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} fP8mi15b_ctx_t;

void init_ctx(fP8mi15b_ctx_t *ctx) {
    ctx->id = 6705;
    ctx->coefficient = 4.9;
    ctx->flags = 55;
}

int compute_k8fVxbS(int input) {
    int result = input * 18;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_R8zt0vn(int input) {
    int result = input * 16;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 1tkIS6XK_ctx_t;

void init_ctx(1tkIS6XK_ctx_t *ctx) {
    ctx->id = 1865;
    ctx->coefficient = 7.2;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} JmATGglg_ctx_t;

void init_ctx(JmATGglg_ctx_t *ctx) {
    ctx->id = 5552;
    ctx->coefficient = 0.3;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 7rwUgzrK_ctx_t;

void init_ctx(7rwUgzrK_ctx_t *ctx) {
    ctx->id = 1029;
    ctx->coefficient = 0.1;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Asg1GoUM_ctx_t;

void init_ctx(Asg1GoUM_ctx_t *ctx) {
    ctx->id = 1524;
    ctx->coefficient = 3.5;
    ctx->flags = 171;
}

int compute_OckCXao(int input) {
    int result = input * 24;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} VLFGiR66_ctx_t;

void init_ctx(VLFGiR66_ctx_t *ctx) {
    ctx->id = 3640;
    ctx->coefficient = 4.7;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 4yozRI7z_ctx_t;

void init_ctx(4yozRI7z_ctx_t *ctx) {
    ctx->id = 8971;
    ctx->coefficient = 8.9;
    ctx->flags = 21;
}

int compute_2IP7Ep3(int input) {
    int result = input * 21;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} VyzMMM7t_ctx_t;

void init_ctx(VyzMMM7t_ctx_t *ctx) {
    ctx->id = 9761;
    ctx->coefficient = 4.1;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} qudh6CWS_ctx_t;

void init_ctx(qudh6CWS_ctx_t *ctx) {
    ctx->id = 1714;
    ctx->coefficient = 8.7;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} SJMwVFua_ctx_t;

void init_ctx(SJMwVFua_ctx_t *ctx) {
    ctx->id = 6885;
    ctx->coefficient = 2.1;
    ctx->flags = 171;
}

int compute_dTeYXiM(int input) {
    int result = input * 14;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} IgIc6JRT_ctx_t;

void init_ctx(IgIc6JRT_ctx_t *ctx) {
    ctx->id = 7755;
    ctx->coefficient = 3.2;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ntV3kRaZ_ctx_t;

void init_ctx(ntV3kRaZ_ctx_t *ctx) {
    ctx->id = 6796;
    ctx->coefficient = 0.1;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} c1ixuWj1_ctx_t;

void init_ctx(c1ixuWj1_ctx_t *ctx) {
    ctx->id = 8532;
    ctx->coefficient = 7.2;
    ctx->flags = 71;
}

int compute_3deeZqX(int input) {
    int result = input * 50;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} Srk7IYgT_ctx_t;

void init_ctx(Srk7IYgT_ctx_t *ctx) {
    ctx->id = 5035;
    ctx->coefficient = 3.2;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} phK266tV_ctx_t;

void init_ctx(phK266tV_ctx_t *ctx) {
    ctx->id = 4899;
    ctx->coefficient = 9.5;
    ctx->flags = 183;
}

int compute_QABw6Db(int input) {
    int result = input * 7;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} VatNtPI7_ctx_t;

void init_ctx(VatNtPI7_ctx_t *ctx) {
    ctx->id = 4922;
    ctx->coefficient = 2.7;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} yshJW55D_ctx_t;

void init_ctx(yshJW55D_ctx_t *ctx) {
    ctx->id = 1532;
    ctx->coefficient = 3.2;
    ctx->flags = 249;
}

int compute_Unp3PcX(int input) {
    int result = input * 45;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} G1CcFuY4_ctx_t;

void init_ctx(G1CcFuY4_ctx_t *ctx) {
    ctx->id = 3577;
    ctx->coefficient = 0.1;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} HJs9zaTc_ctx_t;

void init_ctx(HJs9zaTc_ctx_t *ctx) {
    ctx->id = 9520;
    ctx->coefficient = 6.2;
    ctx->flags = 77;
}

int compute_NMgnIJX(int input) {
    int result = input * 39;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_LKc8iMz(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} dsDqQott_ctx_t;

void init_ctx(dsDqQott_ctx_t *ctx) {
    ctx->id = 3616;
    ctx->coefficient = 8.3;
    ctx->flags = 85;
}

int compute_7Zfq9Pu(int input) {
    int result = input * 62;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} UYuJFlaG_ctx_t;

void init_ctx(UYuJFlaG_ctx_t *ctx) {
    ctx->id = 3970;
    ctx->coefficient = 5.9;
    ctx->flags = 194;
}

int compute_32m17GW(int input) {
    int result = input * 38;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} BPlGWsYa_ctx_t;

void init_ctx(BPlGWsYa_ctx_t *ctx) {
    ctx->id = 4823;
    ctx->coefficient = 3.0;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} MgI5fWB7_ctx_t;

void init_ctx(MgI5fWB7_ctx_t *ctx) {
    ctx->id = 1003;
    ctx->coefficient = 0.7;
    ctx->flags = 71;
}

int compute_TEgh1jd(int input) {
    int result = input * 61;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} VA5FaoQy_ctx_t;

void init_ctx(VA5FaoQy_ctx_t *ctx) {
    ctx->id = 6772;
    ctx->coefficient = 5.7;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} VjBI8Sfx_ctx_t;

void init_ctx(VjBI8Sfx_ctx_t *ctx) {
    ctx->id = 1172;
    ctx->coefficient = 3.7;
    ctx->flags = 78;
}

int compute_IP56Cw7(int input) {
    int result = input * 26;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} y9ePeYa0_ctx_t;

void init_ctx(y9ePeYa0_ctx_t *ctx) {
    ctx->id = 6723;
    ctx->coefficient = 0.7;
    ctx->flags = 120;
}

int compute_W337GNc(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} NRZq5n43_ctx_t;

void init_ctx(NRZq5n43_ctx_t *ctx) {
    ctx->id = 4427;
    ctx->coefficient = 2.3;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} bjR7ZeYv_ctx_t;

void init_ctx(bjR7ZeYv_ctx_t *ctx) {
    ctx->id = 4907;
    ctx->coefficient = 1.7;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 1S40MZur_ctx_t;

void init_ctx(1S40MZur_ctx_t *ctx) {
    ctx->id = 5708;
    ctx->coefficient = 4.9;
    ctx->flags = 130;
}

int compute_9WSzzEy(int input) {
    int result = input * 11;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_QZBIfuK(int input) {
    int result = input * 2;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} DPq7P8qv_ctx_t;

void init_ctx(DPq7P8qv_ctx_t *ctx) {
    ctx->id = 3594;
    ctx->coefficient = 6.7;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} rHhBztaE_ctx_t;

void init_ctx(rHhBztaE_ctx_t *ctx) {
    ctx->id = 5215;
    ctx->coefficient = 5.4;
    ctx->flags = 234;
}

int compute_AJt2TAz(int input) {
    int result = input * 35;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} tiSgEMHu_ctx_t;

void init_ctx(tiSgEMHu_ctx_t *ctx) {
    ctx->id = 8219;
    ctx->coefficient = 2.7;
    ctx->flags = 119;
}

int compute_3r2V4FB(int input) {
    int result = input * 29;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} ngCqb3VB_ctx_t;

void init_ctx(ngCqb3VB_ctx_t *ctx) {
    ctx->id = 8702;
    ctx->coefficient = 0.3;
    ctx->flags = 36;
}

int compute_mSzJDFX(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_beiBbrq(int input) {
    int result = input * 31;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} zETIto4P_ctx_t;

void init_ctx(zETIto4P_ctx_t *ctx) {
    ctx->id = 5456;
    ctx->coefficient = 6.7;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 2CNC9pFx_ctx_t;

void init_ctx(2CNC9pFx_ctx_t *ctx) {
    ctx->id = 3109;
    ctx->coefficient = 2.2;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 0Fk9ehte_ctx_t;

void init_ctx(0Fk9ehte_ctx_t *ctx) {
    ctx->id = 5269;
    ctx->coefficient = 4.0;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 9csspAtD_ctx_t;

void init_ctx(9csspAtD_ctx_t *ctx) {
    ctx->id = 3948;
    ctx->coefficient = 2.1;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} jrdFBtrR_ctx_t;

void init_ctx(jrdFBtrR_ctx_t *ctx) {
    ctx->id = 5743;
    ctx->coefficient = 7.9;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} U0uqlz56_ctx_t;

void init_ctx(U0uqlz56_ctx_t *ctx) {
    ctx->id = 7069;
    ctx->coefficient = 5.2;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} bqRCrND9_ctx_t;

void init_ctx(bqRCrND9_ctx_t *ctx) {
    ctx->id = 2173;
    ctx->coefficient = 2.9;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} QLVbSnAM_ctx_t;

void init_ctx(QLVbSnAM_ctx_t *ctx) {
    ctx->id = 1079;
    ctx->coefficient = 4.7;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} hsLmvs2L_ctx_t;

void init_ctx(hsLmvs2L_ctx_t *ctx) {
    ctx->id = 6208;
    ctx->coefficient = 0.6;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} f94narZM_ctx_t;

void init_ctx(f94narZM_ctx_t *ctx) {
    ctx->id = 8986;
    ctx->coefficient = 10.0;
    ctx->flags = 129;
}

int compute_xtdAagj(int input) {
    int result = input * 66;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_odmIEdT(int input) {
    int result = input * 50;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} MtWyv4zK_ctx_t;

void init_ctx(MtWyv4zK_ctx_t *ctx) {
    ctx->id = 9464;
    ctx->coefficient = 1.2;
    ctx->flags = 119;
}

int compute_CWlUxRv(int input) {
    int result = input * 58;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} UPL73p55_ctx_t;

void init_ctx(UPL73p55_ctx_t *ctx) {
    ctx->id = 5031;
    ctx->coefficient = 3.4;
    ctx->flags = 125;
}

int compute_hBxxJLa(int input) {
    int result = input * 70;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_3fZpsmW(int input) {
    int result = input * 18;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_kjs7sxo(int input) {
    int result = input * 23;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_1rXDkuJ(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_5M6VrZp(int input) {
    int result = input * 51;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 7Wgc9XWN_ctx_t;

void init_ctx(7Wgc9XWN_ctx_t *ctx) {
    ctx->id = 1490;
    ctx->coefficient = 4.2;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} JgOObnOa_ctx_t;

void init_ctx(JgOObnOa_ctx_t *ctx) {
    ctx->id = 7116;
    ctx->coefficient = 3.1;
    ctx->flags = 221;
}

int compute_fq5EzA2(int input) {
    int result = input * 20;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_gzPI8iG(int input) {
    int result = input * 67;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_Pp8WFj7(int input) {
    int result = input * 28;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_5m8sctM(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 0p3BbfJr_ctx_t;

void init_ctx(0p3BbfJr_ctx_t *ctx) {
    ctx->id = 1259;
    ctx->coefficient = 7.1;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} e0Q1XsBv_ctx_t;

void init_ctx(e0Q1XsBv_ctx_t *ctx) {
    ctx->id = 2011;
    ctx->coefficient = 0.5;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} jJ7lMUX6_ctx_t;

void init_ctx(jJ7lMUX6_ctx_t *ctx) {
    ctx->id = 8518;
    ctx->coefficient = 1.5;
    ctx->flags = 227;
}

int compute_TlGmdbC(int input) {
    int result = input * 20;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_R5RqaG5(int input) {
    int result = input * 12;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 3fHMEIne_ctx_t;

void init_ctx(3fHMEIne_ctx_t *ctx) {
    ctx->id = 1175;
    ctx->coefficient = 1.7;
    ctx->flags = 235;
}

int compute_PjelIPu(int input) {
    int result = input * 49;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} umb2us1C_ctx_t;

void init_ctx(umb2us1C_ctx_t *ctx) {
    ctx->id = 4631;
    ctx->coefficient = 7.2;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 5QRJyMV4_ctx_t;

void init_ctx(5QRJyMV4_ctx_t *ctx) {
    ctx->id = 4617;
    ctx->coefficient = 0.8;
    ctx->flags = 46;
}

int compute_qaDPVUn(int input) {
    int result = input * 54;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 3oL4NJEN_ctx_t;

void init_ctx(3oL4NJEN_ctx_t *ctx) {
    ctx->id = 8563;
    ctx->coefficient = 1.9;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} yqgUXS9h_ctx_t;

void init_ctx(yqgUXS9h_ctx_t *ctx) {
    ctx->id = 5488;
    ctx->coefficient = 4.2;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 0SbMU3M2_ctx_t;

void init_ctx(0SbMU3M2_ctx_t *ctx) {
    ctx->id = 9673;
    ctx->coefficient = 2.1;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 0ByJQ9IF_ctx_t;

void init_ctx(0ByJQ9IF_ctx_t *ctx) {
    ctx->id = 9836;
    ctx->coefficient = 6.7;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} jB7ge41l_ctx_t;

void init_ctx(jB7ge41l_ctx_t *ctx) {
    ctx->id = 3607;
    ctx->coefficient = 5.7;
    ctx->flags = 217;
}

int compute_hSFm51K(int input) {
    int result = input * 64;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 8GZuanIW_ctx_t;

void init_ctx(8GZuanIW_ctx_t *ctx) {
    ctx->id = 8303;
    ctx->coefficient = 10.0;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} EAs3xurZ_ctx_t;

void init_ctx(EAs3xurZ_ctx_t *ctx) {
    ctx->id = 8322;
    ctx->coefficient = 6.5;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 2nnf3aJw_ctx_t;

void init_ctx(2nnf3aJw_ctx_t *ctx) {
    ctx->id = 1503;
    ctx->coefficient = 6.8;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} V7ZMAIuk_ctx_t;

void init_ctx(V7ZMAIuk_ctx_t *ctx) {
    ctx->id = 2640;
    ctx->coefficient = 2.2;
    ctx->flags = 214;
}

int compute_dG5TfNC(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} frXsZEUi_ctx_t;

void init_ctx(frXsZEUi_ctx_t *ctx) {
    ctx->id = 8263;
    ctx->coefficient = 8.3;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} oImSxEeT_ctx_t;

void init_ctx(oImSxEeT_ctx_t *ctx) {
    ctx->id = 6873;
    ctx->coefficient = 4.1;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} osbO8nXe_ctx_t;

void init_ctx(osbO8nXe_ctx_t *ctx) {
    ctx->id = 5426;
    ctx->coefficient = 2.4;
    ctx->flags = 162;
}

int compute_T0dLKAD(int input) {
    int result = input * 56;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_Ie781kB(int input) {
    int result = input * 24;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} zhBQKgOL_ctx_t;

void init_ctx(zhBQKgOL_ctx_t *ctx) {
    ctx->id = 7579;
    ctx->coefficient = 2.6;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 1VaLJgKS_ctx_t;

void init_ctx(1VaLJgKS_ctx_t *ctx) {
    ctx->id = 2659;
    ctx->coefficient = 8.5;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} qQlUkFw1_ctx_t;

void init_ctx(qQlUkFw1_ctx_t *ctx) {
    ctx->id = 2093;
    ctx->coefficient = 6.0;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} NnMrmW2W_ctx_t;

void init_ctx(NnMrmW2W_ctx_t *ctx) {
    ctx->id = 2272;
    ctx->coefficient = 4.7;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} VDhneZ9B_ctx_t;

void init_ctx(VDhneZ9B_ctx_t *ctx) {
    ctx->id = 8227;
    ctx->coefficient = 3.4;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} kLyiMxCG_ctx_t;

void init_ctx(kLyiMxCG_ctx_t *ctx) {
    ctx->id = 3546;
    ctx->coefficient = 9.7;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} vmjOGSQ4_ctx_t;

void init_ctx(vmjOGSQ4_ctx_t *ctx) {
    ctx->id = 8334;
    ctx->coefficient = 0.2;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} dQCjctF9_ctx_t;

void init_ctx(dQCjctF9_ctx_t *ctx) {
    ctx->id = 1294;
    ctx->coefficient = 1.5;
    ctx->flags = 181;
}

int compute_n3thrPi(int input) {
    int result = input * 42;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 0bZuZo7T_ctx_t;

void init_ctx(0bZuZo7T_ctx_t *ctx) {
    ctx->id = 3355;
    ctx->coefficient = 0.6;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} w0k7MiqX_ctx_t;

void init_ctx(w0k7MiqX_ctx_t *ctx) {
    ctx->id = 7685;
    ctx->coefficient = 2.6;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} HAzXDbUg_ctx_t;

void init_ctx(HAzXDbUg_ctx_t *ctx) {
    ctx->id = 7228;
    ctx->coefficient = 6.3;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} n11KXFMQ_ctx_t;

void init_ctx(n11KXFMQ_ctx_t *ctx) {
    ctx->id = 4328;
    ctx->coefficient = 9.1;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} iyQ6K2OF_ctx_t;

void init_ctx(iyQ6K2OF_ctx_t *ctx) {
    ctx->id = 5779;
    ctx->coefficient = 8.7;
    ctx->flags = 54;
}

int compute_yRnnus7(int input) {
    int result = input * 24;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 2dwxQkEL_ctx_t;

void init_ctx(2dwxQkEL_ctx_t *ctx) {
    ctx->id = 4703;
    ctx->coefficient = 1.4;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} cFCmKNzP_ctx_t;

void init_ctx(cFCmKNzP_ctx_t *ctx) {
    ctx->id = 3610;
    ctx->coefficient = 4.7;
    ctx->flags = 10;
}

int compute_3YMrXZR(int input) {
    int result = input * 53;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_NQe2SY8(int input) {
    int result = input * 16;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_uxtkw3J(int input) {
    int result = input * 33;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} OCG8Ocdd_ctx_t;

void init_ctx(OCG8Ocdd_ctx_t *ctx) {
    ctx->id = 6498;
    ctx->coefficient = 4.8;
    ctx->flags = 141;
}

int compute_67apQyc(int input) {
    int result = input * 20;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_J6RSrFh(int input) {
    int result = input * 8;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_gQN5Gyz(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} GOE3Yj8S_ctx_t;

void init_ctx(GOE3Yj8S_ctx_t *ctx) {
    ctx->id = 2342;
    ctx->coefficient = 1.0;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 6sQyQBm9_ctx_t;

void init_ctx(6sQyQBm9_ctx_t *ctx) {
    ctx->id = 7134;
    ctx->coefficient = 2.8;
    ctx->flags = 216;
}

int compute_b0bFmJ1(int input) {
    int result = input * 48;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_0l1rxiJ(int input) {
    int result = input * 38;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} WRNamYry_ctx_t;

void init_ctx(WRNamYry_ctx_t *ctx) {
    ctx->id = 9759;
    ctx->coefficient = 8.6;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} MVfibsh9_ctx_t;

void init_ctx(MVfibsh9_ctx_t *ctx) {
    ctx->id = 6462;
    ctx->coefficient = 1.5;
    ctx->flags = 128;
}

int compute_wJoY9Zy(int input) {
    int result = input * 21;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_kWuL1VS(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} tW6swboy_ctx_t;

void init_ctx(tW6swboy_ctx_t *ctx) {
    ctx->id = 3496;
    ctx->coefficient = 1.6;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} WSn9I6fg_ctx_t;

void init_ctx(WSn9I6fg_ctx_t *ctx) {
    ctx->id = 3767;
    ctx->coefficient = 7.5;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 0SArsxm6_ctx_t;

void init_ctx(0SArsxm6_ctx_t *ctx) {
    ctx->id = 1882;
    ctx->coefficient = 6.1;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} YCdc82mx_ctx_t;

void init_ctx(YCdc82mx_ctx_t *ctx) {
    ctx->id = 1076;
    ctx->coefficient = 6.7;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} YraStveP_ctx_t;

void init_ctx(YraStveP_ctx_t *ctx) {
    ctx->id = 4826;
    ctx->coefficient = 6.6;
    ctx->flags = 195;
}

int compute_KZf0VMa(int input) {
    int result = input * 11;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} QIjU5Ecm_ctx_t;

void init_ctx(QIjU5Ecm_ctx_t *ctx) {
    ctx->id = 8772;
    ctx->coefficient = 8.4;
    ctx->flags = 134;
}

int compute_0p800oM(int input) {
    int result = input * 35;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} hkiUpx9h_ctx_t;

void init_ctx(hkiUpx9h_ctx_t *ctx) {
    ctx->id = 5609;
    ctx->coefficient = 7.9;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} E5Ijr1EE_ctx_t;

void init_ctx(E5Ijr1EE_ctx_t *ctx) {
    ctx->id = 4410;
    ctx->coefficient = 3.0;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Isn3nVIi_ctx_t;

void init_ctx(Isn3nVIi_ctx_t *ctx) {
    ctx->id = 1507;
    ctx->coefficient = 2.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} YPipsIBA_ctx_t;

void init_ctx(YPipsIBA_ctx_t *ctx) {
    ctx->id = 9131;
    ctx->coefficient = 3.5;
    ctx->flags = 32;
}

int compute_DYNY6d5(int input) {
    int result = input * 50;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_S3MsCYc(int input) {
    int result = input * 39;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} BZHqtnGG_ctx_t;

void init_ctx(BZHqtnGG_ctx_t *ctx) {
    ctx->id = 1388;
    ctx->coefficient = 7.6;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 1kDtIFk9_ctx_t;

void init_ctx(1kDtIFk9_ctx_t *ctx) {
    ctx->id = 8354;
    ctx->coefficient = 6.4;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} BXAKywrA_ctx_t;

void init_ctx(BXAKywrA_ctx_t *ctx) {
    ctx->id = 3105;
    ctx->coefficient = 8.9;
    ctx->flags = 101;
}

int compute_9GSt4a7(int input) {
    int result = input * 41;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} oZZEfnJ0_ctx_t;

void init_ctx(oZZEfnJ0_ctx_t *ctx) {
    ctx->id = 7838;
    ctx->coefficient = 3.2;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 53J5pWgn_ctx_t;

void init_ctx(53J5pWgn_ctx_t *ctx) {
    ctx->id = 6299;
    ctx->coefficient = 8.9;
    ctx->flags = 110;
}

int compute_JfHorl3(int input) {
    int result = input * 27;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} tJy2QVy1_ctx_t;

void init_ctx(tJy2QVy1_ctx_t *ctx) {
    ctx->id = 8031;
    ctx->coefficient = 3.3;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} vF6uZth7_ctx_t;

void init_ctx(vF6uZth7_ctx_t *ctx) {
    ctx->id = 7883;
    ctx->coefficient = 2.2;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ZHWy3ZXI_ctx_t;

void init_ctx(ZHWy3ZXI_ctx_t *ctx) {
    ctx->id = 1868;
    ctx->coefficient = 8.2;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} QoN0V1ss_ctx_t;

void init_ctx(QoN0V1ss_ctx_t *ctx) {
    ctx->id = 1769;
    ctx->coefficient = 9.0;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} qYDJ13KQ_ctx_t;

void init_ctx(qYDJ13KQ_ctx_t *ctx) {
    ctx->id = 8388;
    ctx->coefficient = 1.4;
    ctx->flags = 149;
}

int compute_HTAelxU(int input) {
    int result = input * 32;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_fRRhlby(int input) {
    int result = input * 8;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} WS4oJjEA_ctx_t;

void init_ctx(WS4oJjEA_ctx_t *ctx) {
    ctx->id = 8823;
    ctx->coefficient = 2.4;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} hrS94mK9_ctx_t;

void init_ctx(hrS94mK9_ctx_t *ctx) {
    ctx->id = 6307;
    ctx->coefficient = 7.0;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} zgybYM0e_ctx_t;

void init_ctx(zgybYM0e_ctx_t *ctx) {
    ctx->id = 5793;
    ctx->coefficient = 3.8;
    ctx->flags = 185;
}

int compute_WsyM0aV(int input) {
    int result = input * 4;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_ehpMLfk(int input) {
    int result = input * 48;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Jldkzaxy_ctx_t;

void init_ctx(Jldkzaxy_ctx_t *ctx) {
    ctx->id = 5112;
    ctx->coefficient = 5.0;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 6WRkGbVE_ctx_t;

void init_ctx(6WRkGbVE_ctx_t *ctx) {
    ctx->id = 6142;
    ctx->coefficient = 8.1;
    ctx->flags = 86;
}

int compute_seBCNMG(int input) {
    int result = input * 22;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} M2Ht0Jzt_ctx_t;

void init_ctx(M2Ht0Jzt_ctx_t *ctx) {
    ctx->id = 7102;
    ctx->coefficient = 6.0;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 68HHhARZ_ctx_t;

void init_ctx(68HHhARZ_ctx_t *ctx) {
    ctx->id = 4652;
    ctx->coefficient = 3.4;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} BWI0hewr_ctx_t;

void init_ctx(BWI0hewr_ctx_t *ctx) {
    ctx->id = 2675;
    ctx->coefficient = 9.6;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} zkaPiLx1_ctx_t;

void init_ctx(zkaPiLx1_ctx_t *ctx) {
    ctx->id = 3036;
    ctx->coefficient = 1.3;
    ctx->flags = 40;
}

int compute_PhhUP4s(int input) {
    int result = input * 25;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} KwaVslGy_ctx_t;

void init_ctx(KwaVslGy_ctx_t *ctx) {
    ctx->id = 5141;
    ctx->coefficient = 0.4;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} LPtkq782_ctx_t;

void init_ctx(LPtkq782_ctx_t *ctx) {
    ctx->id = 7408;
    ctx->coefficient = 0.5;
    ctx->flags = 99;
}

int compute_NAKKhKY(int input) {
    int result = input * 57;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_fYA7reG(int input) {
    int result = input * 4;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} vU7Wusiv_ctx_t;

void init_ctx(vU7Wusiv_ctx_t *ctx) {
    ctx->id = 8739;
    ctx->coefficient = 6.2;
    ctx->flags = 68;
}

int compute_H9TRIsa(int input) {
    int result = input * 2;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} dKrUyGWX_ctx_t;

void init_ctx(dKrUyGWX_ctx_t *ctx) {
    ctx->id = 1510;
    ctx->coefficient = 2.1;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} wT3YK86l_ctx_t;

void init_ctx(wT3YK86l_ctx_t *ctx) {
    ctx->id = 7578;
    ctx->coefficient = 6.9;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 9DdpIJEx_ctx_t;

void init_ctx(9DdpIJEx_ctx_t *ctx) {
    ctx->id = 3118;
    ctx->coefficient = 8.4;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} QcEBeYOw_ctx_t;

void init_ctx(QcEBeYOw_ctx_t *ctx) {
    ctx->id = 4668;
    ctx->coefficient = 4.5;
    ctx->flags = 233;
}

int compute_XxaDCA1(int input) {
    int result = input * 37;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} PHDz63lu_ctx_t;

void init_ctx(PHDz63lu_ctx_t *ctx) {
    ctx->id = 4671;
    ctx->coefficient = 4.6;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} b5ZHGABT_ctx_t;

void init_ctx(b5ZHGABT_ctx_t *ctx) {
    ctx->id = 2332;
    ctx->coefficient = 0.7;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 3Zgy5Msz_ctx_t;

void init_ctx(3Zgy5Msz_ctx_t *ctx) {
    ctx->id = 6041;
    ctx->coefficient = 2.0;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} cxeL91fw_ctx_t;

void init_ctx(cxeL91fw_ctx_t *ctx) {
    ctx->id = 3587;
    ctx->coefficient = 6.5;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} KrmCLqte_ctx_t;

void init_ctx(KrmCLqte_ctx_t *ctx) {
    ctx->id = 1922;
    ctx->coefficient = 9.1;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ut2QGZuN_ctx_t;

void init_ctx(ut2QGZuN_ctx_t *ctx) {
    ctx->id = 8831;
    ctx->coefficient = 1.5;
    ctx->flags = 249;
}

int compute_7umQTWJ(int input) {
    int result = input * 10;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} WHkTmTbn_ctx_t;

void init_ctx(WHkTmTbn_ctx_t *ctx) {
    ctx->id = 4131;
    ctx->coefficient = 7.3;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} eKzBTlos_ctx_t;

void init_ctx(eKzBTlos_ctx_t *ctx) {
    ctx->id = 4014;
    ctx->coefficient = 1.1;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} yWxkQonq_ctx_t;

void init_ctx(yWxkQonq_ctx_t *ctx) {
    ctx->id = 9056;
    ctx->coefficient = 1.6;
    ctx->flags = 163;
}

int compute_rB8VtFZ(int input) {
    int result = input * 22;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 0hDhra83_ctx_t;

void init_ctx(0hDhra83_ctx_t *ctx) {
    ctx->id = 3848;
    ctx->coefficient = 1.8;
    ctx->flags = 36;
}

int compute_xvPcMnk(int input) {
    int result = input * 58;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} aE1pUi1r_ctx_t;

void init_ctx(aE1pUi1r_ctx_t *ctx) {
    ctx->id = 3984;
    ctx->coefficient = 3.4;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} MCJPCtUg_ctx_t;

void init_ctx(MCJPCtUg_ctx_t *ctx) {
    ctx->id = 4017;
    ctx->coefficient = 5.8;
    ctx->flags = 34;
}

int compute_snu1LwI(int input) {
    int result = input * 61;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} DmsXc6MA_ctx_t;

void init_ctx(DmsXc6MA_ctx_t *ctx) {
    ctx->id = 5151;
    ctx->coefficient = 1.8;
    ctx->flags = 208;
}

int compute_HWz3x9W(int input) {
    int result = input * 16;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} wS8sgunt_ctx_t;

void init_ctx(wS8sgunt_ctx_t *ctx) {
    ctx->id = 6923;
    ctx->coefficient = 3.9;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} mby8zoif_ctx_t;

void init_ctx(mby8zoif_ctx_t *ctx) {
    ctx->id = 2385;
    ctx->coefficient = 5.6;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} A63m0mFt_ctx_t;

void init_ctx(A63m0mFt_ctx_t *ctx) {
    ctx->id = 8396;
    ctx->coefficient = 1.7;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} vZLl2FN7_ctx_t;

void init_ctx(vZLl2FN7_ctx_t *ctx) {
    ctx->id = 6341;
    ctx->coefficient = 8.4;
    ctx->flags = 112;
}

int compute_oifmNtx(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_2vr0F04(int input) {
    int result = input * 61;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 75DAW7hU_ctx_t;

void init_ctx(75DAW7hU_ctx_t *ctx) {
    ctx->id = 7699;
    ctx->coefficient = 5.5;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} wv0Zx1Wd_ctx_t;

void init_ctx(wv0Zx1Wd_ctx_t *ctx) {
    ctx->id = 7647;
    ctx->coefficient = 9.2;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} BK9VBbKs_ctx_t;

void init_ctx(BK9VBbKs_ctx_t *ctx) {
    ctx->id = 7040;
    ctx->coefficient = 2.3;
    ctx->flags = 34;
}

int compute_HWmH01m(int input) {
    int result = input * 8;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} BW3x7pYL_ctx_t;

void init_ctx(BW3x7pYL_ctx_t *ctx) {
    ctx->id = 9509;
    ctx->coefficient = 4.6;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} jjPjTw0u_ctx_t;

void init_ctx(jjPjTw0u_ctx_t *ctx) {
    ctx->id = 7852;
    ctx->coefficient = 7.9;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} V2ENwZxA_ctx_t;

void init_ctx(V2ENwZxA_ctx_t *ctx) {
    ctx->id = 9651;
    ctx->coefficient = 6.3;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 9X6YvEnS_ctx_t;

void init_ctx(9X6YvEnS_ctx_t *ctx) {
    ctx->id = 5781;
    ctx->coefficient = 9.1;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} bInLfmq9_ctx_t;

void init_ctx(bInLfmq9_ctx_t *ctx) {
    ctx->id = 5120;
    ctx->coefficient = 7.9;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} XQXtA7Ea_ctx_t;

void init_ctx(XQXtA7Ea_ctx_t *ctx) {
    ctx->id = 8464;
    ctx->coefficient = 8.7;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} YSXH0w3J_ctx_t;

void init_ctx(YSXH0w3J_ctx_t *ctx) {
    ctx->id = 1496;
    ctx->coefficient = 5.5;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ZvFQDquD_ctx_t;

void init_ctx(ZvFQDquD_ctx_t *ctx) {
    ctx->id = 1258;
    ctx->coefficient = 3.3;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} ADvAdlSu_ctx_t;

void init_ctx(ADvAdlSu_ctx_t *ctx) {
    ctx->id = 9309;
    ctx->coefficient = 0.8;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} NtXVcLyF_ctx_t;

void init_ctx(NtXVcLyF_ctx_t *ctx) {
    ctx->id = 8054;
    ctx->coefficient = 3.0;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} F58gc6mH_ctx_t;

void init_ctx(F58gc6mH_ctx_t *ctx) {
    ctx->id = 1207;
    ctx->coefficient = 3.8;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} r74rXKZe_ctx_t;

void init_ctx(r74rXKZe_ctx_t *ctx) {
    ctx->id = 4656;
    ctx->coefficient = 5.8;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} VyrP3110_ctx_t;

void init_ctx(VyrP3110_ctx_t *ctx) {
    ctx->id = 6616;
    ctx->coefficient = 4.5;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} jDDMqT0D_ctx_t;

void init_ctx(jDDMqT0D_ctx_t *ctx) {
    ctx->id = 1308;
    ctx->coefficient = 7.9;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} iV0UH8D2_ctx_t;

void init_ctx(iV0UH8D2_ctx_t *ctx) {
    ctx->id = 3581;
    ctx->coefficient = 6.4;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Hdp6TEGr_ctx_t;

void init_ctx(Hdp6TEGr_ctx_t *ctx) {
    ctx->id = 4348;
    ctx->coefficient = 9.7;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 4CZQKMCd_ctx_t;

void init_ctx(4CZQKMCd_ctx_t *ctx) {
    ctx->id = 5474;
    ctx->coefficient = 5.3;
    ctx->flags = 21;
}

int compute_qNG1Gi9(int input) {
    int result = input * 13;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_GXGr9qM(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} FQKKbV2E_ctx_t;

void init_ctx(FQKKbV2E_ctx_t *ctx) {
    ctx->id = 1394;
    ctx->coefficient = 3.3;
    ctx->flags = 0;
}

int compute_XeDP0ZP(int input) {
    int result = input * 5;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} CxpaieSQ_ctx_t;

void init_ctx(CxpaieSQ_ctx_t *ctx) {
    ctx->id = 4078;
    ctx->coefficient = 0.5;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} xW44oPRg_ctx_t;

void init_ctx(xW44oPRg_ctx_t *ctx) {
    ctx->id = 7922;
    ctx->coefficient = 2.3;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 2qpi3AA3_ctx_t;

void init_ctx(2qpi3AA3_ctx_t *ctx) {
    ctx->id = 2917;
    ctx->coefficient = 5.3;
    ctx->flags = 191;
}

int compute_nmV1k4V(int input) {
    int result = input * 13;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_l5OG7pw(int input) {
    int result = input * 59;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_VhgZENb(int input) {
    int result = input * 12;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_rQ8PmDC(int input) {
    int result = input * 44;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} zdakCFWc_ctx_t;

void init_ctx(zdakCFWc_ctx_t *ctx) {
    ctx->id = 1217;
    ctx->coefficient = 6.2;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} like4UY0_ctx_t;

void init_ctx(like4UY0_ctx_t *ctx) {
    ctx->id = 6638;
    ctx->coefficient = 0.6;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 8jBwzEYS_ctx_t;

void init_ctx(8jBwzEYS_ctx_t *ctx) {
    ctx->id = 7354;
    ctx->coefficient = 7.7;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} qICCnCIV_ctx_t;

void init_ctx(qICCnCIV_ctx_t *ctx) {
    ctx->id = 7817;
    ctx->coefficient = 5.7;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Hy1qs8fj_ctx_t;

void init_ctx(Hy1qs8fj_ctx_t *ctx) {
    ctx->id = 7600;
    ctx->coefficient = 9.7;
    ctx->flags = 34;
}

int compute_AMGBsEq(int input) {
    int result = input * 70;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_5ADi800(int input) {
    int result = input * 65;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_jPHmpYI(int input) {
    int result = input * 9;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} eLayXXpF_ctx_t;

void init_ctx(eLayXXpF_ctx_t *ctx) {
    ctx->id = 6446;
    ctx->coefficient = 1.8;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} NsKQqGT2_ctx_t;

void init_ctx(NsKQqGT2_ctx_t *ctx) {
    ctx->id = 8297;
    ctx->coefficient = 6.4;
    ctx->flags = 8;
}

int compute_HVpC08q(int input) {
    int result = input * 65;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} IdysS4Cy_ctx_t;

void init_ctx(IdysS4Cy_ctx_t *ctx) {
    ctx->id = 8302;
    ctx->coefficient = 0.9;
    ctx->flags = 56;
}

int compute_CPoLiWi(int input) {
    int result = input * 46;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} BfVP7koH_ctx_t;

void init_ctx(BfVP7koH_ctx_t *ctx) {
    ctx->id = 8009;
    ctx->coefficient = 6.0;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} eXLjub65_ctx_t;

void init_ctx(eXLjub65_ctx_t *ctx) {
    ctx->id = 6255;
    ctx->coefficient = 5.0;
    ctx->flags = 61;
}

int compute_zyalFvW(int input) {
    int result = input * 49;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} oCAYV3bd_ctx_t;

void init_ctx(oCAYV3bd_ctx_t *ctx) {
    ctx->id = 8576;
    ctx->coefficient = 1.8;
    ctx->flags = 199;
}

int compute_5LqVcBy(int input) {
    int result = input * 22;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_bCFmHIl(int input) {
    int result = input * 25;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 8MWZz3JV_ctx_t;

void init_ctx(8MWZz3JV_ctx_t *ctx) {
    ctx->id = 8631;
    ctx->coefficient = 2.1;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} H2EJ5uQX_ctx_t;

void init_ctx(H2EJ5uQX_ctx_t *ctx) {
    ctx->id = 9182;
    ctx->coefficient = 2.9;
    ctx->flags = 215;
}

int compute_Vly46Px(int input) {
    int result = input * 61;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_vEC3bGl(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} uVjpwsZz_ctx_t;

void init_ctx(uVjpwsZz_ctx_t *ctx) {
    ctx->id = 6582;
    ctx->coefficient = 6.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Q3AWnKrK_ctx_t;

void init_ctx(Q3AWnKrK_ctx_t *ctx) {
    ctx->id = 5994;
    ctx->coefficient = 6.1;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} voa2TzF0_ctx_t;

void init_ctx(voa2TzF0_ctx_t *ctx) {
    ctx->id = 1559;
    ctx->coefficient = 6.4;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} JQFkfPNV_ctx_t;

void init_ctx(JQFkfPNV_ctx_t *ctx) {
    ctx->id = 3414;
    ctx->coefficient = 4.8;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 2nRqQOTv_ctx_t;

void init_ctx(2nRqQOTv_ctx_t *ctx) {
    ctx->id = 1938;
    ctx->coefficient = 0.1;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} QuIpzxqb_ctx_t;

void init_ctx(QuIpzxqb_ctx_t *ctx) {
    ctx->id = 9653;
    ctx->coefficient = 8.1;
    ctx->flags = 21;
}

int compute_rjMqyqh(int input) {
    int result = input * 65;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} R6DHjndU_ctx_t;

void init_ctx(R6DHjndU_ctx_t *ctx) {
    ctx->id = 5871;
    ctx->coefficient = 1.5;
    ctx->flags = 109;
}

int compute_Gf7mYHe(int input) {
    int result = input * 31;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} UiwYVTab_ctx_t;

void init_ctx(UiwYVTab_ctx_t *ctx) {
    ctx->id = 9121;
    ctx->coefficient = 2.8;
    ctx->flags = 20;
}

int compute_z0Rn9mF(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_gP0XtJm(int input) {
    int result = input * 60;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} IWZ63ZkW_ctx_t;

void init_ctx(IWZ63ZkW_ctx_t *ctx) {
    ctx->id = 4531;
    ctx->coefficient = 4.9;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} wZE0ng91_ctx_t;

void init_ctx(wZE0ng91_ctx_t *ctx) {
    ctx->id = 1248;
    ctx->coefficient = 8.6;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 1QyvOFDN_ctx_t;

void init_ctx(1QyvOFDN_ctx_t *ctx) {
    ctx->id = 6739;
    ctx->coefficient = 9.6;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} XaOhvuSK_ctx_t;

void init_ctx(XaOhvuSK_ctx_t *ctx) {
    ctx->id = 4370;
    ctx->coefficient = 10.0;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} iaoXgCtA_ctx_t;

void init_ctx(iaoXgCtA_ctx_t *ctx) {
    ctx->id = 5427;
    ctx->coefficient = 1.4;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} rxAJy9yP_ctx_t;

void init_ctx(rxAJy9yP_ctx_t *ctx) {
    ctx->id = 8395;
    ctx->coefficient = 5.2;
    ctx->flags = 2;
}

int compute_Az5aZUq(int input) {
    int result = input * 30;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} CI9A1oDb_ctx_t;

void init_ctx(CI9A1oDb_ctx_t *ctx) {
    ctx->id = 3213;
    ctx->coefficient = 9.1;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} HxoHzQM8_ctx_t;

void init_ctx(HxoHzQM8_ctx_t *ctx) {
    ctx->id = 6058;
    ctx->coefficient = 1.7;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Ac3YmWkS_ctx_t;

void init_ctx(Ac3YmWkS_ctx_t *ctx) {
    ctx->id = 5212;
    ctx->coefficient = 7.2;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} IGfZhkZD_ctx_t;

void init_ctx(IGfZhkZD_ctx_t *ctx) {
    ctx->id = 8889;
    ctx->coefficient = 1.0;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} tz2UkE0m_ctx_t;

void init_ctx(tz2UkE0m_ctx_t *ctx) {
    ctx->id = 6150;
    ctx->coefficient = 4.9;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 4jD7UlhL_ctx_t;

void init_ctx(4jD7UlhL_ctx_t *ctx) {
    ctx->id = 4134;
    ctx->coefficient = 5.5;
    ctx->flags = 4;
}

int compute_WLpH24o(int input) {
    int result = input * 49;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ocJZxSes_ctx_t;

void init_ctx(ocJZxSes_ctx_t *ctx) {
    ctx->id = 8951;
    ctx->coefficient = 3.7;
    ctx->flags = 206;
}

int compute_VARFeah(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_YKnWnLL(int input) {
    int result = input * 10;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 2usNr2QC_ctx_t;

void init_ctx(2usNr2QC_ctx_t *ctx) {
    ctx->id = 2051;
    ctx->coefficient = 1.5;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} mpdpPvrb_ctx_t;

void init_ctx(mpdpPvrb_ctx_t *ctx) {
    ctx->id = 8772;
    ctx->coefficient = 0.3;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} USo8s8ow_ctx_t;

void init_ctx(USo8s8ow_ctx_t *ctx) {
    ctx->id = 3863;
    ctx->coefficient = 2.9;
    ctx->flags = 80;
}

int compute_iI1lZtr(int input) {
    int result = input * 3;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} PvdZRIna_ctx_t;

void init_ctx(PvdZRIna_ctx_t *ctx) {
    ctx->id = 9629;
    ctx->coefficient = 1.5;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} g0fVNk6h_ctx_t;

void init_ctx(g0fVNk6h_ctx_t *ctx) {
    ctx->id = 1559;
    ctx->coefficient = 1.7;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} E22Qu5LC_ctx_t;

void init_ctx(E22Qu5LC_ctx_t *ctx) {
    ctx->id = 9339;
    ctx->coefficient = 2.1;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} m8CtkdRn_ctx_t;

void init_ctx(m8CtkdRn_ctx_t *ctx) {
    ctx->id = 6667;
    ctx->coefficient = 8.0;
    ctx->flags = 191;
}

int compute_w71TIxy(int input) {
    int result = input * 51;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_joWhDe1(int input) {
    int result = input * 28;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_q8MRCTZ(int input) {
    int result = input * 6;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} s41YY9qL_ctx_t;

void init_ctx(s41YY9qL_ctx_t *ctx) {
    ctx->id = 8042;
    ctx->coefficient = 0.8;
    ctx->flags = 230;
}

int compute_4zf4Lt6(int input) {
    int result = input * 31;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_jLMhmrh(int input) {
    int result = input * 10;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} bAbOShqK_ctx_t;

void init_ctx(bAbOShqK_ctx_t *ctx) {
    ctx->id = 5043;
    ctx->coefficient = 5.7;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} KveKRo2Q_ctx_t;

void init_ctx(KveKRo2Q_ctx_t *ctx) {
    ctx->id = 1878;
    ctx->coefficient = 9.8;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} yWltbz71_ctx_t;

void init_ctx(yWltbz71_ctx_t *ctx) {
    ctx->id = 7547;
    ctx->coefficient = 7.3;
    ctx->flags = 144;
}

int compute_fCRuqYW(int input) {
    int result = input * 36;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} LzRALzc8_ctx_t;

void init_ctx(LzRALzc8_ctx_t *ctx) {
    ctx->id = 1870;
    ctx->coefficient = 6.2;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} G9ofVahR_ctx_t;

void init_ctx(G9ofVahR_ctx_t *ctx) {
    ctx->id = 3477;
    ctx->coefficient = 10.0;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} HtXyQMqJ_ctx_t;

void init_ctx(HtXyQMqJ_ctx_t *ctx) {
    ctx->id = 5153;
    ctx->coefficient = 4.6;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} r2ynEbqR_ctx_t;

void init_ctx(r2ynEbqR_ctx_t *ctx) {
    ctx->id = 6854;
    ctx->coefficient = 1.2;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} hqVywWub_ctx_t;

void init_ctx(hqVywWub_ctx_t *ctx) {
    ctx->id = 6378;
    ctx->coefficient = 3.4;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} eTlAzT6c_ctx_t;

void init_ctx(eTlAzT6c_ctx_t *ctx) {
    ctx->id = 5816;
    ctx->coefficient = 7.8;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} vkEOh6fP_ctx_t;

void init_ctx(vkEOh6fP_ctx_t *ctx) {
    ctx->id = 2988;
    ctx->coefficient = 4.5;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} xunI06iR_ctx_t;

void init_ctx(xunI06iR_ctx_t *ctx) {
    ctx->id = 8065;
    ctx->coefficient = 4.7;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} gLJskHv5_ctx_t;

void init_ctx(gLJskHv5_ctx_t *ctx) {
    ctx->id = 7909;
    ctx->coefficient = 1.6;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} gTUFHITC_ctx_t;

void init_ctx(gTUFHITC_ctx_t *ctx) {
    ctx->id = 8259;
    ctx->coefficient = 7.4;
    ctx->flags = 30;
}

int compute_CFrmt84(int input) {
    int result = input * 64;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} rDcHjZcJ_ctx_t;

void init_ctx(rDcHjZcJ_ctx_t *ctx) {
    ctx->id = 1870;
    ctx->coefficient = 6.6;
    ctx->flags = 198;
}

int compute_Gn3bfoN(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 3ewlQQVF_ctx_t;

void init_ctx(3ewlQQVF_ctx_t *ctx) {
    ctx->id = 3405;
    ctx->coefficient = 8.3;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} aNF2ynuB_ctx_t;

void init_ctx(aNF2ynuB_ctx_t *ctx) {
    ctx->id = 2845;
    ctx->coefficient = 1.1;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} AM453767_ctx_t;

void init_ctx(AM453767_ctx_t *ctx) {
    ctx->id = 5008;
    ctx->coefficient = 5.0;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} WgE1KoOA_ctx_t;

void init_ctx(WgE1KoOA_ctx_t *ctx) {
    ctx->id = 3139;
    ctx->coefficient = 7.2;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} Bda8ahAj_ctx_t;

void init_ctx(Bda8ahAj_ctx_t *ctx) {
    ctx->id = 9394;
    ctx->coefficient = 6.4;
    ctx->flags = 107;
}

int compute_Dmh6awS(int input) {
    int result = input * 38;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_a40cLOQ(int input) {
    int result = input * 32;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} e3i4Gsxg_ctx_t;

void init_ctx(e3i4Gsxg_ctx_t *ctx) {
    ctx->id = 2270;
    ctx->coefficient = 7.4;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} OIE1I9vT_ctx_t;

void init_ctx(OIE1I9vT_ctx_t *ctx) {
    ctx->id = 6407;
    ctx->coefficient = 9.1;
    ctx->flags = 74;
}

int compute_upzIvl6(int input) {
    int result = input * 15;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Pu1G7xIf_ctx_t;

void init_ctx(Pu1G7xIf_ctx_t *ctx) {
    ctx->id = 3638;
    ctx->coefficient = 2.0;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} f0nj2sT4_ctx_t;

void init_ctx(f0nj2sT4_ctx_t *ctx) {
    ctx->id = 9616;
    ctx->coefficient = 8.3;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} DRSfueUq_ctx_t;

void init_ctx(DRSfueUq_ctx_t *ctx) {
    ctx->id = 5972;
    ctx->coefficient = 3.9;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 9rzfWYzz_ctx_t;

void init_ctx(9rzfWYzz_ctx_t *ctx) {
    ctx->id = 7052;
    ctx->coefficient = 8.1;
    ctx->flags = 52;
}

int compute_v91qTWC(int input) {
    int result = input * 38;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} d25Xqb2D_ctx_t;

void init_ctx(d25Xqb2D_ctx_t *ctx) {
    ctx->id = 8502;
    ctx->coefficient = 5.1;
    ctx->flags = 215;
}

int compute_26Mv1JM(int input) {
    int result = input * 69;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 1MHM9m3J_ctx_t;

void init_ctx(1MHM9m3J_ctx_t *ctx) {
    ctx->id = 2217;
    ctx->coefficient = 3.6;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} BXG6hGSl_ctx_t;

void init_ctx(BXG6hGSl_ctx_t *ctx) {
    ctx->id = 6572;
    ctx->coefficient = 1.5;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} stcsKvwz_ctx_t;

void init_ctx(stcsKvwz_ctx_t *ctx) {
    ctx->id = 7579;
    ctx->coefficient = 8.9;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} qYeqTigL_ctx_t;

void init_ctx(qYeqTigL_ctx_t *ctx) {
    ctx->id = 8713;
    ctx->coefficient = 9.0;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} aUDZlCDP_ctx_t;

void init_ctx(aUDZlCDP_ctx_t *ctx) {
    ctx->id = 8730;
    ctx->coefficient = 5.8;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} RYeSym4t_ctx_t;

void init_ctx(RYeSym4t_ctx_t *ctx) {
    ctx->id = 8480;
    ctx->coefficient = 1.5;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} VGHjTaUb_ctx_t;

void init_ctx(VGHjTaUb_ctx_t *ctx) {
    ctx->id = 8676;
    ctx->coefficient = 9.6;
    ctx->flags = 188;
}

int compute_bebtesX(int input) {
    int result = input * 45;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} kni34Y5Y_ctx_t;

void init_ctx(kni34Y5Y_ctx_t *ctx) {
    ctx->id = 9961;
    ctx->coefficient = 4.5;
    ctx->flags = 7;
}

int compute_8RXuWkp(int input) {
    int result = input * 26;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Dxrw71PY_ctx_t;

void init_ctx(Dxrw71PY_ctx_t *ctx) {
    ctx->id = 8648;
    ctx->coefficient = 6.1;
    ctx->flags = 210;
}

int compute_Bc6DbwV(int input) {
    int result = input * 14;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} YNZAaJr7_ctx_t;

void init_ctx(YNZAaJr7_ctx_t *ctx) {
    ctx->id = 1467;
    ctx->coefficient = 2.6;
    ctx->flags = 112;
}

int compute_GSKiW1c(int input) {
    int result = input * 48;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} gPfGCqNM_ctx_t;

void init_ctx(gPfGCqNM_ctx_t *ctx) {
    ctx->id = 9816;
    ctx->coefficient = 3.6;
    ctx->flags = 65;
}

int compute_UsL2Sg5(int input) {
    int result = input * 14;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_IU7cORK(int input) {
    int result = input * 54;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} UvvetbPv_ctx_t;

void init_ctx(UvvetbPv_ctx_t *ctx) {
    ctx->id = 3837;
    ctx->coefficient = 7.6;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} nTe8P4km_ctx_t;

void init_ctx(nTe8P4km_ctx_t *ctx) {
    ctx->id = 9983;
    ctx->coefficient = 1.4;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} TnwUYSMt_ctx_t;

void init_ctx(TnwUYSMt_ctx_t *ctx) {
    ctx->id = 6159;
    ctx->coefficient = 2.3;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 3O5A9ucj_ctx_t;

void init_ctx(3O5A9ucj_ctx_t *ctx) {
    ctx->id = 2374;
    ctx->coefficient = 4.5;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 2rI5cfQy_ctx_t;

void init_ctx(2rI5cfQy_ctx_t *ctx) {
    ctx->id = 4218;
    ctx->coefficient = 9.9;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 5yJMBSP1_ctx_t;

void init_ctx(5yJMBSP1_ctx_t *ctx) {
    ctx->id = 3833;
    ctx->coefficient = 7.7;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} WIFn1ueZ_ctx_t;

void init_ctx(WIFn1ueZ_ctx_t *ctx) {
    ctx->id = 5823;
    ctx->coefficient = 0.1;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} x2IHVKtM_ctx_t;

void init_ctx(x2IHVKtM_ctx_t *ctx) {
    ctx->id = 6194;
    ctx->coefficient = 8.3;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} cMv550mt_ctx_t;

void init_ctx(cMv550mt_ctx_t *ctx) {
    ctx->id = 9147;
    ctx->coefficient = 5.4;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} yJYe3K4Z_ctx_t;

void init_ctx(yJYe3K4Z_ctx_t *ctx) {
    ctx->id = 2721;
    ctx->coefficient = 2.3;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} UJ8IJmhK_ctx_t;

void init_ctx(UJ8IJmhK_ctx_t *ctx) {
    ctx->id = 6084;
    ctx->coefficient = 6.3;
    ctx->flags = 189;
}

int compute_NlUYico(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} jkXklhHn_ctx_t;

void init_ctx(jkXklhHn_ctx_t *ctx) {
    ctx->id = 2488;
    ctx->coefficient = 7.5;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} tYYGnkVm_ctx_t;

void init_ctx(tYYGnkVm_ctx_t *ctx) {
    ctx->id = 2568;
    ctx->coefficient = 1.2;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} wwuVrvO7_ctx_t;

void init_ctx(wwuVrvO7_ctx_t *ctx) {
    ctx->id = 3741;
    ctx->coefficient = 7.0;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} rMZFPS7l_ctx_t;

void init_ctx(rMZFPS7l_ctx_t *ctx) {
    ctx->id = 7720;
    ctx->coefficient = 3.9;
    ctx->flags = 51;
}

int compute_Vh2wYB5(int input) {
    int result = input * 31;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_UBchBZf(int input) {
    int result = input * 32;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} aRPQlywL_ctx_t;

void init_ctx(aRPQlywL_ctx_t *ctx) {
    ctx->id = 6790;
    ctx->coefficient = 6.7;
    ctx->flags = 220;
}

int compute_BCyelDD(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} JzE6Ct7x_ctx_t;

void init_ctx(JzE6Ct7x_ctx_t *ctx) {
    ctx->id = 5082;
    ctx->coefficient = 4.8;
    ctx->flags = 214;
}

