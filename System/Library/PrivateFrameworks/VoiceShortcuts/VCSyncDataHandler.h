//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSyncDataHandling-Protocol.h>

@class NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface VCSyncDataHandler : NSObject <VCSyncDataHandling>
{
    NSHashTable *_servicesTable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (Class)changeClass;	// IMP=0x00000000000158ea
+ (int)messageType;	// IMP=0x00000000000158bd
- (void).cxx_destruct;	// IMP=0x0000000000015761
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *servicesTable; // @synthesize servicesTable=_servicesTable;
- (void)deregisterSyncService:(id)arg1;	// IMP=0x000000000001569b
- (void)registerSyncService:(id)arg1;	// IMP=0x0000000000015577
- (_Bool)deleteSyncedData:(id *)arg1;	// IMP=0x000000000001554a
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015504
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000154ce
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001547c
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000015446
- (void)requestFullResync;	// IMP=0x0000000000015319
- (void)requestSync;	// IMP=0x00000000000151ec
@property(readonly, copy, nonatomic) NSArray *services;
- (id)init;	// IMP=0x0000000000014fd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
