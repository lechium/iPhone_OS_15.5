//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct AudioUnitMeterClipping {
    float peakValueSinceLastCall;
    unsigned char sawInfinity;
    unsigned char sawNotANumber;
};

struct PowerMeter {
    double mSampleRate;
    double mPeakDecay1;
    double mPeakDecay;
    double mDecay1;
    double mDecay;
    int mPrevBlockSize;
    int mPeakHoldCount;
    double mMaxPeak;
    struct AudioUnitMeterClipping mClipping;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double beginTime;
    double endTime;
} CDStruct_73a5d3ca;
