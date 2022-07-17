//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupKeyClassSigningKey : PBCodable
{
    NSData *_aksRefKey;	// 8 = 0x8
    NSData *_aksWrappedKey;	// 16 = 0x10
    NSData *_backupWrappedKey;	// 24 = 0x18
    int _keyClass;	// 32 = 0x20
    NSData *_publicKey;	// 40 = 0x28
    MISSING_TYPE *_has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000b3f1a
@property(retain, nonatomic) NSData *backupWrappedKey; // @synthesize backupWrappedKey=_backupWrappedKey;
@property(retain, nonatomic) NSData *aksWrappedKey; // @synthesize aksWrappedKey=_aksWrappedKey;
@property(retain, nonatomic) NSData *aksRefKey; // @synthesize aksRefKey=_aksRefKey;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) int keyClass; // @synthesize keyClass=_keyClass;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b3db3
- (unsigned long long)hash;	// IMP=0x00100000000b3cfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b3b97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b3a8a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b39c7
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b390c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b3699
- (id)dictionaryRepresentation;	// IMP=0x00100000000b3566
- (id)description;	// IMP=0x00100000000b34b7
@property(readonly, nonatomic) _Bool hasBackupWrappedKey;
@property(readonly, nonatomic) _Bool hasAksWrappedKey;
@property(readonly, nonatomic) _Bool hasAksRefKey;
@property(readonly, nonatomic) _Bool hasPublicKey;
@property(nonatomic) _Bool hasKeyClass;

@end
