#ifndef __CAMERA_H
#define __CAMERA_H

#include "common.h"

// Size 0x1F4 / 500, possibly including padding

typedef struct {
    SHORTMATRIX m_ProjectionMatrix; // 0x00
    SHORTMATRIX m_ViewMatrix;       // 0x14
    Vector3D m_Position;            // 0x28

    char pad_0x34[0xC];              // 0x34–0x3F

    int m_0x40;                      // 0x40
    
    char pad_0x44[4];                // 0x44–0x47
    
    short m_0x48;                    // 0x48; angle-related field
    
    char pad_0x4A[2];                // 0x4A–0x4B

    int m_CameraMode;                // 0x4C; mode selector / jump-table index
    int m_CameraSubstate;            // 0x50; small state values observed
    int m_0x54;                      // 0x54; reset on mode changes, thresholds checked
    int m_CameraFlags;               // 0x58; bits 0x1 and 0x4 are tested

    unsigned char unk_0x5C;          // 0x5C; read and cleared as a byte
    char pad_0x5D[3];                // 0x5D–0x5F

    char pad_0x60[0x30];             // 0x60–0x8F

    int m_0x90;                      // 0x90
    int m_0x94;                      // 0x94
    int m_0x98;                      // 0x98
    int m_0x9C;                      // 0x9C
    int m_0xA0;                      // 0xA0

    int m_0xA4;                      // 0xA4
    int m_0xA8;                      // 0xA8
    int m_0xAC;                      // 0xAC
    int m_0xB0;                      // 0xB0
    int m_0xB4;                      // 0xB4

    int m_0xB8;                      // 0xB8
    int m_0xBC;                      // 0xBC
    int m_0xC0;                      // 0xC0
    int m_0xC4;                      // 0xC4
    int m_0xC8;                      // 0xC8

    char pad_0xCC[0x84];             // 0xCC–0x14F
    int m_0x150;                     // 0x150; overrides result at 0xB8 when nonzero
    char pad_0x154[0x14];            // 0x154–0x167

    int m_0x168;                     // 0x168
    int m_0x16C;                     // 0x16C

    int unk_0x170[5];                // 0x170–0x183; active 20-byte block

    char pad_0x184[0x70];            // 0x184–0x1F3
} Camera;

extern Camera g_Camera;

typedef struct {
    SphericalCoordinates pos;
    int yaw;
    int pitch;
} CameraPosition;

extern void func_8001D8A4();                                  /* extern */
extern void func_80021DC0();                                  /* extern */


extern char D_800698BA;

#endif
