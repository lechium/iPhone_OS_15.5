//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class BMPBSocialHighlightContact, NSMutableArray, NSString;

@interface BMPBRankableSocialHighlight : PBCodable <NSCopying>
{
    double _contentCreationSecondsSinceReferenceDate;	// 8 = 0x8
    double _rankingSecondsSinceReferenceDate;	// 16 = 0x10
    double _score;	// 24 = 0x18
    double _syndicationSecondsSinceReferenceDate;	// 32 = 0x20
    NSMutableArray *_applicationIdentifiers;	// 40 = 0x28
    NSString *_attributionIdentifier;	// 48 = 0x30
    NSString *_batchIdentifier;	// 56 = 0x38
    NSMutableArray *_calculatedFeatures;	// 64 = 0x40
    NSString *_clientIdentifier;	// 72 = 0x48
    NSString *_clientVariant;	// 80 = 0x50
    NSString *_displayName;	// 88 = 0x58
    NSString *_domainIdentifier;	// 96 = 0x60
    NSString *_groupPhotoPathDigest;	// 104 = 0x68
    NSString *_highlightIdentifier;	// 112 = 0x70
    int _highlightType;	// 120 = 0x78
    NSString *_originatingDeviceId;	// 128 = 0x80
    unsigned int _rank;	// 136 = 0x88
    NSString *_resolvedUrl;	// 144 = 0x90
    NSString *_resourceUrl;	// 152 = 0x98
    BMPBSocialHighlightContact *_sender;	// 160 = 0xa0
    NSString *_sourceBundleId;	// 168 = 0xa8
    _Bool _isConversationAutoDonating;	// 176 = 0xb0
    _Bool _isPrimary;	// 177 = 0xb1
    struct {
        unsigned int contentCreationSecondsSinceReferenceDate:1;
        unsigned int rankingSecondsSinceReferenceDate:1;
        unsigned int score:1;
        unsigned int syndicationSecondsSinceReferenceDate:1;
        unsigned int highlightType:1;
        unsigned int rank:1;
        unsigned int isConversationAutoDonating:1;
        unsigned int isPrimary:1;
    } _has;	// 180 = 0xb4
}

+ (Class)calculatedFeaturesType;	// IMP=0x0000000000008da8
+ (Class)applicationIdentifiersType;	// IMP=0x0000000000008c82
- (void).cxx_destruct;	// IMP=0x000000000000c25f
@property(retain, nonatomic) NSString *clientVariant; // @synthesize clientVariant=_clientVariant;
@property(retain, nonatomic) NSString *resolvedUrl; // @synthesize resolvedUrl=_resolvedUrl;
@property(nonatomic) double rankingSecondsSinceReferenceDate; // @synthesize rankingSecondsSinceReferenceDate=_rankingSecondsSinceReferenceDate;
@property(retain, nonatomic) NSString *originatingDeviceId; // @synthesize originatingDeviceId=_originatingDeviceId;
@property(nonatomic) _Bool isConversationAutoDonating; // @synthesize isConversationAutoDonating=_isConversationAutoDonating;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *attributionIdentifier; // @synthesize attributionIdentifier=_attributionIdentifier;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *groupPhotoPathDigest; // @synthesize groupPhotoPathDigest=_groupPhotoPathDigest;
@property(nonatomic) double contentCreationSecondsSinceReferenceDate; // @synthesize contentCreationSecondsSinceReferenceDate=_contentCreationSecondsSinceReferenceDate;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSMutableArray *calculatedFeatures; // @synthesize calculatedFeatures=_calculatedFeatures;
@property(retain, nonatomic) NSString *batchIdentifier; // @synthesize batchIdentifier=_batchIdentifier;
@property(retain, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(retain, nonatomic) BMPBSocialHighlightContact *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(retain, nonatomic) NSMutableArray *applicationIdentifiers; // @synthesize applicationIdentifiers=_applicationIdentifiers;
@property(retain, nonatomic) NSString *sourceBundleId; // @synthesize sourceBundleId=_sourceBundleId;
@property(nonatomic) double syndicationSecondsSinceReferenceDate; // @synthesize syndicationSecondsSinceReferenceDate=_syndicationSecondsSinceReferenceDate;
@property(retain, nonatomic) NSString *highlightIdentifier; // @synthesize highlightIdentifier=_highlightIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000bac6
- (unsigned long long)hash;	// IMP=0x000000000000b3f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000aecc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a8a6
- (void)copyTo:(id)arg1;	// IMP=0x000000000000a4ab
- (void)writeTo:(id)arg1;	// IMP=0x000000000000a009
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000009ffc
- (id)dictionaryRepresentation;	// IMP=0x00000000000090b9
- (id)description;	// IMP=0x000000000000900a
@property(readonly, nonatomic) _Bool hasClientVariant;
@property(readonly, nonatomic) _Bool hasResolvedUrl;
@property(nonatomic) _Bool hasRankingSecondsSinceReferenceDate;
@property(readonly, nonatomic) _Bool hasOriginatingDeviceId;
@property(nonatomic) _Bool hasIsConversationAutoDonating;
@property(nonatomic) _Bool hasScore;
@property(nonatomic) _Bool hasRank;
@property(readonly, nonatomic) _Bool hasAttributionIdentifier;
@property(nonatomic) _Bool hasIsPrimary;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasGroupPhotoPathDigest;
@property(nonatomic) _Bool hasContentCreationSecondsSinceReferenceDate;
@property(readonly, nonatomic) _Bool hasClientIdentifier;
- (id)calculatedFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000008d8b
- (unsigned long long)calculatedFeaturesCount;	// IMP=0x0000000000008d6e
- (void)addCalculatedFeatures:(id)arg1;	// IMP=0x0000000000008d04
- (void)clearCalculatedFeatures;	// IMP=0x0000000000008ce7
@property(readonly, nonatomic) _Bool hasBatchIdentifier;
@property(readonly, nonatomic) _Bool hasDomainIdentifier;
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasResourceUrl;
- (id)applicationIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000008c65
- (unsigned long long)applicationIdentifiersCount;	// IMP=0x0000000000008c48
- (void)addApplicationIdentifiers:(id)arg1;	// IMP=0x0000000000008bde
- (void)clearApplicationIdentifiers;	// IMP=0x0000000000008bc1
@property(readonly, nonatomic) _Bool hasSourceBundleId;
@property(nonatomic) _Bool hasSyndicationSecondsSinceReferenceDate;
- (int)StringAsHighlightType:(id)arg1;	// IMP=0x0000000000008acd
- (id)highlightTypeAsString:(int)arg1;	// IMP=0x0000000000008a67
@property(nonatomic) _Bool hasHighlightType;
@property(nonatomic) int highlightType; // @synthesize highlightType=_highlightType;
@property(readonly, nonatomic) _Bool hasHighlightIdentifier;

@end

