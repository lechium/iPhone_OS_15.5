//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDecimalNumber, NSString, NSURL, PKCurrencyAmount;

@interface PKTransactionReceipt : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_uniqueID;	// 8 = 0x8
    NSString *_receiptProviderIdentifier;	// 16 = 0x10
    NSString *_receiptIdentifier;	// 24 = 0x18
    NSDate *_lastUpdatedDate;	// 32 = 0x20
    NSURL *_supportURL;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    NSDecimalNumber *_subtotalAmount;	// 56 = 0x38
    NSDecimalNumber *_totalAmount;	// 64 = 0x40
    NSString *_currencyCode;	// 72 = 0x48
    NSArray *_headerFields;	// 80 = 0x50
    NSArray *_lineItems;	// 88 = 0x58
    NSArray *_summaryItems;	// 96 = 0x60
    NSData *_pdfReceiptData;	// 104 = 0x68
    NSData *_htmlReceiptData;	// 112 = 0x70
    NSURL *_fileURL;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004c1e4
- (void).cxx_destruct;	// IMP=0x000000000004cad4
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *htmlReceiptData; // @synthesize htmlReceiptData=_htmlReceiptData;
@property(readonly, nonatomic) NSData *pdfReceiptData; // @synthesize pdfReceiptData=_pdfReceiptData;
@property(readonly, nonatomic) NSArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(readonly, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(readonly, nonatomic) NSArray *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSDecimalNumber *subtotalAmount; // @synthesize subtotalAmount=_subtotalAmount;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURL *supportURL; // @synthesize supportURL=_supportURL;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(copy, nonatomic) NSString *receiptIdentifier; // @synthesize receiptIdentifier=_receiptIdentifier;
@property(copy, nonatomic) NSString *receiptProviderIdentifier; // @synthesize receiptProviderIdentifier=_receiptProviderIdentifier;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, nonatomic) PKCurrencyAmount *totalCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c774
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004c613
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004c1ec
- (unsigned long long)hash;	// IMP=0x000000000004c0ed
- (_Bool)isEqualToTransactionReceipt:(id)arg1;	// IMP=0x000000000004bde1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004bd79
- (id)description;	// IMP=0x000000000004bc03
- (void)updateWithBundle:(id)arg1;	// IMP=0x000000000004b4cc
- (id)initWithFileURL:(id)arg1;	// IMP=0x000000000004b40d

@end

