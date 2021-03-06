//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NAFuture, NSString;

@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NAFuture *_completionFuture;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000adbe0
@property(readonly, nonatomic) NAFuture *completionFuture; // @synthesize completionFuture=_completionFuture;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000ad923
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000ad91a
- (id)init;	// IMP=0x00000000000ad8c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

