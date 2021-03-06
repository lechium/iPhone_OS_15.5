//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarCellularNetworkTypeView, _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem
{
    _Bool _reducesFontSize;	// 80 = 0x50
    _UIStatusBarDualCellularSignalView *_dualSignalView;	// 88 = 0x58
    _UIStatusBarMultilineStringView *_dualNameView;	// 96 = 0x60
    _UIStatusBarStringView *_dualSingleLineNameView;	// 104 = 0x68
    _UIStatusBarStringView *_dualSingleLineNameAndTypeView;	// 112 = 0x70
    _UIStatusBarCellularNetworkTypeView *_animatedNetworkTypeView;	// 120 = 0x78
}

+ (id)animatedTypeDisplayIdentifier;	// IMP=0x0000000000dd9aa6
+ (id)dualSingleLineNameAndTypeDisplayIdentifier;	// IMP=0x0000000000dd9a8d
+ (id)dualSingleLineNameDisplayIdentifier;	// IMP=0x0000000000dd9a74
+ (id)dualNameDisplayIdentifier;	// IMP=0x0000000000dd9a5b
+ (id)dualSignalStrengthDisplayIdentifier;	// IMP=0x0000000000dd9a42
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;	// IMP=0x0000000000dee603
- (void).cxx_destruct;	// IMP=0x0000000000ddd0b5
@property(retain, nonatomic) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView; // @synthesize animatedNetworkTypeView=_animatedNetworkTypeView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameAndTypeView; // @synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameView; // @synthesize dualSingleLineNameView=_dualSingleLineNameView;
@property(retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // @synthesize dualNameView=_dualNameView;
@property(retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // @synthesize dualSignalView=_dualSignalView;
@property(nonatomic) _Bool reducesFontSize; // @synthesize reducesFontSize=_reducesFontSize;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000ddce8f
- (void)_create_animatedNetworkTypeView;	// IMP=0x0000000000ddce35
- (void)_create_dualSingleLineNameAndTypeView;	// IMP=0x0000000000ddcd48
- (void)_create_dualSingleLineNameView;	// IMP=0x0000000000ddcc5b
- (void)_create_dualNameView;	// IMP=0x0000000000ddcaae
- (void)_create_dualSignalView;	// IMP=0x0000000000ddc9a1
- (id)entryForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000ddc738
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;	// IMP=0x0000000000ddc2fb
- (_Bool)_animateServiceType:(long long)arg1 prefixLength:(long long *)arg2 currentType:(long long)arg3;	// IMP=0x0000000000ddc2c3
- (_Bool)_showCallFowardingForEntry:(id)arg1;	// IMP=0x0000000000ddc1f3
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ddc05f
- (struct _NSRange)_nonCondensedFontRangeForEntry:(id)arg1;	// IMP=0x0000000000ddc029
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000ddbf24
- (id)_stringForCellularType:(long long)arg1;	// IMP=0x0000000000ddbdaa
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000ddbbeb
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000dd9c7a
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000000dd9b3d
- (id)dependentEntryKeys;	// IMP=0x0000000000dd9b0b
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x0000000000dd9abf

@end

