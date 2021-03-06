//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSData *_prekey;	// 16 = 0x10
    NSData *_prekeySignature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000019e3a
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *prekeySignature; // @synthesize prekeySignature=_prekeySignature;
@property(retain, nonatomic) NSData *prekey; // @synthesize prekey=_prekey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000019d57
- (unsigned long long)hash;	// IMP=0x0000000000019c08
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019b27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019a77
- (void)copyTo:(id)arg1;	// IMP=0x00000000000199f4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019973
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000019966
- (id)dictionaryRepresentation;	// IMP=0x0000000000019699
- (id)description;	// IMP=0x00000000000195ea

@end

