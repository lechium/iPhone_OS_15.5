//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

@interface BMSyncDatabase : NSObject
{
    _bmFMDatabase *_fmdb;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    NSString *__error_ivar;	// 32 = 0x20
    unsigned long long __internal_state_ivar;	// 40 = 0x28
    CDUnknownBlockType _corruptionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0010000000023291
@property(copy, nonatomic) CDUnknownBlockType corruptionHandler; // @synthesize corruptionHandler=_corruptionHandler;
@property(readonly, nonatomic) unsigned long long internalState; // @synthesize internalState=__internal_state_ivar;
@property(readonly, nonatomic) NSString *error; // @synthesize error=__error_ivar;
@property(readonly, nonatomic) unsigned int version;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;	// IMP=0x001000000002322c
- (id)valueForMetadataKey:(id)arg1;	// IMP=0x00100000000231aa
- (_Bool)rollback;	// IMP=0x0010000000023194
- (_Bool)commit;	// IMP=0x001000000002317e
- (_Bool)beginTransaction;	// IMP=0x0010000000023168
- (void)close;	// IMP=0x00100000000230b8
@property(readonly, nonatomic) unsigned long long state;
- (_Bool)open;	// IMP=0x0010000000022fe0
- (_Bool)_tryOpen:(unsigned long long)arg1;	// IMP=0x001000000002279c
- (void)setState:(unsigned long long)arg1 errorFormat:(id)arg2;	// IMP=0x0010000000022676
- (void)setState:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00100000000224d6
- (id)initWithPath:(id)arg1 queue:(id)arg2;	// IMP=0x001000000002237c
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000022368
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000222c0
- (id)highestDeletedLocationForSiteIdentifier:(id)arg1 inStream:(id)arg2;	// IMP=0x001000000000329a
- (id)highestDeletedLocationsForStream:(id)arg1;	// IMP=0x00100000000030d7
- (id)locationsWithState:(unsigned long long)arg1;	// IMP=0x0010000000002f26
- (_Bool)removeAllDeletedLocationsBeforeHighestDeletedLocation:(id)arg1;	// IMP=0x0010000000002d5a
- (_Bool)upsertLocation:(id)arg1;	// IMP=0x0010000000002918
- (id)insertLocationIfNotExists:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x00100000000026b8
- (_Bool)updateAllLocationsAtOrBefore:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x00100000000023cc
- (_Bool)updateLocationState:(unsigned long long)arg1 forLocation:(id)arg2;	// IMP=0x0010000000002289
- (id)locationRowWithLocation:(id)arg1;	// IMP=0x00100000000020a1
- (id)allPeers;	// IMP=0x00100000000047f8
- (_Bool)setLastSyncDate:(id)arg1 forDeviceWithIdentifier:(id)arg2;	// IMP=0x00100000000046bb
- (id)lastSyncDateOfDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000000457c
- (id)lastSyncDateFromAnyDevice;	// IMP=0x00100000000044c0
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x001000000000437c
- (_Bool)upsertSyncDevicePeer:(id)arg1 isMe:(_Bool)arg2;	// IMP=0x0010000000003e20
- (id)localDevice;	// IMP=0x0010000000003d62
- (id)SELECT_ATOMS_WHERE:(id)arg1 ORDER_BY:(id)arg2 LIMIT:(id)arg3;	// IMP=0x001000000001b3b8
- (id)highestLocationWithBufferedAtomsOlderThan:(double)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3;	// IMP=0x001000000001b220
- (id)computeHighestLocationToDeleteUpToBookmark:(id)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3;	// IMP=0x001000000001af42
- (void)atomRowsAfterVectorClock:(id)arg1 inStream:(id)arg2 enumerateWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001aa4a
- (_Bool)deleteAllAtomsAtOrBeforeLocation:(id)arg1;	// IMP=0x001000000001a6df
- (void)atomsAtOrBeforeLocation:(id)arg1 ofType:(unsigned long long)arg2 enumerateWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a382
- (void)atomRowsNotOnDiskReferencingSiteIdentifier:(id)arg1 inStream:(id)arg2 enumerateWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a0ff
- (_Bool)containsCKAtomRowWithSegment:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000019fca
- (id)latestDistributedTimestampForSiteIdentifier:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000019e1c
- (id)ckAtomRowForAtomWithBookmark:(id)arg1 type:(unsigned long long)arg2 forSiteIdentifier:(id)arg3 inStream:(id)arg4;	// IMP=0x0010000000019bc5
- (_Bool)updateCKAtomRow:(id)arg1 inStream:(id)arg2;	// IMP=0x00100000000195f9
- (_Bool)containsCKAtomRowWithTimestamp:(id)arg1 inStream:(id)arg2 onDisk:(_Bool)arg3;	// IMP=0x0010000000019382
- (_Bool)containsCKAtomRowWithTimestamp:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000019177
- (id)latestCKAtomRowOfType:(unsigned long long)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3;	// IMP=0x0010000000018f83
- (id)timestampVectorForStreamName:(id)arg1;	// IMP=0x0010000000018ce9
- (id)latestCKAtomRowForSiteIdentifier:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000018b74
- (id)ckAtomRowWithTimestamp:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000018976
- (_Bool)addCKAtomRow:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000017fb2
@property(retain, nonatomic) NSDate *lastSyncAttemptDate;
- (_Bool)saveLatestTombstoneBookmark:(id)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3;	// IMP=0x001000000001db12
- (id)latestTombstoneBookmarkForSiteIdentifier:(id)arg1 inStream:(id)arg2;	// IMP=0x001000000001d955
- (void)compactAndDeleteSessionLogs;	// IMP=0x001000000002448a
- (id)computeAggregatedSessionLogs;	// IMP=0x0010000000024398
- (void)recordAtomMergeResult:(unsigned long long)arg1 inStream:(id)arg2 sessionID:(id)arg3 messageID:(unsigned long long)arg4 ownerSite:(id)arg5 originatingSite:(id)arg6 eventCreatedAt:(double)arg7;	// IMP=0x0010000000024076
- (void)recordMessageToDeviceIdentifier:(id)arg1 sessionID:(id)arg2 messageID:(unsigned long long)arg3 reachable:(_Bool)arg4 bytes:(unsigned long long)arg5 isReciprocal:(_Bool)arg6;	// IMP=0x0010000000023d92
- (void)recordSessionEnd:(id)arg1;	// IMP=0x0010000000023bef
- (void)recordSessionStart:(id)arg1 transport:(unsigned long long)arg2 reason:(unsigned long long)arg3 isReciprocal:(_Bool)arg4;	// IMP=0x0010000000023989

@end

