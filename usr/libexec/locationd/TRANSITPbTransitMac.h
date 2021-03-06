//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TRANSITPbTransitMac : PBCodable
{
    unsigned long long _mac;	// 8 = 0x8
    struct {
        unsigned int mac:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000005e8321
- (unsigned long long)hash;	// IMP=0x00100000005e82f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005e829a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005e8236
- (void)copyTo:(id)arg1;	// IMP=0x00100000005e8210
- (void)writeTo:(id)arg1;	// IMP=0x00100000005e81e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000005e81d7
- (id)dictionaryRepresentation;	// IMP=0x00100000005e7f88
- (id)description;	// IMP=0x00100000005e7f11
@property(nonatomic) _Bool hasMac;

@end

