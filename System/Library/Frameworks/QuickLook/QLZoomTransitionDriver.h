//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface QLZoomTransitionDriver
{
    UIView *_uncroppedView;	// 8 = 0x8
}

+ (void)cropView:(id)arg1 toAvoidNavigationOffset:(double)arg2 presenting:(_Bool)arg3 animationDuration:(double)arg4;	// IMP=0x000000000006d701
- (void).cxx_destruct;	// IMP=0x000000000006da6c
- (void)tearDown;	// IMP=0x000000000006d565
- (void)_performZoomTransition;	// IMP=0x000000000006b678
- (void)animateTransition;	// IMP=0x000000000006b666

@end
