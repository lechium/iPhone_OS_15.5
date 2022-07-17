//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBIdleTimerTimeoutRange : NSObject <BSDescriptionProviding>
{
    double _lowerTimeout;	// 8 = 0x8
    double _upperTimeout;	// 16 = 0x10
}

@property(readonly, nonatomic) double upperTimeout; // @synthesize upperTimeout=_upperTimeout;
@property(readonly, nonatomic) double lowerTimeout; // @synthesize lowerTimeout=_lowerTimeout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000372a8f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000372a3f
- (id)succinctDescriptionBuilder;	// IMP=0x00000000003729b6
- (id)succinctDescription;	// IMP=0x0000000000372966
@property(readonly, copy) NSString *description;
- (id)clippedRangeWithFavoredRange:(id)arg1;	// IMP=0x0000000000372701
- (_Bool)intersects:(id)arg1;	// IMP=0x00000000003726b5
- (id)initWithLowerTimeout:(double)arg1 upperTimeout:(double)arg2;	// IMP=0x00000000003725e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
