//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, OBButtonTrayLayoutGuide, OBPrivacyLinkController, OBTemplateLabel, UIStackView, UIViewController, UIVisualEffectView;

@interface OBButtonTray : UIView
{
    _Bool _detached;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLinkController;	// 16 = 0x10
    UIViewController *_parentViewController;	// 24 = 0x18
    long long _backdropStyle;	// 32 = 0x20
    NSMutableArray *_buttons;	// 40 = 0x28
    OBButtonTrayLayoutGuide *_buttonLayoutGuide;	// 48 = 0x30
    OBTemplateLabel *_captionLabel;	// 56 = 0x38
    long long _captionStyle;	// 64 = 0x40
    UIStackView *_stackView;	// 72 = 0x48
    UIView *_backdropContainer;	// 80 = 0x50
    UIVisualEffectView *_effectView;	// 88 = 0x58
    NSLayoutConstraint *_buttonViewTopConstraint;	// 96 = 0x60
    NSLayoutConstraint *_buttonViewBottomConstraint;	// 104 = 0x68
    NSLayoutConstraint *_buttonViewLeadingConstraint;	// 112 = 0x70
    NSLayoutConstraint *_buttonViewTrailingConstraint;	// 120 = 0x78
    NSLayoutConstraint *_privacyLinkControllerLeadingConstraint;	// 128 = 0x80
    NSLayoutConstraint *_privacyLinkControllerTrailingConstraint;	// 136 = 0x88
    UIView *_privacyContainer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000005d56
@property(nonatomic, getter=isDetached) _Bool detached; // @synthesize detached=_detached;
@property(retain, nonatomic) UIView *privacyContainer; // @synthesize privacyContainer=_privacyContainer;
@property(retain, nonatomic) NSLayoutConstraint *privacyLinkControllerTrailingConstraint; // @synthesize privacyLinkControllerTrailingConstraint=_privacyLinkControllerTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *privacyLinkControllerLeadingConstraint; // @synthesize privacyLinkControllerLeadingConstraint=_privacyLinkControllerLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonViewTrailingConstraint; // @synthesize buttonViewTrailingConstraint=_buttonViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonViewLeadingConstraint; // @synthesize buttonViewLeadingConstraint=_buttonViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonViewBottomConstraint; // @synthesize buttonViewBottomConstraint=_buttonViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonViewTopConstraint; // @synthesize buttonViewTopConstraint=_buttonViewTopConstraint;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIView *backdropContainer; // @synthesize backdropContainer=_backdropContainer;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long captionStyle; // @synthesize captionStyle=_captionStyle;
@property(retain, nonatomic) OBTemplateLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) OBButtonTrayLayoutGuide *buttonLayoutGuide; // @synthesize buttonLayoutGuide=_buttonLayoutGuide;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long backdropStyle; // @synthesize backdropStyle=_backdropStyle;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
- (struct CGSize)detachedSize;	// IMP=0x000000000000596f
- (_Bool)_shouldHandleLandscapeiPhoneLayout;	// IMP=0x00000000000058f2
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000575e
- (void)_updateTrayVisibility;	// IMP=0x0000000000005691
- (void)_setUpBackdrops;	// IMP=0x0000000000005208
- (double)bottomPadding;	// IMP=0x0000000000004fc4
- (double)topPadding;	// IMP=0x0000000000004d8b
- (void)_updateButtonConstraints;	// IMP=0x0000000000004c3b
- (void)didMoveToSuperview;	// IMP=0x00000000000049c1
- (void)_updateCaptionTextAppearance;	// IMP=0x0000000000004847
- (void)setCaptionText:(id)arg1 style:(long long)arg2;	// IMP=0x000000000000453f
- (void)setCaptionText:(id)arg1;	// IMP=0x0000000000004528
- (void)addCaptionText:(id)arg1;	// IMP=0x0000000000004516
- (_Bool)hasContent;	// IMP=0x00000000000044b3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000043c6
- (void)setPrivacyLinkForBundles:(id)arg1;	// IMP=0x0000000000003bad
- (void)addPrivacyLinkForBundles:(id)arg1;	// IMP=0x0000000000003b9b
- (void)removeAllButtons;	// IMP=0x00000000000038ef
- (void)removeButton:(id)arg1;	// IMP=0x0000000000003751
- (void)addButton:(id)arg1;	// IMP=0x0000000000003422
- (void)showButtonsAvailable;	// IMP=0x00000000000032aa
- (void)showButtonsBusy;	// IMP=0x0000000000003135
- (void)layoutSubviews;	// IMP=0x00000000000030f4
- (void)removeFromSuperview;	// IMP=0x0000000000002e23
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000223c

@end

