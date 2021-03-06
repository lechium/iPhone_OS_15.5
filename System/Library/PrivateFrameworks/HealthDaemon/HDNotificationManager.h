//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDProfile, NSDate, NSHashTable, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface HDNotificationManager : NSObject <HDDiagnosticObject>
{
    HDProfile *_profile;	// 8 = 0x8
    long long _bundle;	// 16 = 0x10
    UNUserNotificationCenter *_userNotificationCenter;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observerQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_resourceQueue;	// 56 = 0x38
    NSDate *_lastNotificationDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000386b21
- (id)diagnosticDescription;	// IMP=0x00000000003867f3
- (id)_resourceQueue_badgeForDomain:(long long)arg1 error:(out id *)arg2;	// IMP=0x00000000003865c1
- (id)_aggregateBadge;	// IMP=0x00000000003862a1
- (id)_badgeForDomain:(long long)arg1 error:(out id *)arg2;	// IMP=0x00000000003860ad
- (void)removeNotificationObserver:(id)arg1;	// IMP=0x0000000000385faa
- (void)addNotificationObserver:(id)arg1;	// IMP=0x0000000000385eed
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;	// IMP=0x0000000000385ed7
- (void)receivedCompanionUserNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000385aac
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003856f1
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 url:(id)arg6 accessoryImageName:(id)arg7 header:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000003856ba
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 accessoryImageName:(id)arg6 header:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000038538e
- (void)postNotificationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000384eaa
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000384e1b
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000384c53
- (_Bool)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(out id *)arg3;	// IMP=0x0000000000384380
- (void)badgeForDomain:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003841e4
- (void)dealloc;	// IMP=0x0000000000384058
- (id)initWithProfile:(id)arg1 bundle:(long long)arg2;	// IMP=0x0000000000383dc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

