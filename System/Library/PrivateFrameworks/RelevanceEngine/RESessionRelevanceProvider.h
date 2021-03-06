//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface RESessionRelevanceProvider
{
    _Bool _historic;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
}

+ (id)_simulationDateFormatter;	// IMP=0x0000000000097501
+ (id)relevanceSimulatorID;	// IMP=0x00000000000974f4
- (void).cxx_destruct;	// IMP=0x0000000000097bb5
@property(readonly, nonatomic, getter=isHistoric) _Bool historic; // @synthesize historic=_historic;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x0000000000097adc
- (unsigned long long)_hash;	// IMP=0x0000000000097a44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097949
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000978da
- (id)dictionaryEncoding;	// IMP=0x000000000009773d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000097571
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 historic:(_Bool)arg3;	// IMP=0x00000000000973be
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000000973a9
- (id)init;	// IMP=0x0000000000097393

@end

