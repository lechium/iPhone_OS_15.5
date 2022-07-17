//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CNCancelable, CNObservable;

@interface _CNSamplingObservable
{
    id <CNObservable> _observable;	// 16 = 0x10
    id <CNObservable> _sampler;	// 24 = 0x18
    id _sample;	// 32 = 0x20
    id <CNCancelable> _timer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000056563
@property(retain) id <CNCancelable> timer; // @synthesize timer=_timer;
@property(retain) id sample; // @synthesize sample=_sample;
@property(readonly, nonatomic) id <CNObservable> sampler; // @synthesize sampler=_sampler;
@property(readonly, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
- (void)sendSampleToObserver:(id)arg1;	// IMP=0x000000000005643e
- (void)receiveResult:(id)arg1;	// IMP=0x00000000000563c3
- (id)subscribe:(id)arg1;	// IMP=0x0000000000055faf
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;	// IMP=0x0000000000055efe

@end
