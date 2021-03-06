//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnnouncementRequest, ADCallObserver, ADExternalNotificationRequestQueue, ADRequestDelayManager, AFNotifyObserver, AFWatchdogTimer, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface ADExternalNotificationRequestHandler : NSObject
{
    AFWatchdogTimer *_currentNotificationTimer;	// 8 = 0x8
    AFWatchdogTimer *_stateTimer;	// 16 = 0x10
    AFWatchdogTimer *_triggerlessUserReplyTimer;	// 24 = 0x18
    _Bool _triggerlessUserReplyTimerTimedOut;	// 32 = 0x20
    _Bool _triggerlessRequestEnteredListeningState;	// 33 = 0x21
    long long _currentState;	// 40 = 0x28
    ADRequestDelayManager *_currentRequestDelayManager;	// 48 = 0x30
    AFNotifyObserver *_clientStateObserver;	// 56 = 0x38
    ADCallObserver *_callObserver;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    ADAnnouncementRequest *_previousRequest;	// 80 = 0x50
    ADAnnouncementRequest *_currentRequest;	// 88 = 0x58
    unsigned long long _synchronousBurstIndex;	// 96 = 0x60
    ADExternalNotificationRequestQueue *_requestQueue;	// 104 = 0x68
}

+ (id)sharedNotificationRequestHandler;	// IMP=0x002000000027de9c
- (void).cxx_destruct;	// IMP=0x0020000000284bf8
- (void)_voicePromptStyleDidChange:(id)arg1;	// IMP=0x0010000000284bf2
- (void)voicePromptStyleDidChange:(id)arg1;	// IMP=0x0010000000284bec
- (void)_adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x0010000000284939
- (void)adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x00100000002848ce
- (void)adCallStateChangedCallInProcess:(_Bool)arg1;	// IMP=0x00100000002848c8
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00100000002846fb
- (void)audioPlaybackService:(id)arg1 didStopRequest:(id)arg2 error:(id)arg3;	// IMP=0x00100000002846f5
- (void)audioPlaybackService:(id)arg1 didStartRequest:(id)arg2;	// IMP=0x0010000000284441
- (void)audioPlaybackService:(id)arg1 willStartRequest:(id)arg2;	// IMP=0x001000000028443b
- (void)requestDelayManager:(id)arg1 didStopUnexpectly:(_Bool)arg2;	// IMP=0x00100000002843e6
- (_Bool)requestDelayManager:(id)arg1 interruptedWithType:(long long)arg2;	// IMP=0x001000000028406e
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0010000000283681
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000028312e
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0010000000282a59
- (void)fetchUnreadNotificationsFromThreadAfterNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000282878
- (MISSING_TYPE *)_startTriggerlessFollowupRequestWithRequestDelayManager:delayType: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000282233
- (long long)announcePlatformForCurrentRequest;	// IMP=0x00100000002820ea
- (void)audioSessionDidEnd;	// IMP=0x0010000000281ed8
- (void)_withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000281bcb
- (void)withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000281af2
- (void)_deactivateForReason:(long long)arg1 source:(long long)arg2 event:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002819a0
- (void)_deactivateCarPlayNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000281571
- (void)_deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002814b0
- (void)deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000281379
- (void)_stopCurrentRequestWithReason:(long long)arg1 shouldCancelRequest:(_Bool)arg2;	// IMP=0x00100000002811f7
- (void)_clearCurrentNotificationTimer;	// IMP=0x00100000002811c5
- (void)_startTimerToResetStateFrom:(long long)arg1;	// IMP=0x00100000002810b8
- (void)_startRequestDelayManagerIfNeededForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000280cac
- (void)_startAnnouncementRequest:(id)arg1;	// IMP=0x0010000000280ac0
- (void)_startAnnouncementRequestWithRequestInfo:(id)arg1;	// IMP=0x001000000028075d
- (void)_handleNotification:(id)arg1 onPlatform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000028008d
- (void)_handleAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x001000000027fc8f
- (_Bool)_canAnnounceInCarPlay;	// IMP=0x001000000027fb5d
- (void)_handleAnnounceNotificationRequest:(id)arg1;	// IMP=0x001000000027e748
- (void)_handleAnnouncementRequest:(id)arg1;	// IMP=0x001000000027e6bf
- (void)handleAnnouncementRequest:(id)arg1;	// IMP=0x001000000027e615
- (void)_changeCurrentStateToState:(long long)arg1;	// IMP=0x001000000027e30d
- (void)_clearTriggerlessUserReplyTimer;	// IMP=0x001000000027e25a
- (void)_clearRequestState;	// IMP=0x001000000027e194
- (void)_completeNotificationsWithSuccess:(_Bool)arg1 forReason:(long long)arg2;	// IMP=0x001000000027e105
- (id)_queue;	// IMP=0x001000000027e0f7
- (void)_setCurrentRequest:(id)arg1;	// IMP=0x001000000027e0e6
- (id)_currentRequest;	// IMP=0x001000000027e0d8
- (long long)_currentState;	// IMP=0x001000000027e0ce
- (id)_requestQueue;	// IMP=0x001000000027e0c0
- (id)_sharedCommandCenter;	// IMP=0x001000000027e0a7
- (id)_init;	// IMP=0x001000000027df01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

