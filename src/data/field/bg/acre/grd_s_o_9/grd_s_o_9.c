#include "libforest/gbi_extensions.h"

extern u8 wave3_tex_dummy[];
extern u8 wave1_tex_dummy[];
extern u8 beach2_tex_dummy2[];

static Vtx grd_s_o_9_v[] = {
#include "assets/field/bg/grd_s_o_9_v.inc"
};

extern Gfx grd_s_o_9_model[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 32, 48, 144, 255),
    gsSPDisplayList(0x0C000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPLoadTextureBlock_4b_Dolphin(beach2_tex_dummy2, G_IM_FMT_I, 32, 16, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_o_9_v[0], 15, 0),
    gsSPNTrianglesInit_5b(
        16, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        0, 4, 5 // tri2
    ),
    gsSPNTriangles_5b(
        4, 6, 5, // tri0
        7, 4, 8, // tri1
        4, 9, 8, // tri2
        7, 10, 11 // tri3
    ),
    gsSPNTriangles_5b(
        10, 12, 11, // tri0
        1, 5, 13, // tri1
        1, 0, 5, // tri2
        4, 2, 9 // tri3
    ),
    gsSPNTriangles_5b(
        4, 0, 2, // tri0
        4, 11, 6, // tri1
        4, 7, 11, // tri2
        10, 8, 14 // tri3
    ),
    gsSPNTriangles_5b(
        10, 7, 8, // tri0
        0, 0, 0, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsSPEndDisplayList(),
};

extern Gfx grd_s_o_9_modelT[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, TEXEL0, TEXEL1, 0, TEXEL0, 0, PRIMITIVE, 0, SHADE, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 60, 120, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, wave1_tex_dummy),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, wave3_tex_dummy),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPDisplayList(0x0D000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_o_9_v[15], 32, 0),
    gsSPNTrianglesInit_5b(
        36, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        1, 4, 3 // tri2
    ),
    gsSPNTriangles_5b(
        0, 5, 1, // tri0
        5, 6, 1, // tri1
        6, 7, 1, // tri2
        7, 4, 1 // tri3
    ),
    gsSPNTriangles_5b(
        5, 8, 9, // tri0
        8, 10, 9, // tri1
        10, 7, 9, // tri2
        5, 11, 8 // tri3
    ),
    gsSPNTriangles_5b(
        11, 12, 8, // tri0
        12, 10, 8, // tri1
        5, 13, 11, // tri2
        13, 12, 11 // tri3
    ),
    gsSPNTriangles_5b(
        13, 14, 12, // tri0
        5, 15, 13, // tri1
        5, 16, 15, // tri2
        15, 14, 13 // tri3
    ),
    gsSPNTriangles_5b(
        15, 17, 14, // tri0
        16, 18, 15, // tri1
        18, 19, 15, // tri2
        19, 17, 15 // tri3
    ),
    gsSPNTriangles_5b(
        16, 20, 18, // tri0
        20, 19, 18, // tri1
        20, 21, 19, // tri2
        16, 22, 23 // tri3
    ),
    gsSPNTriangles_5b(
        22, 24, 23, // tri0
        24, 25, 23, // tri1
        25, 21, 23, // tri2
        22, 26, 27 // tri3
    ),
    gsSPNTriangles_5b(
        26, 28, 27, // tri0
        28, 25, 27, // tri1
        22, 29, 30, // tri2
        29, 28, 30 // tri3
    ),
    gsSPNTriangles_5b(
        29, 31, 28, // tri0
        0, 0, 0, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsSPVertex(&grd_s_o_9_v[47], 10, 0),
    gsSPNTrianglesInit_5b(
        10, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        1, 4, 3 // tri2
    ),
    gsSPNTriangles_5b(
        0, 5, 1, // tri0
        0, 6, 5, // tri1
        5, 4, 1, // tri2
        5, 7, 4 // tri3
    ),
    gsSPNTriangles_5b(
        6, 8, 5, // tri0
        8, 9, 5, // tri1
        9, 7, 5, // tri2
        0, 0, 0 // tri3
    ),
    gsSPEndDisplayList(),
};