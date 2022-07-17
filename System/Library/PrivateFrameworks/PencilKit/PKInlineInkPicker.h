//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <PencilKit/PKInkAttributesPickerDelegate-Protocol.h>
#import <PencilKit/PKInlineColorPickerContentsHiddenDelegate-Protocol.h>
#import <PencilKit/PKInlineColorPickerDelegate-Protocol.h>
#import <PencilKit/PKInlineColorPickerSerialViewControllerTransitionDelegate-Protocol.h>
#import <PencilKit/UIPencilInteractionDelegate-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PencilKit/_PKAllowDrawingWhilePresentingPopoverViewDelegate-Protocol.h>
#import <PencilKit/_PKInlineColorPickerAllowDrawingWithPopoverDelegate-Protocol.h>
#import <PencilKit/_PKToolIndicatorDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSObject, NSString, PKInk, PKInkAttributesPicker, PKInlineColorPicker, UIColor, UILayoutGuide, UIPencilInteraction, UIView, _PKAllowDrawingWhilePresentingPopoverView, _PKToolIndicator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, PKInlineInkPickerDelegate;

@interface PKInlineInkPicker : UIControl <PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, PKInkAttributesPickerDelegate, UIPopoverPresentationControllerDelegate, PKInlineColorPickerContentsHiddenDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, UIPencilInteractionDelegate, _PKToolIndicatorDelegate>
{
    _Bool _shouldAnimateRuler;	// 8 = 0x8
    _Bool _shouldEmboss;	// 9 = 0x9
    _Bool _forceCompactLayout;	// 10 = 0xa
    _Bool _isUsedOnDarkBackground;	// 11 = 0xb
    _Bool _contentsHidden;	// 12 = 0xc
    _Bool _rulerEnabled;	// 13 = 0xd
    _Bool _pencilGestureSupportEnabled;	// 14 = 0xe
    NSArray *_inkIdentifiers;	// 16 = 0x10
    unsigned long long _selectedInkIndex;	// 24 = 0x18
    unsigned long long _previousDrawingToolIndex;	// 32 = 0x20
    unsigned long long _previousToolIndex;	// 40 = 0x28
    NSArray *_toolButtonItems;	// 48 = 0x30
    PKInlineColorPicker *_colorPicker;	// 56 = 0x38
    UIView *_backgroundView;	// 64 = 0x40
    UIView *_separatorView;	// 72 = 0x48
    UIView *_clippingView;	// 80 = 0x50
    NSMutableDictionary *__inkForIdentifierDict;	// 88 = 0x58
    _PKAllowDrawingWhilePresentingPopoverView *__allowDrawingWhilePresentingPopoverView;	// 96 = 0x60
    PKInkAttributesPicker *_presentedInkAttributesPicker;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_serialViewControllerTransitionQueue;	// 112 = 0x70
    NSObject<OS_dispatch_semaphore> *_serialViewControllerTransitionSemaphore;	// 120 = 0x78
    UIPencilInteraction *_pencilInteraction;	// 128 = 0x80
    _PKToolIndicator *_contentsHiddenToolIndicator;	// 136 = 0x88
    id <PKInlineInkPickerDelegate> _delegate;	// 144 = 0x90
    unsigned long long _sizeState;	// 152 = 0x98
    unsigned long long _selectionState;	// 160 = 0xa0
    UILayoutGuide *_backgroundViewLayoutGuide;	// 168 = 0xa8
    NSArray *_allowedTools;	// 176 = 0xb0
    unsigned long long _attributeSet;	// 184 = 0xb8
}

+ (_Bool)_axLargerTextSizesEnabled;	// IMP=0x000000000023af05
+ (id)sharedImageNameCache;	// IMP=0x000000000023a594
+ (id)imageNamed:(id)arg1;	// IMP=0x000000000023a3b1
+ (id)_sharedPencilUserDefaults;	// IMP=0x0000000000239090
+ (double)_outputForResistanceFunction:(double)arg1 factor:(double)arg2;	// IMP=0x0000000000238d7a
+ (id)_defaultCriticallyDampedSpringAnimator;	// IMP=0x0000000000238668
+ (id)defaultInkForAttributeSet:(unsigned long long)arg1;	// IMP=0x0000000000238649
+ (id)_defaultInkForIdentifier:(id)arg1 attributeSet:(unsigned long long)arg2;	// IMP=0x0000000000238538
+ (_Bool)inkIdentifierHasMutableAttributes:(id)arg1;	// IMP=0x0000000000238057
+ (double)spacingForToolIndex:(unsigned long long)arg1 sizeState:(unsigned long long)arg2;	// IMP=0x0000000000237f1d
- (void).cxx_destruct;	// IMP=0x000000000023b8b6
@property(nonatomic) unsigned long long attributeSet; // @synthesize attributeSet=_attributeSet;
@property(nonatomic) _Bool pencilGestureSupportEnabled; // @synthesize pencilGestureSupportEnabled=_pencilGestureSupportEnabled;
@property(retain, nonatomic) NSArray *allowedTools; // @synthesize allowedTools=_allowedTools;
@property(nonatomic) _Bool rulerEnabled; // @synthesize rulerEnabled=_rulerEnabled;
@property(nonatomic) _Bool contentsHidden; // @synthesize contentsHidden=_contentsHidden;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(readonly, nonatomic) UILayoutGuide *backgroundViewLayoutGuide; // @synthesize backgroundViewLayoutGuide=_backgroundViewLayoutGuide;
@property(nonatomic) _Bool forceCompactLayout; // @synthesize forceCompactLayout=_forceCompactLayout;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
@property(nonatomic) __weak id <PKInlineInkPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _PKToolIndicator *contentsHiddenToolIndicator; // @synthesize contentsHiddenToolIndicator=_contentsHiddenToolIndicator;
@property(retain, nonatomic) UIPencilInteraction *pencilInteraction; // @synthesize pencilInteraction=_pencilInteraction;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *serialViewControllerTransitionSemaphore; // @synthesize serialViewControllerTransitionSemaphore=_serialViewControllerTransitionSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialViewControllerTransitionQueue; // @synthesize serialViewControllerTransitionQueue=_serialViewControllerTransitionQueue;
@property(retain, nonatomic) PKInkAttributesPicker *presentedInkAttributesPicker; // @synthesize presentedInkAttributesPicker=_presentedInkAttributesPicker;
@property(retain, nonatomic) _PKAllowDrawingWhilePresentingPopoverView *_allowDrawingWhilePresentingPopoverView; // @synthesize _allowDrawingWhilePresentingPopoverView=__allowDrawingWhilePresentingPopoverView;
@property(retain, nonatomic) NSMutableDictionary *_inkForIdentifierDict; // @synthesize _inkForIdentifierDict=__inkForIdentifierDict;
@property(nonatomic) _Bool shouldEmboss; // @synthesize shouldEmboss=_shouldEmboss;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) PKInlineColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) NSArray *toolButtonItems; // @synthesize toolButtonItems=_toolButtonItems;
@property(readonly, nonatomic) unsigned long long previousToolIndex; // @synthesize previousToolIndex=_previousToolIndex;
@property(readonly, nonatomic) unsigned long long previousDrawingToolIndex; // @synthesize previousDrawingToolIndex=_previousDrawingToolIndex;
@property(readonly, nonatomic) unsigned long long selectedInkIndex; // @synthesize selectedInkIndex=_selectedInkIndex;
@property(retain, nonatomic) NSArray *inkIdentifiers; // @synthesize inkIdentifiers=_inkIdentifiers;
- (id)_axLabelForToolButton:(id)arg1;	// IMP=0x000000000023b123
- (void)_axHandleLongPressForLargeTextHUD:(id)arg1;	// IMP=0x000000000023af74
- (void)toolIndicator:(id)arg1 willPresent:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000023ae29
- (struct CGRect)toolIndicatorCenteringRect:(id)arg1;	// IMP=0x000000000023acdb
- (void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg1;	// IMP=0x000000000023ac65
- (void)_inlineColorPickerUpdateFrameForAllowDrawingPassthroughView:(id)arg1;	// IMP=0x000000000023ac53
- (void)_inlineColorPickerTeardownAllowDrawingPassthroughView:(id)arg1;	// IMP=0x000000000023ac41
- (void)_inlineColorPickerSetupAllowDrawingPassthroughViewIfNeeded:(id)arg1;	// IMP=0x000000000023ac2f
- (id)_inlineColorPickerAllowDrawingPassthroughView:(id)arg1;	// IMP=0x000000000023ac1d
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x000000000023ab6d
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000023ab0d
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000023ab00
- (void)inkAttributesPickerDidChangeSelectedInk:(id)arg1;	// IMP=0x000000000023aa9a
- (struct CGRect)_colorPickerRectForContentsHiddenColorPickerPresentation:(id)arg1;	// IMP=0x000000000023a93e
- (id)_colorPickerBarButtonItemForContentsHiddenColorPickerPresentation:(id)arg1;	// IMP=0x000000000023a86c
- (_Bool)_colorPickerIsInkPickerContentsHidden:(id)arg1;	// IMP=0x000000000023a85a
- (id)_semaphoreForSerialViewControllerTransitionFromColorPicker:(id)arg1;	// IMP=0x000000000023a848
- (id)_queueForSerialViewControllerTransitionFromColorPicker:(id)arg1;	// IMP=0x000000000023a836
- (id)viewControllerForPopoverPresentationFromColorPicker:(id)arg1;	// IMP=0x000000000023a824
- (void)colorPickerColorTappedInCompactChooseToolState:(id)arg1;	// IMP=0x000000000023a74a
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(_Bool)arg2;	// IMP=0x000000000023a5fb
- (void)updateSelectedToolColor:(id)arg1;	// IMP=0x000000000023a5e9
- (id)minimizedImageForInk:(id)arg1 small:(_Bool)arg2;	// IMP=0x000000000023a576
- (double)cachedToolButtonWidthForSizeState:(unsigned long long)arg1;	// IMP=0x000000000023a1d2
- (id)createToolButtonItemWithInkIdentifier:(id)arg1 shouldEmboss:(_Bool)arg2;	// IMP=0x000000000023a00d
- (double)offsetForToolIndex:(unsigned long long)arg1 pressed:(_Bool)arg2;	// IMP=0x0000000000239fe5
- (void)userDidTouchTool:(id)arg1;	// IMP=0x0000000000239d19
- (void)toolTapped:(id)arg1;	// IMP=0x0000000000239928
- (void)_animateRulerToggled:(id)arg1;	// IMP=0x00000000002396a5
- (void)_dismissInkAttributesPicker:(CDUnknownBlockType)arg1;	// IMP=0x000000000023954d
- (void)_showInkAttributesPickerFromView:(id)arg1 frame:(struct CGRect)arg2 displayMode:(unsigned long long)arg3 shouldHideArrow:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002391ce
- (id)_effectiveViewControllerForPopoverPresentation;	// IMP=0x00000000002390fc
- (void)_resetUIOnPencilDoubleTapTimerEnded;	// IMP=0x000000000023904c
- (struct CGRect)_frameForNonDrawingToolAtIndex:(long long)arg1;	// IMP=0x0000000000238dd3
- (id)_inkForSwitchingToPreviousToolOnPencilDoubleTap;	// IMP=0x0000000000238cd5
- (id)_inkForTogglingEraserAndLastDrawingToolOnPencilDoubleTap;	// IMP=0x0000000000238bbc
- (void)pencilInteractionDidTap:(id)arg1;	// IMP=0x00000000002387e1
- (_Bool)_shouldEnablePencilGestures;	// IMP=0x00000000002386fd
- (void)resetToDrawingToolWithAnimation:(_Bool)arg1;	// IMP=0x00000000002384a2
- (void)notifyColorSelected:(id)arg1 didChange:(_Bool)arg2;	// IMP=0x00000000002383fb
- (void)notifyToolSelected:(_Bool)arg1;	// IMP=0x000000000023834a
- (void)toggleRuler;	// IMP=0x00000000002382d7
- (id)lastDrawingToolInk;	// IMP=0x0000000000238181
- (_Bool)isDrawingToolIdentifier:(id)arg1;	// IMP=0x00000000002380f7
- (_Bool)isDrawingToolIndex:(unsigned long long)arg1;	// IMP=0x0000000000237f9a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;	// IMP=0x0000000000237e78
- (struct CGSize)minimumSizeForSizeState:(unsigned long long)arg1 selectionState:(unsigned long long)arg2;	// IMP=0x0000000000237e56
- (unsigned long long)selectionStateForSizeState:(unsigned long long)arg1 previousSelectionState:(unsigned long long)arg2;	// IMP=0x0000000000237e36
- (unsigned long long)sizeStateForWidth:(double)arg1;	// IMP=0x0000000000237de7
- (void)_setSelectionStateNoLayout:(unsigned long long)arg1;	// IMP=0x0000000000237d29
- (void)_setSizeStateNoLayout:(unsigned long long)arg1;	// IMP=0x0000000000237a96
- (void)_forceSetAttributeSet:(unsigned long long)arg1;	// IMP=0x0000000000237742
@property(readonly, nonatomic) struct CGRect _extentRect; // @dynamic _extentRect;
- (void)setContentsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002371d2
@property(nonatomic) unsigned long long colorSet;
- (void)_updateSelectedInkIndex:(unsigned long long)arg1;	// IMP=0x0000000000236f07
@property(copy, nonatomic) NSString *selectedInkIdentifier;
- (id)colorForInkIdentifier:(id)arg1;	// IMP=0x0000000000236e05
@property(copy, nonatomic) UIColor *selectedColor;
- (id)inkIdentifierForIndex:(unsigned long long)arg1;	// IMP=0x0000000000236cdf
@property(copy, nonatomic) PKInk *selectedInk;
- (void)setSelectedInkIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000236b3b
- (void)setSelectedColor:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002369f1
- (void)selectColorPickerColor:(id)arg1;	// IMP=0x000000000023697f
- (void)_updateSubviewsWithInk:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002367aa
- (void)setSelectedInk:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002363f1
- (id)_layoutSeparatorViewColorEmbossed:(_Bool)arg1 isUsedOnDarkBackground:(_Bool)arg2;	// IMP=0x000000000023639e
- (struct CGRect)_layoutCenteredFrameForToolIndex:(long long)arg1 uncenteredFrames:(id)arg2 centeringTransform:(struct CGAffineTransform)arg3;	// IMP=0x000000000023612d
- (id)_layoutCalculateUncenteredSubviewFrames;	// IMP=0x0000000000235a02
- (_Bool)_layoutButtonSelectedForToolIndex:(long long)arg1;	// IMP=0x00000000002359c3
- (double)_layoutAlphaForToolIndex:(long long)arg1;	// IMP=0x000000000023597c
- (double)_layoutYOffsetForToolIndex:(long long)arg1;	// IMP=0x0000000000235875
- (void)_layoutUpdateSizeAndSelectionState;	// IMP=0x000000000023578f
- (void)layoutSubviews;	// IMP=0x0000000000234652
- (id)_toolButtonContainingPoint:(struct CGPoint)arg1;	// IMP=0x000000000023431e
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000023425a
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002341b5
- (void)_updateFrameForAllowDrawingWhilePresentingPopoverView;	// IMP=0x0000000000234085
- (void)_teardownAllowDrawingWhilePresentingPopoverView;	// IMP=0x000000000023402b
- (void)_setupAllowDrawingWhilePresentingPopoverViewIfNecessaryWithDelegate:(id)arg1;	// IMP=0x0000000000233e9e
- (id)_allowDrawingWhilePresentingPopoverViewPassthroughArray;	// IMP=0x0000000000233de2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000233d6d
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000233d54
- (void)_reloadToolbarItems;	// IMP=0x0000000000233a72
- (void)_loadToolbarItems;	// IMP=0x00000000002338af
- (void)_commonInit;	// IMP=0x0000000000232c71
- (id)initWithEmbossing:(_Bool)arg1;	// IMP=0x0000000000232bf1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000232b7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
