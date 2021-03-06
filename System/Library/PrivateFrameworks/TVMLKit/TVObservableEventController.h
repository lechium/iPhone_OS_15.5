//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVObservable-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;

@interface TVObservableEventController : NSObject <TVObservable>
{
    NSMutableDictionary *_observerRecords;	// 8 = 0x8
    NSMapTable *_eventsByObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000092ddc
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000092c7a
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000092c01
- (void)addObserver:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000092a57
- (void)dispatchEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x00000000000928ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

