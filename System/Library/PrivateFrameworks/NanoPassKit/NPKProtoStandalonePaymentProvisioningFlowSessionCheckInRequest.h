//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowSessionCheckInRequest : PBRequest <NSCopying>
{
    NPKProtoStandaloneResponseHeader *_requestHeader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d7b89
@property(retain, nonatomic) NPKProtoStandaloneResponseHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d7b0a
- (unsigned long long)hash;	// IMP=0x00000000000d7aed
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d7a53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d79db
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d79b8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d7973
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d7966
- (id)dictionaryRepresentation;	// IMP=0x00000000000d771b
- (id)description;	// IMP=0x00000000000d766c

@end

