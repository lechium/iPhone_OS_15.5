//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventConsumer-Protocol.h>

@class NSString, RTCReporting;
@protocol MPCPlaybackEngineEventStreamSubscription, MPCRTCEventConsumerTestingDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>
{
    NSObject<OS_dispatch_group> *_rtcGroup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_rtcQueue;	// 16 = 0x10
    id <MPCRTCEventConsumerTestingDelegate> _testingDelegate;	// 24 = 0x18
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 32 = 0x20
    RTCReporting *_playbackSessionRTCSession;	// 40 = 0x28
    RTCReporting *_playbackQueueRTCSession;	// 48 = 0x30
    RTCReporting *_playbackItemRTCSession;	// 56 = 0x38
}

+ (id)identifier;	// IMP=0x00000000000a8304
+ (id)dateFormatter;	// IMP=0x00000000000a82d4
+ (id)NSStringFromMPCRTCReportingEventCategory:(long long)arg1;	// IMP=0x00000000000a8217
+ (id)rtcIdentifiersFromUniversalIdentifiers:(id)arg1;	// IMP=0x00000000000a8011
+ (id)rtcIdentifiersFromRadioIdentifiers:(id)arg1;	// IMP=0x00000000000a7f1b
+ (id)identifierStringFromItemIdentifiers:(id)arg1 radioIdentifiers:(id)arg2;	// IMP=0x00000000000a7ddc
- (void).cxx_destruct;	// IMP=0x00000000000a522b
@property(retain) RTCReporting *playbackItemRTCSession; // @synthesize playbackItemRTCSession=_playbackItemRTCSession;
@property(retain) RTCReporting *playbackQueueRTCSession; // @synthesize playbackQueueRTCSession=_playbackQueueRTCSession;
@property(retain) RTCReporting *playbackSessionRTCSession; // @synthesize playbackSessionRTCSession=_playbackSessionRTCSession;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(nonatomic) __weak id <MPCRTCEventConsumerTestingDelegate> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
- (void)_sendReportWithSession:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4;	// IMP=0x00000000000a508d
- (id)_rtcUserInfoWithServiceName:(id)arg1;	// IMP=0x00000000000a4f8e
- (id)_rtcSessionInfoWithToken:(id)arg1;	// IMP=0x00000000000a4dbd
- (void)_generateConfiguredReportingSessionWithToken:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4c2d
- (void)_updateAssetLoadInfoEvent:(id)arg1 fromAssetLoadEndEvent:(id)arg2 cursor:(id)arg3;	// IMP=0x00000000000a47cb
- (id)_perceivedItemStartTime:(id)arg1 fromItemStartEvent:(id)arg2;	// IMP=0x00000000000a4513
- (id)_payloadForItemSummary:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x00000000000a3edc
- (id)_payloadForItemSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000000a3d74
- (id)_payloadForItemAssetLoad:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x00000000000a2d4b
- (id)_payloadForQueueLoad:(id)arg1 fromQueueLoadEndEvent:(id)arg2;	// IMP=0x00000000000a2861
- (id)_payloadForSessionSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000000a2304
- (id)_payloadForSessionStart:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000000a16ea
- (void)_sendReportForItemSummaryWithEndReason:(id)arg1 cursor:(id)arg2 event:(id)arg3;	// IMP=0x00000000000a12fc
- (void)_sendReportForItemSummary:(id)arg1 event:(id)arg2;	// IMP=0x00000000000a12e2
- (void)_sendReportForItemAssetLoad:(id)arg1 event:(id)arg2;	// IMP=0x00000000000a0d1a
- (void)_sendQueueLoadEventIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x00000000000a0698
- (void)_sendReportForSessionStart:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x00000000000a00c1
- (void)_sendSessionStartIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x000000000009ffc1
- (void)_sendReportForSessionSummary:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x000000000009fee5
- (void)_handleReportingForItemStartEvent:(id)arg1 event:(id)arg2;	// IMP=0x000000000009fe4c
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x000000000009fe32
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x000000000009fb63
- (id)init;	// IMP=0x000000000009fa60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

