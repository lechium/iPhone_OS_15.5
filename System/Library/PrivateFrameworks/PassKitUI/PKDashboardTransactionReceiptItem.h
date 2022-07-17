//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSSet, NSString, PKAccount, PKAccountUserCollection, PKFamilyMemberCollection, PKPaymentTransaction, PKTransactionReceipt, PKTransactionSourceCollection;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem>
{
    PKTransactionReceipt *_receipt;	// 8 = 0x8
    PKPaymentTransaction *_transaction;	// 16 = 0x10
    PKTransactionSourceCollection *_transactionSourceCollection;	// 24 = 0x18
    PKAccount *_account;	// 32 = 0x20
    PKAccountUserCollection *_accountUserCollection;	// 40 = 0x28
    PKFamilyMemberCollection *_familyCollection;	// 48 = 0x30
    NSSet *_physicalCards;	// 56 = 0x38
}

+ (id)identifier;	// IMP=0x00000000000ccbb2
- (void).cxx_destruct;	// IMP=0x00000000000ccc7a
@property(copy, nonatomic) NSSet *physicalCards; // @synthesize physicalCards=_physicalCards;
@property(retain, nonatomic) PKFamilyMemberCollection *familyCollection; // @synthesize familyCollection=_familyCollection;
@property(retain, nonatomic) PKAccountUserCollection *accountUserCollection; // @synthesize accountUserCollection=_accountUserCollection;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // @synthesize transactionSourceCollection=_transactionSourceCollection;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) PKTransactionReceipt *receipt; // @synthesize receipt=_receipt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
