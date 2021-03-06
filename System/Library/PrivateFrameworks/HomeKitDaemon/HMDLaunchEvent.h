//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMDDiagnosticReportLogging-Protocol.h>
#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class HMFActivity, NSDate, NSDictionary, NSString;

@interface HMDLaunchEvent : HMMLogEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging>
{
    _Bool _hasUncommittedRecords;	// 8 = 0x8
    _Bool _hasUncommittedAndPushedRecords;	// 9 = 0x9
    HMFActivity *_activity;	// 16 = 0x10
    unsigned long long _systemUptimeMillisecondsRecordedAtLaunch;	// 24 = 0x18
    long long _numUncommittedRecords;	// 32 = 0x20
    long long _numUncommittedAndPushedRecords;	// 40 = 0x28
    NSDate *_XPCMessageTransportStartedDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000097e297
@property long long numUncommittedAndPushedRecords; // @synthesize numUncommittedAndPushedRecords=_numUncommittedAndPushedRecords;
@property long long numUncommittedRecords; // @synthesize numUncommittedRecords=_numUncommittedRecords;
@property _Bool hasUncommittedAndPushedRecords; // @synthesize hasUncommittedAndPushedRecords=_hasUncommittedAndPushedRecords;
@property _Bool hasUncommittedRecords; // @synthesize hasUncommittedRecords=_hasUncommittedRecords;
@property(readonly) unsigned long long systemUptimeMillisecondsRecordedAtLaunch; // @synthesize systemUptimeMillisecondsRecordedAtLaunch=_systemUptimeMillisecondsRecordedAtLaunch;
@property(retain) HMFActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (void)markXPCMessageTransportStarted;	// IMP=0x000000000097ddd7
- (id)init;	// IMP=0x000000000097dd83
@property(readonly, copy) NSString *diagnosticReportEventSubType;
@property(readonly, copy) NSString *diagnosticReportEventType;
- (void)updateDiagnosticReportSignature:(id)arg1;	// IMP=0x0000000000b74172
@property(readonly) double diagnosticReportThreshold;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

