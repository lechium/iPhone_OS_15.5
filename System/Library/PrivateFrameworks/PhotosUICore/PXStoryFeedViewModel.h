//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXStoryMutableFeedViewModel-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSHashTable, NSObject, NSString, PXSectionedChangeDetailsRepository, PXSectionedDataSource, PXSectionedDataSourceManager, PXSectionedSelectionManager, PXSelectionSnapshot, PXStoryFeedViewLayoutSpecManager, PXUpdater;
@protocol OS_dispatch_queue, PXAnonymousViewController, PXAssetCollectionActionPerformerDelegate, PXStoryFeedItemLayoutFactory, PXStoryFeedViewActionPerformer, PXStoryFeedViewLayoutSpec;

@interface PXStoryFeedViewModel <PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>
{
    _Bool _isActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_storyQueue;	// 16 = 0x10
    PXSectionedDataSource *_dataSource;	// 24 = 0x18
    PXSectionedChangeDetailsRepository *_dataSourceChangeHistory;	// 32 = 0x20
    PXSelectionSnapshot *_selectionSnapshot;	// 40 = 0x28
    id <PXStoryFeedViewLayoutSpec> _spec;	// 48 = 0x30
    id <PXStoryFeedViewActionPerformer> _actionPerformer;	// 56 = 0x38
    id <PXAssetCollectionActionPerformerDelegate> _assetCollectionActionPerformerDelegate;	// 64 = 0x40
    NSObject<PXAnonymousViewController> *_presentingViewController;	// 72 = 0x48
    id <PXStoryFeedItemLayoutFactory> _itemLayoutFactory;	// 80 = 0x50
    PXStoryFeedViewLayoutSpecManager *_specManager;	// 88 = 0x58
    PXUpdater *_updater;	// 96 = 0x60
    NSHashTable *_accessoryTapToRadarDiagnosticsProviders;	// 104 = 0x68
    PXSectionedDataSourceManager *_dataSourceManager;	// 112 = 0x70
    PXSectionedSelectionManager *_selectionManager;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000c1226
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) NSHashTable *accessoryTapToRadarDiagnosticsProviders; // @synthesize accessoryTapToRadarDiagnosticsProviders=_accessoryTapToRadarDiagnosticsProviders;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXStoryFeedViewLayoutSpecManager *specManager; // @synthesize specManager=_specManager;
@property(readonly, nonatomic) id <PXStoryFeedItemLayoutFactory> itemLayoutFactory; // @synthesize itemLayoutFactory=_itemLayoutFactory;
@property(readonly, nonatomic) __weak NSObject<PXAnonymousViewController> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) __weak id <PXAssetCollectionActionPerformerDelegate> assetCollectionActionPerformerDelegate; // @synthesize assetCollectionActionPerformerDelegate=_assetCollectionActionPerformerDelegate;
@property(readonly, nonatomic) __weak id <PXStoryFeedViewActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(readonly, nonatomic) id <PXStoryFeedViewLayoutSpec> spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(readonly, nonatomic) PXSectionedChangeDetailsRepository *dataSourceChangeHistory; // @synthesize dataSourceChangeHistory=_dataSourceChangeHistory;
@property(readonly, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x00000000000c0ec7
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000c0e6f
- (void)_updateSpec;	// IMP=0x00000000000c0e00
- (void)_invalidateSpec;	// IMP=0x00000000000c0dbc
- (void)_updateSelectionSnapshot;	// IMP=0x00000000000c0d4d
- (void)_invalidateSelectionSnapshot;	// IMP=0x00000000000c0d09
- (void)_updateDataSource;	// IMP=0x00000000000c0c9a
- (void)_invalidateDataSource;	// IMP=0x00000000000c0c56
- (void)_setNeedsUpdate;	// IMP=0x00000000000c0c42
- (void)setSpec:(id)arg1;	// IMP=0x00000000000c0bcd
- (void)setSelectionSnapshot:(id)arg1;	// IMP=0x00000000000c0b58
- (void)setDataSource:(id)arg1;	// IMP=0x00000000000c0ae3
- (void)setPresentingViewController:(id)arg1;	// IMP=0x00000000000c09d6
- (void)setAssetCollectionActionPerformerDelegate:(id)arg1;	// IMP=0x00000000000c08c9
- (void)setActionPerformer:(id)arg1;	// IMP=0x00000000000c07bc
- (void)setIsActive:(_Bool)arg1;	// IMP=0x00000000000c0794
- (void)registerAccessoryTapToRadarDiagnosticsProvider:(id)arg1;	// IMP=0x00000000000c06f5
- (void)didPerformChanges;	// IMP=0x00000000000c068b
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c065c
- (id)initWithDataSourceManager:(id)arg1 specManager:(id)arg2 itemLayoutFactory:(id)arg3;	// IMP=0x00000000000c03f4
- (id)init;	// IMP=0x00000000000c037a
- (id)initWithFeedViewConfiguration:(id)arg1;	// IMP=0x000000000006018c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

