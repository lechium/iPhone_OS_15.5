//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject
{
    NSMutableDictionary *_eventMap;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004e7c3
- (void)publishAllEvents;	// IMP=0x000000000004e600
- (void)publishEventWithName:(id)arg1;	// IMP=0x000000000004e4ed
- (void)addRecordingTimedEventSnippetWithToken:(double)arg1 forKey:(id)arg2 onEventWithName:(id)arg3;	// IMP=0x000000000004e3dc
- (void)stopRecordingTimedEventWithToken:(double)arg1 forKey:(id)arg2 onEventWithName:(id)arg3;	// IMP=0x000000000004e32e
- (double)startRecordingTimedEventToken;	// IMP=0x000000000004e324
- (id)rawEventForEventName:(id)arg1;	// IMP=0x000000000004e214
- (void)removeEventWithName:(id)arg1;	// IMP=0x000000000004e10b
- (void)removePayloadValueForKey:(id)arg1 onEventWithName:(id)arg2;	// IMP=0x000000000004dfbb
- (void)mergePayload:(id)arg1 onEventWithName:(id)arg2;	// IMP=0x000000000004de6b
- (void)setPayloadValue:(id)arg1 forKey:(id)arg2 onlyOnExistingEventWithName:(id)arg3;	// IMP=0x000000000004ddcd
- (void)setPayloadValue:(id)arg1 forKey:(id)arg2 onEventWithName:(id)arg3;	// IMP=0x000000000004dd2f
- (void)_setPayloadValue:(id)arg1 forKey:(id)arg2 onEventWithName:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004db61
- (id)valueForKey:(id)arg1 onEventWithName:(id)arg2;	// IMP=0x000000000004d9fc
- (id)_eventForEventName:(id)arg1;	// IMP=0x000000000004d969
- (id)description;	// IMP=0x000000000004d8f1
- (id)init;	// IMP=0x000000000004d894

@end

