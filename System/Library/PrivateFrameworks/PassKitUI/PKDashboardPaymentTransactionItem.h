//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSSet, NSString, PKAccount, PKAccountUserCollection, PKFamilyMemberCollection, PKPaymentPass, PKPaymentTransaction, PKTransactionSource, PKTransactionSourceCollection;

@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem>
{
    PKPaymentPass *_pass;	// 8 = 0x8
    PKPaymentTransaction *_transaction;	// 16 = 0x10
    _Bool _isFeaturedTransaction;	// 24 = 0x18
    PKTransactionSourceCollection *_transactionSourceCollection;	// 32 = 0x20
    PKFamilyMemberCollection *_familyCollection;	// 40 = 0x28
    PKTransactionSource *_secondaryTransactionSource;	// 48 = 0x30
    PKAccount *_account;	// 56 = 0x38
    PKAccountUserCollection *_accountUserCollection;	// 64 = 0x40
    NSSet *_physicalCards;	// 72 = 0x48
}

+ (id)identifier;	// IMP=0x00000000000cbd30
- (void).cxx_destruct;	// IMP=0x00000000000cbde8
@property(nonatomic) _Bool isFeaturedTransaction; // @synthesize isFeaturedTransaction=_isFeaturedTransaction;
@property(copy, nonatomic) NSSet *physicalCards; // @synthesize physicalCards=_physicalCards;
@property(retain, nonatomic) PKAccountUserCollection *accountUserCollection; // @synthesize accountUserCollection=_accountUserCollection;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) PKTransactionSource *secondaryTransactionSource; // @synthesize secondaryTransactionSource=_secondaryTransactionSource;
@property(retain, nonatomic) PKFamilyMemberCollection *familyCollection; // @synthesize familyCollection=_familyCollection;
@property(readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // @synthesize transactionSourceCollection=_transactionSourceCollection;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cbc03
- (id)initWithTransactionSourceCollection:(id)arg1 familyCollection:(id)arg2 transaction:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5;	// IMP=0x00000000000cbb05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
