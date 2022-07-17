//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoCheckFidoKeyPresenceResponse : PBCodable <NSCopying>
{
    _Bool _keyExists;	// 8 = 0x8
    struct {
        unsigned int keyExists:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool keyExists; // @synthesize keyExists=_keyExists;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003249c
- (unsigned long long)hash;	// IMP=0x0000000000032471
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000323cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003236d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000032349
- (void)writeTo:(id)arg1;	// IMP=0x000000000003231d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000032310
- (id)dictionaryRepresentation;	// IMP=0x0000000000032096
- (id)description;	// IMP=0x0000000000031fe7
@property(nonatomic) _Bool hasKeyExists;

@end
