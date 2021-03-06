//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/HKFeatureAvailabilityProvidingObserver-Protocol.h>

@class HKSPFeatureAvailabilityStore, NSString;
@protocol OS_dispatch_queue, WFHealthFeatureObserver;

@interface WFHealthFeatureAvailability : NSObject <HKFeatureAvailabilityProvidingObserver>
{
    id <WFHealthFeatureObserver> _observer;	// 8 = 0x8
    HKSPFeatureAvailabilityStore *_store;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_onboardingCompletedKey;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000015cef3
@property(readonly, nonatomic) NSString *onboardingCompletedKey; // @synthesize onboardingCompletedKey=_onboardingCompletedKey;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HKSPFeatureAvailabilityStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <WFHealthFeatureObserver> observer; // @synthesize observer=_observer;
- (void)dealloc;	// IMP=0x000000000015ce2f
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;	// IMP=0x000000000015ce29
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;	// IMP=0x000000000015cddd
- (void)getSleepOnboardingStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000000015cd22
@property(nonatomic) unsigned long long sleepOnboardingStatus;
- (id)initWithSleepFeature:(unsigned long long)arg1;	// IMP=0x000000000015c890

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

