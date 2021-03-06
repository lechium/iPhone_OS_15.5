//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCloudSyncCodableRegisteredStore : PBCodable <NSCopying>
{
    NSString *_ownerIdentifier;	// 8 = 0x8
    NSString *_storeIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000031346b
@property(retain, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(retain, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003133be
- (unsigned long long)hash;	// IMP=0x0000000000313371
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003132a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031320b
- (void)copyTo:(id)arg1;	// IMP=0x00000000003131a8
- (void)writeTo:(id)arg1;	// IMP=0x000000000031314b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031313e
- (id)dictionaryRepresentation;	// IMP=0x0000000000312f29
- (id)description;	// IMP=0x0000000000312e7a
@property(readonly, nonatomic) _Bool hasStoreIdentifier;
@property(readonly, nonatomic) _Bool hasOwnerIdentifier;

@end

