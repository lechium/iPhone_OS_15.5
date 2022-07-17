//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSDiagnosticManager, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MSMessageLoadingAnalyticController : NSObject
{
    NSMutableDictionary *_messageLoadTimes;	// 8 = 0x8
    MSDiagnosticManager *_diagnosticManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialMessageLoadingTimerQueue;	// 24 = 0x18
    unsigned long long _maxLoadingTimeSeconds;	// 32 = 0x20
    CDUnknownBlockType _startedRecordingHandler;	// 40 = 0x28
    CDUnknownBlockType _endedRecordingHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001a8ee
@property(copy, nonatomic) CDUnknownBlockType endedRecordingHandler; // @synthesize endedRecordingHandler=_endedRecordingHandler;
@property(copy, nonatomic) CDUnknownBlockType startedRecordingHandler; // @synthesize startedRecordingHandler=_startedRecordingHandler;
@property(readonly, copy, nonatomic) NSDictionary *messageLoadTimes; // @synthesize messageLoadTimes=_messageLoadTimes;
@property(nonatomic) unsigned long long maxLoadingTimeSeconds; // @synthesize maxLoadingTimeSeconds=_maxLoadingTimeSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue; // @synthesize serialMessageLoadingTimerQueue=_serialMessageLoadingTimerQueue;
@property(retain, nonatomic) MSDiagnosticManager *diagnosticManager; // @synthesize diagnosticManager=_diagnosticManager;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1;	// IMP=0x000000000001a778
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1;	// IMP=0x000000000001a558
- (void)_startTimeoutForMessage:(id)arg1;	// IMP=0x000000000001a078
- (void)_endRecordingForMessage:(id)arg1;	// IMP=0x0000000000019f75
- (void)_commonInitWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;	// IMP=0x0000000000019eea
- (void)endAllRecording;	// IMP=0x0000000000019d0b
- (void)endRecordingForMessage:(id)arg1;	// IMP=0x0000000000019ba9
- (void)startRecordingForMessage:(id)arg1;	// IMP=0x0000000000019b96
- (id)initWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;	// IMP=0x0000000000019afc
- (id)initWithDiagnosticManager:(id)arg1;	// IMP=0x0000000000019a63

@end
