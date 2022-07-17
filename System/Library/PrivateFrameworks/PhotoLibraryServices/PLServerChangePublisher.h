//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLChangePublisher-Protocol.h>

@class NSString;

@interface PLServerChangePublisher : NSObject <PLChangePublisher>
{
    _Atomic long long _postCount;	// 8 = 0x8
    _Atomic _Bool _hasPendingWatchNotification;	// 16 = 0x10
    _Atomic _Bool _suppressWatchNotification;	// 17 = 0x11
}

- (void)unpauseLaunchEventNotifications;	// IMP=0x00000000004be148
- (void)pauseLaunchEventNotifications;	// IMP=0x00000000004be051
- (void)_postWatchUpdateNotification;	// IMP=0x00000000004bdedf
- (void)_postWatchUpdateNotificationIfPending;	// IMP=0x00000000004bdeb6
- (void)_postWatchUpdateNotificationIfNotPaused;	// IMP=0x00000000004bde88
- (void)_postChangeHubNotification;	// IMP=0x00000000004bdcfe
- (void)distributeChangeEvent:(id)arg1 transaction:(id)arg2;	// IMP=0x00000000004bdb84
- (id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;	// IMP=0x00000000004bda31
- (void)dealloc;	// IMP=0x00000000004bd96c
- (id)init;	// IMP=0x00000000004bd8a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
