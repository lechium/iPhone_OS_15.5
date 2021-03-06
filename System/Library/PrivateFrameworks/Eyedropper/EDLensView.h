//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Eyedropper/UIDragInteractionDelegate-Protocol.h>
#import <Eyedropper/UIPointerInteractionDelegate-Protocol.h>

@class CADisplayLink, EDColorAnalyzer, EDGridView, NSString, UIPointerInteraction;
@protocol EDLensViewDelegate;

@interface EDLensView : UIView <UIDragInteractionDelegate, UIPointerInteractionDelegate>
{
    UIView *_hoverColorCenterView;	// 8 = 0x8
    UIView *_hoverColorRingView;	// 16 = 0x10
    EDGridView *_gridView;	// 24 = 0x18
    UIView *_screenshotSurfaceView;	// 32 = 0x20
    UIView *_ringBorderView;	// 40 = 0x28
    long long _lensState;	// 48 = 0x30
    CADisplayLink *_displayLink;	// 56 = 0x38
    EDColorAnalyzer *_colorAnalyzer;	// 64 = 0x40
    _Bool _shouldChangeAlphaWhenDismissing;	// 72 = 0x48
    struct EDColor _hoverColor;	// 80 = 0x50
    double _hoverColorBrightness;	// 104 = 0x68
    struct CGPoint _centerOffsetAtTouchDown;	// 112 = 0x70
    UIPointerInteraction *_pointerInteraction;	// 128 = 0x80
    _Bool _floatingMode;	// 136 = 0x88
    long long _interfaceOrientation;	// 144 = 0x90
    id <EDLensViewDelegate> _delegate;	// 152 = 0x98
    struct CGPoint _lastPosition;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000000532e
@property(nonatomic) struct CGPoint lastPosition; // @synthesize lastPosition=_lastPosition;
@property(nonatomic) _Bool floatingMode; // @synthesize floatingMode=_floatingMode;
@property(nonatomic) __weak id <EDLensViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000005287
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000000051e0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000000517b
- (long long)_lensPosition;	// IMP=0x0000000000004e4c
- (void)_displayLinkFired;	// IMP=0x0000000000004978
- (_Bool)_isScreenScaleEven;	// IMP=0x0000000000004926
- (void)updateLensViewWithEvent:(id)arg1;	// IMP=0x0000000000004705
- (void)_dismissAndRemoveAlpha:(_Bool)arg1;	// IMP=0x00000000000045d5
- (void)dismiss;	// IMP=0x0000000000004504
- (void)tappedCenter:(id)arg1;	// IMP=0x00000000000044cd
- (void)presentAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000000042cf
- (void)updateCenterOffsetAtTouchDown:(struct CGPoint)arg1;	// IMP=0x00000000000041f7
- (_Bool)isAccessibilityElement;	// IMP=0x00000000000041d8
- (unsigned long long)accessibilityTraits;	// IMP=0x00000000000041b1
- (id)accessibilityValue;	// IMP=0x0000000000004171
- (id)accessibilityLabel;	// IMP=0x0000000000004164
- (struct CGPoint)_lensViewLocalCenter;	// IMP=0x0000000000004147
- (void)updateLensState:(long long)arg1;	// IMP=0x0000000000004130
- (void)layoutSubviews;	// IMP=0x0000000000003ff2
- (void)_layoutStaticElements;	// IMP=0x000000000000394c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000328c
- (id)dragItemsForInteraction:(id)arg1;	// IMP=0x0000000000002f21
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000000002f0f
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x0000000000002efd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

