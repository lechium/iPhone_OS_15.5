//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <MobileSafari/PKScribbleInteractionDelegate-Protocol.h>
#import <MobileSafari/SFCapsuleContentView-Protocol.h>
#import <MobileSafari/SFNavigationBarItemObserver-Protocol.h>
#import <MobileSafari/_SFBarRegistrationObserving-Protocol.h>
#import <MobileSafari/_SFFluidProgressViewDelegate-Protocol.h>
#import <MobileSafari/_SFNavigationBarCommon-Protocol.h>

@class NSArray, NSIndexSet, NSLayoutConstraint, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, PKScribbleInteraction, SFNavigationBarItem, SFUnifiedTabBarItemTitleContainerView, UIAction, UILayoutGuide, UITextField, UIView, _SFBarTheme, _SFFluidProgressView;
@protocol SFCapsuleContentViewSizeUpdating, WBSUserDefaultObservation, _SFBarRegistrationToken, _SFNavigationBarDelegateCommon, _SFPopoverSourceInfo;

@interface SFCapsuleNavigationBar : UIControl <SFNavigationBarItemObserver, _SFBarRegistrationObserving, SFCapsuleContentView, _SFFluidProgressViewDelegate, PKScribbleInteractionDelegate, _SFNavigationBarCommon>
{
    SFUnifiedTabBarItemTitleContainerView *_titleContainer;	// 8 = 0x8
    NSMutableDictionary *_buttons;	// 16 = 0x10
    UIAction *_currentAction;	// 24 = 0x18
    id <_SFBarRegistrationToken> _registration;	// 32 = 0x20
    NSArray *_leadingButtonConstraints;	// 40 = 0x28
    NSArray *_trailingButtonConstraints;	// 48 = 0x30
    NSArray *_buttonSpacingGuides;	// 56 = 0x38
    NSArray *_textVerticalAlignmentConstraints;	// 64 = 0x40
    NSLayoutConstraint *_titleHorizontalCenterConstraint;	// 72 = 0x48
    NSLayoutConstraint *_titleHorizontalLeadingConstraint;	// 80 = 0x50
    UILayoutGuide *_textVerticalAlignmentGuide;	// 88 = 0x58
    _SFFluidProgressView *_progressView;	// 96 = 0x60
    NSArray *_labelLayoutInfos;	// 104 = 0x68
    NSArray *_iconLayoutInfos;	// 112 = 0x70
    NSIndexSet *_indexesOfIconsAfterTitle;	// 120 = 0x78
    NSMutableSet *_hiddenLabelTypes;	// 128 = 0x80
    NSTimer *_subtitleTimer;	// 136 = 0x88
    double _lastTitleContainerWidth;	// 144 = 0x90
    _Bool _isForSizing;	// 152 = 0x98
    _Bool _deferButtonAlphaUpdatesDuringLayout;	// 153 = 0x99
    id <WBSUserDefaultObservation> _debugObservation;	// 160 = 0xa0
    NSArray *_progressViewConstraints;	// 168 = 0xa8
    _Bool _isSelected;	// 176 = 0xb0
    _Bool _isMinimized;	// 177 = 0xb1
    _Bool _showingTransientLabel;	// 178 = 0xb2
    _Bool _hidesTitle;	// 179 = 0xb3
    CDUnknownBlockType _buttonPointerStyleProvider;	// 184 = 0xb8
    CDUnknownBlockType _highlightObserver;	// 192 = 0xc0
    double _minimizationPercent;	// 200 = 0xc8
    double _minimizedContentHorizontalInset;	// 208 = 0xd0
    double _nonKeyContentAlpha;	// 216 = 0xd8
    _SFBarTheme *_theme;	// 224 = 0xe0
    UIView *_unclippedContainer;	// 232 = 0xe8
    id <SFCapsuleContentViewSizeUpdating> _sizeUpdater;	// 240 = 0xf0
    SFNavigationBarItem *_item;	// 248 = 0xf8
    NSArray *_leadingButtons;	// 256 = 0x100
    NSArray *_trailingButtons;	// 264 = 0x108
    long long _layoutStyle;	// 272 = 0x110
    id <_SFNavigationBarDelegateCommon> _delegate;	// 280 = 0x118
    PKScribbleInteraction *_scribbleInteraction;	// 288 = 0x120
    NSArray *_labelTypes;	// 296 = 0x128
    NSArray *_iconTypes;	// 304 = 0x130
    struct CGAffineTransform _keyContentTransform;	// 312 = 0x138
    struct CGAffineTransform _microphoneContentTransform;	// 360 = 0x168
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000000007a4d
- (void).cxx_destruct;	// IMP=0x000000000001142a
@property(nonatomic, getter=_hidesTitle, setter=_setHidesTitle:) _Bool hidesTitle; // @synthesize hidesTitle=_hidesTitle;
@property(readonly, copy, nonatomic, getter=_iconTypes) NSArray *iconTypes; // @synthesize iconTypes=_iconTypes;
@property(readonly, copy, nonatomic, getter=_labelTypes) NSArray *labelTypes; // @synthesize labelTypes=_labelTypes;
@property(readonly, nonatomic) PKScribbleInteraction *scribbleInteraction; // @synthesize scribbleInteraction=_scribbleInteraction;
@property(nonatomic) __weak id <_SFNavigationBarDelegateCommon> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool showingTransientLabel; // @synthesize showingTransientLabel=_showingTransientLabel;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSArray *trailingButtons; // @synthesize trailingButtons=_trailingButtons;
@property(copy, nonatomic) NSArray *leadingButtons; // @synthesize leadingButtons=_leadingButtons;
@property(retain, nonatomic) SFNavigationBarItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <SFCapsuleContentViewSizeUpdating> sizeUpdater; // @synthesize sizeUpdater=_sizeUpdater;
@property(nonatomic) __weak UIView *unclippedContainer; // @synthesize unclippedContainer=_unclippedContainer;
@property(retain, nonatomic) _SFBarTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) double nonKeyContentAlpha; // @synthesize nonKeyContentAlpha=_nonKeyContentAlpha;
@property(nonatomic) double minimizedContentHorizontalInset; // @synthesize minimizedContentHorizontalInset=_minimizedContentHorizontalInset;
@property(nonatomic) double minimizationPercent; // @synthesize minimizationPercent=_minimizationPercent;
@property(nonatomic) struct CGAffineTransform microphoneContentTransform; // @synthesize microphoneContentTransform=_microphoneContentTransform;
@property(nonatomic) struct CGAffineTransform keyContentTransform; // @synthesize keyContentTransform=_keyContentTransform;
@property(copy, nonatomic) CDUnknownBlockType highlightObserver; // @synthesize highlightObserver=_highlightObserver;
@property(copy, nonatomic) CDUnknownBlockType buttonPointerStyleProvider; // @synthesize buttonPointerStyleProvider=_buttonPointerStyleProvider;
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;	// IMP=0x00000000000111db
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;	// IMP=0x00000000000111c4
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;	// IMP=0x00000000000111bc
- (_Bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000001116d
- (_Bool)_scribbleInteractionIsEnabled:(id)arg1;	// IMP=0x0000000000011159
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> formatMenuButtonPopoverSourceInfo;
- (struct CGRect)urlOutlineFrameRelativeToView:(id)arg1;	// IMP=0x00000000000110bb
@property(readonly, nonatomic) struct CGRect URLOutlineFrameInNavigationBarSpace;
@property(readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property(readonly, nonatomic) UITextField *textField;
- (id)popoverSourceInfoForBarItem:(long long)arg1;	// IMP=0x000000000001106a
- (void)animateLinkImage:(struct CGImage *)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(CDUnknownBlockType)arg5 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000000010f31
- (void)animateSafariIconLinkFromPoint:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x0000000000010f2b
- (void)didCompleteBarRegistrationWithToken:(id)arg1;	// IMP=0x0000000000010f17
- (void)_updateProgressViewFillColor;	// IMP=0x0000000000010dce
- (void)_updateShowsProgressView;	// IMP=0x0000000000010d81
- (void)fluidProgressViewDidShowProgress:(id)arg1;	// IMP=0x0000000000010d6f
- (void)fluidProgressViewWillShowProgress:(id)arg1;	// IMP=0x0000000000010d5d
- (void)_updatePageFormatButtonForNavigationBarItem:(id)arg1 shouldResetDiscovery:(_Bool)arg2;	// IMP=0x0000000000010b5a
- (void)navigationBarItemDidUpdateShowsTranslationIcon:(id)arg1;	// IMP=0x0000000000010b46
- (void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg1;	// IMP=0x0000000000010b32
- (void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)arg1;	// IMP=0x0000000000010b10
- (void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)arg1;	// IMP=0x0000000000010ad5
- (void)navigationBarItemDidUpdateMediaStateIcon:(id)arg1;	// IMP=0x0000000000010a6f
- (void)navigationBarItemDidUpdateNeedsExtensionBadge:(id)arg1;	// IMP=0x0000000000010a5b
- (void)navigationBarItemDidUpdateShowsExtensionsAvailability:(id)arg1;	// IMP=0x0000000000010a02
- (void)navigationBarItemDidUpdateShowsTranslationButton:(id)arg1;	// IMP=0x000000000001095e
- (void)navigationBarItemDidUpdateShowsReaderButton:(id)arg1;	// IMP=0x000000000001088c
- (void)navigationBarItemDidUpdateSecurityAnnotation:(id)arg1;	// IMP=0x0000000000010859
- (void)navigationBarItemDidUpdateShowsLockIcon:(id)arg1;	// IMP=0x000000000001081d
- (void)navigationBarItemDidUpdateShowsSearchIndicator:(id)arg1;	// IMP=0x00000000000107e1
- (void)navigationBarItemDidUpdateText:(id)arg1;	// IMP=0x000000000001077b
- (void)updateAccessibilityIdentifier;	// IMP=0x00000000000106a1
- (_Bool)_showsTranslationAvailabilityText;	// IMP=0x000000000001065c
- (_Bool)_showsReaderAvailabilityText;	// IMP=0x000000000001063a
- (id)_textForSubtitleType:(long long)arg1;	// IMP=0x00000000000105ea
- (void)_subtitleMarqueeStarted:(id)arg1;	// IMP=0x0000000000010444
- (id)_iconForLabelType:(long long)arg1;	// IMP=0x000000000001043c
- (id)_textColorForLabelType:(long long)arg1;	// IMP=0x0000000000010406
- (id)_textStyleForLabelType:(long long)arg1 withLabelTypes:(id)arg2;	// IMP=0x000000000001036d
- (void)_updateTitleContainerAlpha;	// IMP=0x0000000000010308
- (void)_updateSecurityAnnotation;	// IMP=0x000000000001025a
- (void)_updateLabelContentsAtIndexes:(id)arg1 iconsAtIndexes:(id)arg2;	// IMP=0x000000000000fd1d
- (void)_updateLabelContents;	// IMP=0x000000000000fd07
- (void)_setLabelTypes:(id)arg1 iconTypes:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000c71e
- (_Bool)_isTemporaryLabel:(long long)arg1;	// IMP=0x000000000000c6f8
- (void)_subtitleTimerFired:(id)arg1;	// IMP=0x000000000000c5f7
- (void)_startTemporaryLabelTimerIfNeeded;	// IMP=0x000000000000c2e2
- (void)_updateLabelTypesForMinimized:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000be5d
- (void)_updateLabelTypesAnimated:(_Bool)arg1;	// IMP=0x000000000000be3e
- (double)horizontalPointerPaddingForButton:(id)arg1;	// IMP=0x000000000000be2c
- (void)_updateButtonAlphaForMinimizedPercent:(double)arg1;	// IMP=0x000000000000bba2
- (_Bool)_shouldHideButtonsForMinimized:(_Bool)arg1;	// IMP=0x000000000000bb8c
- (_Bool)_shouldHideButtons;	// IMP=0x000000000000bb6f
- (_Bool)_transitionFromButtons:(id)arg1 toButtons:(id)arg2 withConstraintsToDeactivate:(id)arg3;	// IMP=0x000000000000b7a7
- (void)_updatePlaceholderText;	// IMP=0x000000000000b3b0
- (void)_updateShowsPrivateAnnotation;	// IMP=0x000000000000b355
@property(readonly, nonatomic) struct CGSize urlSize;
- (_Bool)_progressViewAlignsToTopWhenMinimized;	// IMP=0x000000000000af37
@property(readonly, nonatomic) NSNumber *microphoneContentOriginX;
@property(readonly, nonatomic) struct CGRect keyContentRect;
@property(nonatomic, setter=setHighlighted:) _Bool isHighlighted;
- (void)_updateButtonsTransform;	// IMP=0x000000000000a8a7
- (void)setMinimized:(_Bool)arg1;	// IMP=0x000000000000a4a4
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000000a257
- (void)_invalidateHeight;	// IMP=0x0000000000009fd2
- (void)willChangeToMinimized:(_Bool)arg1 coordinator:(id)arg2;	// IMP=0x0000000000009be8
- (void)prepareForSizingNavigationBar:(id)arg1;	// IMP=0x0000000000009b10
- (void)_updateTitleContainerAlignment;	// IMP=0x0000000000009a44
- (double)_interButtonSpacing;	// IMP=0x00000000000096af
- (struct CGPoint)_minimumEdgeMargin;	// IMP=0x00000000000095de
- (struct CGPoint)_titleToEdgeMargin;	// IMP=0x0000000000009504
- (double)_titleToButtonSpacing;	// IMP=0x0000000000009477
- (id)_horizontalAlignmentConstraintForLabel:(id)arg1;	// IMP=0x0000000000009365
- (_Bool)_shouldCenterButtonsBetweenEdgeAndTitle:(id)arg1;	// IMP=0x00000000000092ce
- (void)_createTrailingButtonConstraints;	// IMP=0x0000000000008acd
- (void)_createLeadingButtonConstraints;	// IMP=0x0000000000008236
- (_Bool)_shouldCenterLabels;	// IMP=0x00000000000081c8
- (void)updateConstraints;	// IMP=0x0000000000007bc2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000007ad4
- (void)layoutSubviews;	// IMP=0x0000000000007a55
- (id)initWithFrame:(struct CGRect)arg1 layoutStyle:(long long)arg2;	// IMP=0x0000000000007313
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000729b
- (id)initForSizingWithFrame:(struct CGRect)arg1 layoutStyle:(long long)arg2;	// IMP=0x0000000000007245
- (id)initForSizingWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000071cd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000719e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

