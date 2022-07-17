//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUAssetSharedViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXAssetImportStatusObserver-Protocol.h>

@class NSDate, NSMutableSet, NSString, PUAssetActionManager, PUAssetReference, PUAssetViewModel, PUAssetsDataSource, PUCachedMapTable, PUMediaProvider, PUPhotoPickerResizeTaskDescriptorViewModel, PUReviewScreenBarsModel;
@protocol PXAssetImportStatusManager;

@interface PUBrowsingViewModel <PUAssetViewModelChangeObserver, PUAssetSharedViewModelChangeObserver, PXAssetImportStatusObserver>
{
    PUAssetReference *_currentAssetReference;	// 8 = 0x8
    NSDate *_currentAssetReferenceChangedDate;	// 16 = 0x10
    double _lastAssetWasCurrentForDuration;	// 24 = 0x18
    _Bool _browsingSpeedRegimeIsValid;	// 32 = 0x20
    _Bool _isBrowsingSpeedRegimeInvalidationScheduled;	// 33 = 0x21
    PUCachedMapTable *_viewModelByAssetReference;	// 40 = 0x28
    NSMutableSet *_invalidAssetViewModels;	// 48 = 0x30
    _Bool _allAssetViewModelsAreInvalid;	// 56 = 0x38
    PUCachedMapTable *_assetSharedViewModelByAsset;	// 64 = 0x40
    _Atomic int _ongoingEnumerations;	// 72 = 0x48
    _Bool _videoContentAllowed;	// 76 = 0x4c
    _Bool _isScrubbing;	// 77 = 0x4d
    _Bool _isScrolling;	// 78 = 0x4e
    _Bool _isAnimatingAnyTransition;	// 79 = 0x4f
    _Bool _isAttemptingToPlayVideoOverlay;	// 80 = 0x50
    _Bool _accessoryViewsDefaultVisibility;	// 81 = 0x51
    _Bool _isChromeVisible;	// 82 = 0x52
    _Bool _presentingOverOneUp;	// 83 = 0x53
    _Bool _lowMemoryMode;	// 84 = 0x54
    PUAssetsDataSource *_assetsDataSource;	// 88 = 0x58
    PUAssetReference *_lastViewedAssetReference;	// 96 = 0x60
    double _currentAssetTransitionProgress;	// 104 = 0x68
    NSString *_transitionDriverIdentifier;	// 112 = 0x70
    long long _browsingSpeedRegime;	// 120 = 0x78
    long long _videoOverlayPlayState;	// 128 = 0x80
    long long _lastChromeVisibilityChangeReason;	// 136 = 0x88
    id _lastChromeVisibilityChangeContext;	// 144 = 0x90
    NSDate *_lastChromeVisibilityChangeDate;	// 152 = 0x98
    long long _horizontalSizeClass;	// 160 = 0xa0
    PUAssetReference *_trailingAssetReference;	// 168 = 0xa8
    PUAssetReference *_leadingAssetReference;	// 176 = 0xb0
    NSString *_navigationBarTitle;	// 184 = 0xb8
    PUReviewScreenBarsModel *_reviewScreenBarsModel;	// 192 = 0xc0
    PUPhotoPickerResizeTaskDescriptorViewModel *_resizeTaskDescriptorViewModel;	// 200 = 0xc8
    long long __userNavigationDistance;	// 208 = 0xd0
    long long __scrubbingSessionDistance;	// 216 = 0xd8
    NSMutableSet *__animatingTransitionIdentifiers;	// 224 = 0xe0
    NSMutableSet *__videoDisallowedReasons;	// 232 = 0xe8
    PUMediaProvider *_mediaProvider;	// 240 = 0xf0
    PUAssetActionManager *_actionManager;	// 248 = 0xf8
    id <PXAssetImportStatusManager> _importStatusManager;	// 256 = 0x100
    struct CGSize _secondScreenSize;	// 264 = 0x108
}

+ (_Bool)autoplayVideoMuted;	// IMP=0x00000000000ced9c
+ (void)setAutoplayVideoMuted:(_Bool)arg1;	// IMP=0x00000000000ced3c
+ (void)_handleSceneWillDeactivateNotification:(id)arg1;	// IMP=0x00000000000cec2d
+ (void)initialize;	// IMP=0x00000000000ceb56
- (void).cxx_destruct;	// IMP=0x00000000000ccfe1
@property(retain, nonatomic) id <PXAssetImportStatusManager> importStatusManager; // @synthesize importStatusManager=_importStatusManager;
@property(retain, nonatomic) PUAssetActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic, setter=_setVideoDisallowedReasons:) NSMutableSet *_videoDisallowedReasons; // @synthesize _videoDisallowedReasons=__videoDisallowedReasons;
@property(retain, nonatomic, setter=_setAnimatingTransitionIdentifiers:) NSMutableSet *_animatingTransitionIdentifiers; // @synthesize _animatingTransitionIdentifiers=__animatingTransitionIdentifiers;
@property(nonatomic, setter=_setScrubbingSessionDistance:) long long _scrubbingSessionDistance; // @synthesize _scrubbingSessionDistance=__scrubbingSessionDistance;
@property(nonatomic, setter=_setUserNavigationDistance:) long long _userNavigationDistance; // @synthesize _userNavigationDistance=__userNavigationDistance;
@property(readonly, nonatomic) _Bool lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property(retain, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // @synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel;
@property(retain, nonatomic) PUReviewScreenBarsModel *reviewScreenBarsModel; // @synthesize reviewScreenBarsModel=_reviewScreenBarsModel;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic, setter=_setLeadingAssetReference:) PUAssetReference *leadingAssetReference; // @synthesize leadingAssetReference=_leadingAssetReference;
@property(retain, nonatomic, setter=_setTrailingAssetReference:) PUAssetReference *trailingAssetReference; // @synthesize trailingAssetReference=_trailingAssetReference;
@property(nonatomic) struct CGSize secondScreenSize; // @synthesize secondScreenSize=_secondScreenSize;
@property(nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property(nonatomic, getter=isPresentingOverOneUp) _Bool presentingOverOneUp; // @synthesize presentingOverOneUp=_presentingOverOneUp;
@property(readonly, nonatomic) NSDate *lastChromeVisibilityChangeDate; // @synthesize lastChromeVisibilityChangeDate=_lastChromeVisibilityChangeDate;
@property(retain, nonatomic, setter=_setLastChromeVisibilityChangeContext:) id lastChromeVisibilityChangeContext; // @synthesize lastChromeVisibilityChangeContext=_lastChromeVisibilityChangeContext;
@property(nonatomic, setter=_setLastChromeVisibilityChangeReason:) long long lastChromeVisibilityChangeReason; // @synthesize lastChromeVisibilityChangeReason=_lastChromeVisibilityChangeReason;
@property(nonatomic, setter=setChromeVisible:) _Bool isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
@property(nonatomic) _Bool accessoryViewsDefaultVisibility; // @synthesize accessoryViewsDefaultVisibility=_accessoryViewsDefaultVisibility;
@property(nonatomic) _Bool isAttemptingToPlayVideoOverlay; // @synthesize isAttemptingToPlayVideoOverlay=_isAttemptingToPlayVideoOverlay;
@property(nonatomic) long long videoOverlayPlayState; // @synthesize videoOverlayPlayState=_videoOverlayPlayState;
@property(nonatomic, setter=_setAnimatingAnyTransition:) _Bool isAnimatingAnyTransition; // @synthesize isAnimatingAnyTransition=_isAnimatingAnyTransition;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic, setter=_setBrowsingSpeedRegime:) long long browsingSpeedRegime; // @synthesize browsingSpeedRegime=_browsingSpeedRegime;
@property(readonly, copy, nonatomic) NSString *transitionDriverIdentifier; // @synthesize transitionDriverIdentifier=_transitionDriverIdentifier;
@property(readonly, nonatomic) double currentAssetTransitionProgress; // @synthesize currentAssetTransitionProgress=_currentAssetTransitionProgress;
@property(readonly, nonatomic) PUAssetReference *lastViewedAssetReference; // @synthesize lastViewedAssetReference=_lastViewedAssetReference;
@property(retain, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
- (id)debugDetailedDescription;	// IMP=0x00000000000cc773
- (void)assetImportStatusManager:(id)arg1 didChangeStatusForAssetReference:(id)arg2;	// IMP=0x00000000000cc5f6
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000cc4ac
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000cc340
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000cc189
- (void)_handleAutoplayMutedDidChangeNotification:(id)arg1;	// IMP=0x00000000000cc13d
- (long long)_importStateForAssetReference:(id)arg1;	// IMP=0x00000000000cc093
- (id)_filteredAllowedBadges:(id)arg1 forAssetReference:(id)arg2;	// IMP=0x00000000000cbe18
- (id)_badgeInfoPromiseForAssetReference:(id)arg1;	// IMP=0x00000000000cbc65
- (double)_focusValueForAsset:(id)arg1;	// IMP=0x00000000000cba99
- (void)_updateNeighboringAssetReferences;	// IMP=0x00000000000cb797
- (void)_updateAssetViewModel:(id)arg1;	// IMP=0x00000000000cb5be
- (void)_updateAssetViewModelsIfNeeded;	// IMP=0x00000000000cb482
- (void)_invalidateAssetViewModel:(id)arg1;	// IMP=0x00000000000cb465
- (void)_invalidateCurrentAndNeighboringAssetViewModels;	// IMP=0x00000000000cb311
- (void)_invalidateAllAssetViewModels;	// IMP=0x00000000000cb300
- (void)_handleAsyncBrowsingSpeedRegimeInvalidation;	// IMP=0x00000000000cb2a9
- (void)_invalidateBrowsingSpeedRegimeAfterMaximumDelay:(double)arg1;	// IMP=0x00000000000cb1e1
- (void)_updateScrubSpeedRegimeIfNeeded;	// IMP=0x00000000000caf81
- (void)_invalidateBrowsingSpeedRegime;	// IMP=0x00000000000caf70
- (void)_updateIfNeeded;	// IMP=0x00000000000caf29
- (_Bool)_needsUpdate;	// IMP=0x00000000000caedc
- (void)signalReviewScreenSelectionChanged;	// IMP=0x00000000000cae9a
- (id)_assetSharedViewModelForAsset:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x00000000000caaba
- (id)assetSharedViewModelForAsset:(id)arg1;	// IMP=0x00000000000caaa3
- (_Bool)isTogglingCTMForAsset:(id)arg1;	// IMP=0x00000000000ca9ae
@property(readonly, nonatomic) PUAssetViewModel *assetViewModelForCurrentAssetReference;
- (id)assetViewModelForAssetReference:(id)arg1;	// IMP=0x00000000000ca6b9
- (id)activeAssetReferences;	// IMP=0x00000000000ca4ed
@property(readonly, nonatomic) _Bool isVideoContentAllowed;
- (void)_setVideoContentAllowed:(_Bool)arg1;	// IMP=0x00000000000ca3ef
- (void)setVideoContentAllowedForAllReasons;	// IMP=0x00000000000ca394
- (void)setVideoContentAllowed:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000000ca214
- (void)setChromeVisible:(_Bool)arg1 changeReason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000000c9f4c
- (void)setChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;	// IMP=0x00000000000c9f37
- (void)_resetAccessoryViewsVisibilityToDefaultWithChangeReason:(long long)arg1;	// IMP=0x00000000000c9e6d
- (void)setAccessoryViewsDefaultVisibility:(_Bool)arg1 changeReason:(long long)arg2;	// IMP=0x00000000000c9e47
@property(nonatomic, getter=isAutoplayVideoMuted) _Bool autoplayVideoMuted;
- (void)setAnimating:(_Bool)arg1 transitionWithIdentifier:(id)arg2;	// IMP=0x00000000000c9b90
- (void)_setTransitionDriverIdentifier:(id)arg1;	// IMP=0x00000000000c98aa
- (void)_setCurrentAssetTransitionProgress:(double)arg1;	// IMP=0x00000000000c984a
@property(retain, nonatomic) PUAssetReference *currentAssetReference;
- (void)setCurrentAssetReference:(id)arg1 transitionProgress:(double)arg2 transitionDriverIdentifier:(id)arg3;	// IMP=0x00000000000c91b8
- (void)didPerformChanges;	// IMP=0x00000000000c8d68
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x00000000000c8d39
- (void)registerChangeObserver:(id)arg1;	// IMP=0x00000000000c8d0a
- (id)currentChange;	// IMP=0x00000000000c8cc3
- (id)newViewModelChange;	// IMP=0x00000000000c8cb2
- (id)init;	// IMP=0x00000000000c8c9e
- (id)initWithLowMemoryMode:(_Bool)arg1;	// IMP=0x00000000000c89c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
