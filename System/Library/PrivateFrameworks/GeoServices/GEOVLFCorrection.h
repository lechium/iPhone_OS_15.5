//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOVLFCorrection : PBCodable <NSCopying>
{
    unsigned int _altitudeCorrectionMagnitude;	// 8 = 0x8
    unsigned int _headingCorrectionMagnitude;	// 12 = 0xc
    unsigned int _locationCorrectionMagnitude;	// 16 = 0x10
    struct {
        unsigned int has_altitudeCorrectionMagnitude:1;
        unsigned int has_headingCorrectionMagnitude:1;
        unsigned int has_locationCorrectionMagnitude:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000154dfa1
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000154e2fa
- (unsigned long long)hash;	// IMP=0x000000000154e27e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000154e170
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000154e0da
- (void)copyTo:(id)arg1;	// IMP=0x000000000154e04d
- (void)writeTo:(id)arg1;	// IMP=0x000000000154dfbd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000154dfae
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000154df41
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000154df2f
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000154dd55
- (id)jsonRepresentation;	// IMP=0x000000000154dd46
- (id)dictionaryRepresentation;	// IMP=0x000000000154dbaa
- (id)description;	// IMP=0x000000000154dafb
@property(nonatomic) _Bool hasAltitudeCorrectionMagnitude;
@property(nonatomic) unsigned int altitudeCorrectionMagnitude;
@property(nonatomic) _Bool hasHeadingCorrectionMagnitude;
@property(nonatomic) unsigned int headingCorrectionMagnitude;
@property(nonatomic) _Bool hasLocationCorrectionMagnitude;
@property(nonatomic) unsigned int locationCorrectionMagnitude;

@end
