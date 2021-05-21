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
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct card_file card_file, *Pcard_file;

typedef int s32;

typedef ushort u16;

struct card_file {
    s32 mSlot;
    s32 mFilenum;
    s32 mOffset;
    s32 mLen;
    u16 m_iblock;
    u16 field_0x12;
};

typedef struct card_stat card_stat, *Pcard_stat;

typedef uint u32;

struct card_stat {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    undefined field_0x8;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    u32 mIcon_addr;
    u16 mIcon_fmt;
    u16 mIconfmt[8];
    u16 mIcon_speed;
    u16 mIconSpeed[8];
    u32 mComment_addr;
    u32 mOffset_banner;
    u32 mOffset_banner_tlut;
    u32 mOffset_icon[8];
    u32 mOffset_icon_tlut[8];
    u32 mOffset_data;
};

