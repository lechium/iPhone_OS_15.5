//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BSInvalidatable-Protocol.h>

@class NSDictionary, NSString;
@protocol BKIOHIDServiceMatchObserver, BKIOHIDServiceMatcherDataProviding, OS_dispatch_queue;

@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _startedMatching;	// 12 = 0xc
    _Bool _invalidated;	// 13 = 0xd
    NSDictionary *_matchingDictionary;	// 16 = 0x10
    Class _serviceClass;	// 24 = 0x18
    id <BKIOHIDServiceMatchObserver> _observer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_observerQueue;	// 40 = 0x28
    id <BKIOHIDServiceMatcherDataProviding> _dataProvider;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000f71e
@property(retain, nonatomic) id <BKIOHIDServiceMatcherDataProviding> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(nonatomic) __weak id <BKIOHIDServiceMatchObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) Class serviceClass; // @synthesize serviceClass=_serviceClass;
@property(copy, nonatomic) NSDictionary *matchingDictionary; // @synthesize matchingDictionary=_matchingDictionary;
- (id)_servicesForIOHIDServiceRefs:(id)arg1;	// IMP=0x000000000000f5be
- (void)_lock_servicesAdded:(id)arg1;	// IMP=0x000000000000f337
- (void)_servicesAdded:(id)arg1;	// IMP=0x000000000000f2dc
- (void)invalidate;	// IMP=0x000000000000f165
- (void)startObserving:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000ed31
- (id)existingServices;	// IMP=0x000000000000ec34
- (void)dealloc;	// IMP=0x000000000000ebf6
- (void)_expectDeallocation;	// IMP=0x000000000000ea8a
- (id)initWithMatchingDictionary:(id)arg1 serviceClass:(Class)arg2 dataProvider:(id)arg3;	// IMP=0x000000000000e9d3
- (id)initWithMatchingDictionary:(id)arg1 dataProvider:(id)arg2;	// IMP=0x000000000000e958
- (id)initWithUsagePage:(int)arg1 usage:(int)arg2 builtIn:(_Bool)arg3 dataProvider:(id)arg4;	// IMP=0x000000000000e76a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
