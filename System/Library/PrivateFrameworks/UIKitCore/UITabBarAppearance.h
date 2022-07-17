//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImage, UITabBarItemAppearance, _UITabBarLayoutData;

@interface UITabBarAppearance
{
    _UITabBarLayoutData *_layoutData;	// 24 = 0x18
    UITabBarItemAppearance *_stackedLayoutAppearance;	// 32 = 0x20
    UITabBarItemAppearance *_inlineLayoutAppearance;	// 40 = 0x28
    UITabBarItemAppearance *_compactInlineLayoutAppearance;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000305090
- (void).cxx_destruct;	// IMP=0x00000000003066c8
@property(copy, nonatomic) UITabBarItemAppearance *compactInlineLayoutAppearance; // @synthesize compactInlineLayoutAppearance=_compactInlineLayoutAppearance;
@property(copy, nonatomic) UITabBarItemAppearance *inlineLayoutAppearance; // @synthesize inlineLayoutAppearance=_inlineLayoutAppearance;
@property(copy, nonatomic) UITabBarItemAppearance *stackedLayoutAppearance; // @synthesize stackedLayoutAppearance=_stackedLayoutAppearance;
- (void)_tabBarItemDataChanged:(id)arg1;	// IMP=0x00000000003064d8
@property(nonatomic) double stackedItemSpacing;
@property(nonatomic) double stackedItemWidth;
@property(nonatomic) long long stackedItemPositioning;
@property(retain, nonatomic) UIImage *selectionIndicatorImage;
@property(copy, nonatomic) UIColor *selectionIndicatorTintColor;
- (id)_tabLayoutAppearanceData;	// IMP=0x0000000000305ab8
- (id)_dataForItemStyle:(long long)arg1;	// IMP=0x00000000003059c5
- (id)_compactInlineTabButtonAppearanceData;	// IMP=0x00000000003059a8
- (id)_inlineTabButtonAppearanceData;	// IMP=0x000000000030598b
- (id)_stackedTabButtonAppearanceData;	// IMP=0x000000000030596e
- (_Bool)_checkEqualTo:(id)arg1;	// IMP=0x0000000000305719
- (unsigned long long)_hashInto:(unsigned long long)arg1;	// IMP=0x000000000030566e
- (void)_describeInto:(id)arg1;	// IMP=0x0000000000305547
- (void)_completeInit;	// IMP=0x00000000003054c4
- (void)_decodeFromCoder:(id)arg1;	// IMP=0x0000000000305370
- (void)_copyFromAppearance:(id)arg1;	// IMP=0x00000000003051b9
- (void)_setupDefaults;	// IMP=0x0000000000305098
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000304fb7

@end
