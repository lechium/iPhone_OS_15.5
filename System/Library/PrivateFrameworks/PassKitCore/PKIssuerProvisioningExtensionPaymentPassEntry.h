//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKAddPaymentPassRequestConfiguration;

@interface PKIssuerProvisioningExtensionPaymentPassEntry <NSSecureCoding>
{
    PKAddPaymentPassRequestConfiguration *_addRequestConfiguration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000167a2f
- (void).cxx_destruct;	// IMP=0x0000000000167df2
@property(readonly, nonatomic) PKAddPaymentPassRequestConfiguration *addRequestConfiguration; // @synthesize addRequestConfiguration=_addRequestConfiguration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000167d64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167caf
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 art:(struct CGImage *)arg3 addRequestConfiguration:(id)arg4;	// IMP=0x0000000000167aaf
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(struct CGImage *)arg4;	// IMP=0x0000000000167a37

@end
