//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventMapsDeviceSettings : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013c0520
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013c062b
- (unsigned long long)hash;	// IMP=0x00000000013c0611
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013c058f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013c0556
- (void)copyTo:(id)arg1;	// IMP=0x00000000013c0542
- (void)writeTo:(id)arg1;	// IMP=0x00000000013c053c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013c052d
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013c04c6
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013c04b9
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013c0469
- (id)jsonRepresentation;	// IMP=0x00000000013c045f
- (id)dictionaryRepresentation;	// IMP=0x00000000013c0408
- (id)description;	// IMP=0x00000000013c0359

@end
