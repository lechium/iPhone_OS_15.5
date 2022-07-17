//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _CDRateAndTotalLimiter
{
    long long _totalCount;	// 8 = 0x8
    long long _currentTotal;	// 16 = 0x10
}

@property long long currentTotal; // @synthesize currentTotal=_currentTotal;
@property(readonly) long long totalCount; // @synthesize totalCount=_totalCount;
- (id)description;	// IMP=0x0000000000054766
- (_Bool)debited;	// IMP=0x00000000000546b0
- (_Bool)credit;	// IMP=0x0000000000054638
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3;	// IMP=0x00000000000545f4
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;	// IMP=0x00000000000545dd

@end
