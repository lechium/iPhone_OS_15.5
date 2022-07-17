//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSString, PPClientFeedbackHelper, PPRecordMonitoringHelper;

@interface PPEventStore : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPRecordMonitoringHelper *_monitoringHelper;	// 8 = 0x8
    PPClientFeedbackHelper *_clientFeedbackHelper;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000036faa
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000036f75
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036d1e
- (_Bool)sendRTCLogsWithError:(id *)arg1;	// IMP=0x0000000000036cc4
- (_Bool)interactionSummaryMetricsError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036c00
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;	// IMP=0x0000000000036b7f
- (_Bool)iterScoredEventsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036a9e
- (_Bool)iterWeeklyEventHighlightsError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036a84
- (_Bool)iterDailyEventHighlightsError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036a6a
- (_Bool)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000036a42
- (_Bool)iterWeeklyEventHighlightsWithOptions:(int)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036913
- (_Bool)iterDailyEventHighlightsWithOptions:(int)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036672
- (_Bool)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00000000000364ed
- (_Bool)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000363f3
- (void)_loadEventNameRecordsWithDelegate:(id)arg1;	// IMP=0x000000000003637a
- (void)_sendChangesToDelegates:(id)arg1;	// IMP=0x00000000000362ba
- (CDUnknownBlockType)_recordGenerator;	// IMP=0x00000000000362ad
- (_Bool)iterEventNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000361cc
- (id)init;	// IMP=0x0000000000036128

// Remaining properties
@property(retain, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;

@end
