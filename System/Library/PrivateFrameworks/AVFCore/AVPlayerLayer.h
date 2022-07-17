//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <AVFCore/AVKeyPathDependencyHost-Protocol.h>
#import <AVFCore/AVWeakObservable-Protocol.h>

@class AVPlayer, AVPlayerLayerInternal, NSDictionary, NSString;

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable>
{
    AVPlayerLayerInternal *_playerLayer;	// 8 = 0x8
}

+ (void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2;	// IMP=0x000000000000e393
+ (id)keyPathsForValuesAffectingVideoRect;	// IMP=0x000000000000dd8d
+ (id)makeClosedCaptionLayer;	// IMP=0x0000000000008437
+ (id)playerLayerWithPlayer:(id)arg1;	// IMP=0x00000000000083fb
- (_Bool)_isPartOfForegroundScene;	// IMP=0x000000000001094e
- (void)_setIsPartOfForegroundScene:(_Bool)arg1;	// IMP=0x00000000000108be
- (void)_notifyPlayerOfLayerForegroundStateChange;	// IMP=0x00000000000107f8
- (void)_updateIsPartOfForegroundScene;	// IMP=0x00000000000107c7
- (void)_forceWindowSceneEvent:(_Bool)arg1;	// IMP=0x00000000000107a5
- (void)_windowSceneWillEnterForeground:(id)arg1;	// IMP=0x000000000001070e
- (void)_windowSceneWillEnterForeground;	// IMP=0x00000000000106e2
- (void)_windowSceneDidEnterBackground:(id)arg1;	// IMP=0x000000000001064b
- (void)_windowSceneDidEnterBackground;	// IMP=0x0000000000010624
- (_Bool)_currentWindowSceneIsForeground;	// IMP=0x0000000000010580
- (_Bool)_currentWindowSceneIsForegroundDefault;	// IMP=0x000000000001054a
- (void)removeFromSuperlayer;	// IMP=0x000000000001051b
- (void)replaceSublayer:(id)arg1 with:(id)arg2;	// IMP=0x00000000000104c5
- (void)insertSublayer:(id)arg1 above:(id)arg2;	// IMP=0x000000000001046f
- (void)insertSublayer:(id)arg1 below:(id)arg2;	// IMP=0x0000000000010419
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x00000000000103c3
- (void)addSublayer:(id)arg1;	// IMP=0x0000000000010341
- (void)setSublayers:(id)arg1;	// IMP=0x00000000000102f5
- (void)setPlaceholderContentLayerDuringPIPMode:(id)arg1;	// IMP=0x00000000000101ee
- (id)placeholderContentLayerDuringPIPMode;	// IMP=0x00000000000101d6
- (void)_setPreventsChangesToSublayerHierarchy:(_Bool)arg1;	// IMP=0x0000000000010168
- (_Bool)_preventsChangesToSublayerHierarchy;	// IMP=0x0000000000010151
- (void)_setWillManageSublayersAsSwappedLayers:(_Bool)arg1;	// IMP=0x000000000001008e
- (_Bool)_willManageSublayersAsSwappedLayers;	// IMP=0x000000000000ffcf
- (void)_setSublayersForPIP:(id)arg1;	// IMP=0x000000000000fbab
- (void)_setSublayersPreventChangesToSublayerHierarchy:(_Bool)arg1;	// IMP=0x000000000000faf5
- (void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2;	// IMP=0x000000000000f824
- (void)_mergeClientLayersIntoMaskLayer:(id)arg1;	// IMP=0x000000000000f7c4
- (id)_sublayersForPIP;	// IMP=0x000000000000f68e
- (void)_forceLayout;	// IMP=0x000000000000f677
- (void)setPIPModeEnabled:(_Bool)arg1;	// IMP=0x000000000000f5d3
- (_Bool)isPIPModeEnabled;	// IMP=0x000000000000f5bc
- (void)_leavePIPModeForLayer:(id)arg1;	// IMP=0x000000000000f499
- (void)leavePIPMode;	// IMP=0x000000000000f468
- (void)_enterPIPModeRedirectingVideoToLayer:(id)arg1;	// IMP=0x000000000000f29d
- (void)enterPIPModeRedirectingVideoToLayer:(id)arg1;	// IMP=0x000000000000f18d
- (void)_leaveSecondScreenModeForLayer:(id)arg1;	// IMP=0x000000000000f0a6
- (void)_enterSecondScreenModeRedirectingVideoToLayer:(id)arg1;	// IMP=0x000000000000efc6
- (void)stopRedirectingVideoToLayer:(id)arg1;	// IMP=0x000000000000ef78
- (void)startRedirectingVideoToLayer:(id)arg1 forMode:(long long)arg2;	// IMP=0x000000000000ee0f
- (void)_disassociateWithLayerForMode:(long long)arg1;	// IMP=0x000000000000eb5f
- (long long)_activeMode;	// IMP=0x000000000000ea9a
- (id)_associatedRemoteModeLayer;	// IMP=0x000000000000e997
- (void)_associateWithLayer:(id)arg1 forMode:(long long)arg2;	// IMP=0x000000000000e782
- (void)_unstashClientLayers;	// IMP=0x000000000000e717
- (void)_stashClientLayers;	// IMP=0x000000000000e41e
- (void)_configurePlayerWhenLeavingPIP;	// IMP=0x000000000000e308
- (void)_configurePlayerWhenEnteringPIP;	// IMP=0x000000000000e272
- (void)setToneMapToStandardDynamicRange:(_Bool)arg1;	// IMP=0x000000000000e20f
- (void)setForScrubbingOnly:(_Bool)arg1;	// IMP=0x000000000000e1d4
- (_Bool)isForScrubbingOnly;	// IMP=0x000000000000e1bd
- (void)setLegibleDisplayEnabled:(_Bool)arg1;	// IMP=0x000000000000e0c7
- (_Bool)isLegibleDisplayEnabled;	// IMP=0x000000000000e0b0
- (struct NSEdgeInsets)legibleContentInsets;	// IMP=0x000000000000e087
- (void)setLegibleContentInsets:(struct NSEdgeInsets)arg1;	// IMP=0x000000000000dee6
- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000000dec8
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)setLanczosFilterDownscaleFactor:(long long)arg1;	// IMP=0x000000000000dd0c
- (long long)lanczosFilterDownscaleFactor;	// IMP=0x000000000000dc50
- (void)setLanczosFilterDownscalingEnabled:(_Bool)arg1;	// IMP=0x000000000000dbdc
- (_Bool)isLanczosFilterDownscalingEnabled;	// IMP=0x000000000000db20
- (_Bool)_isConnectedToSecondScreen;	// IMP=0x000000000000db09
- (void)_setIsConnectedToSecondScreen:(_Bool)arg1;	// IMP=0x000000000000da79
- (id)videoPerformanceMetrics;	// IMP=0x000000000000da29
- (void)setOverscanSubtitleSupportEnabled:(_Bool)arg1;	// IMP=0x000000000000d9fa
- (_Bool)isOverscanSubtitleSupportEnabled;	// IMP=0x000000000000d923
- (void)_setShowInterstitialInstead:(_Bool)arg1;	// IMP=0x000000000000d72e
- (_Bool)_showInterstitialInstead;	// IMP=0x000000000000d663
- (id)_interstitialLayer;	// IMP=0x000000000000d42f
- (id)_subtitleLayer;	// IMP=0x000000000000d3f8
- (id)_closedCaptionLayer;	// IMP=0x000000000000d3c1
- (id)_videoLayer;	// IMP=0x000000000000d389
- (id)_maskLayer;	// IMP=0x000000000000d351
- (void)_getMaskLayer:(id *)arg1 videoLayer:(id *)arg2 subtitleLayer:(id *)arg3 closedCaptionLayer:(id *)arg4 interstitialLayer:(id *)arg5;	// IMP=0x000000000000ced4
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(copy) NSString *videoGravity;
- (void)_updateReadyForDisplayForPlayerCurrentItem;	// IMP=0x000000000000c598
- (void)hasEnqueuedVideoFrameChanged:(id)arg1;	// IMP=0x000000000000c524
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000000c3c7
- (void)_setPlayer:(id)arg1 forPIP:(_Bool)arg2;	// IMP=0x000000000000bfa2
@property(retain, nonatomic) AVPlayer *player;
- (id)playerPublisher;	// IMP=0x000000000000bf64
- (void)_handleIsDisplayingClosedCaptionsDidChange:(_Bool)arg1 player:(id)arg2;	// IMP=0x000000000000bd14
- (void)_handlePlayerCurrentItemDidChangeForPlayer:(id)arg1;	// IMP=0x000000000000bc5e
- (void)_handleNonForcedSubtitleDisplayDidChange:(_Bool)arg1 player:(id)arg2;	// IMP=0x000000000000bba5
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000bad1
- (void)_stopObservingPlayer:(id)arg1;	// IMP=0x000000000000b98c
- (void)_startObservingPlayer:(id)arg1;	// IMP=0x000000000000b304
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(_Bool)arg1;	// IMP=0x000000000000b111
- (struct CGSize)_playerCurrentItemPresentationSize;	// IMP=0x000000000000b0e6
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;	// IMP=0x000000000000b0aa
- (void)_notifyPlayerOfDisplaySize;	// IMP=0x000000000000b07f
- (struct CGSize)_displaySize;	// IMP=0x000000000000af09
- (void)dealloc;	// IMP=0x000000000000ac48
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;	// IMP=0x000000000000ac27
- (void)removeAllAnimations;	// IMP=0x000000000000ab4c
- (void)removeAnimationForKey:(id)arg1;	// IMP=0x000000000000a69f
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000a435
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a232
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4;	// IMP=0x000000000000a0ce
- (void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000009f1a
- (void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009e79
- (void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009dac
- (void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(struct CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(struct CGSize)arg5 forKey:(id)arg6;	// IMP=0x00000000000099de
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000000989f
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000009577
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000009524
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000009466
- (void)layoutSublayers;	// IMP=0x0000000000008cd7
- (id)initWithLayer:(id)arg1;	// IMP=0x0000000000008b7f
- (id)init;	// IMP=0x0000000000008450

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
