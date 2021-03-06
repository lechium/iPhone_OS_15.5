//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, OS_xpc_object;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>
{
    _Bool _running;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    double _interval;	// 24 = 0x18
    double _retryInterval;	// 32 = 0x20
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_xpc_object> *_runningActivity;	// 48 = 0x30
    NSObject<OS_xpc_object> *_overrideCriteria;	// 56 = 0x38
    double _currentInterval;	// 64 = 0x40
}

+ (void)__unregisterActivity:(id)arg1;	// IMP=0x00000000006dddb3
+ (id)logCategory;	// IMP=0x00000000006ddd83
- (void).cxx_destruct;	// IMP=0x00000000006dd803
@property(readonly, nonatomic) double currentInterval; // @synthesize currentInterval=_currentInterval;
@property(retain, nonatomic) NSObject<OS_xpc_object> *overrideCriteria; // @synthesize overrideCriteria=_overrideCriteria;
@property(retain, nonatomic) NSObject<OS_xpc_object> *runningActivity; // @synthesize runningActivity=_runningActivity;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)stop;	// IMP=0x00000000006dd68a
- (void)start;	// IMP=0x00000000006dd5dc
- (void)__transitionActivity:(id)arg1 state:(long long)arg2;	// IMP=0x00000000006dd437
- (void)__unregisterActivity;	// IMP=0x00000000006dd315
- (void)__runActivity:(id)arg1;	// IMP=0x00000000006dcf56
- (void)__checkInActivity:(id)arg1;	// IMP=0x00000000006dcb28
- (void)__registerActivity;	// IMP=0x00000000006dc964
- (id)__initialCriteria;	// IMP=0x00000000006dc85a
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000006dc61d
- (id)initWithIdentifier:(id)arg1 interval:(double)arg2 retryInterval:(double)arg3 delegate:(id)arg4;	// IMP=0x00000000006dc535

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

