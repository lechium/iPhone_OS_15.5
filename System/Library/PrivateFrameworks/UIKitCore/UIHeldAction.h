//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface UIHeldAction
{
    _Bool _holding;	// 72 = 0x48
    NSDate *_holdBegan;	// 80 = 0x50
    double _baseDelay;	// 88 = 0x58
    double _timeBalance;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000001112d23
- (void)cancel;	// IMP=0x0000000001112ce5
- (void)unschedule;	// IMP=0x0000000001112c90
- (void)touchWithDelay:(double)arg1;	// IMP=0x0000000001112c25
- (_Bool)isHolding;	// IMP=0x0000000001112c15
- (void)resume;	// IMP=0x0000000001112b13
- (void)hold;	// IMP=0x0000000001112a07

@end
