//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOLogMsgEventBatchTrafficProbe : PBCodable <NSCopying>
{
    NSData *_locationCollection;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001381e51
- (void).cxx_destruct;	// IMP=0x00000000013820cb
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000138205c
- (unsigned long long)hash;	// IMP=0x0000000001382021
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001381f5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001381ee6
- (void)copyTo:(id)arg1;	// IMP=0x0000000001381e91
- (void)writeTo:(id)arg1;	// IMP=0x0000000001381e6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001381e5e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001381df1
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001381ddf
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001381cd7
- (id)jsonRepresentation;	// IMP=0x0000000001381cc8
- (id)dictionaryRepresentation;	// IMP=0x0000000001381bda
- (id)description;	// IMP=0x0000000001381b2b
@property(retain, nonatomic) NSData *locationCollection;
@property(readonly, nonatomic) _Bool hasLocationCollection;

@end

