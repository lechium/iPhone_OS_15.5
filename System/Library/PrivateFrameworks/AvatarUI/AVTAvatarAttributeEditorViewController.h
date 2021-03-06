//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAttributeEditorSectionHeaderViewDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorControllerSubSelectionDelegate-Protocol.h>
#import <AvatarUI/AVTCollapsibleHeaderControllerDelegate-Protocol.h>
#import <AvatarUI/AVTGroupPickerDelegate-Protocol.h>
#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/AVTTransitionModel-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTAttributeEditorAnimationCoordinator, AVTAvatarAttributeEditorDataSource, AVTAvatarAttributeEditorModelManager, AVTAvatarEditorColorsState, AVTAvatarRecord, AVTBodyCarouselController, AVTCollapsibleHeaderController, AVTGroupDial, AVTGroupListCollectionView, AVTImageTransitioningContainerView, AVTMemoji, AVTShadowView, AVTTransition, AVTUIEnvironment, AVTViewCarouselLayout, AVTViewSession, AVTViewSessionProvider, CALayer, NSDate, NSString, UICollectionView, UILabel, UITapGestureRecognizer, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarAttributeEditorLayout, AVTAvatarAttributeEditorViewControllerDelegate, AVTTaskScheduler;

@interface AVTAvatarAttributeEditorViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTGroupPickerDelegate, AVTCollapsibleHeaderControllerDelegate, AVTTransitionModel, AVTNotifyingContainerViewDelegate, AVTAttributeEditorSectionHeaderViewDelegate>
{
    _Bool _disableAvatarSnapshotting;	// 8 = 0x8
    _Bool _shouldHideUserInfoView;	// 9 = 0x9
    _Bool _isCreating;	// 10 = 0xa
    _Bool _hasMadeAnySelection;	// 11 = 0xb
    _Bool _isAnimatingHighlight;	// 12 = 0xc
    _Bool _allowFacetracking;	// 13 = 0xd
    _Bool _collectionViewIsPerformingBatchUpdates;	// 14 = 0xe
    id <AVTAvatarAttributeEditorViewControllerDelegate> _delegate;	// 16 = 0x10
    id <AVTAvatarAttributeEditorLayout> _currentLayout;	// 24 = 0x18
    AVTAvatarAttributeEditorModelManager *_modelManager;	// 32 = 0x20
    id <AVTTaskScheduler> _imageProviderScheduler;	// 40 = 0x28
    UIView *_attributesContainerView;	// 48 = 0x30
    UIView *_sideGroupContainerView;	// 56 = 0x38
    UIView *_groupDialContainerView;	// 64 = 0x40
    AVTGroupDial *_groupDial;	// 72 = 0x48
    AVTGroupListCollectionView *_groupListView;	// 80 = 0x50
    AVTBodyCarouselController *_bodyEditorHeaderViewController;	// 88 = 0x58
    UIView *_headerMaskingView;	// 96 = 0x60
    UIView *_headerContainerView;	// 104 = 0x68
    AVTShadowView *_shadowView;	// 112 = 0x70
    UICollectionView *_attributesCollectionView;	// 120 = 0x78
    AVTAvatarAttributeEditorDataSource *_dataSource;	// 128 = 0x80
    AVTAttributeEditorAnimationCoordinator *_animationCoordinator;	// 136 = 0x88
    UILabel *_alphaAssetsLabel;	// 144 = 0x90
    UIView *_verticleRuleContainer;	// 152 = 0x98
    CALayer *_verticleRule;	// 160 = 0xa0
    AVTViewSessionProvider *_avtViewSessionProvider;	// 168 = 0xa8
    AVTViewSession *_avtViewSession;	// 176 = 0xb0
    AVTCollapsibleHeaderController *_collapsibleHeaderController;	// 184 = 0xb8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 192 = 0xc0
    AVTUIEnvironment *_environment;	// 200 = 0xc8
    AVTAvatarEditorColorsState *_colorsState;	// 208 = 0xd0
    CDUnknownBlockType _postSessionDidBecomeActiveHandler;	// 216 = 0xd8
    AVTImageTransitioningContainerView *_transitioningContainer;	// 224 = 0xe0
    AVTTransition *_currentTransition;	// 232 = 0xe8
    NSDate *_lastPosedAvatarImageRenderingTime;	// 240 = 0xf0
    CDUnknownBlockType _pendingUnhighlightBlock;	// 248 = 0xf8
    _AVTAvatarRecordImageProvider *_headerPreviewImageRenderer;	// 256 = 0x100
    id <AVTTaskScheduler> _headerPreviewScheduler;	// 264 = 0x108
    CDUnknownBlockType _pendingCollectionViewReloadDataBlock;	// 272 = 0x110
    unsigned long long _previewModeType;	// 280 = 0x118
    AVTViewCarouselLayout *_avtViewLayout;	// 288 = 0x120
}

+ (id)attributeRowIdentifier;	// IMP=0x00000000000b9064
+ (id)colorRowIdentifier;	// IMP=0x00000000000b9057
- (void).cxx_destruct;	// IMP=0x00000000000c493c
@property(retain, nonatomic) AVTViewCarouselLayout *avtViewLayout; // @synthesize avtViewLayout=_avtViewLayout;
@property(nonatomic) unsigned long long previewModeType; // @synthesize previewModeType=_previewModeType;
@property(copy, nonatomic) CDUnknownBlockType pendingCollectionViewReloadDataBlock; // @synthesize pendingCollectionViewReloadDataBlock=_pendingCollectionViewReloadDataBlock;
@property(nonatomic) _Bool collectionViewIsPerformingBatchUpdates; // @synthesize collectionViewIsPerformingBatchUpdates=_collectionViewIsPerformingBatchUpdates;
@property(readonly, nonatomic) id <AVTTaskScheduler> headerPreviewScheduler; // @synthesize headerPreviewScheduler=_headerPreviewScheduler;
@property(retain, nonatomic) _AVTAvatarRecordImageProvider *headerPreviewImageRenderer; // @synthesize headerPreviewImageRenderer=_headerPreviewImageRenderer;
@property(nonatomic) _Bool allowFacetracking; // @synthesize allowFacetracking=_allowFacetracking;
@property(copy, nonatomic) CDUnknownBlockType pendingUnhighlightBlock; // @synthesize pendingUnhighlightBlock=_pendingUnhighlightBlock;
@property(nonatomic) _Bool isAnimatingHighlight; // @synthesize isAnimatingHighlight=_isAnimatingHighlight;
@property(retain, nonatomic) NSDate *lastPosedAvatarImageRenderingTime; // @synthesize lastPosedAvatarImageRenderingTime=_lastPosedAvatarImageRenderingTime;
@property(retain, nonatomic) AVTTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer; // @synthesize transitioningContainer=_transitioningContainer;
@property(nonatomic) _Bool hasMadeAnySelection; // @synthesize hasMadeAnySelection=_hasMadeAnySelection;
@property(readonly, nonatomic) _Bool isCreating; // @synthesize isCreating=_isCreating;
@property(copy, nonatomic) CDUnknownBlockType postSessionDidBecomeActiveHandler; // @synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler;
@property(retain, nonatomic) AVTAvatarEditorColorsState *colorsState; // @synthesize colorsState=_colorsState;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) AVTCollapsibleHeaderController *collapsibleHeaderController; // @synthesize collapsibleHeaderController=_collapsibleHeaderController;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // @synthesize avtViewSessionProvider=_avtViewSessionProvider;
@property(retain, nonatomic) CALayer *verticleRule; // @synthesize verticleRule=_verticleRule;
@property(retain, nonatomic) UIView *verticleRuleContainer; // @synthesize verticleRuleContainer=_verticleRuleContainer;
@property(retain, nonatomic) UILabel *alphaAssetsLabel; // @synthesize alphaAssetsLabel=_alphaAssetsLabel;
@property(retain, nonatomic) AVTAttributeEditorAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property(retain, nonatomic) AVTAvatarAttributeEditorDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *attributesCollectionView; // @synthesize attributesCollectionView=_attributesCollectionView;
@property(retain, nonatomic) AVTShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIView *headerMaskingView; // @synthesize headerMaskingView=_headerMaskingView;
@property(retain, nonatomic) AVTBodyCarouselController *bodyEditorHeaderViewController; // @synthesize bodyEditorHeaderViewController=_bodyEditorHeaderViewController;
@property(retain, nonatomic) AVTGroupListCollectionView *groupListView; // @synthesize groupListView=_groupListView;
@property(retain, nonatomic) AVTGroupDial *groupDial; // @synthesize groupDial=_groupDial;
@property(retain, nonatomic) UIView *groupDialContainerView; // @synthesize groupDialContainerView=_groupDialContainerView;
@property(retain, nonatomic) UIView *sideGroupContainerView; // @synthesize sideGroupContainerView=_sideGroupContainerView;
@property(retain, nonatomic) UIView *attributesContainerView; // @synthesize attributesContainerView=_attributesContainerView;
@property(readonly, nonatomic) id <AVTTaskScheduler> imageProviderScheduler; // @synthesize imageProviderScheduler=_imageProviderScheduler;
@property(readonly, nonatomic) AVTAvatarAttributeEditorModelManager *modelManager; // @synthesize modelManager=_modelManager;
@property(retain, nonatomic) id <AVTAvatarAttributeEditorLayout> currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) _Bool shouldHideUserInfoView; // @synthesize shouldHideUserInfoView=_shouldHideUserInfoView;
@property(nonatomic) _Bool disableAvatarSnapshotting; // @synthesize disableAvatarSnapshotting=_disableAvatarSnapshotting;
@property(nonatomic) __weak id <AVTAvatarAttributeEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateBodyEditorHeaderIfNeeded;	// IMP=0x00000000000c42a2
- (void)updateForChangedSelectionIfNeeded;	// IMP=0x00000000000c4225
- (void)rebuildUIModelAfterSelectionInSection:(id)arg1 senderRect:(struct CGRect)arg2 reloadSections:(_Bool)arg3;	// IMP=0x00000000000c38a6
- (void)rebuildUIModelAfterSelectionInSection:(id)arg1 senderRect:(struct CGRect)arg2;	// IMP=0x00000000000c388f
- (void)updateForSelectionOfSupplementalItem:(id)arg1 senderRect:(struct CGRect)arg2;	// IMP=0x00000000000c3809
- (void)updateForSelectionOfItem:(id)arg1 inSection:(id)arg2 senderRect:(struct CGRect)arg3 reloadSections:(_Bool)arg4;	// IMP=0x00000000000c3719
- (void)updateForSelectionOfItem:(id)arg1 controller:(id)arg2 reloadSections:(_Bool)arg3;	// IMP=0x00000000000c33fa
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;	// IMP=0x00000000000c33b9
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;	// IMP=0x00000000000c30f2
- (void)attributeEditorSectionController:(id)arg1 didDeleteSectionItems:(id)arg2;	// IMP=0x00000000000c2eb8
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;	// IMP=0x00000000000c2dd8
- (void)groupPicker:(id)arg1 didSelectGroupAtIndex:(long long)arg2 tapped:(_Bool)arg3;	// IMP=0x00000000000c29f5
- (void)groupPicker:(id)arg1 didDeselectGroupAtIndex:(long long)arg2;	// IMP=0x00000000000c29e6
- (id)presetSectionItemForIndexPath:(id)arg1;	// IMP=0x00000000000c282f
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x00000000000c266d
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x00000000000c2461
- (void)sectionHeaderView:(id)arg1 didSelectItem:(id)arg2 forPicker:(id)arg3 sender:(id)arg4;	// IMP=0x00000000000c223c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000c201b
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000c1f3e
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000c1cab
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000c1a64
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000c1a4f
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000c1930
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000c180c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000c16b1
- (id)selectedItemInSection:(id)arg1;	// IMP=0x00000000000c14de
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000c125e
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x00000000000c1091
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000000c0d55
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000c0a86
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000c09d9
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000c0959
- (void)collapsibleHeaderController:(id)arg1 didUpdateHeaderToHeight:(double)arg2;	// IMP=0x00000000000c0883
- (void)collapsibleHeaderController:(id)arg1 isUpdatingHeaderWithIncrementalHeight:(double)arg2;	// IMP=0x00000000000c07dc
- (void)collapsibleHeaderController:(id)arg1 willUpdateHeaderToHeight:(double)arg2;	// IMP=0x00000000000c06df
- (void)resetAllSectionControllersStateToDefault;	// IMP=0x00000000000c0579
- (void)reloadCollectionViewDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c045f
- (void)updateAlphaAssetsLabelFrameIfNeeded;	// IMP=0x00000000000c01af
- (void)faceTrackingManager:(id)arg1 didUpdateUserInfoWithSize:(struct CGSize)arg2;	// IMP=0x00000000000c01a9
- (void)updateHeaderDependentLayoutWithHeaderFrame:(struct CGRect)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x00000000000bff43
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000bf984
- (void)createVerticleRuleIfNeeded;	// IMP=0x00000000000bf6f9
- (id)visibleLayout;	// IMP=0x00000000000bf615
- (void)applyLayout:(id)arg1 layoutAvatarView:(_Bool)arg2;	// IMP=0x00000000000be963
- (void)applyLayout:(id)arg1;	// IMP=0x00000000000be94c
- (double)maxGroupLabelWidth;	// IMP=0x00000000000be694
- (void)updateLayoutAttributes;	// IMP=0x00000000000bdf80
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000bdf19
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000bded8
- (id)createAlphaAssetsLabel;	// IMP=0x00000000000bdd72
- (void)didTapAvatarView:(id)arg1;	// IMP=0x00000000000bdd30
- (void)tearDownCollapsibleHeaderIfNeeded;	// IMP=0x00000000000bdbf9
- (void)setupTapGestureForView:(id)arg1;	// IMP=0x00000000000bdb1c
- (void)updateCollapsibleHeaderHeightConstraintsAnimated:(_Bool)arg1;	// IMP=0x00000000000bd9c0
- (void)setupCollapsibleHeaderIfNeededForLayout:(id)arg1 withSession:(id)arg2;	// IMP=0x00000000000bd762
- (void)configureUserInfoLabel;	// IMP=0x00000000000bd750
- (void)configureAVTViewFromSession:(id)arg1;	// IMP=0x00000000000bd63d
- (void)tearDownThrottler;	// IMP=0x00000000000bd637
- (void)configureThrottlerForAVTView:(id)arg1;	// IMP=0x00000000000bd631
- (void)beginAVTViewSessionWithDidBeginBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bcabb
- (void)setupImageView;	// IMP=0x00000000000bc8f4
- (void)setupPreview:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bc88f
- (void)applyFullAlpha;	// IMP=0x00000000000bc889
- (void)applyBaseAlpha;	// IMP=0x00000000000bc883
- (id)liveView;	// IMP=0x00000000000bc833
- (void)transitionLiveViewToFront;	// IMP=0x00000000000bc7f6
- (void)transitionStaticViewToFront;	// IMP=0x00000000000bc7b9
- (void)transitionToLiveViewAnimated:(_Bool)arg1;	// IMP=0x00000000000bc53a
- (void)updateImageViewWithPosedAvatarRecordForcingRender:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc1b4
- (void)updateHeaderViewForPreviewModeType:(unsigned long long)arg1;	// IMP=0x00000000000bb6f1
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bb547
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;	// IMP=0x00000000000bb1cb
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;	// IMP=0x00000000000bb1c5
- (struct UIEdgeInsets)adjustedSafeAreaInsets;	// IMP=0x00000000000bb145
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000bb00b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000baef3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000bad62
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000bac18
- (void)setupGroupSelectorIfNeeded;	// IMP=0x00000000000ba735
- (void)didFinishEditing;	// IMP=0x00000000000ba6b4
- (void)setTransitioningContainerFrame;	// IMP=0x00000000000ba2b0
- (void)setUpHeaderView;	// IMP=0x00000000000b9f4e
- (void)viewDidLoad;	// IMP=0x00000000000b985f
- (void)loadView;	// IMP=0x00000000000b978e
@property(readonly, nonatomic) AVTMemoji *avatar;
@property(readonly, nonatomic) AVTAvatarRecord *avatarRecord;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 environment:(id)arg3 isCreating:(_Bool)arg4;	// IMP=0x00000000000b9172
- (id)init;	// IMP=0x00000000000b9071
- (void)configurePPTMemoji:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4e04
- (void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4d42
- (void)selectCategory:(id)arg1 withCompletionDelay:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4b8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

