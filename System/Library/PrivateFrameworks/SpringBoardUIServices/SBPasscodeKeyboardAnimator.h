//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIKeyboardAnimator.h>

@class BSAnimationSettings;
@protocol SBPasscodeKeyboardAnimatorDelegate;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator
{
    BSAnimationSettings *_animationSettings;	// 8 = 0x8
    id <SBPasscodeKeyboardAnimatorDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003314d
@property(nonatomic) __weak id <SBPasscodeKeyboardAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void)completeAnimationWithState:(id)arg1;	// IMP=0x0000000000033022
- (void)runAnimationWithState:(id)arg1;	// IMP=0x0000000000032dd2
- (void)prepareForAnimationWithState:(id)arg1;	// IMP=0x0000000000032b5d
- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032a87

@end

