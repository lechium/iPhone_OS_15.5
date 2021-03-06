//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NanoMessagesProtoSyncDeviceSalt : PBCodable
{
    NSData *_deviceSalt;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000295c
@property(retain, nonatomic) NSData *deviceSalt; // @synthesize deviceSalt=_deviceSalt;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000002913
- (unsigned long long)hash;	// IMP=0x00100000000028f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000285c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000027e4
- (void)copyTo:(id)arg1;	// IMP=0x00100000000027ba
- (void)writeTo:(id)arg1;	// IMP=0x0010000000002796
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000002789
- (id)dictionaryRepresentation;	// IMP=0x00100000000025b5
- (id)description;	// IMP=0x0010000000002506
@property(readonly, nonatomic) _Bool hasDeviceSalt;

@end

