//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface HDSPConfirmWakeUpIDSMessage
{
    NSDate *_wakeUpConfirmedUntilDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000384c4
@property(readonly, nonatomic) NSDate *wakeUpConfirmedUntilDate; // @synthesize wakeUpConfirmedUntilDate=_wakeUpConfirmedUntilDate;
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000383e5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038333
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000382b6
@property(readonly, nonatomic) NSDate *wakeUpConfirmedDate;
- (id)initWithWakeUpConfirmedDate:(id)arg1 wakeUpConfirmedUntilDate:(id)arg2;	// IMP=0x0000000000038219

@end

