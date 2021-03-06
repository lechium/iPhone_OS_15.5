//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTExponentialBackOffTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    double _initialTime;	// 32 = 0x20
    unsigned long long _currentBackoff;	// 40 = 0x28
    unsigned long long _backoffFactor;	// 48 = 0x30
}

+ (id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x00000000000364cd
+ (id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036446
+ (id)timerWithInitialTime:(double)arg1 fireBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003642c
- (void).cxx_destruct;	// IMP=0x0000000000036996
@property(nonatomic) unsigned long long backoffFactor; // @synthesize backoffFactor=_backoffFactor;
@property(nonatomic) unsigned long long currentBackoff; // @synthesize currentBackoff=_currentBackoff;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (id)description;	// IMP=0x00000000000368c8
- (void)_cancel;	// IMP=0x000000000003689e
- (void)reset;	// IMP=0x000000000003681f
- (void)stop;	// IMP=0x000000000003679b
- (void)timerFinished;	// IMP=0x000000000003675d
- (void)start;	// IMP=0x0000000000036618
- (id)initWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x0000000000036552

@end

