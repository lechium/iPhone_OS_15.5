//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDPlaceSummaryLayoutUnitName : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000da4e65
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000da4f70
- (unsigned long long)hash;	// IMP=0x0000000000da4f56
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000da4ed4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000da4e9b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000da4e87
- (void)writeTo:(id)arg1;	// IMP=0x0000000000da4e81
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000da4e72
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000da4e0b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000da4dfe
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000da4dae
- (id)jsonRepresentation;	// IMP=0x0000000000da4da4
- (id)dictionaryRepresentation;	// IMP=0x0000000000da4d4d
- (id)description;	// IMP=0x0000000000da4c9e

@end

