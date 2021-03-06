//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MFPlaybackStackControllerDelegate-Protocol.h>
#import <MediaPlaybackCore/MPAVQueueControllerDelegate-Protocol.h>
#import <MediaPlaybackCore/MPCAssetLoaderDelegate-Protocol.h>
#import <MediaPlaybackCore/MPCPlaybackEngineImplementation-Protocol.h>

@class AVPlayerViewController, MPAVItem, MPCAVItemTrace, MPCErrorControllerImplementation, MPCExternalPlaybackControllerImplementation, MPCItemBookmarker, MPCLeaseController, MPCMediaFoundationTranslator, MPCPlayPerfAnalytics, MPCPlaybackEngine, MPCPlayerItemConfigurator, NSDictionary, NSString, _MPCAudioSessionController;
@protocol MFAssetLoading, MFPlaybackStackController><MFQueueManagement, MPAVQueueController;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineMediaFoundationImplementation : NSObject <MFPlaybackStackControllerDelegate, MPAVQueueControllerDelegate, MPCAssetLoaderDelegate, MPCPlaybackEngineImplementation>
{
    _Bool _autoPlayWhenLikelyToKeepUp;	// 8 = 0x8
    _Bool _reloadingPlaybackContext;	// 9 = 0x9
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    id <MPAVQueueController> _queueController;	// 24 = 0x18
    long long _actionAtQueueEnd;	// 32 = 0x20
    id <MFPlaybackStackController><MFQueueManagement> _playbackStackController;	// 40 = 0x28
    MPCItemBookmarker *_bookmarker;	// 48 = 0x30
    MPCMediaFoundationTranslator *_translator;	// 56 = 0x38
    MPCErrorControllerImplementation *_errorController;	// 64 = 0x40
    MPCExternalPlaybackControllerImplementation *_externalPlaybackController;	// 72 = 0x48
    id <MFAssetLoading> _assetLoader;	// 80 = 0x50
    MPCLeaseController *_leaseController;	// 88 = 0x58
    MPCPlayerItemConfigurator *_configurator;	// 96 = 0x60
    unsigned long long _stateHandle;	// 104 = 0x68
    MPCAVItemTrace *_playbackStartTrace;	// 112 = 0x70
    MPCPlayPerfAnalytics *_playPerfAnalytics;	// 120 = 0x78
    _MPCAudioSessionController *_transientAudioSessionController;	// 128 = 0x80
}

+ (id)describePlayer:(id)arg1;	// IMP=0x0000000000056bb6
- (void).cxx_destruct;	// IMP=0x000000000001513c
@property(retain, nonatomic) _MPCAudioSessionController *transientAudioSessionController; // @synthesize transientAudioSessionController=_transientAudioSessionController;
@property(retain, nonatomic) MPCPlayPerfAnalytics *playPerfAnalytics; // @synthesize playPerfAnalytics=_playPerfAnalytics;
@property(retain, nonatomic) MPCAVItemTrace *playbackStartTrace; // @synthesize playbackStartTrace=_playbackStartTrace;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) MPCPlayerItemConfigurator *configurator; // @synthesize configurator=_configurator;
@property(retain, nonatomic) MPCLeaseController *leaseController; // @synthesize leaseController=_leaseController;
@property(retain, nonatomic) id <MFAssetLoading> assetLoader; // @synthesize assetLoader=_assetLoader;
@property(retain, nonatomic) MPCExternalPlaybackControllerImplementation *externalPlaybackController; // @synthesize externalPlaybackController=_externalPlaybackController;
@property(retain, nonatomic) MPCErrorControllerImplementation *errorController; // @synthesize errorController=_errorController;
@property(retain, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) MPCItemBookmarker *bookmarker; // @synthesize bookmarker=_bookmarker;
@property(retain, nonatomic) id <MFPlaybackStackController><MFQueueManagement> playbackStackController; // @synthesize playbackStackController=_playbackStackController;
@property(readonly, nonatomic, getter=isReloadingPlaybackContext) _Bool reloadingPlaybackContext; // @synthesize reloadingPlaybackContext=_reloadingPlaybackContext;
@property(nonatomic) long long actionAtQueueEnd; // @synthesize actionAtQueueEnd=_actionAtQueueEnd;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp; // @synthesize autoPlayWhenLikelyToKeepUp=_autoPlayWhenLikelyToKeepUp;
@property(retain, nonatomic) id <MPAVQueueController> queueController; // @synthesize queueController=_queueController;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)assetLoadingDidStartForItem:(id)arg1;	// IMP=0x0000000000014cd3
- (void)assetLoadingDidCompleteForItem:(id)arg1 error:(id)arg2;	// IMP=0x00000000000141a6
- (void)errorResolutionDidEndForItem:(id)arg1 error:(id)arg2 resolution:(long long)arg3;	// IMP=0x000000000001403a
- (void)errorResolutionDidStartForItem:(id)arg1 error:(id)arg2;	// IMP=0x0000000000013f0d
- (void)didReportSignpostWithType:(long long)arg1;	// IMP=0x0000000000013e7e
- (void)relativeVolumeDidChangeTo:(float)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000013ccf
- (void)firstVideoFrameWasRenderedForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000013745
- (void)playbackIsBlockedOnNonPlayableItem:(id)arg1;	// IMP=0x00000000000135e0
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1;	// IMP=0x0000000000013255
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg1 timeAtDeath:(double)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000012c34
- (void)userActionDidEnd:(id)arg1 error:(id)arg2;	// IMP=0x0000000000012994
- (void)userActionDidBegin:(id)arg1;	// IMP=0x000000000001251f
- (void)didReachEndOfQueueWithReason:(id)arg1;	// IMP=0x00000000000122b4
- (void)screenRecordingDidChange:(_Bool)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000120a8
- (void)tracksDidChangeForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000011eba
- (void)playbackIsLikelyToKeepUp:(_Bool)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000115f8
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000010d8f
- (void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(_Bool)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000010aba
- (void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000001084c
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000010314
- (void)routeDidChange:(_Bool)arg1 metadata:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000fe2f
- (void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000fbda
- (void)timeControlStatusDidChange:(long long)arg1 waitingReason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000f8b8
- (void)firstFrameWillRenderForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000000f251
- (void)playbackRateDidChangeNotifiedForItem:(id)arg1 newRate:(float)arg2 reason:(id)arg3 participantIdentifier:(id)arg4 timeStamp:(id)arg5;	// IMP=0x000000000000eb63
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000e8fb
- (void)playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000e5fb
- (void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 fromStalling:(_Bool)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000de1e
- (void)_logPlayerEventsForQueueItem:(id)arg1;	// IMP=0x000000000000da3b
- (void)_updateActiveFormatForQueueItem:(id)arg1;	// IMP=0x000000000000d673
- (void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000000d1b6
- (void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000000cf29
- (void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000c944
- (void)itemDidFailToLoad:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000c6dd
- (void)userSeekCompletedForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000c39a
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000bb5c
- (void)playbackDidReachQueueEndWithTimeStamp:(id)arg1;	// IMP=0x000000000000b9cf
- (void)itemDidResignCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000b5eb
- (void)itemDidBecomeCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000aff1
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 source:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000aa95
- (void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;	// IMP=0x000000000000aa58
- (void)queueController:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;	// IMP=0x000000000000a9e6
- (void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x000000000000a974
- (void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x000000000000a902
- (void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;	// IMP=0x000000000000a8fc
- (void)queueController:(id)arg1 failedToLoadItem:(id)arg2;	// IMP=0x000000000000a71f
- (void)queueControllerDidChangeContents:(id)arg1;	// IMP=0x000000000000a5aa
- (void)_performSkipForUserAction:(id)arg1;	// IMP=0x000000000000a357
- (_Bool)_isAVKitSkipAction:(id)arg1;	// IMP=0x000000000000a2cc
- (void)_playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 time:(double)arg4;	// IMP=0x0000000000009efc
- (id)_MPAVItemForMFQueuePlayerItem:(id)arg1;	// IMP=0x0000000000009de2
- (void)_logTimeJumpForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 userInitiated:(_Bool)arg4 timeStamp:(id)arg5;	// IMP=0x0000000000009932
@property(readonly, nonatomic) NSDictionary *_stateDictionary;
- (void)_setupPlaybackStackWithPlaybackEngine:(id)arg1 queueController:(id)arg2;	// IMP=0x0000000000008f62
- (void)_resetPlaybackStack;	// IMP=0x0000000000008eec
- (void)setRelativeVolume:(float)arg1;	// IMP=0x0000000000008e9d
- (void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008cd6
- (void)setRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008aab
- (void)endScanningWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000088fb
- (void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008731
- (void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000840b
- (_Bool)skipWithDirectionShouldJumpToItemStart:(long long)arg1;	// IMP=0x00000000000083b8
- (void)togglePlaybackWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007fdd
- (void)pauseForLeasePreventionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007e2d
- (void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007c73
- (void)pauseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007ac3
- (void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000078da
- (void)endPlaybackWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000764e
- (void)endPlayback;	// IMP=0x00000000000075a2
@property(readonly, nonatomic) _Bool hasPlayedSuccessfully;
@property(readonly, nonatomic) AVPlayerViewController *playerViewController;
@property(readonly, nonatomic) long long stateBeforeInterruption;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) float currentRate;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) MPAVItem *currentItem;
- (void)updateAudioSession;	// IMP=0x00000000000071db
- (void)endUsingVideoLayer;	// IMP=0x00000000000071d5
- (void)beginUsingVideoLayer;	// IMP=0x00000000000071cf
- (void)playWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000071bd
- (void)pauseWithFadeout:(float)arg1;	// IMP=0x0000000000007043
- (void)pause;	// IMP=0x000000000000702e
- (_Bool)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3 force:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000006c56
- (void)becomeActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006b09
- (void)setQueueWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000064ae
- (void)loadSessionWithQueueController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006344
- (void)replaceCurrentItemWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005fd8
- (void)reloadWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000059a5
- (void)dealloc;	// IMP=0x000000000000596b
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000005882

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

