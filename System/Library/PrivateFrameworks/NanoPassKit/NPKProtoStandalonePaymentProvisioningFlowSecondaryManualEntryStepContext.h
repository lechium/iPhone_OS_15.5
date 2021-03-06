//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentCredentialUnion, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentCredentialUnion *_credential;	// 8 = 0x8
    NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *_manualEntryStepContext;	// 16 = 0x10
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;	// 24 = 0x18
    _Bool _allowsAddingDifferentCard;	// 32 = 0x20
    struct {
        unsigned int allowsAddingDifferentCard:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000000ea57a
@property(nonatomic) _Bool allowsAddingDifferentCard; // @synthesize allowsAddingDifferentCard=_allowsAddingDifferentCard;
@property(retain, nonatomic) NPKProtoStandalonePaymentCredentialUnion *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext; // @synthesize manualEntryStepContext=_manualEntryStepContext;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ea413
- (unsigned long long)hash;	// IMP=0x00000000000ea379
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea244
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea160
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ea0c2
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ea01e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ea011
- (id)dictionaryRepresentation;	// IMP=0x00000000000e9b6d
- (id)description;	// IMP=0x00000000000e9abe
@property(nonatomic) _Bool hasAllowsAddingDifferentCard;
@property(readonly, nonatomic) _Bool hasCredential;
@property(readonly, nonatomic) _Bool hasRemoteCredential;

@end

