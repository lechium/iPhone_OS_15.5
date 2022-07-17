//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NPKProtoGenerateTransactionKeyWithParametersResponse : PBCodable <NSCopying>
{
    NSData *_appletIdentifier;	// 8 = 0x8
    NSData *_errorData;	// 16 = 0x10
    NSMutableArray *_transactionKeyCertChains;	// 24 = 0x18
    NSString *_transactionKeyIdentifier;	// 32 = 0x20
}

+ (Class)transactionKeyCertChainType;	// IMP=0x000000000006bbe2
- (void).cxx_destruct;	// IMP=0x000000000006c8c5
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *appletIdentifier; // @synthesize appletIdentifier=_appletIdentifier;
@property(retain, nonatomic) NSMutableArray *transactionKeyCertChains; // @synthesize transactionKeyCertChains=_transactionKeyCertChains;
@property(retain, nonatomic) NSString *transactionKeyIdentifier; // @synthesize transactionKeyIdentifier=_transactionKeyIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006c676
- (unsigned long long)hash;	// IMP=0x000000000006c5f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006c4c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006c283
- (void)copyTo:(id)arg1;	// IMP=0x000000000006c156
- (void)writeTo:(id)arg1;	// IMP=0x000000000006bfbd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006bfb0
- (id)dictionaryRepresentation;	// IMP=0x000000000006bccc
- (id)description;	// IMP=0x000000000006bc1d
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasAppletIdentifier;
- (id)transactionKeyCertChainAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006bbc5
- (unsigned long long)transactionKeyCertChainsCount;	// IMP=0x000000000006bba8
- (void)addTransactionKeyCertChain:(id)arg1;	// IMP=0x000000000006bb3e
- (void)clearTransactionKeyCertChains;	// IMP=0x000000000006bb21
@property(readonly, nonatomic) _Bool hasTransactionKeyIdentifier;

@end
