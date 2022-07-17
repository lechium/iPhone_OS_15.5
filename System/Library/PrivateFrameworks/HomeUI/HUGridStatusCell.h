//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>
#import <HomeUI/HUIconRenouncing-Protocol.h>

@class HFItem, HUGridStatusCellLayoutOptions, HUGridStatusCellTextView, HUIconView, NSArray, NSString, UILabel, UIStackView, UIView;

@interface HUGridStatusCell <HUAccessoryViewCellProtocol, HUIconRenouncing>
{
    HFItem *_item;	// 8 = 0x8
    UIView *_accessoryView;	// 16 = 0x10
    HUGridStatusCellLayoutOptions *_statusCellLayoutOptions;	// 24 = 0x18
    HUIconView *_iconView;	// 32 = 0x20
    HUGridStatusCellTextView *_titleTextView;	// 40 = 0x28
    UIStackView *_descriptionStackView;	// 48 = 0x30
    NSArray *_layoutConstraints;	// 56 = 0x38
    UILabel *_largeDescriptionLabel;	// 64 = 0x40
    UILabel *_descriptionLabel;	// 72 = 0x48
}

+ (Class)layoutOptionsClass;	// IMP=0x00000000001f3614
+ (_Bool)shouldUseOutlineStyleForCategory:(unsigned long long)arg1;	// IMP=0x00000000001f340f
+ (id)outlineStyleBackgroundEffect;	// IMP=0x00000000001f3380
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000001f2990
- (void).cxx_destruct;	// IMP=0x00000000001f764d
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *largeDescriptionLabel; // @synthesize largeDescriptionLabel=_largeDescriptionLabel;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIStackView *descriptionStackView; // @synthesize descriptionStackView=_descriptionStackView;
@property(retain, nonatomic) HUGridStatusCellTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak HUGridStatusCellLayoutOptions *statusCellLayoutOptions; // @synthesize statusCellLayoutOptions=_statusCellLayoutOptions;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)setItem:(id)arg1;	// IMP=0x00000000001f7547
- (id)item;	// IMP=0x00000000001f7536
- (void)updateConstraints;	// IMP=0x00000000001f5e15
- (void)_invalidateConstraints;	// IMP=0x00000000001f5d6e
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001f5b4e
- (void)_updateMask;	// IMP=0x00000000001f5854
- (void)_updateStyle;	// IMP=0x00000000001f5200
- (id)_numberedBadgeViewWithValue:(long long)arg1;	// IMP=0x00000000001f5110
- (id)_iconBadgeViewWithImage:(id)arg1;	// IMP=0x00000000001f5054
- (void)_updateBadge;	// IMP=0x00000000001f4a50
- (void)_updateIconAnimated:(_Bool)arg1;	// IMP=0x00000000001f4821
- (void)_updateLabels;	// IMP=0x00000000001f3993
- (void)layoutOptionsDidChange;	// IMP=0x00000000001f38de
- (void)reclaimIconIfPossible;	// IMP=0x00000000001f38c1
- (void)renounceIcon;	// IMP=0x00000000001f38a4
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000001f3625
- (unsigned long long)iconDisplayStyle;	// IMP=0x00000000001f3261
- (_Bool)managesOwnBackgroundViewLayout;	// IMP=0x00000000001f3157
- (void)_setupStatusCell;	// IMP=0x00000000001f2b95
- (void)prepareForReuse;	// IMP=0x00000000001f2a41
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f29e4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f2998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
