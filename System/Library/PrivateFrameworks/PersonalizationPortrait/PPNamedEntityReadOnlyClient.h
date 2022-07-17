//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPNamedEntityClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol>
{
    PPXPCClientHelper *_clientHelper;	// 8 = 0x8
    PPXPCClientPipelinedBatchQueryManager *_queryManager;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000043554
- (void).cxx_destruct;	// IMP=0x0000000000043155
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000430cf
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000042f04
- (_Bool)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042dcf
- (_Bool)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042c9a
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042c84
- (id)_remoteObjectProxy;	// IMP=0x0000000000042c6e
- (void)namedEntityRecordBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000042c3c
- (void)namedEntityBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000042c0a
- (void)_unblockPendingQueries;	// IMP=0x0000000000042af4
- (id)init;	// IMP=0x00000000000427bf

@end
