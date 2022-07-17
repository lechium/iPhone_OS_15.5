//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface SCLDailySchedule
{
    NSMutableDictionary *_dayMap;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000024d95
- (void).cxx_destruct;	// IMP=0x0000000000025623
@property(retain, nonatomic) NSMutableDictionary *dayMap; // @synthesize dayMap=_dayMap;
- (id)recurrences;	// IMP=0x00000000000254d5
- (id)debugDescription;	// IMP=0x0000000000025265
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025192
- (unsigned long long)hash;	// IMP=0x000000000002514e
- (id)endTimeForDay:(long long)arg1;	// IMP=0x00000000000250fe
- (id)startTimeForDay:(long long)arg1;	// IMP=0x00000000000250ae
- (id)scheduleForDay:(long long)arg1;	// IMP=0x0000000000025027
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024ffd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024edb
- (id)initWithSchedule:(id)arg1;	// IMP=0x0000000000024e33
- (id)init;	// IMP=0x0000000000024dd6
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024da8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024d9d

@end
