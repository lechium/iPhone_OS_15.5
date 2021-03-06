//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProtectedCloudStorage/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSEnvelopedKeyMaterial : PBCodable <NSCopying>
{
    NSData *_encryptedSeed;	// 8 = 0x8
    NSData *_masterKeyId;	// 16 = 0x10
    int _version;	// 24 = 0x18
    struct {
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000001ed4c
@property(retain, nonatomic) NSData *encryptedSeed; // @synthesize encryptedSeed=_encryptedSeed;
@property(retain, nonatomic) NSData *masterKeyId; // @synthesize masterKeyId=_masterKeyId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ec7f
- (unsigned long long)hash;	// IMP=0x000000000001ebff
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001eb0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ea49
- (void)copyTo:(id)arg1;	// IMP=0x000000000001e9c6
- (void)writeTo:(id)arg1;	// IMP=0x000000000001e945
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001e938
- (id)dictionaryRepresentation;	// IMP=0x000000000001e5fb
- (id)description;	// IMP=0x000000000001e54c
@property(readonly, nonatomic) _Bool hasEncryptedSeed;
@property(readonly, nonatomic) _Bool hasMasterKeyId;
- (int)StringAsVersion:(id)arg1;	// IMP=0x000000000001e4c0
- (id)versionAsString:(int)arg1;	// IMP=0x000000000001e46b
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end

