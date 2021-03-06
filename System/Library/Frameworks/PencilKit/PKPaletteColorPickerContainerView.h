//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PKDrawingPaletteInputAssistantContainerView, PKPaletteAdditionalOptionsView, PKPaletteColorPickerView, PKPaletteInputAssistantViewController, UIStackView;
@protocol PKDrawingPaletteViewStateSubject, PKPaletteAdditionalOptionsViewDelegate, PKPaletteColorPickerContainerViewDelegate, PKPalettePopoverPresenting;

@interface PKPaletteColorPickerContainerView : UIView <UIPopoverPresentationControllerDelegate, PKPalettePopoverDismissing>
{
    _Bool _shouldHideColorPicker;	// 8 = 0x8
    _Bool _shouldShowAdditionalOptionsView;	// 9 = 0x9
    _Bool _shouldShowInputAssistantView;	// 10 = 0xa
    id <PKPaletteColorPickerContainerViewDelegate> _delegate;	// 16 = 0x10
    id <PKDrawingPaletteViewStateSubject> _paletteViewState;	// 24 = 0x18
    PKPaletteColorPickerView *_colorPickerView;	// 32 = 0x20
    id <PKPalettePopoverPresenting> _palettePopoverPresenting;	// 40 = 0x28
    id <PKPaletteAdditionalOptionsViewDelegate> _additionalOptionsViewDelegate;	// 48 = 0x30
    long long _layoutAxis;	// 56 = 0x38
    UIStackView *_stackView;	// 64 = 0x40
    PKPaletteAdditionalOptionsView *_additionalOptionsView;	// 72 = 0x48
    PKDrawingPaletteInputAssistantContainerView *_inputAssistantContainerView;	// 80 = 0x50
    PKPaletteInputAssistantViewController *_inputAssistantViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000008c7f5
@property(retain, nonatomic) PKPaletteInputAssistantViewController *inputAssistantViewController; // @synthesize inputAssistantViewController=_inputAssistantViewController;
@property(retain, nonatomic) PKDrawingPaletteInputAssistantContainerView *inputAssistantContainerView; // @synthesize inputAssistantContainerView=_inputAssistantContainerView;
@property(retain, nonatomic) PKPaletteAdditionalOptionsView *additionalOptionsView; // @synthesize additionalOptionsView=_additionalOptionsView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(nonatomic) _Bool shouldShowInputAssistantView; // @synthesize shouldShowInputAssistantView=_shouldShowInputAssistantView;
@property(nonatomic) _Bool shouldShowAdditionalOptionsView; // @synthesize shouldShowAdditionalOptionsView=_shouldShowAdditionalOptionsView;
@property(nonatomic) _Bool shouldHideColorPicker; // @synthesize shouldHideColorPicker=_shouldHideColorPicker;
@property(nonatomic) __weak id <PKPaletteAdditionalOptionsViewDelegate> additionalOptionsViewDelegate; // @synthesize additionalOptionsViewDelegate=_additionalOptionsViewDelegate;
@property(nonatomic) __weak id <PKPalettePopoverPresenting> palettePopoverPresenting; // @synthesize palettePopoverPresenting=_palettePopoverPresenting;
@property(readonly, nonatomic) PKPaletteColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(nonatomic) __weak id <PKDrawingPaletteViewStateSubject> paletteViewState; // @synthesize paletteViewState=_paletteViewState;
@property(nonatomic) __weak id <PKPaletteColorPickerContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000008c58c
- (void)_dismissViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008c509
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008c1eb
- (_Bool)_isInputAssistantViewControllerPresented;	// IMP=0x000000000008c0d6
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000008c0c9
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x000000000008c0bc
- (void)_showInputAssistantPopover;	// IMP=0x000000000008ba12
- (void)_handleUCBButtonPressed;	// IMP=0x000000000008b939
- (void)_installInputAssistantViewContainer;	// IMP=0x000000000008b811
- (void)_uninstallAdditionalOptionsView;	// IMP=0x000000000008b758
- (void)_installAdditionalOptionsView;	// IMP=0x000000000008b5ee
- (_Bool)_isAdditionalOptionsViewInstalled;	// IMP=0x000000000008b553
- (void)_updateUI;	// IMP=0x000000000008b0a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008aa77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

