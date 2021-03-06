//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SKUISuggestedHandlesSettingsHeaderFooterDescription, UILabel;

__attribute__((visibility("hidden")))
@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView
{
    NSMutableArray *_buttons;	// 8 = 0x8
    SKUISuggestedHandlesSettingsHeaderFooterDescription *_description;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

+ (id)_helpLabelWithDescription:(id)arg1 forWidth:(double)arg2;	// IMP=0x000000000035a658
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;	// IMP=0x0000000000359da7
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000359da1
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;	// IMP=0x0000000000359d8b
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000359d83
- (void).cxx_destruct;	// IMP=0x000000000035a7af
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000035a61c
- (void)layoutSubviews;	// IMP=0x000000000035a271
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000035a269
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000359f35

@end

