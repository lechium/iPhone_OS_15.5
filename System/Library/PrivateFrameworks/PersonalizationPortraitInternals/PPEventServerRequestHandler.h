//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPEventServerProtocol-Protocol.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPEventClientProtocol;

@interface PPEventServerRequestHandler : NSObject <PPEventServerProtocol>
{
    id <PPEventClientProtocol> _clientProxy;	// 8 = 0x8
    PPXPCServerPipelinedBatchQueryManager *_queryManager;	// 16 = 0x10
    NSString *_clientProcessName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000123e0d
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000123d20
- (void)sendRTCLogsWithWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123c0a
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;	// IMP=0x0000000000123b2f
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;	// IMP=0x0000000000123a61
- (void)scoredEventsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;	// IMP=0x0000000000123947
- (void)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;	// IMP=0x00000000001237e1
- (void)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;	// IMP=0x0000000000123688
- (void)eventNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;	// IMP=0x0000000000123560
- (void)unblockPendingQueries;	// IMP=0x000000000012354a
- (void)setRemoteObjectProxy:(id)arg1;	// IMP=0x0000000000123539
- (id)init;	// IMP=0x00000000001234be

@end

