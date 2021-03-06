//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPRemoteCommandDelegate_Internal-Protocol.h>

@class MPAdvanceRepeatModeCommand, MPAdvanceShuffleModeCommand, MPChangePlaybackPositionCommand, MPChangePlaybackRateCommand, MPChangeQueueEndActionCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPFeedbackCommand, MPInsertIntoPlaybackQueueCommand, MPPreloadPlaybackSessionCommand, MPRatingCommand, MPRemoteCommand, MPReorderQueueCommand, MPSetPlaybackQueueCommand, MPSetPlaybackSessionCommand, MPSetPriorityForPlaybackSessionCommand, MPSkipIntervalCommand, MRPlayerPath, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal>
{
    NSMutableArray *_activeCommands;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    id _mediaRemoteCommandHandler;	// 24 = 0x18
    _Bool _scheduledSupportedCommandsChangedNotification;	// 32 = 0x20
    _Bool _commandHandlersRegistered;	// 33 = 0x21
    _Bool _canBeNowPlayingApplication;	// 34 = 0x22
    MRPlayerPath *_playerPath;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
    _Bool _processingEvent;	// 49 = 0x31
    NSMutableArray *_eventQueue;	// 56 = 0x38
    unsigned long long _stateHandler;	// 64 = 0x40
    _Bool _disableAutomaticCanBeNowPlaying;	// 72 = 0x48
    _Bool _wantsSerializedEventDelivery;	// 73 = 0x49
    MPRemoteCommand *_pauseCommand;	// 80 = 0x50
    MPRemoteCommand *_playCommand;	// 88 = 0x58
    MPRemoteCommand *_stopCommand;	// 96 = 0x60
    MPRemoteCommand *_togglePlayPauseCommand;	// 104 = 0x68
    MPRemoteCommand *_enableLanguageOptionCommand;	// 112 = 0x70
    MPRemoteCommand *_disableLanguageOptionCommand;	// 120 = 0x78
    MPRemoteCommand *_nextTrackCommand;	// 128 = 0x80
    MPRemoteCommand *_previousTrackCommand;	// 136 = 0x88
    MPSkipIntervalCommand *_skipForwardCommand;	// 144 = 0x90
    MPSkipIntervalCommand *_skipBackwardCommand;	// 152 = 0x98
    MPRemoteCommand *_seekForwardCommand;	// 160 = 0xa0
    MPRemoteCommand *_seekBackwardCommand;	// 168 = 0xa8
    MPRatingCommand *_ratingCommand;	// 176 = 0xb0
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;	// 184 = 0xb8
    MPFeedbackCommand *_likeCommand;	// 192 = 0xc0
    MPFeedbackCommand *_dislikeCommand;	// 200 = 0xc8
    MPFeedbackCommand *_bookmarkCommand;	// 208 = 0xd0
    MPChangePlaybackPositionCommand *_changePlaybackPositionCommand;	// 216 = 0xd8
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;	// 224 = 0xe0
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;	// 232 = 0xe8
    MPRemoteCommand *_specialSeekForwardCommand;	// 240 = 0xf0
    MPRemoteCommand *_specialSeekBackwardCommand;	// 248 = 0xf8
    MPAdvanceShuffleModeCommand *_advanceShuffleModeCommand;	// 256 = 0x100
    MPAdvanceRepeatModeCommand *_advanceRepeatModeCommand;	// 264 = 0x108
    MPRemoteCommand *_createRadioStationCommand;	// 272 = 0x110
    MPSetPlaybackQueueCommand *_setPlaybackQueueCommand;	// 280 = 0x118
    MPRemoteCommand *_prepareForSetPlaybackQueueCommand;	// 288 = 0x120
    MPInsertIntoPlaybackQueueCommand *_insertIntoPlaybackQueueCommand;	// 296 = 0x128
    MPRemoteCommand *_removeFromPlaybackQueueCommand;	// 304 = 0x130
    MPReorderQueueCommand *_reorderQueueCommand;	// 312 = 0x138
    MPRemoteCommand *_playItemInQueueCommand;	// 320 = 0x140
    MPFeedbackCommand *_addNowPlayingItemToLibraryCommand;	// 328 = 0x148
    MPFeedbackCommand *_addItemToLibraryCommand;	// 336 = 0x150
    MPSetPlaybackSessionCommand *_setPlaybackSessionCommand;	// 344 = 0x158
    MPPreloadPlaybackSessionCommand *_preloadPlaybackSessionCommand;	// 352 = 0x160
    MPSetPriorityForPlaybackSessionCommand *_setPriorityForPlaybackSessionCommand;	// 360 = 0x168
    MPRemoteCommand *_discardPlaybackSessionCommand;	// 368 = 0x170
    MPRemoteCommand *_reshuffleCommand;	// 376 = 0x178
    MPChangeQueueEndActionCommand *_changeQueueEndActionCommand;	// 384 = 0x180
    MPRemoteCommand *_leaveSharedPlaybackSessionCommand;	// 392 = 0x188
    MPRemoteCommand *_postEventNoticeCommand;	// 400 = 0x190
}

+ (void)getPendingCommandTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f2155
+ (long long)_numberOfCommandCentersWithTargets;	// IMP=0x00000000001f1f05
+ (id)commandCenterForPlayerPath:(id)arg1;	// IMP=0x00000000001f1e70
+ (id)commandCenterForPlayerID:(id)arg1;	// IMP=0x00000000001f1d3b
+ (id)sharedCommandCenter;	// IMP=0x00000000001f1d0b
+ (void)updateLaunchCommandsWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f1c27
- (void).cxx_destruct;	// IMP=0x00000000001f08dc
@property(nonatomic) _Bool wantsSerializedEventDelivery; // @synthesize wantsSerializedEventDelivery=_wantsSerializedEventDelivery;
@property(nonatomic) _Bool disableAutomaticCanBeNowPlaying; // @synthesize disableAutomaticCanBeNowPlaying=_disableAutomaticCanBeNowPlaying;
@property(readonly, copy, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (void)_stopMediaRemoteSync;	// IMP=0x00000000001f0812
- (void)_startMediaRemoteSync;	// IMP=0x00000000001f06ce
- (void)_scheduleSupportedCommandsChanged;	// IMP=0x00000000001f0665
- (id)_onQueue_stateDictionary;	// IMP=0x00000000001f0542
- (_Bool)containsCommand:(id)arg1;	// IMP=0x00000000001f0509
- (void)_updateCanBeNowPlayingApplicationIfNeeded;	// IMP=0x00000000001f0468
- (void)_commandTargetsDidChangeNotification:(id)arg1;	// IMP=0x00000000001f01cc
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;	// IMP=0x00000000001f0049
- (id)_activeCommands;	// IMP=0x00000000001eff90
- (_Bool)isInvalidated;	// IMP=0x00000000001efeee
@property(readonly, nonatomic) MPRemoteCommand *postEventNoticeCommand; // @synthesize postEventNoticeCommand=_postEventNoticeCommand;
@property(readonly, nonatomic) MPRemoteCommand *leaveSharedPlaybackSessionCommand; // @synthesize leaveSharedPlaybackSessionCommand=_leaveSharedPlaybackSessionCommand;
@property(readonly, nonatomic) MPChangeQueueEndActionCommand *changeQueueEndActionCommand; // @synthesize changeQueueEndActionCommand=_changeQueueEndActionCommand;
@property(readonly, nonatomic) MPRemoteCommand *reshuffleCommand; // @synthesize reshuffleCommand=_reshuffleCommand;
@property(readonly, nonatomic) MPRemoteCommand *discardPlaybackSessionCommand; // @synthesize discardPlaybackSessionCommand=_discardPlaybackSessionCommand;
@property(readonly, nonatomic) MPSetPriorityForPlaybackSessionCommand *setPriorityForPlaybackSessionCommand; // @synthesize setPriorityForPlaybackSessionCommand=_setPriorityForPlaybackSessionCommand;
@property(readonly, nonatomic) MPPreloadPlaybackSessionCommand *preloadPlaybackSessionCommand; // @synthesize preloadPlaybackSessionCommand=_preloadPlaybackSessionCommand;
@property(readonly, nonatomic) MPSetPlaybackSessionCommand *setPlaybackSessionCommand; // @synthesize setPlaybackSessionCommand=_setPlaybackSessionCommand;
@property(readonly, nonatomic) MPFeedbackCommand *addItemToLibraryCommand; // @synthesize addItemToLibraryCommand=_addItemToLibraryCommand;
@property(readonly, nonatomic) MPFeedbackCommand *addNowPlayingItemToLibraryCommand; // @synthesize addNowPlayingItemToLibraryCommand=_addNowPlayingItemToLibraryCommand;
@property(readonly, nonatomic) MPRemoteCommand *playItemInQueueCommand; // @synthesize playItemInQueueCommand=_playItemInQueueCommand;
@property(readonly, nonatomic) MPReorderQueueCommand *reorderQueueCommand; // @synthesize reorderQueueCommand=_reorderQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *removeFromPlaybackQueueCommand; // @synthesize removeFromPlaybackQueueCommand=_removeFromPlaybackQueueCommand;
@property(readonly, nonatomic) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand; // @synthesize insertIntoPlaybackQueueCommand=_insertIntoPlaybackQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *prepareForSetPlaybackQueueCommand; // @synthesize prepareForSetPlaybackQueueCommand=_prepareForSetPlaybackQueueCommand;
@property(readonly, nonatomic) MPSetPlaybackQueueCommand *setPlaybackQueueCommand; // @synthesize setPlaybackQueueCommand=_setPlaybackQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *createRadioStationCommand; // @synthesize createRadioStationCommand=_createRadioStationCommand;
@property(readonly, nonatomic) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand; // @synthesize advanceRepeatModeCommand=_advanceRepeatModeCommand;
@property(readonly, nonatomic) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand; // @synthesize advanceShuffleModeCommand=_advanceShuffleModeCommand;
@property(readonly, nonatomic) MPRemoteCommand *specialSeekBackwardCommand; // @synthesize specialSeekBackwardCommand=_specialSeekBackwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *specialSeekForwardCommand; // @synthesize specialSeekForwardCommand=_specialSeekForwardCommand;
@property(readonly, nonatomic) MPChangeShuffleModeCommand *changeShuffleModeCommand; // @synthesize changeShuffleModeCommand=_changeShuffleModeCommand;
@property(readonly, nonatomic) MPChangeRepeatModeCommand *changeRepeatModeCommand; // @synthesize changeRepeatModeCommand=_changeRepeatModeCommand;
@property(readonly, nonatomic) MPChangePlaybackPositionCommand *changePlaybackPositionCommand; // @synthesize changePlaybackPositionCommand=_changePlaybackPositionCommand;
@property(readonly, nonatomic) MPFeedbackCommand *bookmarkCommand; // @synthesize bookmarkCommand=_bookmarkCommand;
@property(readonly, nonatomic) MPFeedbackCommand *dislikeCommand; // @synthesize dislikeCommand=_dislikeCommand;
@property(readonly, nonatomic) MPFeedbackCommand *likeCommand; // @synthesize likeCommand=_likeCommand;
@property(readonly, nonatomic) MPChangePlaybackRateCommand *changePlaybackRateCommand; // @synthesize changePlaybackRateCommand=_changePlaybackRateCommand;
@property(readonly, nonatomic) MPRatingCommand *ratingCommand; // @synthesize ratingCommand=_ratingCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekBackwardCommand; // @synthesize seekBackwardCommand=_seekBackwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekForwardCommand; // @synthesize seekForwardCommand=_seekForwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipBackwardCommand; // @synthesize skipBackwardCommand=_skipBackwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipForwardCommand; // @synthesize skipForwardCommand=_skipForwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *previousTrackCommand; // @synthesize previousTrackCommand=_previousTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *nextTrackCommand; // @synthesize nextTrackCommand=_nextTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *disableLanguageOptionCommand; // @synthesize disableLanguageOptionCommand=_disableLanguageOptionCommand;
@property(readonly, nonatomic) MPRemoteCommand *enableLanguageOptionCommand; // @synthesize enableLanguageOptionCommand=_enableLanguageOptionCommand;
@property(readonly, nonatomic) MPRemoteCommand *togglePlayPauseCommand; // @synthesize togglePlayPauseCommand=_togglePlayPauseCommand;
@property(readonly, nonatomic) MPRemoteCommand *stopCommand; // @synthesize stopCommand=_stopCommand;
@property(readonly, nonatomic) MPRemoteCommand *playCommand; // @synthesize playCommand=_playCommand;
@property(readonly, nonatomic) MPRemoteCommand *pauseCommand; // @synthesize pauseCommand=_pauseCommand;
- (void)getPendingCommandTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001eedff
- (void)_flushEventQueue;	// IMP=0x00000000001eec11
- (void)dispatchCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ee8a9
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ee5f9
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;	// IMP=0x00000000001ee442
@property(readonly, nonatomic) _Bool canBeNowPlayingApplication;
@property(readonly, nonatomic) _Bool commandHandlersRegistered;
@property(readonly, copy, nonatomic) NSString *playerID;
- (void)invalidate;	// IMP=0x00000000001ee145
- (void)dealloc;	// IMP=0x00000000001ee0a4
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x00000000001eddf2
- (id)initWithPlayerID:(id)arg1;	// IMP=0x00000000001edcd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

