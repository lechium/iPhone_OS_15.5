//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>
#import <HomeUI/HUIconRenouncing-Protocol.h>

@class HFItem, HUGridServiceCellLayoutOptions, HUGridServiceCellTextView, HUIconView, HUVisualEffectContainerView, NSString, UIActivityIndicatorView, UIColor, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol NACancelable;

@interface HUGridServiceCell <HUAccessoryViewCellProtocol, HUIconRenouncing>
{
    _Bool _shouldColorDescription;	// 8 = 0x8
    _Bool _shouldShowLoadingState;	// 9 = 0x9
    _Bool _shouldShowRoomName;	// 10 = 0xa
    _Bool _hasUpdatedUISinceLastReuse;	// 11 = 0xb
    _Bool _showingUpdatingState;	// 12 = 0xc
    _Bool _showingProgressIndicator;	// 13 = 0xd
    HFItem *_serviceItem;	// 16 = 0x10
    UIView *_accessoryView;	// 24 = 0x18
    UIColor *_defaultNameTextColor;	// 32 = 0x20
    UIColor *_defaultDescriptionColor;	// 40 = 0x28
    HUIconView *_iconView;	// 48 = 0x30
    UIImageView *_supplementaryImageView;	// 56 = 0x38
    HUGridServiceCellTextView *_serviceTextView;	// 64 = 0x40
    UILabel *_coloredDescriptionLabel;	// 72 = 0x48
    UIVisualEffectView *_descriptionLabelEffectView;	// 80 = 0x50
    id <NACancelable> _showUpdatingStateAfterDelayToken;	// 88 = 0x58
    id <NACancelable> _showProgressIndicatorAfterDelayToken;	// 96 = 0x60
    UIView *_overrideAccessoryView;	// 104 = 0x68
    UIActivityIndicatorView *_activityIndicator;	// 112 = 0x70
    HUVisualEffectContainerView *_exclamationView;	// 120 = 0x78
    HUVisualEffectContainerView *_firmwareUpdateView;	// 128 = 0x80
}

+ (id)_iconTintColor;	// IMP=0x00000000001efef7
+ (Class)layoutOptionsClass;	// IMP=0x00000000001ee647
- (void).cxx_destruct;	// IMP=0x00000000001f1da9
@property(retain, nonatomic) HUVisualEffectContainerView *firmwareUpdateView; // @synthesize firmwareUpdateView=_firmwareUpdateView;
@property(retain, nonatomic) HUVisualEffectContainerView *exclamationView; // @synthesize exclamationView=_exclamationView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *overrideAccessoryView; // @synthesize overrideAccessoryView=_overrideAccessoryView;
@property(retain, nonatomic) id <NACancelable> showProgressIndicatorAfterDelayToken; // @synthesize showProgressIndicatorAfterDelayToken=_showProgressIndicatorAfterDelayToken;
@property(nonatomic) _Bool showingProgressIndicator; // @synthesize showingProgressIndicator=_showingProgressIndicator;
@property(retain, nonatomic) id <NACancelable> showUpdatingStateAfterDelayToken; // @synthesize showUpdatingStateAfterDelayToken=_showUpdatingStateAfterDelayToken;
@property(nonatomic) _Bool showingUpdatingState; // @synthesize showingUpdatingState=_showingUpdatingState;
@property(nonatomic) _Bool hasUpdatedUISinceLastReuse; // @synthesize hasUpdatedUISinceLastReuse=_hasUpdatedUISinceLastReuse;
@property(retain, nonatomic) UIVisualEffectView *descriptionLabelEffectView; // @synthesize descriptionLabelEffectView=_descriptionLabelEffectView;
@property(retain, nonatomic) UILabel *coloredDescriptionLabel; // @synthesize coloredDescriptionLabel=_coloredDescriptionLabel;
@property(retain, nonatomic) HUGridServiceCellTextView *serviceTextView; // @synthesize serviceTextView=_serviceTextView;
@property(retain, nonatomic) UIImageView *supplementaryImageView; // @synthesize supplementaryImageView=_supplementaryImageView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool shouldShowRoomName; // @synthesize shouldShowRoomName=_shouldShowRoomName;
@property(nonatomic) _Bool shouldShowLoadingState; // @synthesize shouldShowLoadingState=_shouldShowLoadingState;
@property(retain, nonatomic) UIColor *defaultDescriptionColor; // @synthesize defaultDescriptionColor=_defaultDescriptionColor;
@property(retain, nonatomic) UIColor *defaultNameTextColor; // @synthesize defaultNameTextColor=_defaultNameTextColor;
@property(nonatomic) _Bool shouldColorDescription; // @synthesize shouldColorDescription=_shouldColorDescription;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) HFItem *serviceItem; // @synthesize serviceItem=_serviceItem;
- (void)dragStateDidChange:(long long)arg1;	// IMP=0x00000000001f1a89
- (void)_createFirmwareUpdateViewIfNecessary;	// IMP=0x00000000001f18ed
- (id)_backgroundColorForSupplementaryIcon;	// IMP=0x00000000001f17a4
- (long long)_symbolScaleForCurrentEnvironment;	// IMP=0x00000000001f1761
- (void)_updateSupplementaryImageViewIfNecessary;	// IMP=0x00000000001f1251
- (void)_updateExclamationViewColor;	// IMP=0x00000000001f10fd
- (void)_createExclamationViewIfNecessary;	// IMP=0x00000000001f0f82
- (void)_updateAccessoryView;	// IMP=0x00000000001f0cd8
- (void)_updateSecondaryContentDisplayStyle;	// IMP=0x00000000001f0abb
- (id)_textConfiguration;	// IMP=0x00000000001f0567
- (id)_descriptionTextAttributesWithColor:(id)arg1;	// IMP=0x00000000001f03b0
- (void)_updateText;	// IMP=0x00000000001eff10
- (void)layoutSubviews;	// IMP=0x00000000001eedaf
- (void)displayStyleDidChange;	// IMP=0x00000000001eed6e
- (void)layoutOptionsDidChange;	// IMP=0x00000000001eeb57
- (void)_updateIconAnimated:(_Bool)arg1;	// IMP=0x00000000001eea17
- (void)reclaimIconIfPossible;	// IMP=0x00000000001ee9da
- (void)renounceIcon;	// IMP=0x00000000001ee99d
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000001ee67c
- (void)setItem:(id)arg1;	// IMP=0x00000000001ee66a
- (id)item;	// IMP=0x00000000001ee658
@property(nonatomic) _Bool disableContinuousIconAnimation;
@property(nonatomic) _Bool showProgressIndicatorAfterDelay;
@property(nonatomic) _Bool showUpdatingStateAfterDelay;
- (void)_setupCommonServiceCell;	// IMP=0x00000000001edabe
- (void)_setupServiceCell;	// IMP=0x00000000001ed90e
- (void)prepareForReuse;	// IMP=0x00000000001ed823
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ed7c6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ed77a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HUGridServiceCellLayoutOptions *layoutOptions; // @dynamic layoutOptions;
@property(readonly) Class superclass;

@end
