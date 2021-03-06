//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKWorkoutDataSource-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, HKWorkoutConfiguration, NSString, NSUUID;
@protocol HKGymKitMetricsDataSourceDelegate;

@interface HKGymKitMetricsDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKWorkoutConfiguration *_workoutConfiguration;	// 16 = 0x10
    id <HKGymKitMetricsDataSourceDelegate> _delegate;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    HKTaskServerProxyProvider *_proxyProvider;	// 40 = 0x28
}

+ (id)serverInterface;	// IMP=0x0000000000217011
+ (id)clientInterface;	// IMP=0x0000000000216f46
- (void).cxx_destruct;	// IMP=0x0000000000217297
@property(retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HKGymKitMetricsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startTaskServerIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000217123
- (void)connectionInterrupted;	// IMP=0x0000000000217075
- (void)connectionInvalidated;	// IMP=0x0000000000217063
- (id)remoteInterface;	// IMP=0x000000000021704a
- (id)exportedInterface;	// IMP=0x0000000000217031
- (void)clientRemote_didReceiveMetrics:(id)arg1;	// IMP=0x0000000000216e17
- (void)workoutBuilderDidFinish;	// IMP=0x0000000000216dfd
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;	// IMP=0x0000000000216c21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

