//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoHandleCompanionPeerPaymentRegistrationRequest : PBRequest <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000037530
- (unsigned long long)hash;	// IMP=0x0000000000037528
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000374e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000374aa
- (void)copyTo:(id)arg1;	// IMP=0x00000000000374a4
- (void)writeTo:(id)arg1;	// IMP=0x000000000003749e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000037491
- (id)dictionaryRepresentation;	// IMP=0x0000000000037373
- (id)description;	// IMP=0x00000000000372c4

@end
