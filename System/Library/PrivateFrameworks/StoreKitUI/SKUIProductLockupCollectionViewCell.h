//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>
#import <StoreKitUI/SKUIOfferViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIPerspectiveView-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIGradientView, SKUILockupViewElement, SKUIProductLockupLayout;

__attribute__((visibility("hidden")))
@interface SKUIProductLockupCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIViewElementView>
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    NSMapTable *_buyButtonDescriptorToButton;	// 16 = 0x10
    NSMapTable *_elementViews;	// 24 = 0x18
    NSMapTable *_imageViewToImageResourceCacheKey;	// 32 = 0x20
    SKUIProductLockupLayout *_layout;	// 40 = 0x28
    SKUILockupViewElement *_lockup;	// 48 = 0x30
    SKUIGradientView *_offerConfirmationGradientView;	// 56 = 0x38
    long long _offerMetadataPosition;	// 64 = 0x40
    NSHashTable *_offerViews;	// 72 = 0x48
    NSMutableArray *_segmentedControlControllers;	// 80 = 0x50
}

+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000133138
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000132e93
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x0000000000132d01
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x000000000012f8f8
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000012f6d6
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x000000000012f648
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000012f509
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x000000000012f334
- (void).cxx_destruct;	// IMP=0x0000000000135227
- (id)_viewElementForView:(id)arg1;	// IMP=0x0000000000135072
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1;	// IMP=0x0000000000134a26
- (struct CGRect)_stackElements:(id)arg1 alignment:(long long)arg2 inRect:(struct CGRect)arg3;	// IMP=0x0000000000134576
- (struct CGRect)_stackBottomRightElements:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000134168
- (void)_prepareOfferConfirmationGradientForView:(id)arg1;	// IMP=0x0000000000133b90
- (void)_layoutConfirmationGradientRelativeToSection:(long long)arg1 alpha:(double)arg2;	// IMP=0x00000000001336d9
- (struct CGRect)_frameForSection:(long long)arg1;	// IMP=0x00000000001334d4
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x0000000000132c99
- (void)_imageTapAction:(id)arg1;	// IMP=0x0000000000132ac0
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x0000000000132a5b
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001327ca
- (void)offerViewWillAnimateTransition:(id)arg1;	// IMP=0x00000000001327b8
- (void)offerViewDidAnimateTransition:(id)arg1;	// IMP=0x0000000000132767
- (_Bool)offerViewAnimateTransition:(id)arg1;	// IMP=0x0000000000132752
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x0000000000132740
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x00000000001326ef
- (void)layoutSubviews;	// IMP=0x0000000000131103
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000130f0d
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000130b64
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000013077a
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000012fafd
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x000000000012f4d4
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x000000000012f459
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x000000000012f34d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000012f2ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
