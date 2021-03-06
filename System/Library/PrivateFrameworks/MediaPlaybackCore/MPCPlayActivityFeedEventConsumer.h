//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventConsumer-Protocol.h>

@class ICPlayActivityController, NSArray, NSMutableArray, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>
{
    NSArray *_allowedBundleIds;	// 8 = 0x8
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 16 = 0x10
    NSMutableArray *_radioPlayActivityEvents;	// 24 = 0x18
    ICPlayActivityController *_playActivityController;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x00000000000deb4f
- (void).cxx_destruct;	// IMP=0x00000000000dcc45
@property(readonly, nonatomic) ICPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
@property(readonly, nonatomic) NSMutableArray *radioPlayActivityEvents; // @synthesize radioPlayActivityEvents=_radioPlayActivityEvents;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (_Bool)_finalizePAFEvents:(id)arg1;	// IMP=0x00000000000dcb8c
- (void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2;	// IMP=0x00000000000dcaec
- (void)_updatePAFEvent:(id)arg1 withSharedListeningInfoFromCursor:(id)arg2;	// IMP=0x00000000000dc8cf
- (void)_updatePAFEvent:(id)arg1 withAudioChangeEvent:(id)arg2;	// IMP=0x00000000000dc57e
- (void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2;	// IMP=0x00000000000dbab3
- (void)_updatePAFEvent:(id)arg1 withEnqueuerAccountIdentifier:(id)arg2 queueAddEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x00000000000db3f7
- (void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x00000000000db0dc
- (void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4 forEventType:(id)arg5;	// IMP=0x00000000000d9b98
- (void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4;	// IMP=0x00000000000d967f
- (double)_getPlaybackDurationForHLSStreamFromStartEvent:(id)arg1 toEndEvent:(id)arg2 withLimitedCursor:(id)arg3;	// IMP=0x00000000000d9367
- (double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x00000000000d83c6
- (id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3;	// IMP=0x00000000000d8284
- (id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1;	// IMP=0x00000000000d7570
- (_Bool)_itemIsPlaceholderFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x00000000000d7270
- (_Bool)_itemIsPlayingFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x00000000000d709c
- (_Bool)_handleApplicationTerminationEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000d6aeb
- (id)_generatePlaybackEndEventFromEvent:(id)arg1 withQueueSectionIdentifier:(id)arg2 itemIdentifier:(id)arg3 cursor:(id)arg4;	// IMP=0x00000000000d5890
- (_Bool)_handleItemEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000d54b9
- (_Bool)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000d41b6
- (_Bool)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000d2e3c
- (_Bool)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000d21f1
- (void)_updateAllowedBundleIdsIfNecessary:(id)arg1;	// IMP=0x00000000000d204c
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;	// IMP=0x00000000000d1fc7
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000000d1fad
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000000d1e19
- (id)init;	// IMP=0x00000000000d1c85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

