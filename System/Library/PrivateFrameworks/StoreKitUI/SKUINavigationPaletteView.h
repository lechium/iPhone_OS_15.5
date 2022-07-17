//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUINavigationPaletteView <SKUIViewElementView>
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    NSMapTable *_imageViewToImageResourceCacheKey;	// 48 = 0x30
    NSMutableArray *_segmentedControls;	// 56 = 0x38
    NSMutableArray *_stretchViews;	// 64 = 0x40
    long long _verticalAlignment;	// 72 = 0x48
    NSMapTable *_viewElementViews;	// 80 = 0x50
    NSMapTable *_viewSpacings;	// 88 = 0x58
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000e0490
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x00000000000e0350
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x00000000000e028b
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x00000000000e019c
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00000000000de51a
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000de2e7
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000000de2d1
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000000de139
- (void).cxx_destruct;	// IMP=0x00000000000e0606
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000000e00cb
- (void)layoutSubviews;	// IMP=0x00000000000df72b
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000000df496
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000df48e
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000df037
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000df019
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000de697
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000de004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
