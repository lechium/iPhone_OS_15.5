//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoRevokeSubcredentialsResponse : PBCodable <NSCopying>
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001662cd
- (unsigned long long)hash;	// IMP=0x00000000001662a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000166200
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016619e
- (void)copyTo:(id)arg1;	// IMP=0x000000000016617a
- (void)writeTo:(id)arg1;	// IMP=0x000000000016614e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000166141
- (id)dictionaryRepresentation;	// IMP=0x0000000000165ec7
- (id)description;	// IMP=0x0000000000165e18
@property(nonatomic) _Bool hasSuccess;

@end
