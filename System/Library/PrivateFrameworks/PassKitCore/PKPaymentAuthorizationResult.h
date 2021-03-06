//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding>
{
    long long _status;	// 8 = 0x8
    NSArray *_errors;	// 16 = 0x10
    PKPeerPaymentTransactionMetadata *_peerPaymentTransactionMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003e66c1
+ (id)sanitizedErrors:(id)arg1;	// IMP=0x00000000003e62ea
- (void).cxx_destruct;	// IMP=0x00000000003e6702
@property(retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata; // @synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e61f9
- (id)init;	// IMP=0x00000000003e61de
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e60a8
- (id)initWithStatus:(long long)arg1 errors:(id)arg2;	// IMP=0x00000000003e6008

@end

