//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>
#import <StoreKitUI/SKUIPreviewContainerView-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, SKUIGradientView, SKUIPreviewProgressIndicator, SKUITrackViewElement, SKUITracklistColumnData, SUPlayerStatus, UIView;

__attribute__((visibility("hidden")))
@interface SKUITracklistLockupCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView>
{
    NSMapTable *_buyButtonDescriptorToButton;	// 8 = 0x8
    SKUITracklistColumnData *_columnData;	// 16 = 0x10
    NSMutableDictionary *_columnViewsByIndex;	// 24 = 0x18
    NSMapTable *_imageViewToImageResourceCacheKey;	// 32 = 0x20
    SUPlayerStatus *_lastPlayerStatus;	// 40 = 0x28
    SKUIGradientView *_offerConfirmationGradientView;	// 48 = 0x30
    SKUIPreviewProgressIndicator *_previewProgressIndicator;	// 56 = 0x38
    long long _previewState;	// 64 = 0x40
    UIView *_separatorView;	// 72 = 0x48
    SKUITrackViewElement *_track;	// 80 = 0x50
}

+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;	// IMP=0x0000000000217287
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0000000000214728
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000213e65
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0000000000213e4f
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000213ce7
- (void).cxx_destruct;	// IMP=0x0000000000217f48
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;	// IMP=0x0000000000217d2d
- (id)_previewMediaURL;	// IMP=0x0000000000217c9b
- (id)_previewControlViewElement;	// IMP=0x0000000000217c79
- (id)_previewColumnView;	// IMP=0x0000000000217a8a
- (void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(double)arg2;	// IMP=0x00000000002177f8
- (void)_enumerateViewElementViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000021759a
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;	// IMP=0x00000000002173ff
- (void)_audioPlayerStatusChangeNotification:(id)arg1;	// IMP=0x00000000002170bd
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x0000000000216e4d
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x0000000000216e31
- (void)_buttonAction:(id)arg1;	// IMP=0x0000000000216be6
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x00000000002168e0
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x000000000021688f
- (void)layoutSubviews;	// IMP=0x0000000000215f3b
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000215d68
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000215ae7
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000215818
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000214b21
- (void)togglePreviewPlaybackAnimated:(_Bool)arg1;	// IMP=0x0000000000213b06
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000021360b
- (void)hidePreviewProgressAnimated:(_Bool)arg1;	// IMP=0x00000000002132f4
- (void)dealloc;	// IMP=0x0000000000213272
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000213150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
