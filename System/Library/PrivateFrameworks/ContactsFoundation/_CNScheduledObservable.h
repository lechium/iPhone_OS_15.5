//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CNObservable, CNScheduler;

@interface _CNScheduledObservable
{
    id <CNObservable> _observable;	// 16 = 0x10
    id <CNScheduler> _scheduler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018e5a
@property(retain, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
- (id)subscribe:(id)arg1;	// IMP=0x0000000000018c94
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;	// IMP=0x0000000000018be3

@end

