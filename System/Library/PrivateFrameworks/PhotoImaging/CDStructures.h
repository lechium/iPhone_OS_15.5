//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct FigLivePhotoDetectedFaceV1Struct {
    long long _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    short _field7;
    unsigned short _field8;
};

struct FigLivePhotoMetadata {
    unsigned int _field1;
    struct FigLivePhotoMetadataV1Struct _field2;
};

struct FigLivePhotoMetadataV1Struct {
    float _field1;
    long long _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    char _field9;
    char _field10;
    unsigned short _field11;
    unsigned int _field12;
    struct FigLivePhotoDetectedFaceV1Struct _field13[0];
};

struct vector<float, std::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6[3];
} CDStruct_31328b19;

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    double _field1[4];
} CDStruct_145c54d4;

typedef struct {
    double sat;
    double contrast;
    double cast;
} CDStruct_7982ab34;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int major;
    int minor;
} CDStruct_6ed351db;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_145c54d4 _field1;
    CDStruct_145c54d4 _field2;
    double _field3;
} CDStruct_92960315;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    struct {
        long long x;
        long long y;
    } origin;
    CDStruct_d58201db size;
} CDStruct_996ac03c;

// Ambiguous groups
typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    long long width;
    long long height;
} CDStruct_d58201db;

typedef struct vector<float, std::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *_field1;
    } _field3;
} vector_fef9a72d;

