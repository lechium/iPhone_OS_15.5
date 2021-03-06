//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying>
{
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;	// 8 = 0x8
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_sourceChannelCohorts;	// 16 = 0x10
    NSMutableArray *_topicCohortScores;	// 24 = 0x18
    NSMutableArray *_topicCohorts;	// 32 = 0x20
}

+ (Class)topicCohortScoresType;	// IMP=0x00000000000d3759
+ (Class)topicCohortsType;	// IMP=0x00000000000d365d
- (void).cxx_destruct;	// IMP=0x00000000000d4b84
@property(retain, nonatomic) NSMutableArray *topicCohortScores; // @synthesize topicCohortScores=_topicCohortScores;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts; // @synthesize sourceChannelCohorts=_sourceChannelCohorts;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // @synthesize globalCohorts=_globalCohorts;
@property(retain, nonatomic) NSMutableArray *topicCohorts; // @synthesize topicCohorts=_topicCohorts;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d4840
- (unsigned long long)hash;	// IMP=0x00000000000d47bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d4690
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d432c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d4188
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d3f35
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d3f28
- (id)dictionaryRepresentation;	// IMP=0x00000000000d3819
- (id)description;	// IMP=0x00000000000d376a
- (id)topicCohortScoresAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d373c
- (unsigned long long)topicCohortScoresCount;	// IMP=0x00000000000d371f
- (void)addTopicCohortScores:(id)arg1;	// IMP=0x00000000000d36b5
- (void)clearTopicCohortScores;	// IMP=0x00000000000d3698
@property(readonly, nonatomic) _Bool hasSourceChannelCohorts;
@property(readonly, nonatomic) _Bool hasGlobalCohorts;
- (id)topicCohortsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d3640
- (unsigned long long)topicCohortsCount;	// IMP=0x00000000000d3623
- (void)addTopicCohorts:(id)arg1;	// IMP=0x00000000000d35b9
- (void)clearTopicCohorts;	// IMP=0x00000000000d359c

@end

