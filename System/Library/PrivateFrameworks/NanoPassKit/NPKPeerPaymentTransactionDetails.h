//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, PKPaymentTransaction;

@interface NPKPeerPaymentTransactionDetails : NSObject
{
    PKPaymentTransaction *_transaction;	// 8 = 0x8
    NSString *_serviceIdentifier;	// 16 = 0x10
    unsigned long long _paymentStatus;	// 24 = 0x18
    NSArray *_availableActions;	// 32 = 0x20
    NSDate *_availableActionsFetchDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d9430
@property(retain, nonatomic) NSDate *availableActionsFetchDate; // @synthesize availableActionsFetchDate=_availableActionsFetchDate;
@property(retain, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) unsigned long long paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)description;	// IMP=0x00000000000d9261

@end
