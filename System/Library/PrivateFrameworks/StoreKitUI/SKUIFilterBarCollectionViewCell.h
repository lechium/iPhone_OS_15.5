//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIFilterBarView;

__attribute__((visibility("hidden")))
@interface SKUIFilterBarCollectionViewCell <SKUIViewElementView>
{
    SKUIFilterBarView *_filterBarView;	// 8 = 0x8
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x000000000017fde4
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000017fdcb
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x000000000017fdb2
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000017fd99
- (void).cxx_destruct;	// IMP=0x000000000017ffaa
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000017ff38
- (void)layoutSubviews;	// IMP=0x000000000017fe8e
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000017fe71
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000017fe54
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000017fe37
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000017fe1a
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000017fdfd
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000017fcf9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017fbf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
