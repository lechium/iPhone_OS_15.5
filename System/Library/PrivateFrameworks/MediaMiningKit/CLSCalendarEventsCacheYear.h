//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject
{
    long long _year;	// 8 = 0x8
    NSMutableSet *_months;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008be2f
@property(readonly, nonatomic) NSMutableSet *months; // @synthesize months=_months;
@property(nonatomic) long long year; // @synthesize year=_year;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008bd89
- (unsigned long long)hash;	// IMP=0x000000000008bd7f
- (id)debugDescription;	// IMP=0x000000000008bcd1
- (id)initWithYear:(long long)arg1;	// IMP=0x000000000008bc60

@end
