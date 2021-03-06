//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
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

struct CHCandidateResult {
    unsigned int _field1;
    float _field2;
};

struct CHCodeMap {
    char *_field1;
    unsigned long long _field2;
    unsigned int *_field3;
    unsigned int _field4;
};

struct CHDrawingStrokes {
    struct vector<std::vector<double>, std::allocator<std::vector<double>>> strokeBounds;
    struct vector<bool, std::allocator<bool>> strokeBoundsValidity;
    struct vector<std::vector<double>, std::allocator<std::vector<double>>> strokes;
    long long currentStrokeIndex;
    unsigned int mSize;
    struct Matrix<double> bitmap;
    double lineHeight;
    struct vector<int, std::allocator<int>> sparseBitmap;
};

struct CHFastGroupingCluster;

struct CHLineSegment {
    struct CGPoint _field1;
    struct CGPoint _field2;
};

struct CHNeuralNetwork {
    CDUnknownFunctionPointerType _field1;
    _Bool _field2;
    struct CHCodeMap *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    id _field8;
    id _field9;
    struct CGRect _field10;
};

struct CVNLPTextDecodingPruningPolicy {
    long long strategy;
    _Bool shouldSort;
    float threshold;
    unsigned int maxNumberOfCandidates;
};

struct Matrix<double> {
    CDUnknownFunctionPointerType *_vptr$Matrix;
    double *_data;
    unsigned int _w;
    unsigned int _h;
};

struct Matrix<float> {
    CDUnknownFunctionPointerType *_field1;
    float *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct NetworkEdge {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    double _field5;
    double _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
};

struct VariantMap {
    int *_field1;
    int *_field2;
    int *_field3;
    int _field4;
    int *_field5;
    unsigned long long _field6;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> {
    void *__value_;
};

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *__left_;
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

struct map<std::set<long>, std::vector<CHCandidateResult>, std::less<std::set<long>>, std::allocator<std::pair<const std::set<long>, std::vector<CHCandidateResult>>>> {
    struct __tree<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>, std::allocator<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> {
    struct __tree<std::__value_type<std::string, std::pair<std::string, double>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::pair<std::string, double>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::pair<std::string, double>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> {
    struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> {
    struct __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct pair<double, double> {
    double _field1;
    double _field2;
};

struct set<long, std::less<long>, std::allocator<long>> {
    struct __tree<long, std::less<long>, std::allocator<long>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<long, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<long>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct vector<CGPoint, std::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
};

struct vector<CGRect, std::allocator<CGRect>> {
    struct CGRect *_field1;
    struct CGRect *_field2;
    struct __compressed_pair<CGRect *, std::allocator<CGRect>> {
        struct CGRect *_field1;
    } _field3;
};

struct vector<CGVector, std::allocator<CGVector>> {
    struct CGVector *__begin_;
    struct CGVector *__end_;
    struct __compressed_pair<CGVector *, std::allocator<CGVector>> {
        struct CGVector *__value_;
    } __end_cap_;
};

struct vector<CHCandidateResult, std::allocator<CHCandidateResult>> {
    struct CHCandidateResult *_field1;
    struct CHCandidateResult *_field2;
    struct __compressed_pair<CHCandidateResult *, std::allocator<CHCandidateResult>> {
        struct CHCandidateResult *_field1;
    } _field3;
};

struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> {
    struct CHFastGroupingCluster *__begin_;
    struct CHFastGroupingCluster *__end_;
    struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> {
        struct CHFastGroupingCluster *__value_;
    } __end_cap_;
};

struct vector<bool, std::allocator<bool>> {
    unsigned long long *__begin_;
    unsigned long long __size_;
    struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
        unsigned long long __value_;
    } __cap_alloc_;
};

struct vector<const void *, std::allocator<const void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<const void **, std::allocator<const void *>> {
        void **_field1;
    } _field3;
};

struct vector<float, std::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<long, std::allocator<long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long *, std::allocator<long>> {
        long long *_field1;
    } _field3;
};

struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::map<long, long>*, std::allocator<std::map<long, long>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::vector<double>, std::allocator<std::vector<double>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::vector<double>*, std::allocator<std::vector<double>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#if 0
// Names with conflicting types:
typedef struct ?<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> **_field1;
} vector_242c0691;

typedef struct ?<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> __end_cap_;
} vector_82477975;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    double strokeClutterFilteringDuration;
    double strokeClassificationDuration;
    double groupingDuration;
    double recognitionDuration;
    double totalDuration;
} CDStruct_76929b14;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

// Template types
typedef struct Matrix<float> {
    CDUnknownFunctionPointerType *_field1;
    float *_field2;
    unsigned int _field3;
    unsigned int _field4;
} Matrix_273a43f8;

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

typedef struct map<std::set<long>, std::vector<CHCandidateResult>, std::less<std::set<long>>, std::allocator<std::pair<const std::set<long>, std::vector<CHCandidateResult>>>> {
    struct __tree<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>, std::allocator<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_f81ed60d;

typedef struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> {
    struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_3815c996;

typedef struct map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> {
    struct __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_0bf4b13c;

typedef struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_aaf15588;

typedef struct pair<double, double> {
    double _field1;
    double _field2;
} pair_b2618ff2;

typedef struct set<long, std::less<long>, std::allocator<long>> {
    struct __tree<long, std::less<long>, std::allocator<long>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<long, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<long>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} set_f63680ae;

typedef struct vector<CGPoint, std::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
} vector_48b48a27;

typedef struct vector<CGRect, std::allocator<CGRect>> {
    struct CGRect *_field1;
    struct CGRect *_field2;
    struct __compressed_pair<CGRect *, std::allocator<CGRect>> {
        struct CGRect *_field1;
    } _field3;
} vector_f91331c9;

typedef struct vector<CHCandidateResult, std::allocator<CHCandidateResult>> {
    struct CHCandidateResult *_field1;
    struct CHCandidateResult *_field2;
    struct __compressed_pair<CHCandidateResult *, std::allocator<CHCandidateResult>> {
        struct CHCandidateResult *_field1;
    } _field3;
} vector_c76aa67f;

typedef struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> {
    struct CHFastGroupingCluster *__begin_;
    struct CHFastGroupingCluster *__end_;
    struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> {
        struct CHFastGroupingCluster *__value_;
    } __end_cap_;
} vector_4ea6921b;

typedef struct vector<const void *, std::allocator<const void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<const void **, std::allocator<const void *>> {
        void **_field1;
    } _field3;
} vector_ce83c556;

typedef struct vector<float, std::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *_field1;
    } _field3;
} vector_fef9a72d;

typedef struct vector<long, std::allocator<long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long *, std::allocator<long>> {
        long long *_field1;
    } _field3;
} vector_7697e86b;

typedef struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::map<long, long>*, std::allocator<std::map<long, long>>> {
        void *__value_;
    } __end_cap_;
} vector_9d2b1d4b;

