//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDContentProvider-Protocol.h>
#import <PhotosUICore/PXStoryMutableRecipeManager-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSDate, NSDictionary, NSObject, NSProgress, NSSet, NSString, PXAssetsDataSource, PXAssetsDataSourceManager, PXStoryAutoEditMomentsProvider, PXStoryConfiguration, PXStoryProducerResult, PXStoryRecipe, PXStoryRecipeAssetEdits, PXUpdater;
@protocol OS_dispatch_queue, PXAudioAssetFetchResult, PXDisplayAsset, PXDisplayAssetCollection, PXDisplayAssetFetchResult, PXStoryAssetsProducer, PXStoryAssetsProducerFactory, PXStoryAutoCurationProducer, PXStoryAutoCurationProducerFactory, PXStoryAutoEditDecisionListsProducer, PXStoryAutoEditDecisionListsProducerFactory, PXStoryErrorReporter, PXStoryMovieHighlightsProducer, PXStoryMovieHighlightsProducerFactory, PXStoryPersistableRecipeProducer, PXStoryPersistableRecipeProducerFactory, PXStorySongResource, PXStorySongResourceProducer, PXStorySongResourceProducerFactory, PXStorySongsProducer, PXStorySongsProducerFactory, PXStoryStylesProducer, PXStoryStylesProducerFactory;

@interface PXStoryRecipeManager <PXStoryMutableRecipeManager, PXAssetsDataSourceManagerObserver, PXStoryDiagnosticHUDContentProvider, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>
{
    _Bool _isRecipeFinal;	// 8 = 0x8
    _Bool _isAssetCollectionFinal;	// 9 = 0x9
    _Bool _hasInitialPersistableRecipeBeenProduced;	// 10 = 0xa
    _Bool _haveFinalMovieHighlightsBeenProduced;	// 11 = 0xb
    _Bool _hasInitialStyleBeenProduced;	// 12 = 0xc
    _Bool _requiresAutoEditStylesSynchronously;	// 13 = 0xd
    NSObject<OS_dispatch_queue> *_storyQueue;	// 16 = 0x10
    PXStoryConfiguration *_configuration;	// 24 = 0x18
    PXStoryRecipe *_recipe;	// 32 = 0x20
    unsigned long long _recipeAttributes;	// 40 = 0x28
    PXAssetsDataSourceManager *_assetsDataSourceManager;	// 48 = 0x30
    unsigned long long _availableCurationLengths;	// 56 = 0x38
    PXStoryRecipeAssetEdits *_recipeAssetEdits;	// 64 = 0x40
    id <PXDisplayAssetFetchResult> _manuallyCuratedAssets;	// 72 = 0x48
    PXUpdater *_updater;	// 80 = 0x50
    id <PXStoryErrorReporter> _errorReporter;	// 88 = 0x58
    id <PXDisplayAssetCollection> _assetCollection;	// 96 = 0x60
    unsigned long long _finalizedProducers;	// 104 = 0x68
    unsigned long long _remainingProducers;	// 112 = 0x70
    id <PXStoryAssetsProducer> _assetsProducer;	// 120 = 0x78
    NSProgress *_assetsProgress;	// 128 = 0x80
    PXStoryProducerResult *_assetsResult;	// 136 = 0x88
    PXAssetsDataSource *_assetsDataSource;	// 144 = 0x90
    id <PXStoryPersistableRecipeProducer> _persistableRecipeProducer;	// 152 = 0x98
    NSProgress *_persistableRecipeProgress;	// 160 = 0xa0
    PXStoryProducerResult *_persistableRecipeResult;	// 168 = 0xa8
    id <PXStorySongsProducer> _curatedSongsProducer;	// 176 = 0xb0
    NSProgress *_curatedSongsProgress;	// 184 = 0xb8
    PXStoryProducerResult *_curatedSongsResult;	// 192 = 0xc0
    id <PXStorySongResourceProducer> _persistedSongProducer;	// 200 = 0xc8
    NSProgress *_persistedSongProgress;	// 208 = 0xd0
    PXStoryProducerResult *_persistedSongResult;	// 216 = 0xd8
    id <PXStorySongResource> _initialSongResource;	// 224 = 0xe0
    id <PXStoryMovieHighlightsProducer> _movieHighlightsProducer;	// 232 = 0xe8
    NSProgress *_movieHighlightsProgress;	// 240 = 0xf0
    PXStoryProducerResult *_movieHighlightsResult;	// 248 = 0xf8
    id <PXStoryAutoCurationProducer> _autoCurationProducer;	// 256 = 0x100
    NSProgress *_curationLengthsProgress;	// 264 = 0x108
    NSProgress *_assetsAutoCurationProgress;	// 272 = 0x110
    PXStoryProducerResult *_curationLengthsResult;	// 280 = 0x118
    unsigned long long _defaultCurationLength;	// 288 = 0x120
    id <PXDisplayAssetFetchResult> _curatedAssets;	// 296 = 0x128
    id <PXDisplayAssetFetchResult> _allAssets;	// 304 = 0x130
    id <PXDisplayAsset> _keyAsset;	// 312 = 0x138
    id <PXStoryStylesProducer> _initialStyleProducer;	// 320 = 0x140
    NSProgress *_initialStyleProgress;	// 328 = 0x148
    PXStoryProducerResult *_initialStyleResult;	// 336 = 0x150
    id <PXStoryStylesProducer> _autoEditStylesProducer;	// 344 = 0x158
    NSProgress *_autoEditStylesProgress;	// 352 = 0x160
    PXStoryProducerResult *_autoEditStylesResult;	// 360 = 0x168
    id <PXStoryAutoEditDecisionListsProducer> _autoEditDecisionListsProducer;	// 368 = 0x170
    NSProgress *_autoEditDecisionListsProgress;	// 376 = 0x178
    PXStoryProducerResult *_autoEditDecisionListsResult;	// 384 = 0x180
    NSProgress *_initialAutoEditDecisionListProgress;	// 392 = 0x188
    PXStoryProducerResult *_initialAutoEditDecisionListResult;	// 400 = 0x190
    NSDate *_loadingStartDate;	// 408 = 0x198
    NSDate *_loadingReadyForPlaybackDate;	// 416 = 0x1a0
    NSDate *_loadingFinalDate;	// 424 = 0x1a8
    PXStoryRecipeAssetEdits *_persistedRecipeAssetEdits;	// 432 = 0x1b0
    NSSet *_additionalSongs;	// 440 = 0x1b8
    NSDictionary *_additionalAutoEditDecisionListsBySong;	// 448 = 0x1c0
    id <PXStoryAssetsProducerFactory> _assetsProducerFactory;	// 456 = 0x1c8
    id <PXStoryPersistableRecipeProducerFactory> _persistableRecipeProducerFactory;	// 464 = 0x1d0
    id <PXStorySongsProducerFactory> _songsProducerFactory;	// 472 = 0x1d8
    id <PXStoryMovieHighlightsProducerFactory> _movieHighlightsProducerFactory;	// 480 = 0x1e0
    id <PXStoryStylesProducerFactory> _stylesProducerFactory;	// 488 = 0x1e8
    id <PXStoryAutoEditDecisionListsProducerFactory> _autoEditDecisionListsProducerFactory;	// 496 = 0x1f0
    id <PXStoryAutoCurationProducerFactory> _autoCurationProducerFactory;	// 504 = 0x1f8
    id <PXStorySongResourceProducerFactory> _songResourceProducerFactory;	// 512 = 0x200
    CDStruct_5d4c7ed3 _overallDurationInfo;	// 520 = 0x208
}

- (void).cxx_destruct;	// IMP=0x0000000000592797
@property(readonly, nonatomic) id <PXStorySongResourceProducerFactory> songResourceProducerFactory; // @synthesize songResourceProducerFactory=_songResourceProducerFactory;
@property(readonly, nonatomic) id <PXStoryAutoCurationProducerFactory> autoCurationProducerFactory; // @synthesize autoCurationProducerFactory=_autoCurationProducerFactory;
@property(readonly, nonatomic) id <PXStoryAutoEditDecisionListsProducerFactory> autoEditDecisionListsProducerFactory; // @synthesize autoEditDecisionListsProducerFactory=_autoEditDecisionListsProducerFactory;
@property(readonly, nonatomic) id <PXStoryStylesProducerFactory> stylesProducerFactory; // @synthesize stylesProducerFactory=_stylesProducerFactory;
@property(readonly, nonatomic) id <PXStoryMovieHighlightsProducerFactory> movieHighlightsProducerFactory; // @synthesize movieHighlightsProducerFactory=_movieHighlightsProducerFactory;
@property(readonly, nonatomic) id <PXStorySongsProducerFactory> songsProducerFactory; // @synthesize songsProducerFactory=_songsProducerFactory;
@property(readonly, nonatomic) id <PXStoryPersistableRecipeProducerFactory> persistableRecipeProducerFactory; // @synthesize persistableRecipeProducerFactory=_persistableRecipeProducerFactory;
@property(readonly, nonatomic) id <PXStoryAssetsProducerFactory> assetsProducerFactory; // @synthesize assetsProducerFactory=_assetsProducerFactory;
@property(copy, nonatomic) NSDictionary *additionalAutoEditDecisionListsBySong; // @synthesize additionalAutoEditDecisionListsBySong=_additionalAutoEditDecisionListsBySong;
@property(copy, nonatomic) NSSet *additionalSongs; // @synthesize additionalSongs=_additionalSongs;
@property(retain, nonatomic) PXStoryRecipeAssetEdits *persistedRecipeAssetEdits; // @synthesize persistedRecipeAssetEdits=_persistedRecipeAssetEdits;
@property(retain, nonatomic) NSDate *loadingFinalDate; // @synthesize loadingFinalDate=_loadingFinalDate;
@property(retain, nonatomic) NSDate *loadingReadyForPlaybackDate; // @synthesize loadingReadyForPlaybackDate=_loadingReadyForPlaybackDate;
@property(retain, nonatomic) NSDate *loadingStartDate; // @synthesize loadingStartDate=_loadingStartDate;
@property(retain, nonatomic) PXStoryProducerResult *initialAutoEditDecisionListResult; // @synthesize initialAutoEditDecisionListResult=_initialAutoEditDecisionListResult;
@property(retain, nonatomic) NSProgress *initialAutoEditDecisionListProgress; // @synthesize initialAutoEditDecisionListProgress=_initialAutoEditDecisionListProgress;
@property(retain, nonatomic) PXStoryProducerResult *autoEditDecisionListsResult; // @synthesize autoEditDecisionListsResult=_autoEditDecisionListsResult;
@property(retain, nonatomic) NSProgress *autoEditDecisionListsProgress; // @synthesize autoEditDecisionListsProgress=_autoEditDecisionListsProgress;
@property(retain, nonatomic) id <PXStoryAutoEditDecisionListsProducer> autoEditDecisionListsProducer; // @synthesize autoEditDecisionListsProducer=_autoEditDecisionListsProducer;
@property(retain, nonatomic) PXStoryProducerResult *autoEditStylesResult; // @synthesize autoEditStylesResult=_autoEditStylesResult;
@property(retain, nonatomic) NSProgress *autoEditStylesProgress; // @synthesize autoEditStylesProgress=_autoEditStylesProgress;
@property(readonly, nonatomic) _Bool requiresAutoEditStylesSynchronously; // @synthesize requiresAutoEditStylesSynchronously=_requiresAutoEditStylesSynchronously;
@property(retain, nonatomic) id <PXStoryStylesProducer> autoEditStylesProducer; // @synthesize autoEditStylesProducer=_autoEditStylesProducer;
@property(nonatomic) _Bool hasInitialStyleBeenProduced; // @synthesize hasInitialStyleBeenProduced=_hasInitialStyleBeenProduced;
@property(retain, nonatomic) PXStoryProducerResult *initialStyleResult; // @synthesize initialStyleResult=_initialStyleResult;
@property(retain, nonatomic) NSProgress *initialStyleProgress; // @synthesize initialStyleProgress=_initialStyleProgress;
@property(retain, nonatomic) id <PXStoryStylesProducer> initialStyleProducer; // @synthesize initialStyleProducer=_initialStyleProducer;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> allAssets; // @synthesize allAssets=_allAssets;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> curatedAssets; // @synthesize curatedAssets=_curatedAssets;
@property(nonatomic) unsigned long long defaultCurationLength; // @synthesize defaultCurationLength=_defaultCurationLength;
@property(nonatomic) CDStruct_5d4c7ed3 overallDurationInfo; // @synthesize overallDurationInfo=_overallDurationInfo;
@property(retain, nonatomic) PXStoryProducerResult *curationLengthsResult; // @synthesize curationLengthsResult=_curationLengthsResult;
@property(retain, nonatomic) NSProgress *assetsAutoCurationProgress; // @synthesize assetsAutoCurationProgress=_assetsAutoCurationProgress;
@property(retain, nonatomic) NSProgress *curationLengthsProgress; // @synthesize curationLengthsProgress=_curationLengthsProgress;
@property(retain, nonatomic) id <PXStoryAutoCurationProducer> autoCurationProducer; // @synthesize autoCurationProducer=_autoCurationProducer;
@property(nonatomic) _Bool haveFinalMovieHighlightsBeenProduced; // @synthesize haveFinalMovieHighlightsBeenProduced=_haveFinalMovieHighlightsBeenProduced;
@property(retain, nonatomic) PXStoryProducerResult *movieHighlightsResult; // @synthesize movieHighlightsResult=_movieHighlightsResult;
@property(retain, nonatomic) NSProgress *movieHighlightsProgress; // @synthesize movieHighlightsProgress=_movieHighlightsProgress;
@property(retain, nonatomic) id <PXStoryMovieHighlightsProducer> movieHighlightsProducer; // @synthesize movieHighlightsProducer=_movieHighlightsProducer;
@property(retain, nonatomic) id <PXStorySongResource> initialSongResource; // @synthesize initialSongResource=_initialSongResource;
@property(retain, nonatomic) PXStoryProducerResult *persistedSongResult; // @synthesize persistedSongResult=_persistedSongResult;
@property(retain, nonatomic) NSProgress *persistedSongProgress; // @synthesize persistedSongProgress=_persistedSongProgress;
@property(retain, nonatomic) id <PXStorySongResourceProducer> persistedSongProducer; // @synthesize persistedSongProducer=_persistedSongProducer;
@property(retain, nonatomic) PXStoryProducerResult *curatedSongsResult; // @synthesize curatedSongsResult=_curatedSongsResult;
@property(retain, nonatomic) NSProgress *curatedSongsProgress; // @synthesize curatedSongsProgress=_curatedSongsProgress;
@property(retain, nonatomic) id <PXStorySongsProducer> curatedSongsProducer; // @synthesize curatedSongsProducer=_curatedSongsProducer;
@property(nonatomic) _Bool hasInitialPersistableRecipeBeenProduced; // @synthesize hasInitialPersistableRecipeBeenProduced=_hasInitialPersistableRecipeBeenProduced;
@property(retain, nonatomic) PXStoryProducerResult *persistableRecipeResult; // @synthesize persistableRecipeResult=_persistableRecipeResult;
@property(retain, nonatomic) NSProgress *persistableRecipeProgress; // @synthesize persistableRecipeProgress=_persistableRecipeProgress;
@property(retain, nonatomic) id <PXStoryPersistableRecipeProducer> persistableRecipeProducer; // @synthesize persistableRecipeProducer=_persistableRecipeProducer;
@property(retain, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(retain, nonatomic) PXStoryProducerResult *assetsResult; // @synthesize assetsResult=_assetsResult;
@property(retain, nonatomic) NSProgress *assetsProgress; // @synthesize assetsProgress=_assetsProgress;
@property(retain, nonatomic) id <PXStoryAssetsProducer> assetsProducer; // @synthesize assetsProducer=_assetsProducer;
@property(nonatomic) unsigned long long remainingProducers; // @synthesize remainingProducers=_remainingProducers;
@property(nonatomic) unsigned long long finalizedProducers; // @synthesize finalizedProducers=_finalizedProducers;
@property(nonatomic) _Bool isAssetCollectionFinal; // @synthesize isAssetCollectionFinal=_isAssetCollectionFinal;
@property(retain, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PXStoryErrorReporter> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> manuallyCuratedAssets; // @synthesize manuallyCuratedAssets=_manuallyCuratedAssets;
@property(retain, nonatomic) PXStoryRecipeAssetEdits *recipeAssetEdits; // @synthesize recipeAssetEdits=_recipeAssetEdits;
@property(nonatomic) unsigned long long availableCurationLengths; // @synthesize availableCurationLengths=_availableCurationLengths;
@property(retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property(readonly, nonatomic) _Bool isRecipeFinal; // @synthesize isRecipeFinal=_isRecipeFinal;
@property(readonly, nonatomic) unsigned long long recipeAttributes; // @synthesize recipeAttributes=_recipeAttributes;
@property(readonly, nonatomic) PXStoryRecipe *recipe; // @synthesize recipe=_recipe;
@property(readonly, copy, nonatomic) PXStoryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)_storyQueue_handleChangedAssetsDataSource:(id)arg1;	// IMP=0x00000000005921a6
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000591fdb
- (id)_collectAutoEditDecisionListsBySong;	// IMP=0x0000000000591c12
@property(readonly, nonatomic) NSDictionary *resultsByComponent;
- (void)_updateRecipeAttributes;	// IMP=0x0000000000591838
- (void)_invalidateRecipeAttributes;	// IMP=0x00000000005917f4
- (void)_updateRecipe;	// IMP=0x00000000005914b3
- (void)_invalidateRecipe;	// IMP=0x000000000059146f
- (void)_handleAutoEditDecisionListsResult:(id)arg1;	// IMP=0x00000000005913dd
- (void)_updateAutoEditDecisionLists;	// IMP=0x0000000000590dc7
- (void)_invalidateAutoEditDecisionLists;	// IMP=0x0000000000590d83
- (void)_handleInitialAutoEditDecisionListResult:(id)arg1;	// IMP=0x0000000000590cf1
- (void)_updateInitialAutoEditDecisionList;	// IMP=0x00000000005906a9
- (void)_invalidateInitialAutoEditDecisionList;	// IMP=0x0000000000590665
- (void)_updateAutoEditDecisionListsProducer;	// IMP=0x0000000000590458
- (void)_invalidateAutoEditDecisionListsProducer;	// IMP=0x0000000000590414
- (void)_handleAutoEditStylesResult:(id)arg1;	// IMP=0x0000000000590382
- (void)_updateAutoEditStyles;	// IMP=0x000000000058ff86
- (void)_invalidateAutoEditStyles;	// IMP=0x000000000058ff42
- (void)_updateAutoEditStylesProducer;	// IMP=0x000000000058fe38
- (void)_invalidateAutoEditStylesProducer;	// IMP=0x000000000058fdf4
- (void)_handleInitialStyleResult:(id)arg1;	// IMP=0x000000000058fd62
- (void)_updateInitialStyle;	// IMP=0x000000000058f9b6
- (void)_invalidateInitialStyle;	// IMP=0x000000000058f972
- (void)_updateInitialStyleProducer;	// IMP=0x000000000058f6db
- (void)_invalidateInitialStyleProducer;	// IMP=0x000000000058f697
- (void)_updateManuallyCuratedAssets;	// IMP=0x000000000058f5ce
- (void)_invalidateManuallyCuratedAssets;	// IMP=0x000000000058f58a
- (void)_updateKeyAsset;	// IMP=0x000000000058f51b
- (void)_invalidateKeyAsset;	// IMP=0x000000000058f4d7
- (void)_updateCuratedAssets;	// IMP=0x000000000058f3ee
- (void)_invalidateCuratedAssets;	// IMP=0x000000000058f3aa
- (void)_updateAllAssets;	// IMP=0x000000000058f2d9
- (void)_invalidateAllAssets;	// IMP=0x000000000058f295
- (void)_updateOverallDurationInfo;	// IMP=0x000000000058f009
- (void)_invalidateOverallDurationInfo;	// IMP=0x000000000058efc5
- (void)_handleMovieHighlightsResult:(id)arg1;	// IMP=0x000000000058ef12
- (void)_updateMovieHighlights;	// IMP=0x000000000058eaed
- (void)_invalidateMovieHighlights;	// IMP=0x000000000058eaa9
- (void)_updateMovieHighlightsProducer;	// IMP=0x000000000058e9fa
- (void)_invalidateMovieHighlightsProducer;	// IMP=0x000000000058e9b6
- (void)_handleCurationLengthsResult:(id)arg1;	// IMP=0x000000000058e924
- (void)_updateCurationLengths;	// IMP=0x000000000058e505
- (void)_invalidateCurationLengths;	// IMP=0x000000000058e4c1
- (void)_updateAutoCurationProducer;	// IMP=0x000000000058e3df
- (void)_invalidateAutoCurationProducer;	// IMP=0x000000000058e39b
- (void)_handleSongsResult:(id)arg1;	// IMP=0x000000000058e309
- (void)_updateCuratedSongs;	// IMP=0x000000000058de72
- (void)_invalidateCuratedSongs;	// IMP=0x000000000058de2e
- (void)_updateCuratedSongsProducer;	// IMP=0x000000000058dd4c
- (void)_invalidateCuratedSongsProducer;	// IMP=0x000000000058dd08
- (void)_updateInitialSongResource;	// IMP=0x000000000058dba6
- (void)_invalidateInitialSongResource;	// IMP=0x000000000058db62
- (void)_handlePersistedSongResourceResult:(id)arg1;	// IMP=0x000000000058dad0
- (void)_updatePersistedSong;	// IMP=0x000000000058d724
- (void)_invalidatePersistedSong;	// IMP=0x000000000058d6e0
- (void)_updatePersistedSongProducer;	// IMP=0x000000000058d594
- (void)_invalidatePersistedSongProducer;	// IMP=0x000000000058d550
- (void)_handlePersistableRecipeResult:(id)arg1;	// IMP=0x000000000058d4be
- (void)_updatePersistableRecipe;	// IMP=0x000000000058d112
- (void)_invalidatePersistableRecipe;	// IMP=0x000000000058d0ce
- (void)_updatePersistableRecipeProducer;	// IMP=0x000000000058cfec
- (void)_invalidatePersistableRecipeProducer;	// IMP=0x000000000058cfa8
- (void)_handleAssetsResult:(id)arg1;	// IMP=0x000000000058cf16
- (void)_updateAssets;	// IMP=0x000000000058cb3c
- (void)_invalidateAssets;	// IMP=0x000000000058caf8
- (void)_updateAssetsProducer;	// IMP=0x000000000058ca5f
- (void)_invalidateAssetsProducer;	// IMP=0x000000000058ca1b
- (void)_updateAssetCollection;	// IMP=0x000000000058c9ac
- (void)_invalidateAssetCollection;	// IMP=0x000000000058c968
- (void)_setNeedsUpdate;	// IMP=0x000000000058c954
@property(readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;	// IMP=0x000000000058c55c
- (id)_shortDescriptionOfPersistableRecipe:(id)arg1;	// IMP=0x000000000058c2e9
- (id)_diagnosticTextForGenericHUDAtDisplaySize:(struct CGSize)arg1;	// IMP=0x000000000058bced
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize)arg2;	// IMP=0x000000000058bc58
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x000000000058b4cd
- (void)_handleAdditionalAutoEditDecisionListsResult:(id)arg1;	// IMP=0x000000000058b13f
- (void)_updateAdditionalAutoEditDecisionLists;	// IMP=0x000000000058ad82
- (void)_invalidateAdditionalAutoEditDecisionLists;	// IMP=0x000000000058ad3e
- (void)ensureAutoEditDecisionListForSong:(id)arg1;	// IMP=0x000000000058a954
- (void)didPersistRecipeAssetEdits:(id)arg1;	// IMP=0x000000000058a942
- (void)applyKeyAsset:(id)arg1;	// IMP=0x000000000058a8b6
- (void)applyManuallyRemovedAsset:(id)arg1;	// IMP=0x000000000058a7b6
- (void)applyManuallyCuratedAssets:(id)arg1;	// IMP=0x000000000058a5e2
- (void)_handleCuratedAssetsResult:(id)arg1 targetOverallDurationInfo:(CDStruct_5d4c7ed3)arg2;	// IMP=0x000000000058a462
- (void)applyTargetOverallDurationInfo:(CDStruct_5d4c7ed3)arg1;	// IMP=0x0000000000589d80
- (void)_handleResult:(id)arg1 forComponent:(id)arg2;	// IMP=0x00000000005897b8
- (void)setRecipeAttributes:(unsigned long long)arg1;	// IMP=0x00000000005893df
- (void)setIsRecipeFinal:(_Bool)arg1;	// IMP=0x00000000005891b3
- (void)setRecipe:(id)arg1;	// IMP=0x0000000000588ea6
@property(readonly, nonatomic) _Bool requiresAutoEditDecisionListsSynchronously;
@property(readonly, nonatomic) _Bool requiresInitialStyleSynchronously;
@property(readonly, nonatomic) _Bool requiresMovieHighlightsSynchronously;
@property(readonly, nonatomic) id <PXAudioAssetFetchResult> curatedSongs;
@property(readonly, nonatomic) _Bool requiresSongsSynchronously;
@property(readonly, nonatomic) _Bool requiresPersistableRecipeSynchronously;
@property(readonly, nonatomic) _Bool requiresAssetsSynchronously;
@property(readonly, nonatomic) _Bool wantsAutoEditResults;
@property(readonly, nonatomic) unsigned long long producersRequiredForPlayback;
@property(readonly, nonatomic) _Bool shouldAvoidSynchronousProductions;
@property(readonly, nonatomic) _Bool wantsSingleDelivery;
- (void)setConfiguration:(id)arg1;	// IMP=0x0000000000586958
- (void)didPerformChanges;	// IMP=0x00000000005868ee
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000586869
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000005866f5
- (id)initWithConfiguration:(id)arg1 assetsProducerFactory:(id)arg2 persistableRecipeProducerFactory:(id)arg3 songsProducerFactory:(id)arg4 movieHighlightsProducerFactory:(id)arg5 stylesProducerFactory:(id)arg6 autoEditDecisionListsProducerFactory:(id)arg7 autoCurationProducerFactory:(id)arg8;	// IMP=0x000000000058602f
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000586000
- (id)init;	// IMP=0x0000000000585f86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

