//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKIntegerEventStatistic
{
    long long _value;	// 8 = 0x8
}

@property(nonatomic) long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000057440
- (void)increment;	// IMP=0x001000000005742b
- (void)reset;	// IMP=0x00100000000573d0
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000057322
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000572aa
- (unsigned long long)hash;	// IMP=0x0010000000057251

@end

