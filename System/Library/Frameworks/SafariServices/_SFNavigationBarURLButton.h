//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <SafariServices/PKScribbleInteractionDelegate-Protocol.h>
#import <SafariServices/PKScribbleInteractionElementSource-Protocol.h>
#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PKScribbleInteraction, UIGestureRecognizer, UIVibrancyEffect, UIView, UIVisualEffectView, _SFNavigationBarTheme;
@protocol _SFNavigationBarURLButtonDelegate;

__attribute__((visibility("hidden")))
@interface _SFNavigationBarURLButton : UIButton <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIGestureRecognizerDelegate>
{
    UIVibrancyEffect *_highlightedVibrancyEffect;	// 8 = 0x8
    UIVibrancyEffect *_vibrancyEffect;	// 16 = 0x10
    UIVisualEffectView *_effectView;	// 24 = 0x18
    UIView *_effectMask;	// 32 = 0x20
    UIGestureRecognizer *_longPressGestureRecognizer;	// 40 = 0x28
    PKScribbleInteraction *_pencilScribbleInteraction;	// 48 = 0x30
    double _backgroundAlphaFactor;	// 56 = 0x38
    _SFNavigationBarTheme *_theme;	// 64 = 0x40
    id <_SFNavigationBarURLButtonDelegate> _delegate;	// 72 = 0x48
    double _urlOutlineCornerRadius;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000003e27b
- (void)_hover:(id)arg1;	// IMP=0x000000000003e22b
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000003e10f
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003df44
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;	// IMP=0x000000000003def1
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003dd6a
- (_Bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000003dce8
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;	// IMP=0x000000000003dc88
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;	// IMP=0x000000000003dc28
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;	// IMP=0x000000000003dbc2
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000003dafb
- (void)_dismissMenu:(id)arg1;	// IMP=0x000000000003daa8
- (void)_handleLongPress:(id)arg1;	// IMP=0x000000000003d903
- (void)pasteAndGo:(id)arg1;	// IMP=0x000000000003d8c7
- (void)pasteAndSearch:(id)arg1;	// IMP=0x000000000003d88b
- (void)copy:(id)arg1;	// IMP=0x000000000003d84f
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000003d847
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000003d7db
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000003d439
- (void)dealloc;	// IMP=0x000000000003d3ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003d09a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

