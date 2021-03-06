//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRetrievePaymentTransactionsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_transactionPassIDs;	// 8 = 0x8
    NSMutableArray *_transactionsBytes;	// 16 = 0x10
}

+ (Class)transactionPassIDsType;	// IMP=0x00000000000078ed
+ (Class)transactionsBytesType;	// IMP=0x000000000000781b
- (void).cxx_destruct;	// IMP=0x0000000000008612
@property(retain, nonatomic) NSMutableArray *transactionPassIDs; // @synthesize transactionPassIDs=_transactionPassIDs;
@property(retain, nonatomic) NSMutableArray *transactionsBytes; // @synthesize transactionsBytes=_transactionsBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000008386
- (unsigned long long)hash;	// IMP=0x0000000000008339
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008271
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007f75
- (void)copyTo:(id)arg1;	// IMP=0x0000000000007e15
- (void)writeTo:(id)arg1;	// IMP=0x0000000000007c04
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000007bf7
- (id)dictionaryRepresentation;	// IMP=0x00000000000079ad
- (id)description;	// IMP=0x00000000000078fe
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000078d0
- (unsigned long long)transactionPassIDsCount;	// IMP=0x00000000000078b3
- (void)addTransactionPassIDs:(id)arg1;	// IMP=0x0000000000007849
- (void)clearTransactionPassIDs;	// IMP=0x000000000000782c
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000077fe
- (unsigned long long)transactionsBytesCount;	// IMP=0x00000000000077e1
- (void)addTransactionsBytes:(id)arg1;	// IMP=0x0000000000007777
- (void)clearTransactionsBytes;	// IMP=0x000000000000775a

@end

