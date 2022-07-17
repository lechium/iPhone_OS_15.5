//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoMetadata-Protocol.h>

@class NSArray, NSError, NSHashTable, NSString, SVAVPlayer, SVKeyValueObserver, SVTimeline;
@protocol SVAVPlayerFactory, SVVideoPlaybackHost, SVVideoProviding;

@interface SVPlaybackCoordinator : NSObject <SVVideoMetadata>
{
    _Bool _playbackLikelyToKeepUp;	// 8 = 0x8
    _Bool _playbackBufferFull;	// 9 = 0x9
    _Bool _muted;	// 10 = 0xa
    _Bool _playbackRequested;	// 11 = 0xb
    _Bool _initiatedPlayback;	// 12 = 0xc
    id <SVVideoProviding> _video;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    NSObject<SVVideoPlaybackHost> *_host;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    SVAVPlayer *_player;	// 56 = 0x38
    CDUnknownBlockType _cancelHandler;	// 64 = 0x40
    SVKeyValueObserver *_playerItemPresentationSizeObserver;	// 72 = 0x48
    SVKeyValueObserver *_readyForDisplayObserver;	// 80 = 0x50
    id <SVAVPlayerFactory> _playerFactory;	// 88 = 0x58
    SVKeyValueObserver *_muteStateObserver;	// 96 = 0x60
    SVKeyValueObserver *_playbackLikelyToKeepUpObserver;	// 104 = 0x68
    SVKeyValueObserver *_playbackBufferFullObserver;	// 112 = 0x70
    SVTimeline *_timeline;	// 120 = 0x78
    double _pausedAtTime;	// 128 = 0x80
    struct CGSize _dimensions;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000007734
@property(nonatomic) double pausedAtTime; // @synthesize pausedAtTime=_pausedAtTime;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) SVKeyValueObserver *playbackBufferFullObserver; // @synthesize playbackBufferFullObserver=_playbackBufferFullObserver;
@property(retain, nonatomic) SVKeyValueObserver *playbackLikelyToKeepUpObserver; // @synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver;
@property(retain, nonatomic) SVKeyValueObserver *muteStateObserver; // @synthesize muteStateObserver=_muteStateObserver;
@property(readonly, nonatomic) id <SVAVPlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(retain, nonatomic) SVKeyValueObserver *readyForDisplayObserver; // @synthesize readyForDisplayObserver=_readyForDisplayObserver;
@property(retain, nonatomic) SVKeyValueObserver *playerItemPresentationSizeObserver; // @synthesize playerItemPresentationSizeObserver=_playerItemPresentationSizeObserver;
@property(nonatomic) _Bool initiatedPlayback; // @synthesize initiatedPlayback=_initiatedPlayback;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) SVAVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool playbackRequested; // @synthesize playbackRequested=_playbackRequested;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak NSObject<SVVideoPlaybackHost> *host; // @synthesize host=_host;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <SVVideoProviding> video; // @synthesize video=_video;
@property(readonly, nonatomic) _Bool playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(readonly, nonatomic) _Bool playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
- (_Bool)supportsQuartileTracking;	// IMP=0x00000000000074d3
- (_Bool)supportImpressionTracking;	// IMP=0x0000000000007438
- (void)playbackResumedAtTime:(double)arg1;	// IMP=0x0000000000007387
- (void)playbackPausedAtTime:(double)arg1;	// IMP=0x0000000000007375
- (void)configureTimeline;	// IMP=0x0000000000006dce
- (void)removePlayerItemPresentationSizeObserver;	// IMP=0x0000000000006dba
- (void)addPlayerItemPresentationSizeObserver;	// IMP=0x0000000000006bea
- (void)muteStateChanged;	// IMP=0x0000000000006a72
- (void)addMuteStateObserver;	// IMP=0x00000000000068f0
- (void)playbackLikelyToKeepUpStateChanged;	// IMP=0x0000000000006778
- (void)addPlaybackLikelyToKeepUpObserver;	// IMP=0x00000000000065ad
- (void)playbackBufferFullStateChanged;	// IMP=0x0000000000006435
- (void)addPlaybackBuferObserver;	// IMP=0x000000000000626a
- (void)stateChanged;	// IMP=0x00000000000060f2
- (void)loadedTimeRangesChanged;	// IMP=0x0000000000005f42
- (void)timeElapsed:(double)arg1 duration:(double)arg2;	// IMP=0x0000000000005cfd
- (void)playbackFailedWithError:(id)arg1;	// IMP=0x0000000000005aca
- (void)playbackFinished;	// IMP=0x00000000000058d6
- (void)playbackResumed;	// IMP=0x00000000000056b7
- (void)playbackPaused;	// IMP=0x00000000000054a9
- (void)playbackStarted;	// IMP=0x0000000000005297
- (void)playbackReadyToStart;	// IMP=0x00000000000051ed
- (void)playbackInitiatedWithButtonTapped:(_Bool)arg1;	// IMP=0x0000000000005119
- (void)setupPlayerWithURL:(id)arg1;	// IMP=0x0000000000004c0a
- (void)loadVideoIfNeeded;	// IMP=0x00000000000049cf
- (void)load;	// IMP=0x00000000000049bd
@property(readonly, nonatomic) unsigned long long playbackState;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) double loadingProgress;
@property(readonly, nonatomic) double volume;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) double timePlayed;
@property(readonly, nonatomic) double time;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double framerate;
- (void)seekToTime:(double)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004203
- (void)removePlaybackObserver:(id)arg1;	// IMP=0x000000000000408f
- (void)addPlaybackObserver:(id)arg1;	// IMP=0x000000000000401d
- (void)pause;	// IMP=0x0000000000003fe0
- (void)playWithButtonTapped:(_Bool)arg1;	// IMP=0x0000000000003f86
- (id)initWithVideo:(id)arg1 playerFactory:(id)arg2;	// IMP=0x0000000000003ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
