//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupBagIdentity : PBCodable
{
    NSData *_baghash;	// 8 = 0x8
    NSData *_baguuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001b4ffb
@property(retain, nonatomic) NSData *baghash; // @synthesize baghash=_baghash;
@property(retain, nonatomic) NSData *baguuid; // @synthesize baguuid=_baguuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001b4f4e
- (unsigned long long)hash;	// IMP=0x00100000001b4f01
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001b4e39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b4d9b
- (void)copyTo:(id)arg1;	// IMP=0x00100000001b4d38
- (void)writeTo:(id)arg1;	// IMP=0x00100000001b4cdb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001b4cce
- (id)dictionaryRepresentation;	// IMP=0x00100000001b4c4b
- (id)description;	// IMP=0x00100000001b4b9c
@property(readonly, nonatomic) _Bool hasBaghash;
@property(readonly, nonatomic) _Bool hasBaguuid;

@end

