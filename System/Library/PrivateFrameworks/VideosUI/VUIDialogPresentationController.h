//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIDialogPresentationController : UIPresentationController
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    CDUnknownBlockType _completedAnimationBlock;	// 16 = 0x10
    struct CGSize _modalSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000027864b
@property(copy, nonatomic) CDUnknownBlockType completedAnimationBlock; // @synthesize completedAnimationBlock=_completedAnimationBlock;
@property(nonatomic) struct CGSize modalSize; // @synthesize modalSize=_modalSize;
- (void)_tapGesture:(id)arg1;	// IMP=0x00000000002785b5
- (void)_layoutPresentedView;	// IMP=0x0000000000278475
@property(readonly, nonatomic) UIVisualEffectView *backdropView;
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000027835a
- (void)presentationTransitionWillBegin;	// IMP=0x00000000002780ce
- (long long)presentationStyle;	// IMP=0x00000000002780c3
- (void)dealloc;	// IMP=0x0000000000278058
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000000277fa8

@end

