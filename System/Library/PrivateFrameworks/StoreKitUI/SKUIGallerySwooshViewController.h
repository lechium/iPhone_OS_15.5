//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, SKUISwooshPageComponent, SKUISwooshView, UICollectionView;
@protocol SKUIGallerySwooshViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _Bool _delegateWantsWillDisplay;	// 16 = 0x10
    SKUISwooshPageComponent *_gallerySwoosh;	// 24 = 0x18
    double _itemHeight;	// 32 = 0x20
    SKUISwooshView *_swooshView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000325774
@property(readonly, nonatomic) SKUISwooshPageComponent *gallerySwoosh; // @synthesize gallerySwoosh=_gallerySwoosh;
- (id)_newViewWithMediaComponent:(id)arg1;	// IMP=0x0000000000325683
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000003255ff
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000003255d5
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000325541
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000003254f2
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000325199
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;	// IMP=0x0000000000325047
- (void)loadView;	// IMP=0x0000000000324cce
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;	// IMP=0x0000000000324c09
@property(nonatomic) __weak id <SKUIGallerySwooshViewControllerDelegate> delegate; // @dynamic delegate;
- (id)indexPathsForVisibleItems;	// IMP=0x0000000000324b7c
- (void)setColorScheme:(id)arg1;	// IMP=0x0000000000324ae7
- (void)performActionForItemAtIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000324a3a
- (id)artworkForItemAtIndex:(long long)arg1;	// IMP=0x00000000003249af
- (id)initWithGallerySwoosh:(id)arg1;	// IMP=0x0000000000324832

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

