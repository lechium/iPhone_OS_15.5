//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSHashTable, NSMutableDictionary;

@interface FREventCenter : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSMutableDictionary *_eventTypeToObservers;	// 16 = 0x10
    NFUnfairLock *_lock;	// 24 = 0x18
}

+ (id)sharedCenter;	// IMP=0x00400000000782f1
+ (id)eventLogQueue;	// IMP=0x001000000007826e
- (void).cxx_destruct;	// IMP=0x00200000000794ff
@property(readonly, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *eventTypeToObservers; // @synthesize eventTypeToObservers=_eventTypeToObservers;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)_removeObserver:(id)arg1;	// IMP=0x0010000000079415
- (id)_observersForEventType:(id)arg1;	// IMP=0x00100000000792e1
- (void)asyncSubmitEvent:(id)arg1;	// IMP=0x0010000000078f03
- (void)submitEvent:(id)arg1;	// IMP=0x0010000000078b6a
- (void)removeIfObserver:(id)arg1;	// IMP=0x001000000007892d
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000078741
- (void)addObserver:(id)arg1 eventType:(id)arg2;	// IMP=0x0010000000078557
- (void)addObserver:(id)arg1;	// IMP=0x0010000000078401
- (id)init;	// IMP=0x0010000000078346

@end
