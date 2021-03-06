//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoHandleValueAddedServiceTransactionsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_transactionPassIDs;	// 8 = 0x8
    NSMutableArray *_transactionsBytes;	// 16 = 0x10
}

+ (Class)transactionPassIDsType;	// IMP=0x00000000001cc6f0
+ (Class)transactionsBytesType;	// IMP=0x00000000001cc61e
- (void).cxx_destruct;	// IMP=0x00000000001cd415
@property(retain, nonatomic) NSMutableArray *transactionPassIDs; // @synthesize transactionPassIDs=_transactionPassIDs;
@property(retain, nonatomic) NSMutableArray *transactionsBytes; // @synthesize transactionsBytes=_transactionsBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001cd189
- (unsigned long long)hash;	// IMP=0x00000000001cd13c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cd074
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ccd78
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ccc18
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cca07
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cc9fa
- (id)dictionaryRepresentation;	// IMP=0x00000000001cc7b0
- (id)description;	// IMP=0x00000000001cc701
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cc6d3
- (unsigned long long)transactionPassIDsCount;	// IMP=0x00000000001cc6b6
- (void)addTransactionPassIDs:(id)arg1;	// IMP=0x00000000001cc64c
- (void)clearTransactionPassIDs;	// IMP=0x00000000001cc62f
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cc601
- (unsigned long long)transactionsBytesCount;	// IMP=0x00000000001cc5e4
- (void)addTransactionsBytes:(id)arg1;	// IMP=0x00000000001cc57a
- (void)clearTransactionsBytes;	// IMP=0x00000000001cc55d

@end

