//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RespiratoryHealth/HKRPOxygenSaturationSessionClientInterface-Protocol.h>
#import <RespiratoryHealth/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString;
@protocol HKRPOxygenSaturationSessionDelegate;

@interface HKRPOxygenSaturationSession : NSObject <_HKXPCExportable, HKRPOxygenSaturationSessionClientInterface>
{
    id <HKRPOxygenSaturationSessionDelegate> _delegate;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    HKTaskServerProxyProvider *_proxyProvider;	// 24 = 0x18
}

+ (id)serverInterface;	// IMP=0x0000000000006aa0
+ (id)clientInterface;	// IMP=0x0000000000006a80
- (void).cxx_destruct;	// IMP=0x0000000000006c64
@property(retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) __weak id <HKRPOxygenSaturationSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connectionInterrupted;	// IMP=0x0000000000006af8
- (void)connectionInvalidated;	// IMP=0x0000000000006af2
- (id)remoteInterface;	// IMP=0x0000000000006ad9
- (id)exportedInterface;	// IMP=0x0000000000006ac0
- (void)clientRemote_didEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6;	// IMP=0x0000000000006827
- (void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;	// IMP=0x000000000000674f
- (void)clientRemote_didSendFeedback:(unsigned long long)arg1;	// IMP=0x000000000000664f
- (void)abortWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006539
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000640c
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000006322
- (id)init;	// IMP=0x00000000000062a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
