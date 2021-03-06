//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@class NSData, NSString;

@interface DESEncryptedData : PBCodable <NSCopying>
{
    NSString *_algorithm;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSData *_encryptedKey;	// 24 = 0x18
    int _version;	// 32 = 0x20
    struct {
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000002d8c2
@property(retain, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002d7a0
- (unsigned long long)hash;	// IMP=0x000000000002d709
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002d5d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d4f2
- (void)copyTo:(id)arg1;	// IMP=0x000000000002d454
- (void)writeTo:(id)arg1;	// IMP=0x000000000002d3b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002d3a4
- (id)dictionaryRepresentation;	// IMP=0x000000000002d032
- (id)description;	// IMP=0x000000000002cf83
@property(readonly, nonatomic) _Bool hasAlgorithm;
@property(readonly, nonatomic) _Bool hasEncryptedKey;
@property(nonatomic) _Bool hasVersion;

@end

