//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoSecureElementRemoveAppletsResponse : PBCodable <NSCopying>
{
    _Bool _pending;	// 8 = 0x8
    _Bool _success;	// 9 = 0x9
    CDStruct_5ee4970e _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001e99ab
- (unsigned long long)hash;	// IMP=0x00000000001e9965
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e9897
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e981a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e97c0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e974d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e9740
- (id)dictionaryRepresentation;	// IMP=0x00000000001e93bb
- (id)description;	// IMP=0x00000000001e930c
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end
