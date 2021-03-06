//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMutableDictionary, NSString, SKUITracklistColumnData, UIView;

__attribute__((visibility("hidden")))
@interface SKUITracklistHeaderCollectionViewCell <SKUIViewElementView>
{
    UIView *_bottomSeparatorView;	// 8 = 0x8
    SKUITracklistColumnData *_columnData;	// 16 = 0x10
    NSMutableDictionary *_columnViews;	// 24 = 0x18
    UIView *_topSeparatorView;	// 32 = 0x20
}

+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000345620
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0000000000344b27
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000344934
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x000000000034491e
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000344916
+ (struct CGSize)sizeForHeaderTitleLabel:(id)arg1;	// IMP=0x00000000003448ba
- (void).cxx_destruct;	// IMP=0x00000000003457e5
- (void)layoutSubviews;	// IMP=0x000000000034511c
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000345114
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000034510c
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000345104
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000003450fe
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000344d3f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000344700

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

