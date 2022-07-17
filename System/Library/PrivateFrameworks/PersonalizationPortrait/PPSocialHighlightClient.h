//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPSocialHighlightClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPSocialHighlightClient : NSObject <PPSocialHighlightClientProtocol>
{
    PPXPCClientHelper *_clientHelper;	// 8 = 0x8
    PPXPCClientPipelinedBatchQueryManager *_queryManager;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000002561e
- (void).cxx_destruct;	// IMP=0x00000000000250cf
- (void)feedbackForAttribution:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000024f40
- (void)feedbackForHighlight:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000024db1
- (id)attributionForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024bbd
- (void)rankedHighlightsBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000024acd
- (_Bool)rankedHighlightsForSyncedItems:(id)arg1 client:(id)arg2 variant:(id)arg3 error:(id *)arg4 handleBatch:(CDUnknownBlockType)arg5;	// IMP=0x00000000000248ea
- (_Bool)rankedHighlightsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 error:(id *)arg4 handleBatch:(CDUnknownBlockType)arg5;	// IMP=0x0000000000024716
- (double)decayInterval;	// IMP=0x0000000000024445
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002442f
- (id)_remoteObjectProxy;	// IMP=0x0000000000024419
- (void)_unblockPendingQueries;	// IMP=0x0000000000024303
- (id)init;	// IMP=0x0000000000024055

@end
