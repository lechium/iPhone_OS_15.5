//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoDaemonStartedUp : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000bada
- (unsigned long long)hash;	// IMP=0x001000000000bab0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000ba1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000b9bc
- (void)copyTo:(id)arg1;	// IMP=0x001000000000b998
- (void)writeTo:(id)arg1;	// IMP=0x001000000000b96d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000b960
- (id)dictionaryRepresentation;	// IMP=0x001000000000b6e7
- (id)description;	// IMP=0x001000000000b638
@property(nonatomic) _Bool hasVersion;

@end
