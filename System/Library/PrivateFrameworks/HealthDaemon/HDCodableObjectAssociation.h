//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableObjectAssociation : PBCodable <NSCopying>
{
    NSData *_associationUuid;	// 8 = 0x8
    NSData *_objectUuids;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000050901
@property(retain, nonatomic) NSData *objectUuids; // @synthesize objectUuids=_objectUuids;
@property(retain, nonatomic) NSData *associationUuid; // @synthesize associationUuid=_associationUuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006d613e
- (unsigned long long)hash;	// IMP=0x00000000006d60f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006d6029
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006d5f8b
- (void)copyTo:(id)arg1;	// IMP=0x00000000006d5f28
- (void)writeTo:(id)arg1;	// IMP=0x00000000000508a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006d5f1b
- (id)dictionaryRepresentation;	// IMP=0x00000000006d5d06
- (id)description;	// IMP=0x00000000006d5c57
@property(readonly, nonatomic) _Bool hasObjectUuids;
@property(readonly, nonatomic) _Bool hasAssociationUuid;
- (id)decodedAssociationUUID;	// IMP=0x000000000038d8fc
- (id)initWithAssociationUUID:(id)arg1;	// IMP=0x00000000000507dc

@end

