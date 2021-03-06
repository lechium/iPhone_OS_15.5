//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneRequestHeader, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationChannelRequest : PBRequest <NSCopying>
{
    NPKProtoStandaloneRequestHeader *_requestHeader;	// 8 = 0x8
    NSString *_selectedVerificationChannelIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e8491
@property(retain, nonatomic) NSString *selectedVerificationChannelIdentifier; // @synthesize selectedVerificationChannelIdentifier=_selectedVerificationChannelIdentifier;
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001e83cd
- (unsigned long long)hash;	// IMP=0x00000000001e8380
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e82b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e821a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e81bc
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e815a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e814d
- (id)dictionaryRepresentation;	// IMP=0x00000000001e7ea6
- (id)description;	// IMP=0x00000000001e7df7
@property(readonly, nonatomic) _Bool hasSelectedVerificationChannelIdentifier;

@end

