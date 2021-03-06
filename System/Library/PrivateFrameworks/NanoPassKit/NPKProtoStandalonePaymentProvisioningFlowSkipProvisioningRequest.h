//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowSkipProvisioningRequest : PBRequest <NSCopying>
{
    NPKProtoStandaloneRequestHeader *_requestHeader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001eba87
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001eba08
- (unsigned long long)hash;	// IMP=0x00000000001eb9eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eb951
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eb8d9
- (void)copyTo:(id)arg1;	// IMP=0x00000000001eb8b6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001eb871
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001eb864
- (id)dictionaryRepresentation;	// IMP=0x00000000001eb619
- (id)description;	// IMP=0x00000000001eb56a

@end

