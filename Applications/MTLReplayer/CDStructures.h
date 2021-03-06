//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTMTLReplaySharedResourcePool, MTLRenderPassDescriptor, MTLRenderPipelineDescriptor, MTLTextureDescriptor, NSMutableArray, NSMutableDictionary, NSOperationQueue;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
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

struct DataSource;

struct GTCaptureArchiveDecompressor;

struct GTMTLBlitPassDescriptor;

struct GTMTLComputePassDescriptor;

struct GTMTLRenderPassDescriptor;

struct GTMTLReplayClient {
    struct apr_pool_t *pool;
    struct GTMTLReplayController *replayController;
    unsigned long long sessionId;
    struct {
        unsigned long long hostInfoType;
        unsigned long long profilingSendPeriod;
        unsigned long long profilingFlags;
        double xcodeOverrideScaleTessFactor;
        unsigned int traceMode;
        unsigned int xcodeOverrideFlags;
        unsigned int includeBacktraceInFbufs:1;
        unsigned int _padding:63;
    } config;
    struct {
        CDStruct_71c3c849 targetIndex;
        unsigned int wireframeLineColor;
        unsigned int outlineColor;
        float wireframeLineWidth;
        unsigned int enableDrawCallPresent:1;
        unsigned int enableWireframePresent:1;
        unsigned int enableOutlinePresent:1;
        unsigned int disablePresent:1;
        unsigned int _padding:28;
    } state;
    NSMutableArray *generateThumbnails;
    struct GTMTLReplayWireframeRenderer wireframe;
    struct GTMTLReplayOperationQueues operationQueues;
    NSMutableArray *cancelableOperations;
    id displayDelegate;
};

struct GTMTLReplayController {
    struct GTMTLReplayDataSource *_field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    id _field16;
    id _field17;
    struct GTCaptureArchiveDecompressor *_field18;
    struct GTMTLSMCommandEncoder _field19;
    struct GTMTLSMCommandEncoder _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    CDStruct_71c3c849 _field23;
    struct {
        struct apr_hash_t *_field1;
    } _field24;
    struct {
        struct apr_array_header_t *_field1;
        _Atomic int _field2;
        _Atomic int _field3;
        id _field4;
        id _field5;
    } _field25;
    struct {
        id _field1;
        struct apr_hash_t *_field2;
        struct apr_hash_t *_field3;
    } _field26;
    id _field27;
    int _field28;
    char _field29[4];
    struct GTMTLReplayThreadData _field30[0];
};

struct GTMTLReplayDataSource;

struct GTMTLReplayOperationQueues {
    NSOperationQueue *serialQueue;
    NSOperationQueue *parallelQueue;
};

struct GTMTLReplayThreadData {
    struct _opaque_pthread_t *_field1;
    struct GTMTLReplayController *_field2;
    struct apr_hash_t *_field3;
};

struct GTMTLReplayWireframeRenderer {
    MTLTextureDescriptor *textureDescriptor;
    MTLRenderPassDescriptor *renderPassDescriptor;
    MTLRenderPipelineDescriptor *renderPipelineDescriptor;
    id texture;
    unsigned long long textureSampleCount;
    id outlinePipelineState;
    id postVertexDumpBuffer;
    MTLRenderPipelineDescriptor *resizeRenderPipelineDescriptor;
    id resizeColorFunction;
    id resizeColorUintFunction;
    id resizeColorSintFunction;
    id resizeDepthFunction;
    id resizeStencilFunction;
    id upscaleSamplerState;
    id downscaleSamplerState;
    id quadData;
    NSMutableDictionary *resizeRenderPipelineStates;
};

struct GTMTLResourceStatePassDescriptor;

struct GTMTLSMCommandEncoder {
    struct GTMTLSMObject _field1;
    unsigned long long _field2;
    char *_field3;
    union {
        struct GTMTLSMRenderCommandEncoder _field1;
        struct {
            struct GTMTLComputePassDescriptor *_field1;
            unsigned long long _field2;
            unsigned long long _field3[1];
            CDUnion_d1765693 _field4;
            unsigned long long _field5[128];
            unsigned long long _field6[16];
            CDStruct_4c83c94d _field7;
            unsigned long long _field8;
            unsigned int _field9[31];
            unsigned int _field10;
            unsigned int _field11;
            unsigned int _field12;
            float _field13[16];
            float _field14[16];
            unsigned char _field15;
            char _field16[7];
        } _field2;
        struct {
            unsigned long long _field1;
        } _field3;
        struct {
            struct GTMTLBlitPassDescriptor *_field1;
        } _field4;
        struct GTMTLSMParallelCommandEncoder _field5;
        struct {
            struct GTMTLResourceStatePassDescriptor *_field1;
        } _field6;
    } _field4;
};

struct GTMTLSMObject {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    struct GTMTLSMObject *_field6;
};

struct GTMTLSMParallelCommandEncoder {
    struct GTMTLRenderPassDescriptor *_field1;
    unsigned long long _field2[8];
    unsigned long long _field3[8];
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    char _field8[4];
};

struct GTMTLSMRenderCommandEncoder {
    struct GTMTLRenderPassDescriptor *_field1;
    unsigned long long _field2[1];
    CDUnion_d1765693 _field3;
    unsigned long long _field4[128];
    unsigned long long _field5[16];
    unsigned long long _field6[1];
    CDUnion_d1765693 _field7;
    unsigned long long _field8[128];
    unsigned long long _field9[16];
    unsigned long long _field10[1];
    CDUnion_d1765693 _field11;
    unsigned long long _field12[31];
    unsigned long long _field13[16];
    unsigned long long _field14;
    unsigned long long _field15;
    struct GTMTLViewport _field16[16];
    unsigned long long _field17;
    struct GTMTLScissorRect _field18[16];
    unsigned long long _field19;
    struct GTMTLVertexAmplificationViewMapping *_field20;
    unsigned long long _field21;
    unsigned long long _field22[8];
    unsigned long long _field23[8];
    float _field24;
    float _field25;
    float _field26;
    float _field27[4];
    unsigned int _field28;
    unsigned int _field29;
    float _field30[16];
    float _field31[16];
    float _field32[16];
    float _field33[16];
    float _field34[16];
    float _field35[16];
    float _field36;
    float _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41[31];
    unsigned int _field42[31];
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned char _field46;
    unsigned char _field47;
    unsigned char _field48;
    unsigned char _field49;
    unsigned char _field50;
    unsigned char _field51;
    unsigned char _field52;
    unsigned char _field53;
    unsigned char _field54;
    unsigned char _field55;
    unsigned char _field56;
    char _field57[1];
};

struct GTMTLScissorRect {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct GTMTLVertexAmplificationViewMapping;

struct GTMTLViewport {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct GTResourceDownloaderRequest {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    union {
        struct {
            unsigned long long _field1;
            unsigned long long _field2;
        } _field1;
        struct {
            unsigned short _field1;
            unsigned short _field2;
            unsigned short _field3[3];
            unsigned short _field4[3];
            unsigned int _field5;
            unsigned int _field6;
            unsigned int _field7;
            unsigned short _field8;
            unsigned char _field9;
            unsigned char _field10;
        } _field2;
        CDStruct_71c3c849 _field3;
        struct {
            unsigned long long _field1;
            unsigned long long *_field2;
            unsigned int _field3;
            char _field4[4];
        } _field4;
    } _field5;
};

struct Sampler {
    CDUnknownFunctionPointerType *_field1;
    struct DataSource *_field2;
    unsigned long long _field3;
};

struct Server {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    unsigned long long _field3;
    struct Transport *_field4;
    struct Sampler *_field5;
    unsigned long long _field6;
    id _field7;
    id _field8;
    int _field9;
    id _field10;
    id _field11[4];
    id _field12[4];
    char *_field13[4];
    char *_field14[4];
    unsigned long long _field15[4];
};

struct SharedBufferArray {
    GTMTLReplaySharedResourcePool *resourcePool;
    NSMutableArray *retainArray;
    unsigned long long bufferOffset;
};

struct SharedCommandBuffer {
    id commandQueue;
    id commandBuffer;
    id commandEncoder;
};

struct Transport {
    CDUnknownFunctionPointerType *_field1;
};

struct VMBuffer {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct apr_array_header_t;

struct apr_hash_t;

struct apr_pool_t;

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool __a_value;
    } __a_;
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
        _Atomic int __a_value;
    } __a_;
};

struct atomic<unsigned int> {
    struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
        _Atomic unsigned int __a_value;
    } __a_;
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct dy_transport_message_header {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct dy_transport_message_unpack_s {
    struct dy_transport_message_header _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    _Bool _field6;
};

struct iovec {
    void *iov_base;
    unsigned long long iov_len;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<const char *, OpaqueJSString *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSString *>>> {
    struct __hash_table<std::__hash_value_type<const char *, OpaqueJSString *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::hash<const char *>, std::equal_to<const char *>, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::equal_to<const char *>, std::hash<const char *>, true>, std::allocator<std::__hash_value_type<const char *, OpaqueJSString *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::hash<const char *>, std::equal_to<const char *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::equal_to<const char *>, std::hash<const char *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<const char *, OpaqueJSValue *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSValue *>>> {
    struct __hash_table<std::__hash_value_type<const char *, OpaqueJSValue *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::hash<const char *>, std::equal_to<const char *>, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::equal_to<const char *>, std::hash<const char *>, true>, std::allocator<std::__hash_value_type<const char *, OpaqueJSValue *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::hash<const char *>, std::equal_to<const char *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::equal_to<const char *>, std::hash<const char *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> {
    struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<std::pair<NSDictionary *, NSArray *>, std::allocator<std::pair<NSDictionary *, NSArray *>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<NSDictionary *, NSArray *>*, std::allocator<std::pair<NSDictionary *, NSArray *>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::queue<unsigned int>, std::allocator<std::queue<unsigned int>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::queue<unsigned int>*, std::allocator<std::queue<unsigned int>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::unordered_set<unsigned int>, std::allocator<std::unordered_set<unsigned int>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::unordered_set<unsigned int>*, std::allocator<std::unordered_set<unsigned int>>> {
        void *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned int function;
    unsigned int subCommand;
} CDStruct_71c3c849;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1[31];
    unsigned long long _field2[31];
} CDStruct_1eaeb8ec;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

// Template types
typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_5886a005;

#pragma mark Typedef'd Unions

typedef union {
    CDStruct_1eaeb8ec _field1;
    CDStruct_1eaeb8ec _field2;
} CDUnion_d1765693;

