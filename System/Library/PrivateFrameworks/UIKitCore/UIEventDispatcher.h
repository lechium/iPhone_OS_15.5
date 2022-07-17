//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIEventFetcherSink-Protocol.h>

@class UIEventEnvironment, UIEventFetcher;

__attribute__((visibility("hidden")))
@interface UIEventDispatcher : NSObject <UIEventFetcherSink>
{
    UIEventEnvironment *_mainEnvironment;	// 8 = 0x8
    UIEventFetcher *_eventFetcher;	// 16 = 0x10
    struct __CFRunLoopSource *_handleEventQueueRunLoopSource;	// 24 = 0x18
    struct __CFRunLoopSource *_collectHIDEventsRunLoopSource;	// 32 = 0x20
    struct __CFRunLoop *_runLoop;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000d8cc2f
- (void)dealloc;	// IMP=0x0000000000d8cbc4
- (void)eventFetcherDidReceiveEvents:(id)arg1;	// IMP=0x0000000000d8cba3
- (id)initWithApplication:(id)arg1;	// IMP=0x0000000000d8c677

@end
