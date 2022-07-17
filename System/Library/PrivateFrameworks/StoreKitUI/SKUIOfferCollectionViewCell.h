//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIOfferView;

__attribute__((visibility("hidden")))
@interface SKUIOfferCollectionViewCell <SKUIViewElementView>
{
    SKUIOfferView *_offerView;	// 8 = 0x8
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0000000000020073
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000002003d
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0000000000020024
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000002000b
- (void).cxx_destruct;	// IMP=0x000000000002021c
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000201aa
- (void)layoutSubviews;	// IMP=0x0000000000020100
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000000200e3
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000200c6
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000200a9
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000002008c
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000020056
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000001ff6b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001fe67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
