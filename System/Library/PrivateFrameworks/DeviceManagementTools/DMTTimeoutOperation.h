//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class NSTimer;

@interface DMTTimeoutOperation : CATOperation
{
    _Bool _cancelsOnTimeout;	// 8 = 0x8
    CATOperation *_observedOperation;	// 16 = 0x10
    double _timeoutInterval;	// 24 = 0x18
    NSTimer *_timeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000021f8
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, nonatomic) _Bool cancelsOnTimeout; // @synthesize cancelsOnTimeout=_cancelsOnTimeout;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) CATOperation *observedOperation; // @synthesize observedOperation=_observedOperation;
- (void)innerOperationDidFinish:(id)arg1;	// IMP=0x00000000000020cf
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000001ff6
- (void)createTimer;	// IMP=0x0000000000001f87
- (void)beginWaitingForOperation;	// IMP=0x0000000000001e10
- (void)main;	// IMP=0x0000000000001d57
- (void)cancel;	// IMP=0x0000000000001c2a
- (_Bool)isAsynchronous;	// IMP=0x0000000000001c22
- (id)initWithOperation:(id)arg1 timeout:(double)arg2 cancelsOnTimeout:(_Bool)arg3;	// IMP=0x0000000000001b8c

@end
