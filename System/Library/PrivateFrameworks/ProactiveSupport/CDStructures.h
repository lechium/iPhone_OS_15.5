//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _PASDBTransactionCompletion_ {
    _Bool _field1;
};

struct _PASDeviceStateSystemCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
};

struct _PASSqliteCacheScore {
    unsigned int crc32;
    unsigned char score;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    void *mmapBase;
    unsigned long long mmapSize;
} CDStruct_601793be;

typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_d3566df9;
