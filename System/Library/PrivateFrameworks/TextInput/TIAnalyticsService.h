//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TIAnalyticsServiceProvider;

@interface TIAnalyticsService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_eventSpecs;	// 16 = 0x10
    id <TIAnalyticsServiceProvider> _provider;	// 24 = 0x18
}

+ (void)setMockInstance:(id)arg1;	// IMP=0x000000000004baed
+ (id)sharedInstance;	// IMP=0x000000000004baa8
- (void).cxx_destruct;	// IMP=0x000000000004b0bf
@property(readonly, nonatomic) id <TIAnalyticsServiceProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSMutableDictionary *eventSpecs; // @synthesize eventSpecs=_eventSpecs;
- (void)queueCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b09a
- (void)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x000000000004aff3
- (void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3;	// IMP=0x000000000004ae52
- (id)settingsFromPayload:(id)arg1 andValues:(id)arg2 eventSpec:(id)arg3 allowSparsePayload:(_Bool)arg4 errors:(id)arg5;	// IMP=0x000000000004a77a
- (id)settingsFromInputMode:(id)arg1 eventSpec:(id)arg2 errors:(id)arg3;	// IMP=0x000000000004a64d
- (void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3;	// IMP=0x000000000004a417
- (void)_dispatchEventWithName:(id)arg1 payload:(id)arg2 values:(id)arg3 inputMode:(id)arg4 testingParameters:(id)arg5 allowSparsePayload:(_Bool)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000004a1ff
- (_Bool)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000004a1d1
- (_Bool)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004a1a6
- (_Bool)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004a17b
- (_Bool)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004a150
- (_Bool)dispatchEventWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a125
- (void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004a0f8
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a0cd
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a0a2
- (void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a077
- (void)dispatchEventWithName:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a04c
- (void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(_Bool)arg4;	// IMP=0x000000000004a020
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3;	// IMP=0x0000000000049ff7
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2;	// IMP=0x0000000000049fce
- (void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2;	// IMP=0x0000000000049fa5
- (void)dispatchEventWithName:(id)arg1;	// IMP=0x0000000000049f7c
- (void)_registerEventSpec:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049ec4
- (_Bool)registerEventSpec:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049ead
- (void)registerEventSpec:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049e9b
- (void)registerEventSpec:(id)arg1;	// IMP=0x0000000000049e87
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000049dbd
- (id)init;	// IMP=0x0000000000049d7d

@end
