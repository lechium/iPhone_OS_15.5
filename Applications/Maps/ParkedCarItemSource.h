//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, ParkedCarPersonalizedItem;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ParkedCarItemSource
{
    ParkedCarPersonalizedItem *_item;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000093610c
- (void)parkedCarManager:(id)arg1 didUpdateParkedCar:(id)arg2;	// IMP=0x0010000000935f25
- (void)parkedCarManager:(id)arg1 didAddParkedCar:(id)arg2;	// IMP=0x0010000000935e9f
- (void)parkedCarManager:(id)arg1 didRemoveParkedCar:(id)arg2;	// IMP=0x0010000000935e6f
- (id)allItems;	// IMP=0x0010000000935ce2
- (void)dealloc;	// IMP=0x0010000000935c6d
- (void)assignItem:(id)arg1;	// IMP=0x0010000000935bbd
- (id)init;	// IMP=0x0010000000935a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
