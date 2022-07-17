//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivityAchievementsDaemon/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface HDActivityAWDActivityAchievementCountEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _totalAchievementCount;	// 16 = 0x10
    int _totalOTAAchievementCount;	// 20 = 0x14
    int _totalOTAAchievementViewedCount;	// 24 = 0x18
    _Bool _moreThanOneYearSinceActivitySetup;	// 28 = 0x1c
    struct {
        unsigned int timestamp:1;
        unsigned int totalAchievementCount:1;
        unsigned int totalOTAAchievementCount:1;
        unsigned int totalOTAAchievementViewedCount:1;
        unsigned int moreThanOneYearSinceActivitySetup:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) _Bool moreThanOneYearSinceActivitySetup; // @synthesize moreThanOneYearSinceActivitySetup=_moreThanOneYearSinceActivitySetup;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000025031
- (unsigned long long)hash;	// IMP=0x0000000000024f96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024e66
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024d9c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000024cf5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000024c25
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000024c18
- (id)dictionaryRepresentation;	// IMP=0x00000000000244c6
- (id)description;	// IMP=0x0000000000024417
- (int)StringAsTotalOTAAchievementViewedCount:(id)arg1;	// IMP=0x0000000000024368
- (id)totalOTAAchievementViewedCountAsString:(int)arg1;	// IMP=0x00000000000242e9
@property(nonatomic) _Bool hasTotalOTAAchievementViewedCount;
@property(nonatomic) int totalOTAAchievementViewedCount; // @synthesize totalOTAAchievementViewedCount=_totalOTAAchievementViewedCount;
- (int)StringAsTotalOTAAchievementCount:(id)arg1;	// IMP=0x00000000000241d0
- (id)totalOTAAchievementCountAsString:(int)arg1;	// IMP=0x0000000000024150
@property(nonatomic) _Bool hasTotalOTAAchievementCount;
@property(nonatomic) int totalOTAAchievementCount; // @synthesize totalOTAAchievementCount=_totalOTAAchievementCount;
@property(nonatomic) _Bool hasMoreThanOneYearSinceActivitySetup;
- (int)StringAsTotalAchievementCount:(id)arg1;	// IMP=0x0000000000023fec
- (id)totalAchievementCountAsString:(int)arg1;	// IMP=0x0000000000023f6e
@property(nonatomic) _Bool hasTotalAchievementCount;
@property(nonatomic) int totalAchievementCount; // @synthesize totalAchievementCount=_totalAchievementCount;
@property(nonatomic) _Bool hasTimestamp;

@end
