//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController, UIView;

__attribute__((visibility("hidden")))
@interface _UIPopoverView
{
    UIView *_contentView;	// 120 = 0x78
    UIPopoverBackgroundView *_backgroundView;	// 128 = 0x80
    Class _backgroundViewClass;	// 136 = 0x88
    UIImageView *_toolbarShine;	// 144 = 0x90
    _Bool _showsBackgroundComponentHighlights;	// 152 = 0x98
    _Bool _showsBackgroundViewHighlight;	// 153 = 0x99
    _Bool _showsContentViewHighlight;	// 154 = 0x9a
    _Bool _contentExtendsOverArrow;	// 155 = 0x9b
    _Bool _chromeHidden;	// 156 = 0x9c
    _Bool _chromeHiddenForSizeTransition;	// 157 = 0x9d
    UIActionSheet *_presentedActionSheet;	// 160 = 0xa0
    UIPopoverController *_popoverController;	// 168 = 0xa8
}

+ (id)popoverViewContainingView:(id)arg1;	// IMP=0x00000000012cddb6
- (void).cxx_destruct;	// IMP=0x00000000012cfce0
@property(nonatomic) _Bool chromeHiddenForSizeTransition; // @synthesize chromeHiddenForSizeTransition=_chromeHiddenForSizeTransition;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(readonly, nonatomic) _Bool contentExtendsOverArrow; // @synthesize contentExtendsOverArrow=_contentExtendsOverArrow;
@property(nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property(nonatomic) _Bool showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;
@property(nonatomic) _Bool showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property(nonatomic) _Bool showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
- (void)_performBlockCheckingDefinesTintColor:(CDUnknownBlockType)arg1;	// IMP=0x00000000012cfb8b
- (_Bool)_definesTintColor;	// IMP=0x00000000012cfaf1
- (id)_normalInheritedTintColor;	// IMP=0x00000000012cf940
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x00000000012cf87a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000012cf7a5
- (void)_hideArrow;	// IMP=0x00000000012cf76d
- (void)_showArrow;	// IMP=0x00000000012cf735
- (void)_setCornerRadius:(double)arg1;	// IMP=0x00000000012cf6f4
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;	// IMP=0x00000000012cf2ce
- (void)setUseToolbarShine:(_Bool)arg1;	// IMP=0x00000000012cf203
@property(copy, nonatomic) UIColor *arrowBackgroundColor;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;
- (void)_updateAlphaForChromeHidden;	// IMP=0x00000000012cebb5
- (_Bool)_allowsCustomizationOfContent;	// IMP=0x00000000012ceb75
- (void)_setPopoverContentView:(id)arg1;	// IMP=0x00000000012ce94c
- (struct CGRect)_snapshotBounds;	// IMP=0x00000000012ce84d
- (id)toolbarShine;	// IMP=0x00000000012ce838
- (id)standardChromeView;	// IMP=0x00000000012ce7e0
- (id)backgroundView;	// IMP=0x00000000012ce7cb
- (id)contentView;	// IMP=0x00000000012ce7b6
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012ce7b0
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012ce7aa
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012ce7a4
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012ce79e
- (_Bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;	// IMP=0x00000000012ce796
- (int)_style;	// IMP=0x00000000012ce78b
- (void)layoutSubviews;	// IMP=0x00000000012ce52b
- (struct UIEdgeInsets)safeAreaInsetsForContentView;	// IMP=0x00000000012ce4cd
- (void)_layoutToolbarShine;	// IMP=0x00000000012ce316
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000012ce17a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012ce166
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(_Bool)arg3 contentExtendsOverArrow:(_Bool)arg4;	// IMP=0x00000000012cde4e
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;	// IMP=0x00000000012cde37

@end
