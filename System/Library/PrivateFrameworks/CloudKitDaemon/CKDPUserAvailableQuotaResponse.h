//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying>
{
    unsigned long long _storageAvailableBytes;	// 8 = 0x8
    struct {
        unsigned int storageAvailableBytes:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long storageAvailableBytes; // @synthesize storageAvailableBytes=_storageAvailableBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000e44a
- (unsigned long long)hash;	// IMP=0x000000000000e422
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e38f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e32b
- (void)copyTo:(id)arg1;	// IMP=0x000000000000e305
- (void)writeTo:(id)arg1;	// IMP=0x000000000000e2d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000e2cc
- (id)dictionaryRepresentation;	// IMP=0x000000000000e056
- (id)description;	// IMP=0x000000000000dfa7
@property(nonatomic) _Bool hasStorageAvailableBytes;

@end
