//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIDatePicker, UIView, _UIDatePickerContainerViewController, _UIDatePickerOverlayPlatterView;
@protocol _UIDatePickerOverlayPresentationDelegate;

@interface _UIDatePickerOverlayPresentation : NSObject
{
    _Bool _defersAutomaticKeyboardAvoidanceAdjustments;	// 8 = 0x8
    _Bool _accessoryViewIgnoresDefaultInsets;	// 9 = 0x9
    _Bool _ignoresPassthroughOnSourceView;	// 10 = 0xa
    long long _activeMode;	// 16 = 0x10
    UIDatePicker *_activeDatePicker;	// 24 = 0x18
    UIView *_sourceView;	// 32 = 0x20
    long long _alignment;	// 40 = 0x28
    long long _overlayAnchor;	// 48 = 0x30
    UIView *_accessoryView;	// 56 = 0x38
    _UIDatePickerContainerViewController *_containerViewController;	// 64 = 0x40
    _UIDatePickerOverlayPlatterView *_platterView;	// 72 = 0x48
    CDUnknownBlockType _dismissHandler;	// 80 = 0x50
    id <_UIDatePickerOverlayPresentationDelegate> _delegate;	// 88 = 0x58
    struct CGRect _sourceRect;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000001171056
@property(nonatomic) _Bool ignoresPassthroughOnSourceView; // @synthesize ignoresPassthroughOnSourceView=_ignoresPassthroughOnSourceView;
@property(nonatomic) __weak id <_UIDatePickerOverlayPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) _UIDatePickerOverlayPlatterView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) _UIDatePickerContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool accessoryViewIgnoresDefaultInsets; // @synthesize accessoryViewIgnoresDefaultInsets=_accessoryViewIgnoresDefaultInsets;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) long long overlayAnchor; // @synthesize overlayAnchor=_overlayAnchor;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool defersAutomaticKeyboardAvoidanceAdjustments; // @synthesize defersAutomaticKeyboardAvoidanceAdjustments=_defersAutomaticKeyboardAvoidanceAdjustments;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) __weak UIDatePicker *activeDatePicker; // @synthesize activeDatePicker=_activeDatePicker;
@property(readonly, nonatomic) long long activeMode; // @synthesize activeMode=_activeMode;
- (void)animateDismissalWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001170edf
- (void)animateTransitionWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001170e9f
- (void)animatePresentWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001170e5c
- (struct CGPoint)_adjustedAnchorPointForFrame:(struct CGRect)arg1 alignment:(unsigned long long)arg2 anchorPoint:(struct CGPoint)arg3;	// IMP=0x0000000001170b39
- (struct CGPoint)_normalizedSourcePointForAnchorPoint:(struct CGPoint)arg1 menuFrame:(struct CGRect)arg2;	// IMP=0x0000000001170a87
- (double)_layoutArbiterAnchorAlignmentOffset;	// IMP=0x0000000001170752
- (struct CGRect)_adjustedFrameForInputSize:(struct CGSize)arg1 outputFrame:(struct CGRect)arg2;	// IMP=0x00000000011706e2
- (unsigned long long)_overlayAlignmentEdge;	// IMP=0x00000000011706b0
- (long long)_overlayAlignment;	// IMP=0x00000000011705f5
- (struct _UIDatePickerOverlayPlatterLayout)_computedLayoutForPlatterView:(id)arg1;	// IMP=0x000000000116fcf4
- (void)retargetCurrentPresentationToSourceView;	// IMP=0x000000000116fc12
- (void)_transitionToDatePicker:(id)arg1;	// IMP=0x000000000116f717
- (void)_presentNewDatePicker:(id)arg1;	// IMP=0x000000000116f009
- (void)setActiveMode:(long long)arg1;	// IMP=0x000000000116ef0b
- (void)_prepareDatePickerPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000116ecb4
- (void)dismissPresentationAnimated:(_Bool)arg1;	// IMP=0x000000000116e631
- (void)activateEmptyPresentationWithMode:(long long)arg1 onDismiss:(CDUnknownBlockType)arg2;	// IMP=0x000000000116e56e
- (void)presentDatePicker:(id)arg1 onDismiss:(CDUnknownBlockType)arg2;	// IMP=0x000000000116e3e2
- (struct CGRect)resolvedSourceBounds;	// IMP=0x000000000116e35a
@property(readonly, nonatomic) struct CGRect resolvedSourceRect;
- (_Bool)isBeingDismissedOrPresented;	// IMP=0x000000000116e224
@property(readonly, nonatomic) _Bool isPresentingOverlay;
- (id)initWithSourceView:(id)arg1;	// IMP=0x000000000116e16c

@end
