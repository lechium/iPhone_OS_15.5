//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UINotificationFeedbackGenerator, UIView;
@protocol SBFBarSwipeBehaviorDelegate, UIViewSpringAnimationBehaviorDescribing;

@interface SBFBarSwipeBehavior : NSObject
{
    id <UIViewSpringAnimationBehaviorDescribing> _settleAffordanceAnimationBehaviorDescription;	// 8 = 0x8
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;	// 16 = 0x10
    _Bool _didFireAction;	// 24 = 0x18
    UIView *_grabberView;	// 32 = 0x20
    double _grabberViewAdditionalEdgeSpacing;	// 40 = 0x28
    id <SBFBarSwipeBehaviorDelegate> _delegate;	// 48 = 0x30
    long long _feedbackType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000019df8
@property(nonatomic) long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) __weak id <SBFBarSwipeBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> settleAffordanceAnimationBehaviorDescription; // @synthesize settleAffordanceAnimationBehaviorDescription=_settleAffordanceAnimationBehaviorDescription;
@property(readonly, nonatomic) double grabberViewAdditionalEdgeSpacing; // @synthesize grabberViewAdditionalEdgeSpacing=_grabberViewAdditionalEdgeSpacing;
@property(readonly, nonatomic) UIView *grabberView; // @synthesize grabberView=_grabberView;
- (void)_fireAction;	// IMP=0x0000000000019ce7
- (void)_createFeedbackGenerator;	// IMP=0x0000000000019c16
- (void)_setGrabberAdditionalEdgeSpacing:(double)arg1;	// IMP=0x0000000000019b72
- (void)_offsetGrabberForProgress:(double)arg1;	// IMP=0x0000000000019b50
- (void)_settleGrabber;	// IMP=0x0000000000019aad
- (id)_grabberViewContainerView;	// IMP=0x0000000000019a18
- (id)_settleAffordanceAnimationBehaviorDescription;	// IMP=0x0000000000019994
- (double)_progressWithTranslation:(struct CGPoint)arg1 liftoffVelocity:(struct CGPoint)arg2;	// IMP=0x00000000000198fe
- (void)barSwipeInteractionCancelled:(id)arg1;	// IMP=0x00000000000198ec
- (void)barSwipeInteractionEnded:(id)arg1;	// IMP=0x0000000000019808
- (void)barSwipeInteractionChanged:(id)arg1;	// IMP=0x0000000000019731
- (void)barSwipeInteractionBegan:(id)arg1;	// IMP=0x0000000000019717
- (id)initWithGrabberView:(id)arg1 settleAffordanceAnimationBehaviorDescription:(id)arg2;	// IMP=0x00000000000195d3

@end
