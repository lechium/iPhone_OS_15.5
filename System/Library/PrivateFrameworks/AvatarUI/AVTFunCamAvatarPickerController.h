//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarPicker-Protocol.h>
#import <AvatarUI/AVTObjectViewController-Protocol.h>
#import <AvatarUI/AVTViewSessionProviderDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTAvatarListImageItem, AVTCenteringCollectionViewDelegate, AVTFunCamAvatarPickerCollectionViewLayout, AVTFunCamAvatarPickerStyle, AVTRenderingScope, AVTUIEnvironment, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarPickerDelegate, AVTAvatarRecord, AVTAvatarStoreInternal, AVTPresenterDelegate, AVTUILogger, NSObject;

@interface AVTFunCamAvatarPickerController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTViewSessionProviderDelegate, AVTObjectViewController, AVTAvatarPicker>
{
    id <AVTPresenterDelegate> presenterDelegate;	// 8 = 0x8
    id <AVTAvatarPickerDelegate> avatarPickerDelegate;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
    AVTFunCamAvatarPickerStyle *_style;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    UIView *_titlesContainer;	// 48 = 0x30
    UICollectionView *_titlesCollectionView;	// 56 = 0x38
    UIView *_titlesClippingView;	// 64 = 0x40
    id <AVTAvatarRecord> _selectedAvatarRecord;	// 72 = 0x48
    AVTFunCamAvatarPickerCollectionViewLayout *_listLayout;	// 80 = 0x50
    UICollectionViewFlowLayout *_gridLayout;	// 88 = 0x58
    AVTCenteringCollectionViewDelegate *_centeringDelegate;	// 96 = 0x60
    NSArray *_puppetRecords;	// 104 = 0x68
    NSArray *_editableRecords;	// 112 = 0x70
    NSArray *_items;	// 120 = 0x78
    AVTAvatarListImageItem *_noneItem;	// 128 = 0x80
    id <AVTAvatarStoreInternal> _store;	// 136 = 0x88
    AVTUIEnvironment *_environment;	// 144 = 0x90
    id <AVTUILogger> _logger;	// 152 = 0x98
    _AVTAvatarRecordImageProvider *_imageProvider;	// 160 = 0xa0
    AVTRenderingScope *_editableRecordsListRenderingScope;	// 168 = 0xa8
    AVTRenderingScope *_gridRenderingScope;	// 176 = 0xb0
    id <NSObject> _changeNotificationToken;	// 184 = 0xb8
    struct CGRect _lastUpdateViewBounds;	// 192 = 0xc0
}

+ (id)funCamAvatarPickerControllerForStore:(id)arg1 style:(id)arg2;	// IMP=0x0000000000063f2a
+ (id)createClippingViewForSize:(struct CGSize)arg1;	// IMP=0x0000000000063e55
+ (id)sessionProviderWithEnvironment:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000063d79
+ (id)newGridLayout;	// IMP=0x0000000000063d25
+ (id)itemsFromRecords:(id)arg1;	// IMP=0x0000000000063b5e
- (void).cxx_destruct;	// IMP=0x0000000000068252
@property(retain, nonatomic) id <NSObject> changeNotificationToken; // @synthesize changeNotificationToken=_changeNotificationToken;
@property(readonly, nonatomic) AVTRenderingScope *gridRenderingScope; // @synthesize gridRenderingScope=_gridRenderingScope;
@property(readonly, nonatomic) AVTRenderingScope *editableRecordsListRenderingScope; // @synthesize editableRecordsListRenderingScope=_editableRecordsListRenderingScope;
@property(readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) id <AVTAvatarStoreInternal> store; // @synthesize store=_store;
@property(retain, nonatomic) AVTAvatarListImageItem *noneItem; // @synthesize noneItem=_noneItem;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *editableRecords; // @synthesize editableRecords=_editableRecords;
@property(retain, nonatomic) NSArray *puppetRecords; // @synthesize puppetRecords=_puppetRecords;
@property(retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate; // @synthesize centeringDelegate=_centeringDelegate;
@property(retain, nonatomic) UICollectionViewFlowLayout *gridLayout; // @synthesize gridLayout=_gridLayout;
@property(retain, nonatomic) AVTFunCamAvatarPickerCollectionViewLayout *listLayout; // @synthesize listLayout=_listLayout;
@property(retain, nonatomic) id <AVTAvatarRecord> selectedAvatarRecord; // @synthesize selectedAvatarRecord=_selectedAvatarRecord;
@property(nonatomic) struct CGRect lastUpdateViewBounds; // @synthesize lastUpdateViewBounds=_lastUpdateViewBounds;
@property(retain, nonatomic) UIView *titlesClippingView; // @synthesize titlesClippingView=_titlesClippingView;
@property(retain, nonatomic) UICollectionView *titlesCollectionView; // @synthesize titlesCollectionView=_titlesCollectionView;
@property(retain, nonatomic) UIView *titlesContainer; // @synthesize titlesContainer=_titlesContainer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) AVTFunCamAvatarPickerStyle *style; // @synthesize style=_style;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <AVTAvatarPickerDelegate> avatarPickerDelegate; // @synthesize avatarPickerDelegate;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000067bd5
- (void)sessionProviderWillStartCameraSession:(id)arg1;	// IMP=0x0000000000067b38
- (void)sessionProviderDidEndCameraSession:(id)arg1;	// IMP=0x0000000000067a9b
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000067a3b
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000067a1e
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000006796c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000677b7
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000676df
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000067650
- (struct CGSize)gridItemSize;	// IMP=0x000000000006756f
- (long long)indexForRecord:(id)arg1;	// IMP=0x0000000000067519
- (long long)indexForRecordIdentifier:(id)arg1;	// IMP=0x00000000000672e0
- (id)indexPathForNoneItem;	// IMP=0x000000000006724f
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000066890
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000006684c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000667d5
- (void)sendSelectionEventToDelegateForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000665db
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;	// IMP=0x0000000000066313
- (void)selectItemAtCenterNotifyDelegate:(_Bool)arg1;	// IMP=0x0000000000066054
- (void)selectItemForAvatarRecord:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;	// IMP=0x0000000000065fc5
- (void)updateViewForCurrentMode;	// IMP=0x0000000000065ace
- (void)reloadModel;	// IMP=0x0000000000065581
- (_Bool)canCreateAvatar;	// IMP=0x000000000006553b
- (void)reloadData;	// IMP=0x0000000000065460
- (void)startObservingChangesIfNeeded;	// IMP=0x000000000006525d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000651e7
- (void)updateTitlesClippingViewMask;	// IMP=0x00000000000650aa
- (void)buildCollectionView;	// IMP=0x0000000000064a5d
- (id)buildTitlesCollectionViewLayout;	// IMP=0x000000000006490e
- (id)buildCollectionViewLayout;	// IMP=0x00000000000647e9
- (void)viewWillLayoutSubviews;	// IMP=0x000000000006454b
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000644bb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000643e9
- (void)preloadAll;	// IMP=0x000000000006437d
- (void)loadView;	// IMP=0x00000000000642a2
- (id)selectedIndexPath;	// IMP=0x00000000000641d7
- (_Bool)isDisplayingGridLayout;	// IMP=0x00000000000641bd
- (id)initWithStore:(id)arg1 environment:(id)arg2 style:(id)arg3;	// IMP=0x0000000000063fce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end
