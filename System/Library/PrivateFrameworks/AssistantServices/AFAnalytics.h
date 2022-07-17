//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    id <AFAnalyticsService> _service;	// 24 = 0x18
}

+ (id)sharedAnalytics;	// IMP=0x00000000000f66fc
- (void).cxx_destruct;	// IMP=0x00000000000f8186
- (id)_service:(_Bool)arg1;	// IMP=0x00000000000f8130
- (void)_stageEvents:(id)arg1;	// IMP=0x00000000000f80b0
- (void)_stageEvent:(id)arg1;	// IMP=0x00000000000f7fdf
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f7f40
- (void)logEvents:(id)arg1;	// IMP=0x00000000000f7e98
- (void)logEvent:(id)arg1;	// IMP=0x00000000000f7df0
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f7c32
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;	// IMP=0x00000000000f77ff
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;	// IMP=0x00000000000f74f9
- (void)setService:(id)arg1;	// IMP=0x00000000000f7455
- (void)boostQueuedEvents:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f7285
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00000000000f716c
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;	// IMP=0x00000000000f711f
- (void)endEventsGrouping;	// IMP=0x00000000000f708e
- (void)beginEventsGrouping;	// IMP=0x00000000000f6ffd
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3;	// IMP=0x00000000000f6c57
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00000000000f6b9f
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;	// IMP=0x00000000000f6b3c
- (void)logEventWithType:(long long)arg1 contextResolver:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f6ace
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;	// IMP=0x00000000000f6a37
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f69c7
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;	// IMP=0x00000000000f694b
- (void)logEventWithType:(long long)arg1 context:(id)arg2;	// IMP=0x00000000000f68db
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00000000000f685b
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00000000000f67a2
- (id)init;	// IMP=0x00000000000f6672
- (void)logClientFeedbackPresented:(id)arg1 dialogIdentifierProvider:(id)arg2;	// IMP=0x000000000011ba3a
- (void)logClientFeedbackPresented:(id)arg1;	// IMP=0x000000000011ba26
- (id)newTurnBasedInstrumentationContext;	// IMP=0x00000000001228f5

@end
