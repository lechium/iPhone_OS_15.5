//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2UserCreatedMetadata : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    int _algorithm;	// 16 = 0x10
    int _domain;	// 20 = 0x14
    int _source;	// 24 = 0x18
    struct {
        unsigned int algorithm:1;
        unsigned int domain:1;
        unsigned int source:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000018f27d
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018f1bd
- (unsigned long long)hash;	// IMP=0x000000000018f138
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018f02d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018ef65
- (void)copyTo:(id)arg1;	// IMP=0x000000000018eeca
- (void)writeTo:(id)arg1;	// IMP=0x000000000018ee1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018ee10
- (id)dictionaryRepresentation;	// IMP=0x000000000018e944
- (id)description;	// IMP=0x000000000018e895
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsDomain:(id)arg1;	// IMP=0x000000000018e748
- (id)domainAsString:(int)arg1;	// IMP=0x000000000018e696
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;
- (int)StringAsAlgorithm:(id)arg1;	// IMP=0x000000000018e328
- (id)algorithmAsString:(int)arg1;	// IMP=0x000000000018e1a9
@property(nonatomic) _Bool hasAlgorithm;
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
- (int)StringAsSource:(id)arg1;	// IMP=0x000000000018dddc
- (id)sourceAsString:(int)arg1;	// IMP=0x000000000018dc2d
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

