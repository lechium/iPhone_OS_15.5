//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, NSString, PLChangeHandlingNotificationObserver;
@protocol PLCloudPersistentHistoryChangeTrackerDelegate;

@interface PLCloudPersistentHistoryChangeTracker : NSObject
{
    NSPersistentHistoryToken *_lastKnownToken;	// 8 = 0x8
    NSPersistentStoreCoordinator *_coordinator;	// 16 = 0x10
    PLChangeHandlingNotificationObserver *_notificationObserver;	// 24 = 0x18
    id <PLCloudPersistentHistoryChangeTrackerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000404b49
@property(nonatomic) __weak id <PLCloudPersistentHistoryChangeTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateLastKnownTokensToToken:(id)arg1;	// IMP=0x0000000000404af5
- (void)updateLastKnownTokenToResult:(id)arg1;	// IMP=0x000000000040487f
- (void)forceTokenToCurrent;	// IMP=0x00000000004047a1
- (id)currentToken;	// IMP=0x0000000000404789
- (id)fetchAllEventsInContext:(id)arg1;	// IMP=0x00000000004046a3
- (id)_eventsResultFromPersistentHistoryToken:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000004045c6
- (void)_unregisterForChangeHandlingNotifications;	// IMP=0x00000000004045b0
- (void)_registerForChangeHandlingNotifications;	// IMP=0x00000000004044f6
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)arg1;	// IMP=0x000000000040449c
- (_Bool)isConnected;	// IMP=0x0000000000404494
- (void)disconnect;	// IMP=0x0000000000404466
- (void)saveLastKnownChangeTrackerTokenToDisk;	// IMP=0x0000000000404361
- (id)lastKnownTokenFromDisk;	// IMP=0x000000000040425d
- (_Bool)connect;	// IMP=0x00000000004040c3
- (void)clearToken;	// IMP=0x0000000000404039
@property(readonly, copy) NSString *lastKnownTokenDescription;
@property(readonly) _Bool hasChangeTrackerToken;
@property(readonly, copy) NSString *name;
- (id)initWithPersistentStoreCoordinator:(id)arg1;	// IMP=0x0000000000403ded

@end
