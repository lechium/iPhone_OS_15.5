//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, PKShippingMethods;

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>
{
    PKShippingMethods *_availableShippingMethods;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSArray *_paymentSummaryItems;	// 24 = 0x18
    NSArray *_contentItems;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003e6b21
- (void).cxx_destruct;	// IMP=0x00000000003e6c04
@property(copy, nonatomic) PKShippingMethods *availableShippingMethods; // @synthesize availableShippingMethods=_availableShippingMethods;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(copy, nonatomic) NSArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *shippingMethods;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e6a4d
- (id)init;	// IMP=0x00000000003e6a34
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e67c4
- (id)initWithPaymentSummaryItems:(id)arg1;	// IMP=0x00000000003e672a

@end
