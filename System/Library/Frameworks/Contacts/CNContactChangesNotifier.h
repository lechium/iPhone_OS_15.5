//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMutableMultiDictionary;
@protocol CNScheduler;

@interface CNContactChangesNotifier : NSObject
{
    _Bool _observingNotification;	// 8 = 0x8
    id <CNScheduler> _resourceLock;	// 16 = 0x10
    id <CNScheduler> _workQueue;	// 24 = 0x18
    id <CNScheduler> _downstream;	// 32 = 0x20
    CNContactStore *_contactStore;	// 40 = 0x28
    CNMutableMultiDictionary *_registeredObservers;	// 48 = 0x30
}

+ (id)workQueue_createFetchersFromRegisteredObservers:(id)arg1;	// IMP=0x00000000000cdc16
+ (id)sharedNotifier;	// IMP=0x00000000000cabad
- (void).cxx_destruct;	// IMP=0x00000000000ce2a9
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x00000000000cc481
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cbdd4
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2;	// IMP=0x00000000000cbdbf
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cb3c3
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000cb3ae
- (void)registerObserver:(id)arg1 forContact:(id)arg2;	// IMP=0x00000000000cb2d0
- (id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3;	// IMP=0x00000000000cb1a1
- (id)init;	// IMP=0x00000000000cb102

@end
