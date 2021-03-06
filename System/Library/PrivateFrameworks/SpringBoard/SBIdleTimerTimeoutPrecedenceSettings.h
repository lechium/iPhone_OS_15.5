//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBIdleTimerTimeoutPrecedenceSettings : NSObject <BSDescriptionProviding>
{
    double _normalTimeout;	// 8 = 0x8
    double _highTimeout;	// 16 = 0x10
    double _criticalTimeout;	// 24 = 0x18
}

@property(readonly, nonatomic) double criticalTimeout; // @synthesize criticalTimeout=_criticalTimeout;
@property(readonly, nonatomic) double highTimeout; // @synthesize highTimeout=_highTimeout;
@property(readonly, nonatomic) double normalTimeout; // @synthesize normalTimeout=_normalTimeout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000003725ae
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000037255e
- (id)succinctDescriptionBuilder;	// IMP=0x000000000037248a
- (id)succinctDescription;	// IMP=0x000000000037243a
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double greatestTimeout;
@property(readonly, nonatomic) double leastTimeout;
@property(readonly, nonatomic) unsigned long long highestPrecedence;
- (void)_setTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2;	// IMP=0x00000000003722a1
- (void)_setTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2;	// IMP=0x0000000000372210
- (void)_setTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;	// IMP=0x00000000003721fe
- (double)_intervalForPrecedence:(unsigned long long)arg1;	// IMP=0x00000000003721ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

