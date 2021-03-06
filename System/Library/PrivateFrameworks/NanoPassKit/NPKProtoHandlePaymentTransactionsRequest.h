//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_passAppletStates;	// 8 = 0x8
    NSMutableArray *_transactionPassIDs;	// 16 = 0x10
    NSMutableArray *_transactionsBytes;	// 24 = 0x18
}

+ (Class)passAppletStatesType;	// IMP=0x00000000000a635e
+ (Class)transactionPassIDsType;	// IMP=0x00000000000a628c
+ (Class)transactionsBytesType;	// IMP=0x00000000000a61ba
- (void).cxx_destruct;	// IMP=0x00000000000a74e0
@property(retain, nonatomic) NSMutableArray *passAppletStates; // @synthesize passAppletStates=_passAppletStates;
@property(retain, nonatomic) NSMutableArray *transactionPassIDs; // @synthesize transactionPassIDs=_transactionPassIDs;
@property(retain, nonatomic) NSMutableArray *transactionsBytes; // @synthesize transactionsBytes=_transactionsBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a713f
- (unsigned long long)hash;	// IMP=0x00000000000a70d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a6fda
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a6ba5
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a69b4
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a66cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a66c0
- (id)dictionaryRepresentation;	// IMP=0x00000000000a641e
- (id)description;	// IMP=0x00000000000a636f
- (id)passAppletStatesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a6341
- (unsigned long long)passAppletStatesCount;	// IMP=0x00000000000a6324
- (void)addPassAppletStates:(id)arg1;	// IMP=0x00000000000a62ba
- (void)clearPassAppletStates;	// IMP=0x00000000000a629d
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a626f
- (unsigned long long)transactionPassIDsCount;	// IMP=0x00000000000a6252
- (void)addTransactionPassIDs:(id)arg1;	// IMP=0x00000000000a61e8
- (void)clearTransactionPassIDs;	// IMP=0x00000000000a61cb
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a619d
- (unsigned long long)transactionsBytesCount;	// IMP=0x00000000000a6180
- (void)addTransactionsBytes:(id)arg1;	// IMP=0x00000000000a6116
- (void)clearTransactionsBytes;	// IMP=0x00000000000a60f9

@end

