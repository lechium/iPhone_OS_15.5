//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL, PKPaymentMethod;

@interface PKPaymentToken : NSObject <NSSecureCoding>
{
    PKPaymentMethod *_paymentMethod;	// 8 = 0x8
    NSString *_paymentInstrumentName;	// 16 = 0x10
    NSString *_paymentNetwork;	// 24 = 0x18
    NSString *_transactionIdentifier;	// 32 = 0x20
    NSData *_paymentData;	// 40 = 0x28
    NSURL *_redeemURL;	// 48 = 0x30
    NSString *_retryNonce;	// 56 = 0x38
}

+ (id)simulatedTokenForNetwork:(id)arg1;	// IMP=0x00000000001de307
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ddd0b
+ (long long)version;	// IMP=0x00000000001ddd00
+ (id)paymentTokenWithProtobuf:(id)arg1;	// IMP=0x0000000000172dd5
- (void).cxx_destruct;	// IMP=0x00000000001de4d2
@property(copy, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(retain, nonatomic) NSURL *redeemURL; // @synthesize redeemURL=_redeemURL;
@property(copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *paymentInstrumentName; // @synthesize paymentInstrumentName=_paymentInstrumentName;
@property(retain, nonatomic) PKPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
- (id)dictionaryRepresentation;	// IMP=0x00000000001de206
- (id)description;	// IMP=0x00000000001de11e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ddf6a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ddd13
- (id)protobuf;	// IMP=0x0000000000172fd6

@end
