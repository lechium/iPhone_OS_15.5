//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSString;
@protocol BBSyncServiceDelegate, OS_dispatch_queue;

@interface BBSyncService : NSObject <IDSServiceDelegate>
{
    IDSService *_service;	// 8 = 0x8
    NSMutableArray *_pendingDismissalDictionaries;	// 16 = 0x10
    NSMutableArray *_pendingDismissalIDs;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    unsigned long long _queuedFeed;	// 40 = 0x28
    NSString *_queuedSectionID;	// 48 = 0x30
    NSString *_queuedUniversalSectionID;	// 56 = 0x38
    id <BBSyncServiceDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000074101
@property(nonatomic) __weak id <BBSyncServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_dismissalDictionaryForBulletin:(id)arg1;	// IMP=0x0000000000073fc6
- (void)_sendSyncMessage:(id)arg1;	// IMP=0x0000000000073c4b
- (id)_syncLocalDevices;	// IMP=0x00000000000739b6
- (_Bool)_syncHasDefaultPairedDevice;	// IMP=0x0000000000073879
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;	// IMP=0x000000000007366c
- (_Bool)_hasDestination;	// IMP=0x0000000000073615
- (id)_syncAccount;	// IMP=0x00000000000735c1
- (void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;	// IMP=0x0000000000073593
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;	// IMP=0x000000000007353a
- (void)sendPendingSyncedRemovals;	// IMP=0x0000000000073384
- (id)dismissalSectionIdentifiersForIncomingMessage:(id)arg1;	// IMP=0x000000000007324a
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;	// IMP=0x0000000000072e8e
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000000072e41
@property(readonly, nonatomic) unsigned long long pairedDeviceCount; // @dynamic pairedDeviceCount;
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000072cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
