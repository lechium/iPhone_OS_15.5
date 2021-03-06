//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CASpringAnimation, CATransition, NSMutableArray, UIImage, UIImageView;

@interface FRSubscriptionButton
{
    _Bool _on;	// 8 = 0x8
    unsigned long long _subscriptionState;	// 16 = 0x10
    unsigned long long _style;	// 24 = 0x18
    UIImageView *_iconImageView;	// 32 = 0x20
    UIImage *_filledStateImage;	// 40 = 0x28
    UIImage *_unfilledStateImage;	// 48 = 0x30
    NSMutableArray *_onCompletionBlocks;	// 56 = 0x38
    NSMutableArray *_offCompletionBlocks;	// 64 = 0x40
    CASpringAnimation *_scaleAnimationDown;	// 72 = 0x48
    CASpringAnimation *_scaleAnimationUp;	// 80 = 0x50
    CATransition *_crossfadeAnimation;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000086e20
@property(retain, nonatomic) CATransition *crossfadeAnimation; // @synthesize crossfadeAnimation=_crossfadeAnimation;
@property(retain, nonatomic) CASpringAnimation *scaleAnimationUp; // @synthesize scaleAnimationUp=_scaleAnimationUp;
@property(retain, nonatomic) CASpringAnimation *scaleAnimationDown; // @synthesize scaleAnimationDown=_scaleAnimationDown;
@property(copy, nonatomic) NSMutableArray *offCompletionBlocks; // @synthesize offCompletionBlocks=_offCompletionBlocks;
@property(copy, nonatomic) NSMutableArray *onCompletionBlocks; // @synthesize onCompletionBlocks=_onCompletionBlocks;
@property(retain, nonatomic) UIImage *unfilledStateImage; // @synthesize unfilledStateImage=_unfilledStateImage;
@property(retain, nonatomic) UIImage *filledStateImage; // @synthesize filledStateImage=_filledStateImage;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(nonatomic) unsigned long long subscriptionState; // @synthesize subscriptionState=_subscriptionState;
- (id)accessibilityHint;	// IMP=0x0010000000086be1
- (id)accessibilityLabel;	// IMP=0x0010000000086b28
- (void)_runAndDrainCompletionBlocksForState:(_Bool)arg1 finished:(_Bool)arg2;	// IMP=0x00100000000869da
- (void)_finishTransition;	// IMP=0x00100000000869a4
- (void)_scaleImageViewUp;	// IMP=0x00100000000868e2
- (void)_scaleImageViewDown;	// IMP=0x0010000000086820
- (void)_performTransitionAnimationsForStyle:(unsigned long long)arg1;	// IMP=0x001000000008653f
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000864fe
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000864bd
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000008647c
- (void)_setOn:(_Bool)arg1 animationStyle:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008630c
- (void)setSubscriptionState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086292
- (void)_configureIconImageView;	// IMP=0x00100000000860cc
- (void)layoutSubviews;	// IMP=0x001000000008601e
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000085fdb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000085fc4
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x0010000000085c14

@end

