//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>
#import <NanoTimeKitCompanion/CLKSensitiveUIStateObserver-Protocol.h>
#import <NanoTimeKitCompanion/REElementActionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/REUIElementIntentActionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/REUIRelevanceEngineControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <NanoTimeKitCompanion/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDiffableDataSourceSnapshot, NSMutableSet, NSOrderedSet, NSSet, NSString, NSTimer, NTKDigitalTimeLabelStyle, NTKUpNextCollectionView, NTKUpNextCollectionViewFlowLayout, NTKUtilityComplicationFactory, REUIRelevanceEngineController, REUpNextScheduler, UICollectionViewDiffableDataSource, UIImage, UITapGestureRecognizer, UIView;

@interface NTKUpNextFaceView <REUIRelevanceEngineControllerDelegate, REElementActionDelegate, REUIElementIntentActionDelegate, CLKSensitiveUIStateObserver, CLKMonochromeFilterProvider, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    NTKDigitalTimeLabelStyle *_timeLabelDefaultStyle;	// 8 = 0x8
    NTKDigitalTimeLabelStyle *_timeLabelSmallInUpperRightCornerStyle;	// 16 = 0x10
    NTKUtilityComplicationFactory *_utilityComplicationFactory;	// 24 = 0x18
    NTKUpNextCollectionView *_collectionView;	// 32 = 0x20
    UICollectionViewDiffableDataSource *_collectionViewDataSource;	// 40 = 0x28
    NTKUpNextCollectionViewFlowLayout *_layout;	// 48 = 0x30
    REUIRelevanceEngineController *_engineController;	// 56 = 0x38
    UITapGestureRecognizer *_viewModeTapGesture;	// 64 = 0x40
    long long _previousViewMode;	// 72 = 0x48
    NSTimer *_viewResetTimer;	// 80 = 0x50
    NSTimer *_positiveDwellForTopElementsTimer;	// 88 = 0x58
    NSTimer *_wakeWheelTimer;	// 96 = 0x60
    NSTimer *_wheelDelayTimer;	// 104 = 0x68
    NSTimer *_buttonPressTimer;	// 112 = 0x70
    double _lastCrownVelocity;	// 120 = 0x78
    double _accumulatedCrownDelta;	// 128 = 0x80
    NSArray *_complicationDisplays;	// 136 = 0x88
    _Bool _isAnimating;	// 144 = 0x90
    UIImage *_cellContentBackground;	// 152 = 0x98
    UIView *_timeLabelPlatter;	// 160 = 0xa0
    UIView *_scalableView;	// 168 = 0xa8
    _Bool _needsReloadedContent;	// 176 = 0xb0
    _Bool _hasDeferredUpdate;	// 177 = 0xb1
    _Bool _isApplyingSnapshot;	// 178 = 0xb2
    _Bool _isApplyingBatchUpdate;	// 179 = 0xb3
    _Bool _isInflightScroll;	// 180 = 0xb4
    _Bool _cancelInflightScroll;	// 181 = 0xb5
    _Bool _isProgramaticScrollEvent;	// 182 = 0xb6
    _Bool _crownInverted;	// 183 = 0xb7
    _Bool _suppressCrownEvents;	// 184 = 0xb8
    _Bool _isBacklightOn;	// 185 = 0xb9
    NSMutableSet *_reloadedElements;	// 192 = 0xc0
    NSOrderedSet *_currentApplicationIdentifiers;	// 200 = 0xc8
    REUpNextScheduler *_applicationIdentifierUpdateScheduler;	// 208 = 0xd0
    NSSet *_dwellIndexPathes;	// 216 = 0xd8
    long long _interactiveState;	// 224 = 0xe0
    CDUnknownBlockType _modeTransitionApplier;	// 232 = 0xe8
    CDUnknownBlockType _modeTransitionCompletion;	// 240 = 0xf0
    struct CGPoint _startOffsetForModeTransition;	// 248 = 0xf8
    struct CGPoint _targetOffsetForModeTransition;	// 264 = 0x108
    struct CGPoint _secondaryOffsetForModeTransition;	// 280 = 0x118
    _Bool _scrollingStoppedTransition;	// 296 = 0x128
    long long _previousDataMode;	// 304 = 0x130
    _Bool _engineInitiallyLoaded;	// 312 = 0x138
    NSDiffableDataSourceSnapshot *_snapshotSnapshot;	// 320 = 0x140
}

+ (id)_reuseIdentifierForContent:(id)arg1;	// IMP=0x0000000000014ba1
+ (double)suggestedCellHeightForDevice:(id)arg1;	// IMP=0x000000000000f2bb
- (void).cxx_destruct;	// IMP=0x000000000001a0c3
- (id)_swatchImageForColorOption:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000019eb6
- (void)_deviceOrientationInvertedDidChangeNotification:(id)arg1;	// IMP=0x0000000000019ea4
- (void)_updateCrownInvertedSetting;	// IMP=0x0000000000019e9e
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect)arg2;	// IMP=0x0000000000019bd4
- (unsigned long long)_timeLabelOptions;	// IMP=0x0000000000019bc9
- (void)_applyTransitionWithFraction:(double)arg1 interpolatedPalette:(id)arg2 onCell:(id)arg3;	// IMP=0x00000000000198e4
- (void)_cleanupAfterEditing;	// IMP=0x000000000001970b
- (void)_prepareForEditing;	// IMP=0x000000000001968f
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;	// IMP=0x000000000001947e
- (void)_setSiriBlurColor;	// IMP=0x0000000000019326
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000000191de
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000000190e9
- (id)intentActionWantsViewToBlurForAlert:(id)arg1;	// IMP=0x00000000000190e1
- (id)intentActionWantsBackgroundToBlurForAlert:(id)arg1;	// IMP=0x00000000000190d8
- (id)intentActionWantsBackgroundImageForAlert:(id)arg1;	// IMP=0x00000000000190c3
- (void)sensitiveUIStateChanged;	// IMP=0x00000000000190b1
- (void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;	// IMP=0x000000000001902b
- (void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;	// IMP=0x0000000000018fb9
- (void)elementAction:(id)arg1 didFinishTask:(_Bool)arg2;	// IMP=0x0000000000018cb6
- (void)_switchViewModeForCurrentMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001896c
- (void)_handleViewModeTapGesture:(id)arg1;	// IMP=0x000000000001890b
- (void)updateTimeLabelBackground;	// IMP=0x0000000000018831
- (void)_layoutTimeLabelForViewMode:(long long)arg1;	// IMP=0x00000000000186aa
- (void)_layoutTimeLabelPlatterViewMode:(long long)arg1;	// IMP=0x0000000000018463
- (void)_allowContentViewInteractive:(_Bool)arg1;	// IMP=0x0000000000018446
- (void)_cleanupAfterSettingViewMode:(long long)arg1 scroll:(_Bool)arg2 targetOffset:(struct CGPoint)arg3 needsLayout:(_Bool)arg4;	// IMP=0x0000000000017fa8
- (void)_setViewMode:(long long)arg1 scroll:(_Bool)arg2 scrollToPoint:(struct CGPoint)arg3 secondaryPoint:(struct CGPoint)arg4 force:(_Bool)arg5 velocity:(double)arg6 animated:(_Bool)arg7;	// IMP=0x0000000000017e61
- (struct CGPoint)_defaultPointForDefaultMode;	// IMP=0x0000000000017cde
- (void)engineControllerDidFinishUpdatingRelevance:(id)arg1;	// IMP=0x0000000000017c40
- (void)engineControllerDidBeginUpdatingRelevance:(id)arg1;	// IMP=0x0000000000017c3a
- (void)engineController:(id)arg1 didRemoveContent:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000017bb1
- (void)engineController:(id)arg1 didReloadElement:(id)arg2;	// IMP=0x0000000000017aec
- (void)engineController:(id)arg1 didReloadContent:(id)arg2 withIdentifier:(id)arg3;	// IMP=0x0000000000017911
- (void)engineController:(id)arg1 didReloadContent:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000001790b
- (void)engineController:(id)arg1 didMoveContent:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;	// IMP=0x0000000000017905
- (void)engineController:(id)arg1 didInsertContent:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000178ff
- (_Bool)engineController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;	// IMP=0x0000000000017846
- (void)engineController:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017759
- (_Bool)_shouldDeferUpdate;	// IMP=0x00000000000176d6
- (void)_applyShowContentForUnadornedSnapshot;	// IMP=0x0000000000017697
- (void)setViewMode:(long long)arg1;	// IMP=0x0000000000017661
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000017545
- (void)_becameInactiveFace;	// IMP=0x0000000000017500
- (void)_becameActiveFace;	// IMP=0x00000000000174b8
- (void)_applyShowsLockedUI;	// IMP=0x0000000000017459
- (_Bool)_applyShowIdealizedContent;	// IMP=0x00000000000173c5
- (_Bool)_applyShouldUseCanonicalContent;	// IMP=0x00000000000173bd
- (void)_applyShowsCanonicalContent;	// IMP=0x00000000000173ab
- (_Bool)_shouldUseCanonicalContent;	// IMP=0x000000000001735d
- (void)_updateDisabledDataSources;	// IMP=0x0000000000016bcf
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;	// IMP=0x0000000000016bbd
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x0000000000016a18
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;	// IMP=0x00000000000168b1
- (void)_prepareForSnapshotting;	// IMP=0x0000000000016892
- (void)_loadSnapshotContent:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015c45
- (void)_performWristRaiseAnimation;	// IMP=0x0000000000015b01
- (void)_prepareWristRaiseAnimation;	// IMP=0x00000000000159c0
- (void)_handleOrdinaryScreenWake;	// IMP=0x0000000000015992
- (_Bool)presentedViewControllerShouldBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000015986
- (void)_handleWristRaiseScreenWake;	// IMP=0x0000000000015980
- (void)_applyDataMode;	// IMP=0x0000000000015640
- (_Bool)_supportsTimeScrubbing;	// IMP=0x0000000000015638
- (_Bool)_wantsStatusBarHidden;	// IMP=0x000000000001561e
- (void)_loadLayoutRules;	// IMP=0x000000000001544e
- (id)_additionalPrelaunchApplicationIdentifiers;	// IMP=0x0000000000015439
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000015305
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000150bf
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000014dbf
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000014d7e
- (void)_setupCell:(id)arg1 withContent:(id)arg2 representedIdentifier:(id)arg3;	// IMP=0x0000000000014cec
- (id)_contentAtIndexPath:(id)arg1;	// IMP=0x0000000000014c28
- (void)_postPositiveDwellEventsForTopElements;	// IMP=0x0000000000014b9b
- (void)_stopPositiveDwellForTopElementsTimer;	// IMP=0x0000000000014b63
- (void)_startPositiveDwellForTopElementsTimerIfNeeded;	// IMP=0x0000000000014b35
- (void)_resetVisibilityForCells;	// IMP=0x0000000000014b2f
- (void)_updateVisibilityForCells;	// IMP=0x0000000000014b29
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000149ba
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000149a8
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000014990
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000001497e
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000001492d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000014835
- (long long)_numberOfItemsInCollectionViewSection:(long long)arg1;	// IMP=0x0000000000014818
- (long long)_numberOfSectionsInCollectionView;	// IMP=0x00000000000147fb
- (void)_configureVisibleCell:(id)arg1;	// IMP=0x0000000000014790
- (id)_configureSupplementaryViewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x000000000001462f
- (id)_configureCellForItemWithElement:(id)arg1 atIndexPath:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x0000000000014404
- (void)_logContent:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000001415d
- (void)_logDataSourceSnapshot:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000013de3
- (void)_reloadCollectionViewData;	// IMP=0x0000000000013dc6
- (void)_configureCollectionViewDataSource;	// IMP=0x0000000000013afc
- (_Bool)_dismissPresentedViewControllerIfNecessary:(_Bool)arg1;	// IMP=0x0000000000013af4
- (void)_stopViewResetTimer;	// IMP=0x0000000000013abc
- (void)_startViewResetTimer;	// IMP=0x00000000000138e0
- (unsigned long long)_distanceForIndexPathFromNow:(id)arg1;	// IMP=0x0000000000013722
- (void)_updateApplicationIdentifiersAndLocationAuthorization;	// IMP=0x0000000000012c5a
- (id)_sectionEnumerationOrder;	// IMP=0x0000000000012a77
- (void)_availableDataSourcesDidChange;	// IMP=0x00000000000129da
- (void)_replaceDataSourceElement:(id)arg1 withReloadedREElement:(id)arg2;	// IMP=0x0000000000012883
- (void)updateCollectionViewSnapshotAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012032
- (_Bool)_snapshotHasChangesToVisibleItems:(id)arg1;	// IMP=0x0000000000011e08
- (void)_applyCollectionViewSnapshot:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000119b1
- (void)collectionViewDeferralStateChanged;	// IMP=0x00000000000118e8
- (void)performScrollTestNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001153d
- (void)_switchViewModeToDefault;	// IMP=0x00000000000114ef
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;	// IMP=0x0000000000011425
- (void)_unloadContentViews;	// IMP=0x0000000000011351
- (void)_unloadSnapshotContentViews;	// IMP=0x0000000000011310
- (void)_loadContentViews;	// IMP=0x00000000000109ab
- (void)_loadSnapshotContentViews;	// IMP=0x00000000000108b4
- (_Bool)_needsForegroundContainerView;	// IMP=0x00000000000108ac
- (double)_verticalPaddingForStatusBar;	// IMP=0x00000000000108a3
- (void)_reloadContentIfNeeded;	// IMP=0x000000000001063f
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;	// IMP=0x0000000000010318
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;	// IMP=0x000000000001019d
- (id)_detachedComplicationDisplays;	// IMP=0x0000000000010063
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000ffdc
- (void)layoutSubviews;	// IMP=0x000000000000fd46
- (void)_loadEngineController;	// IMP=0x000000000000fcc5
- (void)screenDidTurnOffAnimated:(_Bool)arg1;	// IMP=0x000000000000fb8f
- (void)screenWillTurnOnAnimated:(_Bool)arg1;	// IMP=0x000000000000fadc
- (void)dealloc;	// IMP=0x000000000000f952
- (void)_showSiriUnavailableAlert:(id)arg1;	// IMP=0x000000000000f89a
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;	// IMP=0x000000000000f2eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
