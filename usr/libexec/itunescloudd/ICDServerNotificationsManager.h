//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICDServerNotificationsManagerDelegate, OS_dispatch_queue;

@interface ICDServerNotificationsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcStreamHandlerQueue;	// 8 = 0x8
    id <ICDServerNotificationsManagerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000298a9
@property(readonly, nonatomic) __weak id <ICDServerNotificationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMusicSettingsChangedNotification;	// IMP=0x00100000000297ec
- (void)_handleFamilyContentDeletionNotification:(id)arg1 streamEvent:(id)arg2;	// IMP=0x00100000000295b1
- (void)_handleApplicationRegistration:(_Bool)arg1 notificationName:(id)arg2 streamEvent:(id)arg3;	// IMP=0x00100000000292ee
- (void)_handleCloudAuthenticationDidChangeNotification;	// IMP=0x0010000000029247
- (void)_handleLibraryAuthServiceTokenDidChangeNotification:(id)arg1;	// IMP=0x001000000002918a
- (void)_handleAllowsMusicVideosChangedNotification:(id)arg1;	// IMP=0x0010000000029115
- (void)_handleAllowsExplicitContentChangedNotification:(id)arg1;	// IMP=0x00100000000290a0
- (void)_handleActiveUserIdentityDidChangeNotification:(id)arg1;	// IMP=0x0010000000028fe3
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x0010000000028f26
- (void)_handleFirstUnlockNotification:(id)arg1;	// IMP=0x0010000000028e7f
- (void)_didReceiveTelephonyCenterNotification:(id)arg1;	// IMP=0x0010000000028cef
- (void)_didReceiveDarwinNotification:(id)arg1;	// IMP=0x0010000000028b2e
- (void)_didReceiveDistributedNotification:(id)arg1 withStreamEvent:(id)arg2;	// IMP=0x00100000000289db
- (void)_tearDownNotifications;	// IMP=0x0010000000028978
- (void)_setupNotifications;	// IMP=0x001000000002865d
- (void)dealloc;	// IMP=0x001000000002861f
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000028563

@end
