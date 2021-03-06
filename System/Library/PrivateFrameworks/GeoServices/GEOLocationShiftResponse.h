//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLocationShiftResponse : PBCodable <NSCopying>
{
    struct GEOPixelPoint _shiftedPixel;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000011158e5
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001115cda
- (unsigned long long)hash;	// IMP=0x0000000001115ca5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001115bf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001115b93
- (void)copyTo:(id)arg1;	// IMP=0x0000000001115b38
- (void)writeTo:(id)arg1;	// IMP=0x0000000001115ad3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001115ac4
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000011156a5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001115698
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000011155a2
- (id)jsonRepresentation;	// IMP=0x0000000001115598
- (id)dictionaryRepresentation;	// IMP=0x00000000011154f5
- (id)description;	// IMP=0x0000000001115446
@property(nonatomic) struct GEOPixelPoint shiftedPixel;

@end

