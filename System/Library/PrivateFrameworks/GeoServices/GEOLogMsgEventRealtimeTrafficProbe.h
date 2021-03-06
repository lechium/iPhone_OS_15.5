//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOLogMsgEventRealtimeTrafficProbe : PBCodable <NSCopying>
{
    NSData *_locationCollection;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013e0d98
- (void).cxx_destruct;	// IMP=0x00000000013e1012
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013e0fa3
- (unsigned long long)hash;	// IMP=0x00000000013e0f68
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013e0ea5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013e0e2d
- (void)copyTo:(id)arg1;	// IMP=0x00000000013e0dd8
- (void)writeTo:(id)arg1;	// IMP=0x00000000013e0db4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013e0da5
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013e0d38
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013e0d26
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013e0c1e
- (id)jsonRepresentation;	// IMP=0x00000000013e0c0f
- (id)dictionaryRepresentation;	// IMP=0x00000000013e0b21
- (id)description;	// IMP=0x00000000013e0a72
@property(retain, nonatomic) NSData *locationCollection;
@property(readonly, nonatomic) _Bool hasLocationCollection;

@end

