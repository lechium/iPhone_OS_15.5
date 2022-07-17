//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct DAAPParserDelegate;

struct Element;

struct ML3DAAPImportItem;

struct ML3ImportItem;

struct ML3VirtualTableDataSource;

struct SearchCriteriaList;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __shared_weak_count;

struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> {
                void *__left_;
            } __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<DAAPParserDelegate> {
    struct DAAPParserDelegate *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ML3CPP::Element> {
    struct Element *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3DAAPImportItem> {
    struct ML3DAAPImportItem *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3ImportItem> {
    struct ML3ImportItem *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3VirtualTableDataSource> {
    struct ML3VirtualTableDataSource *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct sqlite3_module {
    int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<long long, NSString *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, NSString *>>> {
    struct __hash_table<std::__hash_value_type<long long, NSString *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, NSString *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
    struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *>*>, std::allocator<std::__hash_node<long long, void *>>> {
            struct __hash_node_base<std::__hash_node<long long, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<long long>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::unordered_set<std::string>*, std::allocator<std::unordered_set<std::string>>> {
        void *_field1;
    } _field3;
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
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    union {
        struct {
            void *_field1;
            unsigned int _field2;
        } _field1;
        struct SearchCriteriaList *_field2;
    } _field7;
} CDStruct_ca99c6a1;

// Ambiguous groups
typedef struct {
    unsigned int persistentId:1;
    unsigned int storeId:1;
} CDStruct_0ee5a09b;

typedef struct shared_ptr<ML3CPP::Element> {
    struct Element *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_37fa1f3d;

typedef struct shared_ptr<ML3DAAPImportItem> {
    struct ML3DAAPImportItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_9dbb0ac9;

typedef struct shared_ptr<ML3ImportItem> {
    struct ML3ImportItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_de333b55;

typedef struct shared_ptr<ML3VirtualTableDataSource> {
    struct ML3VirtualTableDataSource *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c3e79333;

typedef struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
} vector_1ee95920;

typedef struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::unordered_set<std::string>*, std::allocator<std::unordered_set<std::string>>> {
        void *_field1;
    } _field3;
} vector_c589d274;
