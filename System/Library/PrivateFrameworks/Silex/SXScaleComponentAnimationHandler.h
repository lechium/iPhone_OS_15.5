//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface SXScaleComponentAnimationHandler <CAAnimationDelegate>
{
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000c4def
- (void)finishAnimation;	// IMP=0x00000000000c4cb1
- (void)startAnimation;	// IMP=0x00000000000c49ef
- (void)updateAnimationWithFactor:(double)arg1;	// IMP=0x00000000000c4895
- (void)prepareAnimation;	// IMP=0x00000000000c4773

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

