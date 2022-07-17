//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct GreedyClusterer;

struct HMIVideoEncoderDataRate {
    long long _field1;
    long long _field2;
};

struct Mat;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<homeai::clustering::GreedyClusterer> {
    struct GreedyClusterer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct vector<cv::Mat, std::allocator<cv::Mat>> {
    struct Mat *_field1;
    struct Mat *_field2;
    struct __compressed_pair<cv::Mat *, std::allocator<cv::Mat>> {
        struct Mat *_field1;
    } _field3;
};

struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<cv::Point_<float>*, std::allocator<cv::Point_<float>>> {
        void *_field1;
    } _field3;
};

struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
        char *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Template types
typedef struct vector<cv::Mat, std::allocator<cv::Mat>> {
    struct Mat *_field1;
    struct Mat *_field2;
    struct __compressed_pair<cv::Mat *, std::allocator<cv::Mat>> {
        struct Mat *_field1;
    } _field3;
} vector_a9771444;

typedef struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<cv::Point_<float>*, std::allocator<cv::Point_<float>>> {
        void *_field1;
    } _field3;
} vector_3e5b63dd;

typedef struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_8ca568ff;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
        char *_field1;
    } _field3;
} vector_5af41bf5;
