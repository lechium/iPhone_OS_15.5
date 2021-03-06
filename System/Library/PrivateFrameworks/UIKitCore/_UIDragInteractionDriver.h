//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDragInteractionDriving-Protocol.h>

@class NSArray, NSString, UIView;
@protocol _UIDragInteractionDriverDelegate;

@interface _UIDragInteractionDriver : NSObject <_UIDragInteractionDriving>
{
    struct _UIDragInteractionDriverStateMachine _stateMachine;	// 8 = 0x8
    _Bool _enabled;	// 24 = 0x18
    _Bool _additionalTouchesCancelLift;	// 25 = 0x19
    _Bool _allowsSimultaneousRecognitionDuringLift;	// 26 = 0x1a
    _Bool _shouldAnimateLift;	// 27 = 0x1b
    _Bool _cancellationTimerEnabled;	// 28 = 0x1c
    _Bool _competingLongPressOnLift;	// 29 = 0x1d
    _Bool _automaticallyAddsFailureRelationships;	// 30 = 0x1e
    id <_UIDragInteractionDriverDelegate> _delegate;	// 32 = 0x20
    UIView *_view;	// 40 = 0x28
    double _liftDelay;	// 48 = 0x30
    double _cancellationDelay;	// 56 = 0x38
    double _competingLongPressDelay;	// 64 = 0x40
    double _liftMoveHysteresis;	// 72 = 0x48
    NSArray *_allowedTouchTypes;	// 80 = 0x50
    struct CGPoint _initialLocationInWindow;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000a2fe51
@property(copy, nonatomic) NSArray *allowedTouchTypes; // @synthesize allowedTouchTypes=_allowedTouchTypes;
@property(nonatomic) _Bool automaticallyAddsFailureRelationships; // @synthesize automaticallyAddsFailureRelationships=_automaticallyAddsFailureRelationships;
@property(nonatomic) double liftMoveHysteresis; // @synthesize liftMoveHysteresis=_liftMoveHysteresis;
@property(nonatomic) double competingLongPressDelay; // @synthesize competingLongPressDelay=_competingLongPressDelay;
@property(nonatomic) double cancellationDelay; // @synthesize cancellationDelay=_cancellationDelay;
@property(nonatomic) double liftDelay; // @synthesize liftDelay=_liftDelay;
@property(nonatomic) _Bool competingLongPressOnLift; // @synthesize competingLongPressOnLift=_competingLongPressOnLift;
@property(nonatomic) _Bool cancellationTimerEnabled; // @synthesize cancellationTimerEnabled=_cancellationTimerEnabled;
@property(nonatomic) _Bool shouldAnimateLift; // @synthesize shouldAnimateLift=_shouldAnimateLift;
@property(nonatomic) struct CGPoint initialLocationInWindow; // @synthesize initialLocationInWindow=_initialLocationInWindow;
@property(nonatomic) _Bool allowsSimultaneousRecognitionDuringLift; // @synthesize allowsSimultaneousRecognitionDuringLift=_allowsSimultaneousRecognitionDuringLift;
@property(nonatomic) _Bool additionalTouchesCancelLift; // @synthesize additionalTouchesCancelLift=_additionalTouchesCancelLift;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UIDragInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleEvent:(unsigned long long)arg1;	// IMP=0x0000000000a2fced
- (unsigned long long)_state;	// IMP=0x0000000000a2fcdb
- (void)detachFromView:(id)arg1;	// IMP=0x0000000000a2fcd5
- (void)attachToView:(id)arg1;	// IMP=0x0000000000a2fccf
- (void)didTransitionToInactiveState;	// IMP=0x0000000000a2fcc9
- (void)didTransitionToBeginState;	// IMP=0x0000000000a2fcc3
- (void)didTransitionToCancelState;	// IMP=0x0000000000a2fc19
- (void)didTransitionToInflightState;	// IMP=0x0000000000a2fbaa
- (void)didTransitionToDeferred;	// IMP=0x0000000000a2fba4
- (void)didTransitionToPreparing;	// IMP=0x0000000000a2fad4
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (_Bool)isGestureRecognizerForDragInitiation:(id)arg1;	// IMP=0x0000000000a2f9ea
- (void)cancel;	// IMP=0x0000000000a2f9cd
- (id)init;	// IMP=0x0000000000a2f989

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

