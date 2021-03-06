//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <PhotosUI/PUAlbumCreatorDelegate-Protocol.h>
#import <PhotosUI/PXCollectionsDataSourceManagerObserver-Protocol.h>

@class NSIndexPath, NSString, PHCollection, PUImportAddToAlbumsPickerCell, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol PXImportAlbumPickerDelegate;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate>
{
    PHCollection *_selectedCollection;	// 8 = 0x8
    NSIndexPath *_selectedIndex;	// 16 = 0x10
    PUImportAddToAlbumsPickerCell *_selectedCell;	// 24 = 0x18
    PHCollection *_createdAlbum;	// 32 = 0x20
    _Bool _needsDatasourceUpdate;	// 40 = 0x28
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_dataSourceManagerConfiguration;	// 48 = 0x30
    id <PXImportAlbumPickerDelegate> _delegate;	// 56 = 0x38
    PXPhotoKitCollectionsDataSource *_dataSource;	// 64 = 0x40
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;	// 72 = 0x48
}

+ (unsigned long long)cellTypeForPosition:(id)arg1;	// IMP=0x00000000001ac3a3
+ (id)dataSourceShiftedIndexPath:(id)arg1;	// IMP=0x00000000001ac34b
+ (long long)dataSourceOffset;	// IMP=0x00000000001ac340
+ (id)userCreatredAlbumsPhotoKitConfiguration;	// IMP=0x00000000001ac1ee
- (void).cxx_destruct;	// IMP=0x00000000001abe0a
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXImportAlbumPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration; // @synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration;
- (void)_dismissPicker;	// IMP=0x00000000001abd34
- (void)_handleCreateAlbum;	// IMP=0x00000000001abce4
- (id)createAlbumListViewController;	// IMP=0x00000000001abc87
- (id)albumListViewControllerSpec;	// IMP=0x00000000001abc6e
- (_Bool)canPresentPicker;	// IMP=0x00000000001abc66
- (CDUnknownBlockType)completionHandler;	// IMP=0x00000000001abbbf
- (id)hostViewContoller;	// IMP=0x00000000001abbb6
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001aba43
- (void)configureDataSourceManagerConfiguration:(id)arg1;	// IMP=0x00000000001aba3d
- (void)selectCollection:(id)arg1;	// IMP=0x00000000001ab501
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001ab4cc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001ab208
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001ab0f3
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001ab006
- (id)addAlbumPlaceHolder:(struct CGSize)arg1 newAlbum:(_Bool)arg2;	// IMP=0x00000000001aaedc
- (id)posterImageForCollection:(id)arg1 cell:(id)arg2 forCellType:(unsigned long long)arg3;	// IMP=0x00000000001aad9c
- (void)_selectCell:(id)arg1;	// IMP=0x00000000001aad1c
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000001aaca5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001aaaa3
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000001aa9ea
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001aa9d5
- (double)_heightForIndex:(id)arg1;	// IMP=0x00000000001aa9c7
- (void)updateDatasource;	// IMP=0x00000000001aa8c7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001aa68c
- (void)viewDidLoad;	// IMP=0x00000000001aa5d7
- (struct CGSize)preferredContentSize;	// IMP=0x00000000001aa492
- (id)init;	// IMP=0x00000000001aa436

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

