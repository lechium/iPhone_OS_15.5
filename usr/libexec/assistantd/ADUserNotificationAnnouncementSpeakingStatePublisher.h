//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADUserNotificationAnnouncementSpeakingStatePublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_currentlyAnnouncingNotificationIdentifiers;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

+ (id)_notificationIdentifiersForObject:(id)arg1;	// IMP=0x0020000000095fd6
+ (_Bool)supportsPublishingArrivalForAceObject:(id)arg1;	// IMP=0x0010000000095226
+ (id)sharedPublisher;	// IMP=0x0010000000094f6c
- (void).cxx_destruct;	// IMP=0x002000000009621d
- (void)_invalidateConnection;	// IMP=0x0010000000095f91
- (void)connectionInvalidated;	// IMP=0x0010000000095eb5
- (void)connectionInterrupted;	// IMP=0x0010000000095dd9
- (id)connectionProxy;	// IMP=0x0010000000095d73
- (void)beginObserving;	// IMP=0x0010000000095cee
- (void)_publishFinishedAndRemoveAllObjectsForReason:(id)arg1;	// IMP=0x0010000000095bf9
- (void)_publishCancelAndRemoveAllObjectsForReason:(id)arg1;	// IMP=0x0010000000095b04
- (_Bool)_publishStateChanged:(long long)arg1 forIdentifiers:(id)arg2;	// IMP=0x0010000000095959
- (void)_publishObjectHasArrived:(id)arg1;	// IMP=0x00100000000957a6
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000009540c
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000953a4
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000009533c
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000952d4
- (void)publishObjectHasArrived:(id)arg1;	// IMP=0x001000000009517e
- (void)dealloc;	// IMP=0x0010000000095124
- (id)_initWithQueue:(id)arg1;	// IMP=0x0010000000095020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

