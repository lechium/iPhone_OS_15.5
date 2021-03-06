//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNCancelationToken;
@protocol CNScheduler;

@interface _CNGeneratorObservable
{
    id _state;	// 16 = 0x10
    CDUnknownBlockType _condition;	// 24 = 0x18
    CDUnknownBlockType _nextState;	// 32 = 0x20
    CDUnknownBlockType _resultSelector;	// 40 = 0x28
    CDUnknownBlockType _delay;	// 48 = 0x30
    id <CNScheduler> _scheduler;	// 56 = 0x38
    CNCancelationToken *_cancelable;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004ff77
- (void)updateState;	// IMP=0x000000000004ff37
- (void)sendCurrentStateToObserver:(id)arg1;	// IMP=0x000000000004fec2
- (_Bool)isCanceled;	// IMP=0x000000000004fea5
- (_Bool)isFinished;	// IMP=0x000000000004fe81
- (void)scheduleNextResultForObserver:(id)arg1;	// IMP=0x000000000004fcf6
- (void)sendResultsToObserver:(id)arg1;	// IMP=0x000000000004fb9c
- (id)subscribe:(id)arg1;	// IMP=0x000000000004fb45
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;	// IMP=0x000000000004f992

@end

