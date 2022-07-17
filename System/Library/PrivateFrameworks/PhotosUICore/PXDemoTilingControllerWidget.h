//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetsSceneDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXWidget-Protocol.h>

@class NSMutableSet, NSString, PXAssetActionManager, PXAssetsDataSourceManager, PXBasicUIViewTileAnimator, PXPhotoKitUIMediaProvider, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXUIAssetsScene, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

@interface PXDemoTilingControllerWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget>
{
    id <PXWidgetDelegate> _widgetDelegate;	// 8 = 0x8
    PXPhotosDetailsContext *_context;	// 16 = 0x10
    PXAssetsDataSourceManager *__dataSourceManager;	// 24 = 0x18
    PXPhotoKitUIMediaProvider *__mediaProvider;	// 32 = 0x20
    PXTilingController *__tilingController;	// 40 = 0x28
    PXBasicUIViewTileAnimator *__tileAnimator;	// 48 = 0x30
    NSMutableSet *__tilesInUse;	// 56 = 0x38
    PXUIAssetsScene *__scene;	// 64 = 0x40
    NSString *_localizedSubtitle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000064a4ab
@property(retain, nonatomic, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, nonatomic) PXUIAssetsScene *_scene; // @synthesize _scene=__scene;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property(readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager; // @synthesize _dataSourceManager=__dataSourceManager;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;	// IMP=0x000000000064a2ed
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x000000000064a086
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x0000000000649dad
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;	// IMP=0x0000000000649d98
- (void)userDidSelectSubtitle;	// IMP=0x0000000000649c74
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x0000000000649c1e
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (id)_demoTilingLayoutForDataSource:(id)arg1;	// IMP=0x0000000000649af7
- (void)_loadTilingController;	// IMP=0x00000000006498c2
- (id)init;	// IMP=0x0000000000649871

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInEditMode;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property(retain, nonatomic) PXWidgetSpec *spec;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) _Bool wantsFocus;
@property(nonatomic) __weak id <PXWidgetEditingDelegate> widgetEditingDelegate;
@property(nonatomic) __weak id <PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end
