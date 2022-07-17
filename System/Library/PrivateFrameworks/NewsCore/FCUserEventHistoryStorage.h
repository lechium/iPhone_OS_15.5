//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCUserEventHistoryStorageType-Protocol.h>

@class FCUserEventHistoryMetadata, NSArray, NSHashTable, NSString, NSURL;

@interface FCUserEventHistoryStorage : NSObject <FCUserEventHistoryStorageType>
{
    NSURL *_rootDirectory;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSArray *_prunedSessionIDs;	// 24 = 0x18
    unsigned long long _prunedSessionSize;	// 32 = 0x20
    FCUserEventHistoryMetadata *_metadata;	// 40 = 0x28
    unsigned long long _currentSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000e7598
@property(nonatomic) unsigned long long currentSize; // @synthesize currentSize=_currentSize;
@property(retain, nonatomic) FCUserEventHistoryMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long prunedSessionSize; // @synthesize prunedSessionSize=_prunedSessionSize;
@property(retain, nonatomic) NSArray *prunedSessionIDs; // @synthesize prunedSessionIDs=_prunedSessionIDs;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSURL *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (void)_pruneToMaxSessionAge:(unsigned long long)arg1;	// IMP=0x00000000000e7290
- (void)_pruneToMaxSessionCount:(unsigned long long)arg1;	// IMP=0x00000000000e6f60
- (void)_pruneToMaxSize:(long long)arg1;	// IMP=0x00000000000e673b
- (void)_pruneSessions:(id)arg1;	// IMP=0x00000000000e666f
- (id)_deleteSessions:(id)arg1 pruned:(_Bool)arg2;	// IMP=0x00000000000e6235
- (id)_filePathForSessionID:(id)arg1;	// IMP=0x00000000000e6194
- (void)setMetadataWithAggregateStoreGenerationTime:(long long)arg1 aggregateTotalCount:(long long)arg2 meanCountOfEvents:(double)arg3 standardDeviationOfEvents:(double)arg4 totalEventsCount:(long long)arg5;	// IMP=0x00000000000e6055
- (void)clearAllSessions;	// IMP=0x00000000000e5d04
- (void)storeSessionID:(id)arg1 sessionData:(id)arg2;	// IMP=0x00000000000e5b37
- (void)storeSessionID:(id)arg1 compressedSessionData:(id)arg2 notify:(_Bool)arg3;	// IMP=0x00000000000e5725
@property(readonly, nonatomic) NSArray *sessions;
@property(readonly, nonatomic) NSArray *sessionIDs;
@property(readonly, nonatomic) unsigned long long size;
- (void)writeJSON:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e4439
@property(readonly, nonatomic) NSURL *baseDirectoryURL;
- (void)clearSessionsWithIDs:(id)arg1;	// IMP=0x00000000000e407c
- (id)pruneWithPolicies:(id)arg1;	// IMP=0x00000000000e3cf8
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000e3b9e
- (void)addObserver:(id)arg1;	// IMP=0x00000000000e39a8
- (id)sizeString;	// IMP=0x00000000000e3971
- (id)initWithPrivateDataDirectory:(id)arg1;	// IMP=0x00000000000e34d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
