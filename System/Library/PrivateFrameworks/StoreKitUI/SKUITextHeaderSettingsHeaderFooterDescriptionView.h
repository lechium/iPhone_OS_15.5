//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIViewElement, UILabel;

__attribute__((visibility("hidden")))
@interface SKUITextHeaderSettingsHeaderFooterDescriptionView
{
    UILabel *_label;	// 8 = 0x8
    SKUIViewElement *_viewElement;	// 16 = 0x10
}

+ (id)_labelWithLabelElements:(id)arg1;	// IMP=0x0000000000060326
+ (id)_labelElementsFromViewElement:(id)arg1;	// IMP=0x0000000000060311
+ (id)_concatenateTextFromLabelElements:(id)arg1;	// IMP=0x00000000000600fe
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;	// IMP=0x000000000005fc58
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000005fc52
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000005fc4a
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;	// IMP=0x000000000005fc34
- (void).cxx_destruct;	// IMP=0x00000000000603fe
- (void)layoutSubviews;	// IMP=0x000000000005fed9
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000005fed1
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000005fdd6

@end

