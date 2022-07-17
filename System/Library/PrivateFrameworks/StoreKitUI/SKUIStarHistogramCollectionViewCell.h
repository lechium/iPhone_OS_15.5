//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIStarHistogramCollectionViewCell <SKUIViewElementView>
{
}

+ (id)_attributedStringForLabelViewElement:(id)arg1;	// IMP=0x00000000002a65b5
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00000000002a5ce7
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002a5b5e
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000002a5acd
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000002a5ac5
- (void)layoutSubviews;	// IMP=0x00000000002a6228
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002a6220
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002a6218
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000002a6210
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002a5f17
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002a5a52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
