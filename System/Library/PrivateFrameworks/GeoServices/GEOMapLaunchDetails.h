//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOMapLaunchDetails : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000358087
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003582da
- (unsigned long long)hash;	// IMP=0x00000000003582c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000035823e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000358205
- (void)copyTo:(id)arg1;	// IMP=0x00000000003581f1
- (void)writeTo:(id)arg1;	// IMP=0x00000000003581eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003581dc
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000357eea
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000357edd
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000357e8d
- (id)jsonRepresentation;	// IMP=0x0000000000357e83
- (id)dictionaryRepresentation;	// IMP=0x0000000000357e2c
- (id)description;	// IMP=0x0000000000357d7d

@end
