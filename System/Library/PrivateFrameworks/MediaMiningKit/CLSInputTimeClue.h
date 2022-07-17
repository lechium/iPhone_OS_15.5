//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSSet;

@interface CLSInputTimeClue
{
    NSArray *_dateComponentsArray;	// 104 = 0x68
    NSArray *_events;	// 112 = 0x70
    NSSet *_localDates;	// 120 = 0x78
    NSDate *_localStartDate;	// 128 = 0x80
    NSDate *_localEndDate;	// 136 = 0x88
    NSSet *_universalDates;	// 144 = 0x90
    NSDate *_universalStartDate;	// 152 = 0x98
    NSDate *_universalEndDate;	// 160 = 0xa0
}

+ (id)clueWithDates:(id)arg1;	// IMP=0x000000000005375d
- (void).cxx_destruct;	// IMP=0x00000000000535ee
- (_Bool)isEqualToClue:(id)arg1;	// IMP=0x0000000000053422
- (void)_computeDateProperties;	// IMP=0x0000000000052f9e
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000529a9
- (id)description;	// IMP=0x000000000005278b
@property(copy, nonatomic) NSArray *events; // @synthesize events=_events;
- (unsigned long long)numberOfDays;	// IMP=0x00000000000526df
- (double)timeInterval;	// IMP=0x000000000005269e
- (id)localEndDate;	// IMP=0x0000000000052672
- (id)localStartDate;	// IMP=0x0000000000052646
- (id)localDates;	// IMP=0x000000000005261a
- (id)universalEndDate;	// IMP=0x00000000000525ee
- (id)universalStartDate;	// IMP=0x00000000000525c2
- (id)universalDates;	// IMP=0x0000000000052596

@end
