//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFItem, HUInformationalServiceGridViewController, NSLayoutConstraint, NSSet, UILabel;

@interface HUSoftwareUpdateLockupView
{
    _Bool _isObservingPreferredContentSize;	// 8 = 0x8
    HFItem *_item;	// 16 = 0x10
    HUInformationalServiceGridViewController *_serviceGridViewController;	// 24 = 0x18
    UILabel *_tertiaryDetailLabel;	// 32 = 0x20
    NSLayoutConstraint *_serviceGridHeightConstraint;	// 40 = 0x28
    NSSet *_affectedAccessories;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c8c16
@property(nonatomic) _Bool isObservingPreferredContentSize; // @synthesize isObservingPreferredContentSize=_isObservingPreferredContentSize;
@property(retain, nonatomic) NSSet *affectedAccessories; // @synthesize affectedAccessories=_affectedAccessories;
@property(retain, nonatomic) NSLayoutConstraint *serviceGridHeightConstraint; // @synthesize serviceGridHeightConstraint=_serviceGridHeightConstraint;
@property(retain, nonatomic) UILabel *tertiaryDetailLabel; // @synthesize tertiaryDetailLabel=_tertiaryDetailLabel;
@property(retain, nonatomic) HUInformationalServiceGridViewController *serviceGridViewController; // @synthesize serviceGridViewController=_serviceGridViewController;
- (void)setItem:(id)arg1;	// IMP=0x00000000000c8b62
- (id)item;	// IMP=0x00000000000c8b51
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000000c8761
- (void)updateDescriptionExpandableTextView:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000000c85e6
- (void)updateIconView:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000000c8512
- (id)initializeIconViewWithSize:(unsigned long long)arg1;	// IMP=0x00000000000c84be
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000c8295
- (void)dealloc;	// IMP=0x00000000000c7d07
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c7ad5

@end

