//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDateComponents, NSDictionary, _HKDateIntervalCollection;

@interface HKValueHistogramCollection : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_quantityRanges;	// 8 = 0x8
    NSDate *_anchorDate;	// 16 = 0x10
    NSDateComponents *_intervalComponents;	// 24 = 0x18
    NSDictionary *_valueHistogramsByDateIntervalIndex;	// 32 = 0x20
    _HKDateIntervalCollection *_intervalCollection;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fce7b
- (void).cxx_destruct;	// IMP=0x00000000000fd0f4
@property(readonly, nonatomic) _HKDateIntervalCollection *intervalCollection; // @synthesize intervalCollection=_intervalCollection;
@property(readonly, nonatomic) NSDictionary *valueHistogramsByDateIntervalIndex; // @synthesize valueHistogramsByDateIntervalIndex=_valueHistogramsByDateIntervalIndex;
@property(readonly, copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(readonly, copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property(readonly, copy, nonatomic) NSArray *quantityRanges; // @synthesize quantityRanges=_quantityRanges;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fd02d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fce83
- (id)description;	// IMP=0x00000000000fce2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fce21
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fcd51
- (id)valueHistogramForDate:(id)arg1;	// IMP=0x00000000000fccb9
@property(readonly, copy, nonatomic) NSArray *valueHistograms;
- (id)initWithQuantityRanges:(id)arg1 valueHistogramsByDateIntervalIndex:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4;	// IMP=0x00000000000fcabe

@end

