
struct cXyz {
    float x;
    float y;
    float z;
};

struct csXyz {
    short x;
    short y;
    short z;
};

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef char    sbyte;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
//typedef short    wchar_t;
typedef unsigned short    word;
typedef struct card_file card_file, _starPcard_file;

typedef int s32;

typedef ushort u16;

struct card_file {
    /* 0x00 */ s32 mSlot; // 0x04 bytes
    /* 0x04 */ s32 mFilenum; // 0x04 bytes
    /* 0x08 */ s32 mOffset; // 0x04 bytes
    /* 0x0C */ s32 mLen; // 0x04 bytes
    /* 0x10 */ u16 m_iblock; // 0x02 bytes
    /* 0x12 */ u16 field_0x12; // 0x02 bytes
};

typedef struct card_stat card_stat, _starPcard_stat;

typedef uint u32;

struct card_stat {
    /* 0x00 */ undefined field_0x0; // 0x01 bytes
    /* 0x01 */ undefined field_0x1; // 0x01 bytes
    /* 0x02 */ undefined field_0x2; // 0x01 bytes
    /* 0x03 */ undefined field_0x3; // 0x01 bytes
    /* 0x04 */ undefined field_0x4; // 0x01 bytes
    /* 0x05 */ undefined field_0x5; // 0x01 bytes
    /* 0x06 */ undefined field_0x6; // 0x01 bytes
    /* 0x07 */ undefined field_0x7; // 0x01 bytes
    /* 0x08 */ undefined field_0x8; // 0x01 bytes
    /* 0x09 */ undefined field_0x9; // 0x01 bytes
    /* 0x0A */ undefined field_0xa; // 0x01 bytes
    /* 0x0B */ undefined field_0xb; // 0x01 bytes
    /* 0x0C */ undefined field_0xc; // 0x01 bytes
    /* 0x0D */ undefined field_0xd; // 0x01 bytes
    /* 0x0E */ undefined field_0xe; // 0x01 bytes
    /* 0x0F */ undefined field_0xf; // 0x01 bytes
    /* 0x10 */ u32 mIcon_addr; // 0x04 bytes
    /* 0x14 */ u16 mIcon_fmt; // 0x02 bytes
    /* 0x16 */ u16 mIconfmt[8]; // 0x10 bytes
    /* 0x26 */ u16 mIcon_speed; // 0x02 bytes
    /* 0x28 */ u16 mIconSpeed[8]; // 0x10 bytes
    /* 0x38 */ u32 mComment_addr; // 0x04 bytes
    /* 0x3C */ u32 mOffset_banner; // 0x04 bytes
    /* 0x40 */ u32 mOffset_banner_tlut; // 0x04 bytes
    /* 0x44 */ u32 mOffset_icon[8]; // 0x20 bytes
    /* 0x64 */ u32 mOffset_icon_tlut[8]; // 0x20 bytes
    /* 0x84 */ u32 mOffset_data; // 0x04 bytes
};

