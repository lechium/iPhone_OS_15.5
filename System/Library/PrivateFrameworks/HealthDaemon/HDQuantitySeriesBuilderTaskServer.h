//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKQuantitySeriesSampleBuilderTaskServerInterface-Protocol.h>

@class HKQuantitySample, HKQuantitySeriesSampleBuilderTaskServerConfiguration, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDQuantitySeriesBuilderTaskServer <HKQuantitySeriesSampleBuilderTaskServerInterface>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HKQuantitySample *_series;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSMutableArray *_values;	// 32 = 0x20
    NSError *_fatalError;	// 40 = 0x28
    CDUnknownBlockType _queue_activeHandler;	// 48 = 0x30
    HKQuantitySeriesSampleBuilderTaskServerConfiguration *_configuration;	// 56 = 0x38
    CDUnknownBlockType _unitTest_saveSamplesCompletion;	// 64 = 0x40
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003c6cef
+ (Class)configurationClass;	// IMP=0x00000000003c6cde
+ (id)requiredEntitlements;	// IMP=0x00000000003c6bf0
+ (id)taskIdentifier;	// IMP=0x00000000003c6bdc
- (void).cxx_destruct;	// IMP=0x00000000003c88cb
@property(copy, nonatomic) CDUnknownBlockType unitTest_saveSamplesCompletion; // @synthesize unitTest_saveSamplesCompletion=_unitTest_saveSamplesCompletion;
- (id)remoteInterface;	// IMP=0x00000000003c88a1
- (id)exportedInterface;	// IMP=0x00000000003c8888
@property(readonly, nonatomic) long long state;
- (void)remote_discardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003c7b84
- (void)remote_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003c720f
- (void)remote_insertQuantitySeries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003c6cf7
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000003c6bfd

@end
