//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol MTEventRecorderDelegate;

@interface MTEventRecorder
{
    id <MTEventRecorderDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_eventListeners;	// 16 = 0x10
}

+ (id)_compositePromiseWithPromises:(id)arg1 resolvingResultFromPromise:(id)arg2;	// IMP=0x00000000000198d9
+ (id)_metricsDataApplyingWhitelisting:(id)arg1 usingRecorder:(id)arg2;	// IMP=0x00000000000197e3
- (void).cxx_destruct;	// IMP=0x0000000000019a56
@property(retain, nonatomic) NSMutableArray *eventListeners; // @synthesize eventListeners=_eventListeners;
@property(nonatomic) __weak id <MTEventRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_recordEvent:(id)arg1 toTopic:(id)arg2 usingRecorder:(id)arg3;	// IMP=0x000000000001965e
- (id)_recordEvent:(id)arg1 usingRecorder:(id)arg2;	// IMP=0x0000000000019327
- (id)_flushUnreportedEventsUsingRecorder:(id)arg1;	// IMP=0x00000000000192ad
- (id)recordEvent:(id)arg1 shouldSkipValidation:(_Bool)arg2;	// IMP=0x000000000001901b
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;	// IMP=0x0000000000018e73
- (id)recordEvent:(id)arg1;	// IMP=0x0000000000018e5f
- (id)sendMethod;	// IMP=0x0000000000018dab
- (id)flushUnreportedEvents;	// IMP=0x0000000000018c8c
- (void)removeEventListener:(id)arg1;	// IMP=0x0000000000018bf1
- (void)addEventListener:(id)arg1;	// IMP=0x0000000000018b04
- (void)dealloc;	// IMP=0x0000000000018974
- (void)maybeSubscribeToFlushNotification;	// IMP=0x00000000000188cc
- (id)initWithMetricsKit:(id)arg1;	// IMP=0x0000000000018880
- (id)init;	// IMP=0x0000000000018834
- (id)_amsDelegate;	// IMP=0x0000000000038044
@property(nonatomic) _Bool monitorsLifecycleEvents;

@end

