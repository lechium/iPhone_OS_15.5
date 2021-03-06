//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol AVPlaybackCoordinationMediumDelegate, AVPlaybackCoordinatorPlaybackControlDelegate, OS_dispatch_queue;

@interface AVDelegatingPlaybackCoordinator
{
    struct OpaqueFigTimelineCoordinator *_figTimelineCoordinator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_timelineControlQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_figTimelineCoordinatorConfigQueue;	// 32 = 0x20
    id <AVPlaybackCoordinatorPlaybackControlDelegate> _delegate;	// 40 = 0x28
    id _suspensionsChangedNotificationToken;	// 48 = 0x30
    id _participantsChangedNotificationToken;	// 56 = 0x38
    id _didIssueCommandToPlaybackObjectNotificationToken;	// 64 = 0x40
    NSMutableArray *_suspensionReasons;	// 72 = 0x48
    NSMutableArray *_otherParticipants;	// 80 = 0x50
    NSMutableDictionary *_controlStates;	// 88 = 0x58
    NSMutableDictionary *_participantStates;	// 96 = 0x60
    NSMutableDictionary *_participantLimitPerSuspensionReason;	// 104 = 0x68
    NSMutableArray *_suspensionReasonsThatTriggerWaiting;	// 112 = 0x70
    NSMutableArray *_waitingPoliciesArray;	// 120 = 0x78
    _Bool _pauseSnapsToMediaTimeOfOriginator;	// 128 = 0x80
    long long _latestRateCommandOrderIndex;	// 136 = 0x88
    long long _latestSeekCommandOrderIndex;	// 144 = 0x90
    NSString *_currentItemIdentifier;	// 152 = 0x98
    id <AVPlaybackCoordinationMediumDelegate> _coordinationMediumDelegate;	// 160 = 0xa0
    _Bool _isInExpanseMediaPlayback;	// 168 = 0xa8
    NSString *_mediumLoggingIdentifier;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000000fb415
- (_Bool)pauseSnapsToMediaTimeOfOriginator;	// IMP=0x00000000000fb34d
- (void)setPauseSnapsToMediaTimeOfOriginator:(_Bool)arg1;	// IMP=0x00000000000fb2cf
- (void)applyFigPauseSnapsToMediaTimeOfOriginator;	// IMP=0x00000000000fb20e
- (_Bool)_doesSuspensionReasonTriggerWaiting:(id)arg1;	// IMP=0x00000000000fb1dd
- (id)suspensionReasonsThatTriggerWaiting;	// IMP=0x00000000000fb0de
- (void)setSuspensionReasonsThatTriggerWaiting:(id)arg1;	// IMP=0x00000000000fabd5
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)arg1;	// IMP=0x00000000000faab5
- (void)setParticipantLimit:(long long)arg1 forWaitingOutSuspensionsWithReason:(id)arg2;	// IMP=0x00000000000fa88a
- (void)_setWaitingPolicies:(id)arg1;	// IMP=0x00000000000fa851
- (id)_currentWaitingPoliciesArray;	// IMP=0x00000000000fa752
- (id)_updateWaitingPoliciesArrayWithPolicies:(id)arg1;	// IMP=0x00000000000fa34d
- (id)_waitingPoliciesArray;	// IMP=0x00000000000fa24e
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg1 proposingNewTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000fa236
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg1;	// IMP=0x00000000000fa21e
- (id)beginSuspensionForReason:(id)arg1;	// IMP=0x00000000000fa1b1
- (id)suspensionReasons;	// IMP=0x00000000000fa0b2
- (void)_updateSuspensionReasons:(id)arg1;	// IMP=0x00000000000f9f59
- (void)handleRemovalOfParticipant:(id)arg1;	// IMP=0x00000000000f9e95
- (void)handleReplacementParticipantStateDictionaries:(id)arg1;	// IMP=0x00000000000f9d24
- (void)handleNewParticipantStateDictionary:(id)arg1;	// IMP=0x00000000000f9b9e
- (void)handleNewTransportControlStateDictionary:(id)arg1;	// IMP=0x00000000000f9a25
- (void)_replaceParticipantStates:(id)arg1;	// IMP=0x00000000000f9826
- (void)_removeAllParticipantStates;	// IMP=0x00000000000f97b3
- (void)_removeParticipantStateWithIdentifier:(id)arg1;	// IMP=0x00000000000f971c
- (id)_participantStateForIdentifier:(id)arg1;	// IMP=0x00000000000f9605
- (void)_updateParticipantStateDictionaryWithParticipantState:(id)arg1;	// IMP=0x00000000000f9555
- (id)participantStates;	// IMP=0x00000000000f9456
- (void)_removeAllTransportControlStates;	// IMP=0x00000000000f93e3
- (void)_removeUnusedTransportControlStates;	// IMP=0x00000000000f9154
- (id)_transportControlStateForItemIdentifier:(id)arg1;	// IMP=0x00000000000f903d
- (void)_updateTransportControlStateDictionaryWithTransportControlState:(id)arg1;	// IMP=0x00000000000f8c41
- (id)trackedTransportControlStateDictionaries;	// IMP=0x00000000000f8b42
- (id)mediumLoggingIdentifier;	// IMP=0x00000000000f8b1d
- (void)setMediumLoggingIdentifier:(id)arg1;	// IMP=0x00000000000f8af2
- (id)coordinationMediumDelegate;	// IMP=0x00000000000f8ae1
- (void)setCoordinationMediumDelegate:(id)arg1;	// IMP=0x00000000000f89d5
- (CDStruct_1b6d18a9)expectedItemTimeAtHostTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000f8986
- (id)participantForIdentifier:(id)arg1;	// IMP=0x00000000000f87d1
- (id)otherParticipants;	// IMP=0x00000000000f86d2
- (void)_updateOtherParticipantsUsingFigParticipantUUIDs:(id)arg1;	// IMP=0x00000000000f8554
- (id)avfParticipantsForFigParticipantsUUIDs:(id)arg1;	// IMP=0x00000000000f81f9
- (void)reapplyCurrentItemStateToPlaybackControlDelegate;	// IMP=0x00000000000f81e4
- (void)transitionToItemWithIdentifier:(id)arg1 proposingInitialTimingBasedOnTimebase:(struct OpaqueCMTimebase *)arg2;	// IMP=0x00000000000f8138
@property(readonly, nonatomic) NSString *currentItemIdentifier;
- (void)coordinateSeekToTime:(CDStruct_1b6d18a9)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000f7f60
- (void)coordinateRateChangeToRate:(float)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000f7ec2
- (long long)_latestSeekCommandOrderIndex;	// IMP=0x00000000000f7df8
- (long long)_latestRateCommandOrderIndex;	// IMP=0x00000000000f7d2e
- (id)figTimelineCoordinatorConfigQueue;	// IMP=0x00000000000f7d1d
@property(readonly, nonatomic) __weak id <AVPlaybackCoordinatorPlaybackControlDelegate> playbackControlDelegate;
- (void)dealloc;	// IMP=0x00000000000f7b37
- (id)initWithPlaybackControlDelegate:(id)arg1;	// IMP=0x00000000000f6928
- (void)_prepareToInitiatePlayback;	// IMP=0x00000000000f6922
- (void)_setIsInExpanseMediaPlaybackOnAVAudioSession;	// IMP=0x00000000000f6894

@end

