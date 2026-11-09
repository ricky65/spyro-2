#include "common.h"
#include "spyroupdate.h"

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002A07C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002A164);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002A4C8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002A78C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002AAFC);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002AFDC);

// https://decomp.me/scratch/FRUhP
INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002B078);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002B0B8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002B228);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002B36C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002B4E4);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002B694);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002B9A0);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002BB24);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002BC68);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002BD70);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002BDBC);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002BE04);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002BFBC);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002C038);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002C0F4);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002CC88);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002D0F8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002D328);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002D7F8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002D9C4);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002DB08);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002DB8C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002DED0);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002E00C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002E2BC);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002E304);

// https://decomp.me/scratch/oeHZZ
INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002E3F8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002E440);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002E568);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002E64C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002EB00);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002EBC8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002F08C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002F7A8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8002FC20);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800308D4);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80030A14);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80030A6C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80030C94);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800313E4);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80031468);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800315BC);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80031960);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80031B94);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80031E4C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80031EAC);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800327F0);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800328E8);

// https://decomp.me/scratch/zm8aX
//INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80032A90);
void func_80032A90(int arg0) {
    func_8003305C(0xBB, arg0);
}


INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80032AB4);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80032B94);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80032C34);

// https://decomp.me/scratch/H6BJi
//INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80032E74);
void func_80032E74(void) {
    int mode;
    int type;
    int status;
    int countdown;
    unsigned char state;

    mode = D_80067024;

    if (mode == 1) {
        D_80067178 = mode;
        return;
    }

    type = D_80066F90;

    if (type == 0x1A) {
        D_80066E78++;
    } else if (type == 0x2E) {
        D_80066E79++;
    } else if (type == 0x42) {
        state = *((unsigned char *)(*(void **)((char *)D_80066F14 + 0xB0)) + 6);

        if (state < 3) {
            D_80066E7A++;
        } else if (state < 4) {
            D_80066E7A++;
            D_80066E7B++;
        } else {
            D_80066E7A++;
            D_80066E7B++;
            D_80066E7C++;
        }
    }

    status = D_80069894;
    D_80061AAC = 0;

    if (status < 0) {
        countdown = D_8006712C - 1;

        g_Spyro.m_0x258 = D_80061A8C;
        D_8006712C = countdown;

        if (countdown >= 0) {
            func_8004C1AC(&D_80067414);
            D_800698F8 = 1;
            g_Spyro.m_0x240 = 0;
        } else {
           func_8001A6F8();
        }
    } else {
        func_8004C1AC(&D_80067414);
    }
}

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_8003305C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80033300);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800347A4);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80034E0C);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800350D0);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_800351D8);

INCLUDE_ASM("asm/nonmatchings/spyroupdate", func_80035D38);
