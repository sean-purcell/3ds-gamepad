/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.1 at Sat Sep 15 11:58:50 2018. */

#include "frame.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t GamepadFrame_fields[19] = {
    PB_FIELD(  1, SINT32  , SINGULAR, STATIC  , FIRST, GamepadFrame, lx, lx, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, GamepadFrame, ly, lx, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, GamepadFrame, rx, ly, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, GamepadFrame, ry, rx, 0),
    PB_FIELD(  5, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, du, ry, 0),
    PB_FIELD(  6, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, dd, du, 0),
    PB_FIELD(  7, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, dl, dd, 0),
    PB_FIELD(  8, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, dr, dl, 0),
    PB_FIELD(  9, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, a, dr, 0),
    PB_FIELD( 10, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, b, a, 0),
    PB_FIELD( 11, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, x, b, 0),
    PB_FIELD( 12, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, y, x, 0),
    PB_FIELD( 13, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, start, y, 0),
    PB_FIELD( 14, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, select, start, 0),
    PB_FIELD( 15, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, l, select, 0),
    PB_FIELD( 16, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, zl, l, 0),
    PB_FIELD( 17, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, r, zl, 0),
    PB_FIELD( 18, BOOL    , SINGULAR, STATIC  , OTHER, GamepadFrame, zr, r, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */