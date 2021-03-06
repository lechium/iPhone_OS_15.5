//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitDateComponents, NSData;

@interface ASCodableCloudKitCompetition : PBCodable <NSCopying>
{
    CDStruct_5df41632 _opponentScores;	// 8 = 0x8
    CDStruct_95bda58d _preferredVictoryBadgeStyles;	// 32 = 0x20
    CDStruct_5df41632 _scores;	// 56 = 0x38
    long long _currentCacheIndex;	// 80 = 0x50
    long long _maximumNumberOfPointsPerDay;	// 88 = 0x58
    ASCodableCloudKitDateComponents *_durationDateComponents;	// 96 = 0x60
    ASCodableCloudKitDateComponents *_startDateComponents;	// 104 = 0x68
    NSData *_uuid;	// 112 = 0x70
    struct {
        unsigned int currentCacheIndex:1;
        unsigned int maximumNumberOfPointsPerDay:1;
    } _has;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000000e8d4
@property(nonatomic) long long maximumNumberOfPointsPerDay; // @synthesize maximumNumberOfPointsPerDay=_maximumNumberOfPointsPerDay;
@property(retain, nonatomic) ASCodableCloudKitDateComponents *durationDateComponents; // @synthesize durationDateComponents=_durationDateComponents;
@property(retain, nonatomic) ASCodableCloudKitDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
@property(nonatomic) long long currentCacheIndex; // @synthesize currentCacheIndex=_currentCacheIndex;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000e621
- (unsigned long long)hash;	// IMP=0x000000000000e51a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e367
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e223
- (void)copyTo:(id)arg1;	// IMP=0x000000000000dfd6
- (void)writeTo:(id)arg1;	// IMP=0x000000000000de6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000de60
- (id)dictionaryRepresentation;	// IMP=0x000000000000d4af
- (id)description;	// IMP=0x000000000000d400
@property(nonatomic) _Bool hasMaximumNumberOfPointsPerDay;
- (void)setPreferredVictoryBadgeStyles:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000d39f
- (int)preferredVictoryBadgeStylesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000d2d2
- (void)addPreferredVictoryBadgeStyles:(int)arg1;	// IMP=0x000000000000d2bf
- (void)clearPreferredVictoryBadgeStyles;	// IMP=0x000000000000d2ae
@property(readonly, nonatomic) int *preferredVictoryBadgeStyles;
@property(readonly, nonatomic) unsigned long long preferredVictoryBadgeStylesCount;
@property(readonly, nonatomic) _Bool hasDurationDateComponents;
@property(readonly, nonatomic) _Bool hasStartDateComponents;
- (void)setOpponentScores:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000d24a
- (long long)opponentScoresAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000d17d
- (void)addOpponentScores:(long long)arg1;	// IMP=0x000000000000d169
- (void)clearOpponentScores;	// IMP=0x000000000000d158
@property(readonly, nonatomic) long long *opponentScores;
@property(readonly, nonatomic) unsigned long long opponentScoresCount;
- (void)setScores:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000d11e
- (long long)scoresAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000d051
- (void)addScores:(long long)arg1;	// IMP=0x000000000000d03d
- (void)clearScores;	// IMP=0x000000000000d02c
@property(readonly, nonatomic) long long *scores;
@property(readonly, nonatomic) unsigned long long scoresCount;
@property(nonatomic) _Bool hasCurrentCacheIndex;
@property(readonly, nonatomic) _Bool hasUuid;
- (void)dealloc;	// IMP=0x000000000000cf50

@end

