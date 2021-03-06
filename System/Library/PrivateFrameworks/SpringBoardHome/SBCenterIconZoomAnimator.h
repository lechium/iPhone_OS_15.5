//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBIconListLayoutDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListModelObserver-Protocol.h>

@class NSArray, NSString, SBFolderController, SBHCenterZoomSettings, UIView;
@protocol SBDockOffscreenFractionModifying;

@interface SBCenterIconZoomAnimator <SBIconListLayoutDelegate, SBIconListModelObserver>
{
    UIView *_zoomView;	// 8 = 0x8
    UIView *_folderView;	// 16 = 0x10
    double _iconZoomedZ;	// 24 = 0x18
    NSArray *_extraViewsContainers;	// 32 = 0x20
    NSArray *_extraViews;	// 40 = 0x28
    double _centerRow;	// 48 = 0x30
    double _centerCol;	// 56 = 0x38
    struct CGPoint _cameraPosition;	// 64 = 0x40
    _Bool _animatingIcons;	// 80 = 0x50
    id <SBDockOffscreenFractionModifying> _dockOffscreenFractionModifier;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002b2ca
@property(readonly, nonatomic) _Bool animatingIcons; // @synthesize animatingIcons=_animatingIcons;
@property(readonly, nonatomic) double centerCol; // @synthesize centerCol=_centerCol;
@property(readonly, nonatomic) double centerRow; // @synthesize centerRow=_centerRow;
@property(readonly, nonatomic) struct CGPoint cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
@property(retain, nonatomic) id <SBDockOffscreenFractionModifying> dockOffscreenFractionModifier; // @synthesize dockOffscreenFractionModifier=_dockOffscreenFractionModifier;
- (void)_calculateCentersAndCameraPosition;	// IMP=0x000000000002b0b1
- (void)_calculateCenters;	// IMP=0x000000000002ad98
- (id)_animationFactoryForFolderView;	// IMP=0x000000000002acd8
- (id)_animationFactoryForDock;	// IMP=0x000000000002abbd
- (id)_animationFactoryForIcon:(id)arg1;	// IMP=0x000000000002a900
- (void)_positionView:(id)arg1 forIcon:(id)arg2;	// IMP=0x000000000002a836
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;	// IMP=0x000000000002a759
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;	// IMP=0x000000000002a67c
- (struct CGPoint)iconListView:(id)arg1 centerForIconCoordinate:(struct SBIconCoordinate)arg2 metrics:(id)arg3 proposedCenter:(struct CGPoint)arg4;	// IMP=0x000000000002a5e0
- (struct CGPoint)iconListView:(id)arg1 originForIconCoordinate:(struct SBIconCoordinate)arg2 metrics:(id)arg3 proposedOrigin:(struct CGPoint)arg4;	// IMP=0x000000000002a544
- (double)_iconZoomDelay;	// IMP=0x000000000002a53b
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000000002a0a3
- (unsigned long long)_numberOfSignificantAnimations;	// IMP=0x000000000002a012
- (void)_cleanupAnimationIncludingDock:(_Bool)arg1;	// IMP=0x0000000000029bd3
- (void)_cleanupAnimation;	// IMP=0x0000000000029b90
- (double)_zPositionForView:(id)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;	// IMP=0x0000000000029b87
- (void)_updateDockForFraction:(double)arg1;	// IMP=0x0000000000029b38
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint)arg2;	// IMP=0x000000000002956e
- (void)_setAnimationFraction:(double)arg1;	// IMP=0x0000000000029544
- (void)setFraction:(double)arg1 withCenter:(struct CGPoint)arg2;	// IMP=0x0000000000029532
- (void)_prepareAnimation;	// IMP=0x00000000000289a6
@property(readonly, nonatomic) SBFolderController *folderController;
- (id)initWithFolderController:(id)arg1;	// IMP=0x0000000000028951

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBHCenterZoomSettings *settings; // @dynamic settings;
@property(readonly) Class superclass;

@end

