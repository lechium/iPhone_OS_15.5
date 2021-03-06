//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/VUIProductLockupViewDelegate-Protocol.h>
#import <VideosUI/VUIRoundButtonDelegate-Protocol.h>

@class NSString, VUIDownloadButton, VUILibraryProductInfoView, VUIMediaItem, VUIProductLockupView, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUILibraryProductViewController <UICollectionViewDataSource, VUIProductLockupViewDelegate, VUIRoundButtonDelegate>
{
    VUIMediaItem *_mediaItem;	// 8 = 0x8
    VUIProductLockupView *_productLockupView;	// 16 = 0x10
    VUILibraryProductInfoView *_productInfoView;	// 24 = 0x18
    VUIDownloadButton *_downloadButton;	// 32 = 0x20
    VUIViewControllerContentPresenter *_contentPresenter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000104951
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) VUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (void)reportMetricsPageEvent;	// IMP=0x00000000001048f8
- (void)_updateAfterContentWasManuallyDeleted:(_Bool)arg1;	// IMP=0x00000000001048a5
- (id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4;	// IMP=0x00000000001046bd
- (id)_productInfoViewWithMediaItem:(id)arg1;	// IMP=0x00000000001040f1
- (id)_productLockupViewWithMediaItem:(id)arg1;	// IMP=0x000000000010405c
- (void)didSelectButton:(id)arg1;	// IMP=0x0000000000103c90
- (void)contentDescriptionExpanded;	// IMP=0x0000000000103c26
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000103af5
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001039fc
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000010395a
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001038ab
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001038a0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000103895
- (void)start;	// IMP=0x00000000001034fe
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x0000000000103493
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001033ca
- (void)loadView;	// IMP=0x0000000000103359
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000103318
- (void)viewDidLoad;	// IMP=0x000000000010325c
- (id)initWithMediaItem:(id)arg1;	// IMP=0x00000000001031b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

