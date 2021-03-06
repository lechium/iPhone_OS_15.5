//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>
#import <AssistantServices/AFUserNotificationAnnouncementSpeakingStateServiceDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection;
@protocol AFUserNotificationAnnouncementSpeakingStateDelegate, OS_dispatch_queue;

@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFUserNotificationAnnouncementSpeakingStateServiceDelegate, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <AFUserNotificationAnnouncementSpeakingStateDelegate> _delegate;	// 16 = 0x10
    NSMutableSet *_observingNotifications;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f244b
- (void)_cleanUpConnection;	// IMP=0x00000000000f2406
- (void)cleanUpConnection;	// IMP=0x00000000000f23a5
- (void)connectionInterrupted;	// IMP=0x00000000000f22ac
- (void)connectionInvalidated;	// IMP=0x00000000000f21d0
- (void)_tearDown;	// IMP=0x00000000000f2124
- (void)_notifyObserverOfFailureForAllObservingNotifications;	// IMP=0x00000000000f2059
- (id)_currentConnection;	// IMP=0x00000000000f1fb9
- (id)_connection;	// IMP=0x00000000000f1d79
- (void)_speakingStateDidChange:(long long)arg1 forIdentifiers:(id)arg2;	// IMP=0x00000000000f1b6d
- (void)_removeObserverForNotificationRequestIdentifier:(id)arg1;	// IMP=0x00000000000f19c5
- (void)_startObservingNotificationWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000f1831
- (void)speakingStateDidChange:(long long)arg1 forIdentifiers:(id)arg2;	// IMP=0x00000000000f1779
- (void)invalidate;	// IMP=0x00000000000f1718
- (void)stopObservingNotificationWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000f165b
- (void)startObservingNotificationWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000f159e
- (void)dealloc;	// IMP=0x00000000000f1560
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000f149d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

