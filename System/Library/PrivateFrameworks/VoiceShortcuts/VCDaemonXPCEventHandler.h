//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;
@protocol OS_dispatch_queue;

@interface VCDaemonXPCEventHandler : NSObject
{
    NSArray *_streams;	// 8 = 0x8
    NSMapTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000034b02
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(readonly, copy, nonatomic) NSArray *streams; // @synthesize streams=_streams;
- (void)removeObserver:(id)arg1 name:(id)arg2;	// IMP=0x0000000000034990
- (void)removeObserver:(id)arg1;	// IMP=0x000000000003497c
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;	// IMP=0x0000000000034729
- (void)handleEvent:(id)arg1 fromStream:(id)arg2;	// IMP=0x000000000003416c
- (void)resume;	// IMP=0x0000000000033ee9
- (id)initWithStreams:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000033e04
- (id)initWithStreams:(id)arg1;	// IMP=0x0000000000033d57

@end

