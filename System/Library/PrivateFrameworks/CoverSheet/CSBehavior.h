//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>
#import <CoverSheet/CSBehaviorProviding-Protocol.h>
#import <CoverSheet/NSCopying-Protocol.h>
#import <CoverSheet/SBFIdleTimerBehaviorProviding-Protocol.h>

@class NSString;

@interface CSBehavior : NSObject <BSDescriptionProviding, CSBehaviorProviding, SBFIdleTimerBehaviorProviding, NSCopying>
{
    long long _idleTimerDuration;	// 8 = 0x8
    long long _idleTimerMode;	// 16 = 0x10
    long long _idleWarnMode;	// 24 = 0x18
    long long _scrollingStrategy;	// 32 = 0x20
    unsigned long long _restrictedCapabilities;	// 40 = 0x28
    long long _notificationBehavior;	// 48 = 0x30
    long long _proximityDetectionMode;	// 56 = 0x38
}

+ (id)behaviorForProvider:(id)arg1;	// IMP=0x000000000009184b
+ (id)behavior;	// IMP=0x0000000000091839
@property(nonatomic) long long proximityDetectionMode; // @synthesize proximityDetectionMode=_proximityDetectionMode;
@property(nonatomic) unsigned long long restrictedCapabilities; // @synthesize restrictedCapabilities=_restrictedCapabilities;
@property(nonatomic) long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property(nonatomic) long long scrollingStrategy; // @synthesize scrollingStrategy=_scrollingStrategy;
@property(nonatomic) long long idleWarnMode; // @synthesize idleWarnMode=_idleWarnMode;
@property(nonatomic) long long idleTimerMode; // @synthesize idleTimerMode=_idleTimerMode;
@property(nonatomic) long long idleTimerDuration; // @synthesize idleTimerDuration=_idleTimerDuration;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000009203c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000091fec
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000091d5f
- (id)succinctDescription;	// IMP=0x0000000000091d0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000091cdf
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000091cb1
- (void)conformsToCSBehaviorProviding;	// IMP=0x0000000000091cab
- (void)removeRestrictedCapabilities:(unsigned long long)arg1;	// IMP=0x0000000000091c9e
- (void)addRestrictedCapabilities:(unsigned long long)arg1;	// IMP=0x0000000000091c94
- (_Bool)areRestrictedCapabilities:(unsigned long long)arg1;	// IMP=0x0000000000091c6e
- (void)unionBehavior:(id)arg1;	// IMP=0x0000000000091b18
- (void)reset;	// IMP=0x0000000000091afb
- (_Bool)isEqualToBehavior:(id)arg1;	// IMP=0x00000000000919dc

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

