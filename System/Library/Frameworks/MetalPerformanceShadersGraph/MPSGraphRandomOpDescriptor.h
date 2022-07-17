//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/NSCopying-Protocol.h>

@interface MPSGraphRandomOpDescriptor : NSObject <NSCopying>
{
    unsigned int _dataType;	// 8 = 0x8
    float _min;	// 12 = 0xc
    float _max;	// 16 = 0x10
    float _mean;	// 20 = 0x14
    float _standardDeviation;	// 24 = 0x18
    unsigned long long _distribution;	// 32 = 0x20
    long long _minInteger;	// 40 = 0x28
    long long _maxInteger;	// 48 = 0x30
    unsigned long long _samplingMethod;	// 56 = 0x38
}

+ (id)descriptorWithDistribution:(unsigned long long)arg1 dataType:(unsigned int)arg2;	// IMP=0x0000000000176f8c
@property(nonatomic) unsigned long long samplingMethod; // @synthesize samplingMethod=_samplingMethod;
@property(nonatomic) float standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(nonatomic) float mean; // @synthesize mean=_mean;
@property(nonatomic) long long maxInteger; // @synthesize maxInteger=_maxInteger;
@property(nonatomic) long long minInteger; // @synthesize minInteger=_minInteger;
@property(nonatomic) float max; // @synthesize max=_max;
@property(nonatomic) float min; // @synthesize min=_min;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) unsigned long long distribution; // @synthesize distribution=_distribution;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001771f8

@end
