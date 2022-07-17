//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarBodyPoseDisplayingController-Protocol.h>
#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>

@class AVTAvatarListCell, AVTCenteringCollectionViewDelegate, AVTRenderingScope, AVTSerialTaskScheduler, AVTStickerConfiguration, AVTTransitionCoordinator, AVTUIEnvironment, AVTUIStickerGeneratorPool, AVTUIStickerRenderer, AVTViewSession, AVTZIndexEngagementListCollectionViewLayout, NSArray, NSString, UICollectionView, UIView;
@protocol AVTAvatarRecord, AVTPresenterDelegate, AVTUILogger, AVTViewCarouselLayout;

@interface AVTBodyCarouselController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTNotifyingContainerViewDelegate, AVTAvatarBodyPoseDisplayingController>
{
    _Bool _isAnimatingExpansion;	// 8 = 0x8
    id <AVTPresenterDelegate> presenterDelegate;	// 16 = 0x10
    double _decelerationRate;	// 24 = 0x18
    AVTRenderingScope *_renderingScope;	// 32 = 0x20
    AVTStickerConfiguration *_displayedConfiguration;	// 40 = 0x28
    UIView *_view;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
    AVTZIndexEngagementListCollectionViewLayout *_collectionViewLayout;	// 64 = 0x40
    AVTCenteringCollectionViewDelegate *_centeringDelegate;	// 72 = 0x48
    AVTViewSession *_avtViewSession;	// 80 = 0x50
    NSArray *_configurations;	// 88 = 0x58
    AVTUIStickerRenderer *_renderer;	// 96 = 0x60
    AVTSerialTaskScheduler *_scheduler;	// 104 = 0x68
    AVTUIStickerGeneratorPool *_generatorPool;	// 112 = 0x70
    id <AVTAvatarRecord> _displayedRecord;	// 120 = 0x78
    AVTAvatarListCell *_liveCell;	// 128 = 0x80
    AVTTransitionCoordinator *_transitionCoordinator;	// 136 = 0x88
    AVTUIEnvironment *_environment;	// 144 = 0x90
    id <AVTUILogger> _logger;	// 152 = 0x98
    id <AVTViewCarouselLayout> _avtViewLayout;	// 160 = 0xa0
    struct CGSize _centerCellSize;	// 168 = 0xa8
}

+ (id)newCollectionViewLayoutForEngagedCellSize:(struct CGSize)arg1 boundsSize:(struct CGSize)arg2 environment:(id)arg3;	// IMP=0x0000000000018646
- (void).cxx_destruct;	// IMP=0x000000000001b9e6
@property(retain, nonatomic) id <AVTViewCarouselLayout> avtViewLayout; // @synthesize avtViewLayout=_avtViewLayout;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AVTTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(nonatomic) struct CGSize centerCellSize; // @synthesize centerCellSize=_centerCellSize;
@property(retain, nonatomic) AVTAvatarListCell *liveCell; // @synthesize liveCell=_liveCell;
@property(retain, nonatomic) id <AVTAvatarRecord> displayedRecord; // @synthesize displayedRecord=_displayedRecord;
@property(retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool; // @synthesize generatorPool=_generatorPool;
@property(retain, nonatomic) AVTSerialTaskScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) AVTUIStickerRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) NSArray *configurations; // @synthesize configurations=_configurations;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate; // @synthesize centeringDelegate=_centeringDelegate;
@property(retain, nonatomic) AVTZIndexEngagementListCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool isAnimatingExpansion; // @synthesize isAnimatingExpansion=_isAnimatingExpansion;
@property(retain, nonatomic) AVTStickerConfiguration *displayedConfiguration; // @synthesize displayedConfiguration=_displayedConfiguration;
@property(readonly, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
- (void)transitionCell:(id)arg1 toStopFocusingAnimated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b2ec
- (void)transitionCell:(id)arg1 indexPath:(id)arg2 toStartFocusingAnimated:(_Bool)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001adfe
- (void)transitionCenterCellToStartFocusing:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000001ace1
- (void)transitionCenterCellIfPresentToStopFocusingAnimated:(_Bool)arg1;	// IMP=0x000000000001ac4c
- (void)transitionCenterCellIfPresentToStartFocusing;	// IMP=0x000000000001aae6
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000001aad2
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000001aabe
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000001aaa4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000001aa23
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000001a95c
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000001a7d5
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000001a704
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000001a6c0
- (void)stopUsingAVTViewSessionSynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a631
- (void)useAVTViewFromSession:(id)arg1;	// IMP=0x000000000001a5df
- (void)prepareViewWithLayout:(id)arg1;	// IMP=0x000000000001a5b1
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;	// IMP=0x000000000001a566
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;	// IMP=0x000000000001a560
- (void)layoutDidChangeWhileMoving:(_Bool)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000001a512
- (void)transitionCurrentDisplayedConfigurationAnimated:(_Bool)arg1;	// IMP=0x000000000001a296
- (void)updateImageForStaticCellForIndexPath:(id)arg1;	// IMP=0x000000000001a1ab
- (void)setStaticImageOnCell:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0000000000019e8c
- (void)updateStickersforVisibleCells;	// IMP=0x0000000000019d26
- (void)setDisplayedConfigurationFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000019ad7
- (void)updateDisplayedConfigurationIfNeeded;	// IMP=0x0000000000019a76
- (_Bool)shouldCurrentlyDisplayedConfigurationTransitionToLive;	// IMP=0x0000000000019822
- (id)cellForConfiguration:(id)arg1;	// IMP=0x000000000001970e
- (id)indexPathForItemClosestToCenter;	// IMP=0x000000000001965b
- (void)scrollToViewAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001944a
- (void)scrollToViewForConfiguration:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001939b
- (void)scrollToDisplayedConfiguration;	// IMP=0x000000000001934d
- (void)reloadDisplayedSticker;	// IMP=0x00000000000192ab
- (void)loadView;	// IMP=0x000000000001922e
- (void)buildCollectionViewAndConfigureLayoutIfNeeded;	// IMP=0x0000000000018eac
- (id)configureLayoutIfNeededWithHeight:(double)arg1;	// IMP=0x0000000000018afc
- (_Bool)isViewLoaded;	// IMP=0x0000000000018a84
- (id)initWithEnvironment:(id)arg1 initialAVTViewLayout:(id)arg2 avatarRecord:(id)arg3;	// IMP=0x00000000000187e3
- (id)initWithEnvironment:(id)arg1 avatarRecord:(id)arg2;	// IMP=0x00000000000187cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
