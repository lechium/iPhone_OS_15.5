//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOWifiAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_macId;	// 16 = 0x10
    unsigned long long _scanTimestamp;	// 24 = 0x18
    unsigned int _age;	// 32 = 0x20
    int _channel;	// 36 = 0x24
    int _rssi;	// 40 = 0x28
    CDStruct_e664d718 _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000faa1d2
- (void).cxx_destruct;	// IMP=0x0000000000faaadc
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000faaa96
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000faa9b8
- (unsigned long long)hash;	// IMP=0x0000000000faa8f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000faa792
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000faa690
- (void)copyTo:(id)arg1;	// IMP=0x0000000000faa5c7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000faa4df
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000faa4d0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000fa9c96
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000fa9c84
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000fa99cf
- (id)jsonRepresentation;	// IMP=0x0000000000fa98bd
- (id)dictionaryRepresentation;	// IMP=0x0000000000fa9596
- (id)description;	// IMP=0x0000000000fa94e7
@property(nonatomic) _Bool hasAge;
@property(nonatomic) unsigned int age;
@property(nonatomic) _Bool hasScanTimestamp;
@property(nonatomic) unsigned long long scanTimestamp;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) int channel;
@property(nonatomic) _Bool hasRssi;
@property(nonatomic) int rssi;
@property(retain, nonatomic) NSString *macId;
@property(readonly, nonatomic) _Bool hasMacId;

@end

