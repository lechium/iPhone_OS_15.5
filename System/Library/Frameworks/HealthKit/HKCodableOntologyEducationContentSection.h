//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HKCodableOntologyEducationContentSection : PBCodable <NSCopying>
{
    long long _type;	// 8 = 0x8
    long long _version;	// 16 = 0x10
    NSMutableArray *_attributions;	// 24 = 0x18
    NSMutableArray *_citations;	// 32 = 0x20
    NSMutableArray *_localeIdentifiers;	// 40 = 0x28
    NSString *_localizedText;	// 48 = 0x30
    NSMutableArray *_validRegionCodes;	// 56 = 0x38
    struct {
        unsigned int type:1;
        unsigned int version:1;
    } _has;	// 64 = 0x40
}

+ (Class)citationsType;	// IMP=0x0000000000104918
+ (Class)attributionsType;	// IMP=0x0000000000104846
+ (Class)validRegionCodesType;	// IMP=0x0000000000104774
+ (Class)localeIdentifiersType;	// IMP=0x00000000001046a2
- (void).cxx_destruct;	// IMP=0x000000000010643a
@property(retain, nonatomic) NSMutableArray *citations; // @synthesize citations=_citations;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *validRegionCodes; // @synthesize validRegionCodes=_validRegionCodes;
@property(retain, nonatomic) NSMutableArray *localeIdentifiers; // @synthesize localeIdentifiers=_localeIdentifiers;
@property(retain, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000105ec3
- (unsigned long long)hash;	// IMP=0x0000000000105ddc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000105c17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010564c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000105368
- (void)writeTo:(id)arg1;	// IMP=0x0000000000104f49
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000104f3c
- (id)dictionaryRepresentation;	// IMP=0x00000000001049d8
- (id)description;	// IMP=0x0000000000104929
- (id)citationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001048fb
- (unsigned long long)citationsCount;	// IMP=0x00000000001048de
- (void)addCitations:(id)arg1;	// IMP=0x0000000000104874
- (void)clearCitations;	// IMP=0x0000000000104857
- (id)attributionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000104829
- (unsigned long long)attributionsCount;	// IMP=0x000000000010480c
- (void)addAttributions:(id)arg1;	// IMP=0x00000000001047a2
- (void)clearAttributions;	// IMP=0x0000000000104785
- (id)validRegionCodesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000104757
- (unsigned long long)validRegionCodesCount;	// IMP=0x000000000010473a
- (void)addValidRegionCodes:(id)arg1;	// IMP=0x00000000001046d0
- (void)clearValidRegionCodes;	// IMP=0x00000000001046b3
- (id)localeIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000104685
- (unsigned long long)localeIdentifiersCount;	// IMP=0x0000000000104668
- (void)addLocaleIdentifiers:(id)arg1;	// IMP=0x00000000001045fe
- (void)clearLocaleIdentifiers;	// IMP=0x00000000001045e1
@property(readonly, nonatomic) _Bool hasLocalizedText;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasType;

@end

