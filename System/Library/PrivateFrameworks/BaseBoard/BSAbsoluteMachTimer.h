//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSCancellable-Protocol.h>
#import <BaseBoard/BSInvalidatable-Protocol.h>
#import <BaseBoard/BSTimerScheduleQuerying-Protocol.h>

@class BSDispatchTimer, NSString;

@interface BSAbsoluteMachTimer : NSObject <BSTimerScheduleQuerying, BSCancellable, BSInvalidatable>
{
    BSDispatchTimer *_timer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000227b0
- (void)invalidate;	// IMP=0x00000000000227a2
- (void)cancel;	// IMP=0x0000000000022794
- (void)scheduleRepeatingWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000021f84
- (void)scheduleWithFireInterval:(double)arg1 leewayInterval:(double)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002190b
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic, getter=isScheduled) _Bool scheduled;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000021721

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

