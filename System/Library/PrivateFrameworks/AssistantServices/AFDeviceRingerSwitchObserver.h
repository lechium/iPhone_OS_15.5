//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>

@class AFNotifyObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFNotifyObserver *_notifyObserver;	// 16 = 0x10
    NSHashTable *_listeners;	// 24 = 0x18
    _Bool _isActive;	// 32 = 0x20
}

+ (id)sharedObserver;	// IMP=0x00000000000fef57
- (void).cxx_destruct;	// IMP=0x00000000000ff3d9
- (void)_updateStateWithNotifyState:(unsigned long long)arg1;	// IMP=0x00000000000ff288
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00000000000ff26b
- (void)removeListener:(id)arg1;	// IMP=0x00000000000ff1b0
- (void)addListener:(id)arg1;	// IMP=0x00000000000ff0f5
@property(readonly, nonatomic) long long state;
- (id)init;	// IMP=0x00000000000fefac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
