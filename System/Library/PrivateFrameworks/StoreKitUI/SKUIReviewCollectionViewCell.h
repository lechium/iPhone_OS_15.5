//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIResponseView, SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUIReviewCollectionViewCell <SKUIViewElementView>
{
    CDUnknownBlockType _descriptionTapAction;	// 8 = 0x8
    CDUnknownBlockType _responseDescriptionTapAction;	// 16 = 0x10
    SKUITextBoxView *_descriptionView;	// 24 = 0x18
    SKUIResponseView *_responseView;	// 32 = 0x20
}

+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;	// IMP=0x00000000001a2f15
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x00000000001a2da7
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00000000001a1e71
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001a1cdc
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000001a1c4b
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000001a1c43
- (void).cxx_destruct;	// IMP=0x00000000001a3374
@property(retain, nonatomic) SKUIResponseView *responseView; // @synthesize responseView=_responseView;
@property(retain, nonatomic) SKUITextBoxView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(copy, nonatomic) CDUnknownBlockType responseDescriptionTapAction; // @synthesize responseDescriptionTapAction=_responseDescriptionTapAction;
@property(copy, nonatomic) CDUnknownBlockType descriptionTapAction; // @synthesize descriptionTapAction=_descriptionTapAction;
- (void)_resetTapGestures;	// IMP=0x00000000001a308e
- (void)contentViewTapped:(id)arg1;	// IMP=0x00000000001a2aba
- (void)layoutSubviews;	// IMP=0x00000000001a2669
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001a251f
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001a2517
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001a250f
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001a2507
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001a21ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

