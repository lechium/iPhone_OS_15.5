//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOVersionManifest : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_serviceVersions;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000006fc97c
+ (Class)serviceVersionType;	// IMP=0x00000000006fbc03
- (void).cxx_destruct;	// IMP=0x00000000006fd19f
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000006fd02f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006fceae
- (unsigned long long)hash;	// IMP=0x00000000006fce73
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006fcdb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006fcbca
- (void)copyTo:(id)arg1;	// IMP=0x00000000006fcaf7
- (void)writeTo:(id)arg1;	// IMP=0x00000000006fc998
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006fc989
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000006fc6ca
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000006fc6b8
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000006fc189
- (id)jsonRepresentation;	// IMP=0x00000000006fc077
- (id)dictionaryRepresentation;	// IMP=0x00000000006fbcc3
- (id)description;	// IMP=0x00000000006fbc14
- (id)serviceVersionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006fbbe6
- (unsigned long long)serviceVersionsCount;	// IMP=0x00000000006fbbc9
- (void)addServiceVersion:(id)arg1;	// IMP=0x00000000006fbb5f
- (void)clearServiceVersions;	// IMP=0x00000000006fbb42
@property(retain, nonatomic) NSMutableArray *serviceVersions;

@end

