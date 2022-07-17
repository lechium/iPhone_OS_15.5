//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKWebView.h>

#import <SafariServices/SFDialogViewPresenting-Protocol.h>

@class NSArray, NSString, NSTimer, SFDialogView, SFWebFormAccessoryViewWrapper, UIImageView, UIView;
@protocol _SFWebViewDelegate;

@interface _SFWebView : WKWebView <SFDialogViewPresenting>
{
    SFDialogView *_dialogView;	// 8 = 0x8
    UIImageView *_placeholderView;	// 16 = 0x10
    NSTimer *_placeholderViewRemovalTimer;	// 24 = 0x18
    double _placeholderOffset;	// 32 = 0x20
    UIView *_contentObscuringView;	// 40 = 0x28
    SFWebFormAccessoryViewWrapper *_inputAccessoryContainerView;	// 48 = 0x30
    _Bool _obscuringContents;	// 56 = 0x38
    _Bool _hasBeenInWindow;	// 57 = 0x39
    long long _navigationGesturePolicy;	// 64 = 0x40
    id <_SFWebViewDelegate> _delegate;	// 72 = 0x48
    UIView *_clippingView;	// 80 = 0x50
    double _bottomBarHeightAboveKeyboard;	// 88 = 0x58
    NSArray *_callStackSymbolsForLastRemovalFromWindow;	// 96 = 0x60
    struct UIEdgeInsets _hitTestInsets;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000015e43d
@property(readonly, copy, nonatomic) NSArray *callStackSymbolsForLastRemovalFromWindow; // @synthesize callStackSymbolsForLastRemovalFromWindow=_callStackSymbolsForLastRemovalFromWindow;
@property(readonly, nonatomic) _Bool hasBeenInWindow; // @synthesize hasBeenInWindow=_hasBeenInWindow;
@property(nonatomic, getter=isObscuringContents) _Bool obscuringContents; // @synthesize obscuringContents=_obscuringContents;
@property(nonatomic) double bottomBarHeightAboveKeyboard; // @synthesize bottomBarHeightAboveKeyboard=_bottomBarHeightAboveKeyboard;
@property(nonatomic) __weak UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak id <_SFWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long navigationGesturePolicy; // @synthesize navigationGesturePolicy=_navigationGesturePolicy;
@property(nonatomic) struct UIEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
- (_Bool)webui_canPromptForAccountSecurityRecommendation;	// IMP=0x000000000015e2f9
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;	// IMP=0x000000000015e167
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;	// IMP=0x000000000015deb6
- (int)webProcessIDForDialogController:(id)arg1;	// IMP=0x000000000015dea4
- (void)setSuggestedFilenameForCurrentBackForwardListItem:(id)arg1;	// IMP=0x000000000015de14
- (void)setPlaceholderImage:(id)arg1;	// IMP=0x000000000015ddff
- (void)setPlaceholderImage:(id)arg1 offset:(double)arg2;	// IMP=0x000000000015da18
@property(readonly, copy, nonatomic) NSString *evOrganizationName;
- (id)undoManager;	// IMP=0x000000000015d6d5
- (id)inputAccessoryView;	// IMP=0x000000000015d567
- (void)didEndFormControlInteraction;	// IMP=0x000000000015d4dd
- (void)didStartFormControlInteraction;	// IMP=0x000000000015d453
- (_Bool)becomeFirstResponder;	// IMP=0x000000000015d38b
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000015d2ee
- (void)layoutSubviews;	// IMP=0x000000000015d0ff
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000015cf57
- (_Bool)_isNavigationSwipeGestureRecognizer:(id)arg1;	// IMP=0x000000000015ceb1
- (id)_enclosingViewForExposedRectComputation;	// IMP=0x000000000015ce3c
- (void)_close;	// IMP=0x000000000015cdfe
- (void)_setObscuredInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000015cd1b
- (void)setAllowsBackForwardNavigationGestures:(_Bool)arg1;	// IMP=0x000000000015cd15
- (void)_updateNavigationGesturesAllowed;	// IMP=0x000000000015cc9f
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x000000000015cb19
- (id)scrollViewAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000015ca51
- (void)didMoveToWindow;	// IMP=0x000000000015c992
- (void)dealloc;	// IMP=0x000000000015c949

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
