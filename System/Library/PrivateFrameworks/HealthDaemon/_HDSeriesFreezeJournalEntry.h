//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSUUID;

@interface _HDSeriesFreezeJournalEntry
{
    NSUUID *_seriesUUID;	// 8 = 0x8
    NSDictionary *_metadata;	// 16 = 0x10
    Class _seriesClass;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000061da4a
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x000000000061d722
- (void).cxx_destruct;	// IMP=0x000000000061dd1e
@property(readonly, nonatomic) Class seriesClass; // @synthesize seriesClass=_seriesClass;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSUUID *seriesUUID; // @synthesize seriesUUID=_seriesUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000061dc14
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000061da52
- (id)description;	// IMP=0x000000000061d6a9
- (id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3;	// IMP=0x000000000061d4c3

@end
