//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGMIMetricsSubmodelStats : PBCodable <NSCopying>
{
    unsigned int _ageOfTheSubmodelInDays;	// 8 = 0x8
    unsigned int _nbExtremelyDiscriminantTokensForIgnorability;	// 12 = 0xc
    unsigned int _nbExtremelyDiscriminantTokensForSaliency;	// 16 = 0x10
    unsigned int _nbHighlyDiscriminantTokensForIgnorability;	// 20 = 0x14
    unsigned int _nbHighlyDiscriminantTokensForSaliency;	// 24 = 0x18
    struct {
        unsigned int ageOfTheSubmodelInDays:1;
        unsigned int nbExtremelyDiscriminantTokensForIgnorability:1;
        unsigned int nbExtremelyDiscriminantTokensForSaliency:1;
        unsigned int nbHighlyDiscriminantTokensForIgnorability:1;
        unsigned int nbHighlyDiscriminantTokensForSaliency:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int nbExtremelyDiscriminantTokensForIgnorability; // @synthesize nbExtremelyDiscriminantTokensForIgnorability=_nbExtremelyDiscriminantTokensForIgnorability;
@property(nonatomic) unsigned int nbExtremelyDiscriminantTokensForSaliency; // @synthesize nbExtremelyDiscriminantTokensForSaliency=_nbExtremelyDiscriminantTokensForSaliency;
@property(nonatomic) unsigned int nbHighlyDiscriminantTokensForIgnorability; // @synthesize nbHighlyDiscriminantTokensForIgnorability=_nbHighlyDiscriminantTokensForIgnorability;
@property(nonatomic) unsigned int nbHighlyDiscriminantTokensForSaliency; // @synthesize nbHighlyDiscriminantTokensForSaliency=_nbHighlyDiscriminantTokensForSaliency;
@property(nonatomic) unsigned int ageOfTheSubmodelInDays; // @synthesize ageOfTheSubmodelInDays=_ageOfTheSubmodelInDays;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010a535
- (unsigned long long)hash;	// IMP=0x000000000010a49e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010a37c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010a2b4
- (void)copyTo:(id)arg1;	// IMP=0x000000000010a20f
- (void)writeTo:(id)arg1;	// IMP=0x000000000010a141
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010a134
- (id)dictionaryRepresentation;	// IMP=0x0000000000109f39
- (id)description;	// IMP=0x0000000000109e8a
@property(nonatomic) _Bool hasNbExtremelyDiscriminantTokensForIgnorability;
@property(nonatomic) _Bool hasNbExtremelyDiscriminantTokensForSaliency;
@property(nonatomic) _Bool hasNbHighlyDiscriminantTokensForIgnorability;
@property(nonatomic) _Bool hasNbHighlyDiscriminantTokensForSaliency;
@property(nonatomic) _Bool hasAgeOfTheSubmodelInDays;

@end
