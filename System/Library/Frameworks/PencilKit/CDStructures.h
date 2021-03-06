//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AnimatingStroke;

struct AttachmentTileInfo;

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGImage;

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

struct Edge {
    struct CGPoint _field1;
    struct CGPoint _field2;
};

struct IntPoint;

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct PKCompressedStrokePoint {
    struct _PKPoint _field1;
    float _field2;
    float _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned short _field9;
};

struct PKFunction;

struct PKMetalLiveStrokePaintStrokePoint;

struct PKMetalPaintStrokePoint;

struct PKMetalParticleStrokePoint;

struct PKOutputFunction;

struct PKProtobufUnknownFields;

struct PKRunningStat {
    long long numValues;
    long long numValuesOverLimit;
    double oldM;
    double newM;
    double oldS;
    double newS;
    double minValue;
    double maxValue;
    double limit;
    struct os_unfair_lock_s lock;
};

struct PKStrokePathPointsPrivate {
    shared_ptr_963287a8 constants;
    struct vector<unsigned char, std::allocator<unsigned char>> pointsData;
};

struct PKStrokePathPointsShared;

struct StrokeID {
    CDUnknownFunctionPointerType *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field5;
};

struct TimestampedPoint;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PKPoint {
    float _field1;
    float _field2;
};

struct _PKStrokeID {
    unsigned int clock;
    unsigned char replicaUUID[16];
    unsigned int subclock;
};

struct _PKStrokePoint {
    double timestamp;
    struct CGPoint location;
    double radius;
    double aspectRatio;
    double edgeWidth;
    double force;
    double azimuth;
    double altitude;
    double opacity;
};

struct __shared_weak_count;

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<PKProtobufUnknownFields> {
    struct PKProtobufUnknownFields *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<PKStrokePathPointsShared> {
    struct PKStrokePathPointsShared *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::vector<(anonymous namespace)::StrokeVertex>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<PKFunction, std::default_delete<PKFunction>> {
    struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> {
        struct PKFunction *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::vector<PKCompressedStrokePoint>, std::default_delete<std::vector<PKCompressedStrokePoint>>> {
    struct __compressed_pair<std::vector<PKCompressedStrokePoint>*, std::default_delete<std::vector<PKCompressedStrokePoint>>> {
        void *_field1;
    } _field1;
};

struct unordered_map<unsigned long long, PKMetalShader *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PKMetalShader *>>> {
    struct __hash_table<std::__hash_value_type<unsigned long long, PKMetalShader *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, PKMetalShader *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<(anonymous namespace)::AnimatingStroke, std::allocator<(anonymous namespace)::AnimatingStroke>> {
    struct AnimatingStroke *__begin_;
    struct AnimatingStroke *__end_;
    struct __compressed_pair<(anonymous namespace)::AnimatingStroke *, std::allocator<(anonymous namespace)::AnimatingStroke>> {
        struct AnimatingStroke *__value_;
    } __end_cap_;
};

struct vector<AttachmentTileInfo, std::allocator<AttachmentTileInfo>> {
    struct AttachmentTileInfo *_field1;
    struct AttachmentTileInfo *_field2;
    struct __compressed_pair<AttachmentTileInfo *, std::allocator<AttachmentTileInfo>> {
        struct AttachmentTileInfo *_field1;
    } _field3;
};

struct vector<CGPoint, std::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
};

struct vector<ClipperLib::IntPoint, std::allocator<ClipperLib::IntPoint>> {
    struct IntPoint *__begin_;
    struct IntPoint *__end_;
    struct __compressed_pair<ClipperLib::IntPoint *, std::allocator<ClipperLib::IntPoint>> {
        struct IntPoint *__value_;
    } __end_cap_;
};

struct vector<PKInputPoint, std::allocator<PKInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<PKMetalLiveStrokePaintStrokePoint, std::allocator<PKMetalLiveStrokePaintStrokePoint>> {
    struct PKMetalLiveStrokePaintStrokePoint *__begin_;
    struct PKMetalLiveStrokePaintStrokePoint *__end_;
    struct __compressed_pair<PKMetalLiveStrokePaintStrokePoint *, std::allocator<PKMetalLiveStrokePaintStrokePoint>> {
        struct PKMetalLiveStrokePaintStrokePoint *__value_;
    } __end_cap_;
};

struct vector<PKMetalPaintStrokePoint, std::allocator<PKMetalPaintStrokePoint>> {
    struct PKMetalPaintStrokePoint *__begin_;
    struct PKMetalPaintStrokePoint *__end_;
    struct __compressed_pair<PKMetalPaintStrokePoint *, std::allocator<PKMetalPaintStrokePoint>> {
        struct PKMetalPaintStrokePoint *__value_;
    } __end_cap_;
};

struct vector<PKMetalParticleStrokePoint, std::allocator<PKMetalParticleStrokePoint>> {
    struct PKMetalParticleStrokePoint *__begin_;
    struct PKMetalParticleStrokePoint *__end_;
    struct __compressed_pair<PKMetalParticleStrokePoint *, std::allocator<PKMetalParticleStrokePoint>> {
        struct PKMetalParticleStrokePoint *__value_;
    } __end_cap_;
};

struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> {
    struct PKOutputFunction *__begin_;
    struct PKOutputFunction *__end_;
    struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> {
        struct PKOutputFunction *__value_;
    } __end_cap_;
};

struct vector<TimestampedPoint, std::allocator<TimestampedPoint>> {
    struct TimestampedPoint *__begin_;
    struct TimestampedPoint *__end_;
    struct __compressed_pair<TimestampedPoint *, std::allocator<TimestampedPoint>> {
        struct TimestampedPoint *__value_;
    } __end_cap_;
};

struct vector<_PKFloatRange, std::allocator<_PKFloatRange>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<_PKFloatRange *, std::allocator<_PKFloatRange>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<_PKStrokePoint, std::allocator<_PKStrokePoint>> {
    struct _PKStrokePoint *__begin_;
    struct _PKStrokePoint *__end_;
    struct __compressed_pair<_PKStrokePoint *, std::allocator<_PKStrokePoint>> {
        struct _PKStrokePoint *__value_;
    } __end_cap_;
};

struct vector<double, std::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::vector<ClipperLib::IntPoint>*, std::allocator<std::vector<ClipperLib::IntPoint>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long x;
    unsigned long long y;
    unsigned long long width;
    unsigned long long height;
} CDStruct_5f3a0cd7;

typedef struct {
    double red;
    double green;
    double blue;
    double alpha;
} CDStruct_3ead2808;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int arcType;
    _Bool before;
    double snapAngle;
} CDStruct_cfd08fee;

typedef struct CDStruct_183601bc;

typedef struct {
    int _field1[4];
    int _field2[4];
    double _field3[4];
    double _field4[4];
    struct CGImage *_field5;
    _Bool _field6;
} CDStruct_c5e6d23b;

typedef struct {
    struct CGPoint point;
    double force;
    double azimuth;
    double altitude;
    double velocity;
    double timestamp;
    _Bool predicted;
    long long estimationUpdateIndex;
    double length;
    _Bool hasEstimatedAltitudeAndAzimuth;
} CDStruct_6422aa5d;

typedef struct {
    union {
        struct {
            unsigned int isHidden:1;
            unsigned int hiddenInherited:1;
            unsigned int inkInherited:1;
            unsigned int transformInherited:1;
            unsigned int isNewCopy:1;
            unsigned int randomSeed:32;
            unsigned int isRandomSeedSet:1;
            unsigned int isInProgressScribbleStroke:1;
        } ;
        unsigned long long allFlags;
    } ;
} CDStruct_36d45204;

typedef struct {
    struct _PKStrokePoint _field1;
    _Bool _field2;
    long long _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    id _field8;
    unsigned long long _field9;
} CDStruct_713d3c04;

// Template types
typedef struct shared_ptr<PKStrokePathPointsShared> {
    struct PKStrokePathPointsShared *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_963287a8;

typedef struct unique_ptr<PKFunction, std::default_delete<PKFunction>> {
    struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> {
        struct PKFunction *__value_;
    } __ptr_;
} unique_ptr_efb28c44;

typedef struct unique_ptr<std::vector<PKCompressedStrokePoint>, std::default_delete<std::vector<PKCompressedStrokePoint>>> {
    struct __compressed_pair<std::vector<PKCompressedStrokePoint>*, std::default_delete<std::vector<PKCompressedStrokePoint>>> {
        void *_field1;
    } _field1;
} unique_ptr_8800e725;

typedef struct vector<AttachmentTileInfo, std::allocator<AttachmentTileInfo>> {
    struct AttachmentTileInfo *_field1;
    struct AttachmentTileInfo *_field2;
    struct __compressed_pair<AttachmentTileInfo *, std::allocator<AttachmentTileInfo>> {
        struct AttachmentTileInfo *_field1;
    } _field3;
} vector_168079bb;

typedef struct vector<CGPoint, std::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
} vector_48b48a27;

typedef struct vector<PKInputPoint, std::allocator<PKInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_59e02562;

typedef struct vector<double, std::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *__value_;
    } __end_cap_;
} vector_0e047154;

