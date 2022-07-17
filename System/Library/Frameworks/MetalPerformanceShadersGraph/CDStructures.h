//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AutodiffOpData;

struct MLIRContext;

struct ModuleOp {
    struct Operation *state;
};

struct Operation;

struct OwningModuleRef {
    struct ModuleOp op;
};

struct Value {
    struct ValueImpl *impl;
};

struct ValueImpl;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct shared_ptr<mlir::MLIRContext> {
    struct MLIRContext *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> {
    struct __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>> {
        struct AutodiffOpData *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<std::string, mlir::OwningModuleRef, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningModuleRef>>> {
    struct __hash_table<std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlir::OwningModuleRef>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<std::string, std::unique_ptr<BaseRuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<BaseRuntime>>>> {
    struct __hash_table<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<std::string, std::unique_ptr<GPURuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<GPURuntime>>>> {
    struct __hash_table<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;
