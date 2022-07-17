//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AnalyticsEventObserverDelegate, OS_dispatch_queue;

@interface AnalyticsEventObserver : NSObject
{
    struct shared_ptr<(anonymous namespace)::EventObserverImpl> observer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <AnalyticsEventObserverDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000003b36
- (void).cxx_destruct;	// IMP=0x0000000000003ad5
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <AnalyticsEventObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)stopObserving;	// IMP=0x0000000000003995
- (_Bool)startObservingEventList:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002ed8
- (_Bool)startObservingEventList:(id)arg1;	// IMP=0x0000000000002ec3
- (void)setEventObserverDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000002d13
- (void)dealloc;	// IMP=0x0000000000002c85
- (id)init;	// IMP=0x0000000000002bc0

@end
