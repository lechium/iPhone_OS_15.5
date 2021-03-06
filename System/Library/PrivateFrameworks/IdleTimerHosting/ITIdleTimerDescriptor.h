//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IdleTimerHosting/BSDescriptionProviding-Protocol.h>
#import <IdleTimerHosting/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface ITIdleTimerDescriptor : NSObject <NSCopying, BSDescriptionProviding>
{
    unsigned long long _attentionMaintenanceEventMask;	// 8 = 0x8
    unsigned long long _attentionRecoveryEventMask;	// 16 = 0x10
    double _attentionSamplingPeriod;	// 24 = 0x18
    double _attentionSamplingStartDelay;	// 32 = 0x20
    NSArray *_timeouts;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000001cae
@property(copy, nonatomic) NSArray *timeouts; // @synthesize timeouts=_timeouts;
@property(nonatomic) double attentionSamplingStartDelay; // @synthesize attentionSamplingStartDelay=_attentionSamplingStartDelay;
@property(nonatomic) double attentionSamplingPeriod; // @synthesize attentionSamplingPeriod=_attentionSamplingPeriod;
@property(readonly, nonatomic) unsigned long long attentionRecoveryEventMask; // @synthesize attentionRecoveryEventMask=_attentionRecoveryEventMask;
@property(readonly, nonatomic) unsigned long long attentionMaintenanceEventMask; // @synthesize attentionMaintenanceEventMask=_attentionMaintenanceEventMask;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001be5
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000001bd3
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000001b83
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000001ab4
- (id)succinctDescription;	// IMP=0x0000000000001a64
@property(readonly, copy) NSString *description;
- (void)setAttentionEventMask:(unsigned long long)arg1;	// IMP=0x0000000000001a3d
- (void)setAttentionEventMaintenanceMask:(unsigned long long)arg1 recoveryMask:(unsigned long long)arg2;	// IMP=0x0000000000001a2f
@property(nonatomic) double attentionSamplingStartBeforeFirstTimeout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

