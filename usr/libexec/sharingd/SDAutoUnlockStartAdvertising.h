//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDAutoUnlockStartAdvertising : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001bad11
- (unsigned long long)hash;	// IMP=0x00100000001bace7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001bac55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001babf3
- (void)copyTo:(id)arg1;	// IMP=0x00100000001babcf
- (void)writeTo:(id)arg1;	// IMP=0x00100000001baba4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001bab97
- (id)dictionaryRepresentation;	// IMP=0x00100000001ba91e
- (id)description;	// IMP=0x00100000001ba86f
@property(nonatomic) _Bool hasVersion;

@end
