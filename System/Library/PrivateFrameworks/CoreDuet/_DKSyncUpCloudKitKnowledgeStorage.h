//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncRemoteKnowledgeStorage-Protocol.h>

@class _DKSyncCloudKitKnowledgeStorage;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>
{
    _DKSyncCloudKitKnowledgeStorage *_common;	// 8 = 0x8
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000042524
- (void).cxx_destruct;	// IMP=0x0000000000042b60
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) _DKSyncCloudKitKnowledgeStorage *common; // @synthesize common=_common;
- (long long)transportType;	// IMP=0x0000000000042b0f
- (id)name;	// IMP=0x0000000000042b02
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000042a68
- (void)setFetchDelegate:(id)arg1;	// IMP=0x0000000000042a57
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000429d3
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004294f
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000042883
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000427ff
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000042724
- (void)clearPrewarmedFlag;	// IMP=0x000000000004270e
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x00000000000426f8
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;	// IMP=0x00000000000426e2
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x00000000000426cc
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;	// IMP=0x00000000000426b6
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042668
- (void)cancelOutstandingOperations;	// IMP=0x0000000000042631
- (void)start;	// IMP=0x00000000000425d8
@property(getter=isAvailable) _Bool available;
- (id)init;	// IMP=0x0000000000042579

@end

