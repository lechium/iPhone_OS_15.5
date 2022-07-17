//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BCSHoursMessage : PBCodable <NSCopying>
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _days;	// 8 = 0x8
    NSMutableArray *_timeRanges;	// 32 = 0x20
}

+ (Class)timeRangeType;	// IMP=0x0000000000028af7
- (void).cxx_destruct;	// IMP=0x00000000000299dc
@property(retain, nonatomic) NSMutableArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000297fe
- (unsigned long long)hash;	// IMP=0x00000000000297c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029710
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002953a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000293fb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000029299
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002928c
- (id)dictionaryRepresentation;	// IMP=0x0000000000028bb7
- (id)description;	// IMP=0x0000000000028b08
- (id)timeRangeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000028ada
- (unsigned long long)timeRangesCount;	// IMP=0x0000000000028abd
- (void)addTimeRange:(id)arg1;	// IMP=0x0000000000028a53
- (void)clearTimeRanges;	// IMP=0x0000000000028a36
- (int)StringAsDays:(id)arg1;	// IMP=0x00000000000288f8
- (id)daysAsString:(int)arg1;	// IMP=0x0000000000028843
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002882c
- (int)dayAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002875f
- (void)addDay:(int)arg1;	// IMP=0x000000000002874c
- (void)clearDays;	// IMP=0x000000000002873b
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;	// IMP=0x00000000000286d8

@end
