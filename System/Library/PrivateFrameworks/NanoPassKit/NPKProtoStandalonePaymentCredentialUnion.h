//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneCreditAccountCredential, NPKProtoStandalonePaymentRemoteCredential, NSString;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying>
{
    NPKProtoStandaloneCreditAccountCredential *_creditAccountCredential;	// 8 = 0x8
    NSString *_flowIdentifier;	// 16 = 0x10
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001cdf63
@property(retain, nonatomic) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential; // @synthesize creditAccountCredential=_creditAccountCredential;
@property(retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(retain, nonatomic) NSString *flowIdentifier; // @synthesize flowIdentifier=_flowIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001cde43
- (unsigned long long)hash;	// IMP=0x00000000001cddd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cdcde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cdc1a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001cdb97
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cdb1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cdb10
- (id)dictionaryRepresentation;	// IMP=0x00000000001cd7cc
- (id)description;	// IMP=0x00000000001cd71d
@property(readonly, nonatomic) _Bool hasCreditAccountCredential;
@property(readonly, nonatomic) _Bool hasRemoteCredential;
@property(readonly, nonatomic) _Bool hasFlowIdentifier;

@end

