//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HKCodableHealthRecordsEduSection : PBCodable <NSCopying>
{
    long long _sectionType;	// 8 = 0x8
    NSMutableArray *_sectionAttributions;	// 16 = 0x10
    NSMutableArray *_sectionCitations;	// 24 = 0x18
    NSMutableArray *_sectionLocaleIdentifiers;	// 32 = 0x20
    NSString *_sectionLocalizedContent;	// 40 = 0x28
    NSMutableArray *_sectionValidRegionCodes;	// 48 = 0x30
    struct {
        unsigned int sectionType:1;
    } _has;	// 56 = 0x38
}

+ (Class)sectionCitationsType;	// IMP=0x00000000001f2efe
+ (Class)sectionAttributionsType;	// IMP=0x00000000001f2e2c
+ (Class)sectionValidRegionCodesType;	// IMP=0x00000000001f2d5a
+ (Class)sectionLocaleIdentifiersType;	// IMP=0x00000000001f2c88
- (void).cxx_destruct;	// IMP=0x00000000001f4828
@property(retain, nonatomic) NSMutableArray *sectionCitations; // @synthesize sectionCitations=_sectionCitations;
@property(retain, nonatomic) NSMutableArray *sectionAttributions; // @synthesize sectionAttributions=_sectionAttributions;
@property(retain, nonatomic) NSMutableArray *sectionValidRegionCodes; // @synthesize sectionValidRegionCodes=_sectionValidRegionCodes;
@property(retain, nonatomic) NSMutableArray *sectionLocaleIdentifiers; // @synthesize sectionLocaleIdentifiers=_sectionLocaleIdentifiers;
@property(retain, nonatomic) NSString *sectionLocalizedContent; // @synthesize sectionLocalizedContent=_sectionLocalizedContent;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f42f5
- (unsigned long long)hash;	// IMP=0x00000000001f4224
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f408c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f3b04
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f383e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f3441
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f3434
- (id)dictionaryRepresentation;	// IMP=0x00000000001f2fbe
- (id)description;	// IMP=0x00000000001f2f0f
- (id)sectionCitationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f2ee1
- (unsigned long long)sectionCitationsCount;	// IMP=0x00000000001f2ec4
- (void)addSectionCitations:(id)arg1;	// IMP=0x00000000001f2e5a
- (void)clearSectionCitations;	// IMP=0x00000000001f2e3d
- (id)sectionAttributionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f2e0f
- (unsigned long long)sectionAttributionsCount;	// IMP=0x00000000001f2df2
- (void)addSectionAttributions:(id)arg1;	// IMP=0x00000000001f2d88
- (void)clearSectionAttributions;	// IMP=0x00000000001f2d6b
- (id)sectionValidRegionCodesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f2d3d
- (unsigned long long)sectionValidRegionCodesCount;	// IMP=0x00000000001f2d20
- (void)addSectionValidRegionCodes:(id)arg1;	// IMP=0x00000000001f2cb6
- (void)clearSectionValidRegionCodes;	// IMP=0x00000000001f2c99
- (id)sectionLocaleIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f2c6b
- (unsigned long long)sectionLocaleIdentifiersCount;	// IMP=0x00000000001f2c4e
- (void)addSectionLocaleIdentifiers:(id)arg1;	// IMP=0x00000000001f2be4
- (void)clearSectionLocaleIdentifiers;	// IMP=0x00000000001f2bc7
@property(readonly, nonatomic) _Bool hasSectionLocalizedContent;
@property(nonatomic) _Bool hasSectionType;

@end

