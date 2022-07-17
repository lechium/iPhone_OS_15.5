//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MobileSafariUI/UICollectionViewDataSource-Protocol.h>
#import <MobileSafariUI/UICollectionViewDelegate-Protocol.h>

@class NSString, SFReaderAppearanceThemeSelector, UICollectionView, UICollectionViewCellRegistration;
@protocol SFReaderContext, _SFSettingsAlertOptionsGroupController;

__attribute__((visibility("hidden")))
@interface ReaderFormatViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    SFReaderAppearanceThemeSelector *_themeSelector;	// 16 = 0x10
    id <_SFSettingsAlertOptionsGroupController> _fontGroupController;	// 24 = 0x18
    UICollectionViewCellRegistration *_cellRegistrations[2];	// 32 = 0x20
    id <SFReaderContext> _readerContext;	// 48 = 0x30
    long long _provenance;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a6755
@property(readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) id <SFReaderContext> readerContext; // @synthesize readerContext=_readerContext;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a6721
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a6617
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a657b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a643d
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001a63da
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001a63cf
- (void)_updateCloseButton;	// IMP=0x00000000001a61f9
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001a61b8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a6068
- (void)viewDidLoad;	// IMP=0x00000000001a5b34
- (void)loadView;	// IMP=0x00000000001a5955
- (id)initWithReaderContext:(id)arg1 provenance:(long long)arg2;	// IMP=0x00000000001a5838

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
