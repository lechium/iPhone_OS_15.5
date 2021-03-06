//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MobileSafari/PHPickerViewControllerDelegate-Protocol.h>
#import <MobileSafari/SFStartPageBackgroundImageCellDelegate-Protocol.h>
#import <MobileSafari/SFStartPageCustomizationCellDelegate-Protocol.h>
#import <MobileSafari/SFStartPageDataSourceObserving-Protocol.h>
#import <MobileSafari/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewDiffableDataSource, WBSStartPageBackgroundImagesDataSource;
@protocol SFStartPageCustomizationDataSource;

@interface SFStartPageCustomizationViewController : UIViewController <SFStartPageBackgroundImageCellDelegate, SFStartPageCustomizationCellDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, SFStartPageDataSourceObserving>
{
    NSArray *_backgroundImages;	// 8 = 0x8
    UICollectionView *_backgroundImagesCollectionView;	// 16 = 0x10
    UICollectionViewDiffableDataSource *_backgroundImagesCollectionViewDataSource;	// 24 = 0x18
    WBSStartPageBackgroundImagesDataSource *_backgroundImagesDataSource;	// 32 = 0x20
    _Bool _backgroundSectionUnconditionallyVisible;	// 40 = 0x28
    NSMutableDictionary *_identifierToCustomizationItemMap;	// 48 = 0x30
    unsigned long long _reloadDataSupressionCount;	// 56 = 0x38
    UICollectionView *_rootCollectionView;	// 64 = 0x40
    UICollectionViewDiffableDataSource *_rootCollectionViewDataSource;	// 72 = 0x48
    _Bool _showsCloseButton;	// 80 = 0x50
    id <SFStartPageCustomizationDataSource> _dataSource;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000acf0d
@property(nonatomic) _Bool showsCloseButton; // @synthesize showsCloseButton=_showsCloseButton;
@property __weak id <SFStartPageCustomizationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)showPhotoPicker;	// IMP=0x00000000000acc35
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;	// IMP=0x00000000000acabe
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000000acaab
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x00000000000ac9c8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ac7cf
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ac7bb
- (void)reloadNavigationItemAnimated:(_Bool)arg1;	// IMP=0x00000000000ac7b5
- (void)_setCustomizationSyncWithValue:(id)arg1;	// IMP=0x00000000000ac13c
- (void)startPageCustomizationCellDidChangeValue:(id)arg1;	// IMP=0x00000000000abf26
- (void)backgroundImageCellDidSelectClearButton:(id)arg1;	// IMP=0x00000000000abebe
- (id)makeCustomizationSyncFooterRegistration;	// IMP=0x00000000000abd99
- (id)makeCustomizationSyncToggleRegistration;	// IMP=0x00000000000abb47
- (id)makeBackgroundImageRegistration;	// IMP=0x00000000000ab6a3
- (id)makeBackgroundImageToggleRegistration;	// IMP=0x00000000000ab363
- (id)makeCustomizationItemRegistration;	// IMP=0x00000000000aae89
- (id)makeBackgroundImagesCollectionViewLayout;	// IMP=0x00000000000aaa58
- (id)makeRootCollectionViewLayout;	// IMP=0x00000000000aa7b0
- (id)makeReorderingHandlers;	// IMP=0x00000000000aa42b
- (void)setUpBackgroundImagesCollectionViewDataSource;	// IMP=0x00000000000aa309
- (void)setUpRootCollectionViewDataSource;	// IMP=0x00000000000a9aa7
- (void)reloadDataAnimatingDifferences:(_Bool)arg1;	// IMP=0x00000000000a8d64
- (void)_dismiss:(id)arg1;	// IMP=0x00000000000a8d4a
- (_Bool)showsBackgroundImagesCell;	// IMP=0x00000000000a8b6e
- (void)backgroundImagesDidChange:(id)arg1;	// IMP=0x00000000000a8b56
- (void)customizationItemOrderDidChange:(id)arg1;	// IMP=0x00000000000a8a25
- (void)setCustomizationItemIdentifier:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000a8815
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000a8787
- (void)viewDidLoad;	// IMP=0x00000000000a845b
- (void)dealloc;	// IMP=0x00000000000a8391
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000a80b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

