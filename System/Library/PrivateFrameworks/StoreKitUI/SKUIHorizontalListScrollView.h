//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalListScrollView <SKUIViewElementView>
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSMapTable *_viewElementViews;	// 16 = 0x10
    NSMapTable *_imageViewToImageResourceCacheKey;	// 24 = 0x18
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000022f3dd
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x000000000022f29d
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x000000000022f1d8
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x000000000022f0e9
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x000000000022ddc9
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000022db93
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x000000000022db7d
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000022da41
- (void).cxx_destruct;	// IMP=0x000000000022f4c6
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000022f018
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000022ed8f
- (void)layoutSubviews;	// IMP=0x000000000022ea36
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000022e805
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000022e7fd
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000022e52e
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000022e511
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000022e06a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000022d8e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

