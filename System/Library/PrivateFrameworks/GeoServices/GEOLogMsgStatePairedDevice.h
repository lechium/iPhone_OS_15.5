//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying>
{
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;	// 8 = 0x8
    int _type;	// 16 = 0x10
    _Bool _isConnected;	// 20 = 0x14
    struct {
        unsigned int has_type:1;
        unsigned int has_isConnected:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014e2891
- (void).cxx_destruct;	// IMP=0x00000000014e2cc7
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014e2c1e
- (unsigned long long)hash;	// IMP=0x00000000014e2b94
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014e2a7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014e29ce
- (void)copyTo:(id)arg1;	// IMP=0x00000000014e293c
- (void)writeTo:(id)arg1;	// IMP=0x00000000014e28ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014e289e
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014e2831
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014e281f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014e257c
- (id)jsonRepresentation;	// IMP=0x00000000014e256d
- (id)dictionaryRepresentation;	// IMP=0x00000000014e2384
- (id)description;	// IMP=0x00000000014e22d5
@property(retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;
@property(readonly, nonatomic) _Bool hasPairedDeviceIdentifier;
@property(nonatomic) _Bool hasIsConnected;
@property(nonatomic) _Bool isConnected;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000014e21ac
- (id)typeAsString:(int)arg1;	// IMP=0x00000000014e2146
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end
