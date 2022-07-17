//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalActivatable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>
{
    _Bool _listening;	// 8 = 0x8
    NSString *_notificationName;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004cc4f
@property(nonatomic) _Bool listening; // @synthesize listening=_listening;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (_Bool)_removeObserver;	// IMP=0x000000000004cb45
- (_Bool)_addObserver;	// IMP=0x000000000004ca26
- (void)_notificationWithNameReceived:(id)arg1;	// IMP=0x000000000004c83c
- (void)deactivate;	// IMP=0x000000000004c681
- (void)activate;	// IMP=0x000000000004c4bb
- (id)description;	// IMP=0x000000000004c3bb
- (void)dealloc;	// IMP=0x000000000004c2f3
- (id)initWithNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c2de
- (id)initWithNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x000000000004c092

@end
