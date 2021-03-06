//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivityActionDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, PHPerson, PXAssetActionPerformer, PXPhotoKitAssetsDataSourceManager, PXPhotoKitImportStatusManager, PXPhotosDataSource;
@protocol PXRadarConfigurationProvider;

@interface PXPhotoKitAssetActionManager <PXActivityActionDelegate>
{
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;	// 8 = 0x8
    PXPhotoKitImportStatusManager *_importStatusManager;	// 16 = 0x10
    NSString *_importSessionID;	// 24 = 0x18
    PHPerson *_person;	// 32 = 0x20
    id <PXRadarConfigurationProvider> _radarConfigurationProvider;	// 40 = 0x28
    NSMutableDictionary *__performerClassByType;	// 48 = 0x30
    NSMapTable *__actionTypeByBarButtonItem;	// 56 = 0x38
    PXAssetActionPerformer *__activePerformer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000006026c5
@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
@property(readonly, nonatomic) NSMutableDictionary *_performerClassByType; // @synthesize _performerClassByType=__performerClassByType;
@property(retain, nonatomic) id <PXRadarConfigurationProvider> radarConfigurationProvider; // @synthesize radarConfigurationProvider=_radarConfigurationProvider;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(copy, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property(retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager; // @synthesize importStatusManager=_importStatusManager;
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000602485
- (void)executeActionForActionType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000602289
- (void)_handleBarButtonItem:(id)arg1;	// IMP=0x00000000006021e7
- (void)_handlePreviewAction:(id)arg1 actionType:(id)arg2;	// IMP=0x00000000006021d0
- (id)systemImageNameForActionType:(id)arg1;	// IMP=0x0000000000602145
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;	// IMP=0x00000000006020b2
- (void)performActivity:(id)arg1;	// IMP=0x0000000000602061
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000000060200b
- (id)activityForActionType:(id)arg1;	// IMP=0x0000000000601f51
- (id)alertActionForActionType:(id)arg1;	// IMP=0x0000000000601deb
- (id)standardActionForActionType:(id)arg1;	// IMP=0x0000000000601c19
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;	// IMP=0x0000000000601ad3
- (id)barButtonItemForActionType:(id)arg1;	// IMP=0x00000000006019f2
- (id)actionPerformerForActionType:(id)arg1;	// IMP=0x000000000060175c
- (_Bool)canPerformAssetVariationActions;	// IMP=0x000000000060171d
- (_Bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;	// IMP=0x0000000000601631
- (_Bool)supportsActionType:(id)arg1;	// IMP=0x00000000006015b8
- (_Bool)canPerformActionType:(id)arg1;	// IMP=0x0000000000601409
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;	// IMP=0x0000000000601391
- (id)_selectionSnapshotForPerformerClass:(Class)arg1 applySubsetIfNeeded:(_Bool)arg2;	// IMP=0x0000000000600d2b
@property(readonly, nonatomic) PXPhotosDataSource *_dataSourceSnapshot;
@property(readonly, nonatomic) unsigned long long presentationSource;
- (void)setAdditionalPropertiesFromActionManager:(id)arg1;	// IMP=0x0000000000600b3a
- (id)initWithSelectedObjectReference:(id)arg1 dataSourceManager:(id)arg2;	// IMP=0x0000000000600a1d
- (id)initWithSelectionManager:(id)arg1;	// IMP=0x000000000060066e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

