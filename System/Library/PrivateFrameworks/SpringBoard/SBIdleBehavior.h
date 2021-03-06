//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFIdleTimerBehaviorProviding-Protocol.h>

@class NSString;

@interface SBIdleBehavior : NSObject <SBFIdleTimerBehaviorProviding>
{
    long long _duration;	// 8 = 0x8
    long long _warnMode;	// 16 = 0x10
}

@property(readonly, nonatomic) long long warnMode; // @synthesize warnMode=_warnMode;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
- (id)initWithDuration:(long long)arg1 warnMode:(long long)arg2;	// IMP=0x00000000001add96

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

