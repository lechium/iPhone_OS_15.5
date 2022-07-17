//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface PFLDeviceResults : NSObject
{
    NSURL *_flattenedPrivatizedWeightDataURL;	// 8 = 0x8
    NSData *_flattenedPrivatizedWeightData;	// 16 = 0x10
    long long _flattenedPrivatizedWeightCount;	// 24 = 0x18
    NSString *_flattenedPrivatizedWeightType;	// 32 = 0x20
    NSDictionary *_metricsMap;	// 40 = 0x28
    long long _modelVersion;	// 48 = 0x30
    NSString *_replayIdentifier;	// 56 = 0x38
    long long _schemaVersion;	// 64 = 0x40
    long long _shuffleId;	// 72 = 0x48
    NSString *_taskId;	// 80 = 0x50
    double _accuracy;	// 88 = 0x58
    double _loss;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000004d00
@property(nonatomic) double loss; // @synthesize loss=_loss;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long shuffleId; // @synthesize shuffleId=_shuffleId;
@property(nonatomic) long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSString *replayIdentifier; // @synthesize replayIdentifier=_replayIdentifier;
@property(nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;
@property(retain, nonatomic) NSDictionary *metricsMap; // @synthesize metricsMap=_metricsMap;
@property(retain, nonatomic) NSString *flattenedPrivatizedWeightType; // @synthesize flattenedPrivatizedWeightType=_flattenedPrivatizedWeightType;
@property(nonatomic) long long flattenedPrivatizedWeightCount; // @synthesize flattenedPrivatizedWeightCount=_flattenedPrivatizedWeightCount;
@property(retain, nonatomic) NSData *flattenedPrivatizedWeightData; // @synthesize flattenedPrivatizedWeightData=_flattenedPrivatizedWeightData;
@property(retain, nonatomic) NSURL *flattenedPrivatizedWeightDataURL; // @synthesize flattenedPrivatizedWeightDataURL=_flattenedPrivatizedWeightDataURL;
@property(readonly, nonatomic) NSArray *flattenedMetricsMap; // @dynamic flattenedMetricsMap;

@end
