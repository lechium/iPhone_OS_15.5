//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

@interface RETimeContentProvider
{
    NSDate *_date;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

+ (id)timeContentProviderWithDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x00000000000a28e3
- (void).cxx_destruct;	// IMP=0x00000000000a2e59
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)attributedStringRepresentation;	// IMP=0x00000000000a2d43
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a2c7e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a2c03
- (id)clockKitTextProviderRepresentation;	// IMP=0x00000000000a2bc9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a2abe
- (unsigned long long)hash;	// IMP=0x00000000000a2a71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a2a16
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x00000000000a294f

@end

