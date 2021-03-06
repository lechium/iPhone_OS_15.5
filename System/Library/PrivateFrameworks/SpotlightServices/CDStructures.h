//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct FeatureInfo {
    id _field1;
    unsigned short _field2;
    unsigned char _field3;
};

struct PRSL2FeatureScoreInfo {
    unsigned short *_field1;
    float *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct PRSL2FeatureScoreSmallCache {
    unsigned short features[32];
    float scores[32];
    unsigned short count;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFArray;

struct __CFDictionary;

struct _resultset_computation_ctx {
    float *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8[44];
};

struct fan_out_value {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct prs_feature_population_ctx_t {
    struct __CFArray *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    unsigned char _field4;
    float _field5[28];
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    long long _field13;
    unsigned long long _field14;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    unsigned long long _field2[3];
    unsigned long long _field3[3];
    unsigned long long _field4[3];
    void *_field5[0];
} CDStruct_ff5cd05b;

typedef struct {
    char *containerBytes;
    struct {
        unsigned int embeddedReference;
        unsigned char type;
    } reference;
} CDStruct_b7fac349;

#pragma mark Typedef'd Unions

typedef union {
    struct __CFDictionary *_field1;
    int _field2[5];
} CDUnion_fc2819da;

