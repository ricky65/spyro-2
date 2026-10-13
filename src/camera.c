#include "common.h"
#include "camera.h"

// https://decomp.me/scratch/Y1tDj
//INCLUDE_ASM("asm/nonmatchings/camera", func_8001D87C);

void func_8001D87C(void) {
    func_8001D8A4();
    func_80021DC0();
}

// https://decomp.me/scratch/zigZT
INCLUDE_ASM("asm/nonmatchings/camera", func_8001D8A4);

//INCLUDE_ASM("asm/nonmatchings/camera", func_8001DB58);
void func_8001DB58(void)
{
    int wrappedDiff;
    int specialValue;
    int wrappedDiffB8;
    int value98;
    int valueAC;
    int value94;
    int valueA8;
    int differenceC0;
    int wrappedDiffBC;

    /*
     * Calculate the wrapped difference for offset 0xB8.
     * A nonzero value at 0x150 overrides the calculation.
     */
    specialValue = g_Camera.m_0x150;

    if (specialValue == 0) {
        wrappedDiffB8 =
            (g_Camera.m_0x90 - g_Camera.m_0xA4) & 0xFFF;

        g_Camera.m_0xB8 = wrappedDiffB8;

        if (wrappedDiffB8 >= 0x801) {
            specialValue = wrappedDiffB8 - 0x1000;
            g_Camera.m_0xB8 = specialValue;
        }
    } else {
        g_Camera.m_0xB8 = specialValue;
    }

    /*
     * Calculate the direct difference at 0xC0 and the
     * wrapped difference at 0xBC.
     */
    value98 = g_Camera.m_0x98;
    valueAC = g_Camera.m_0xAC;
    value94 = g_Camera.m_0x94;
    valueA8 = g_Camera.m_0xA8;

    differenceC0 = value98 - valueAC;
    wrappedDiffBC = (value94 - valueA8) & 0xFFF;

    g_Camera.m_0xC0 = differenceC0;
    g_Camera.m_0xBC = wrappedDiffBC;

    if (wrappedDiffBC >= 0x801) {
        g_Camera.m_0xBC = wrappedDiffBC - 0x1000;
    }

    /* Calculate the wrapped difference at 0xC4. */
    wrappedDiff =
        (g_Camera.m_0x9C - g_Camera.m_0xB0) & 0xFFF;

    g_Camera.m_0xC4 = wrappedDiff;

    if (wrappedDiff >= 0x801) {
        g_Camera.m_0xC4 = wrappedDiff - 0x1000;
    }

    /* Calculate the wrapped difference at 0xC8. */
    wrappedDiff =
        (g_Camera.m_0xA0 - g_Camera.m_0xB4) & 0xFFF;

    g_Camera.m_0xC8 = wrappedDiff;

    if (wrappedDiff >= 0x801) {
        g_Camera.m_0xC8 = wrappedDiff - 0x1000;
    }
}

INCLUDE_ASM("asm/nonmatchings/camera", func_8001DC6C);

// https://decomp.me/scratch/dg0nn - 100%
INCLUDE_ASM("asm/nonmatchings/camera", func_8001E204);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001E270);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001E2E4);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001E454);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001E808);

// https://decomp.me/scratch/zNKgH
//INCLUDE_ASM("asm/nonmatchings/camera", func_8001ECCC); SetCameraPosition()

void func_8001ECCC(CameraPosition* arg0, CameraPosition* arg1, int arg2) {
    int temp_v1;

    temp_v1 = (arg1->pos.azimuth + arg2) & 0xFFF;
    arg0->pos.azimuth = temp_v1;
    if (temp_v1 > 0x800) {
        arg0->pos.azimuth = (int) (temp_v1 - 0x1000);
    }
    arg0->pos.elevation = (int) arg1->pos.elevation;
    arg0->pos.radius = (int) arg1->pos.radius;
    arg0->yaw = (int) arg1->yaw;
    arg0->pitch = (int) arg1->pitch;
}

// https://decomp.me/scratch/9Fp5c
INCLUDE_ASM("asm/nonmatchings/camera", func_8001ED20);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001EE18);

// https://decomp.me/scratch/FuNiS - 100%
INCLUDE_ASM("asm/nonmatchings/camera", func_8001EFA8);

// https://decomp.me/scratch/GBd7i
//INCLUDE_ASM("asm/nonmatchings/camera", func_8001F008); ResetCameraPosition()

void func_8001F008(CameraPosition* arg0) {
    arg0->pos.azimuth = 0;
    arg0->pos.elevation = 0;
    arg0->pos.radius = 0;
    arg0->yaw = 0;
    arg0->pitch = 0;
}

// https://decomp.me/scratch/ZWw25 - 100%
INCLUDE_ASM("asm/nonmatchings/camera", func_8001F020);

// https://decomp.me/scratch/1inpk
INCLUDE_ASM("asm/nonmatchings/camera", func_8001F0BC);

// https://decomp.me/scratch/mW3JY
//INCLUDE_ASM("asm/nonmatchings/camera", func_8001F1E4);

void func_8001F1E4(int arg0, int arg1) {
    g_Camera.m_0x168 = arg1;
    g_Camera.m_0x16C = arg0;
}

// https://decomp.me/scratch/CRD8v - 100%
INCLUDE_ASM("asm/nonmatchings/camera", func_8001F1FC);

// https://decomp.me/scratch/smjIy
INCLUDE_ASM("asm/nonmatchings/camera", func_8001F24C);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001F2E4);

// https://decomp.me/scratch/KXnuG - 100%
INCLUDE_ASM("asm/nonmatchings/camera", func_8001F4A4);

// https://decomp.me/scratch/AssXr
INCLUDE_ASM("asm/nonmatchings/camera", func_8001F524);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001F618);

INCLUDE_ASM("asm/nonmatchings/camera", func_8001F814);

// https://decomp.me/scratch/eaquc
//INCLUDE_ASM("asm/nonmatchings/camera", func_8001FA24);

void func_8001FA24(void) {
    if (D_800698BA != 0) {
        g_Camera.m_CameraFlags = 0;
    } else {
        g_Camera.m_CameraFlags = 7;
    }
}

INCLUDE_ASM("asm/nonmatchings/camera", func_8001FA58);

INCLUDE_ASM("asm/nonmatchings/camera", func_80021558);

INCLUDE_ASM("asm/nonmatchings/camera", func_800216D8);

INCLUDE_ASM("asm/nonmatchings/camera", func_80021DC0);
