//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreML/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIRawKey : PBCodable <NSCopying>
{
    NSData *_encryptionIv;	// 8 = 0x8
    NSData *_encryptionKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000062b92
@property(retain, nonatomic) NSData *encryptionIv; // @synthesize encryptionIv=_encryptionIv;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000062ae5
- (unsigned long long)hash;	// IMP=0x0000000000062a98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000629d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000062932
- (void)copyTo:(id)arg1;	// IMP=0x00000000000628cf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000062872
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000062865
- (id)dictionaryRepresentation;	// IMP=0x00000000000627e2
- (id)description;	// IMP=0x0000000000062733
@property(readonly, nonatomic) _Bool hasEncryptionIv;
@property(readonly, nonatomic) _Bool hasEncryptionKey;

@end
