//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSPurchaseResult, NSString;

@interface AMSDelegatePurchaseRequest <NSSecureCoding>
{
    NSString *_deviceName;	// 8 = 0x8
    AMSPurchaseResult *_purchaseResult;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f9f6d
- (void).cxx_destruct;	// IMP=0x00000000000f9fbc
@property(retain, nonatomic) AMSPurchaseResult *purchaseResult; // @synthesize purchaseResult=_purchaseResult;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f9e7e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f9daa
- (id)initWithPurchaseResult:(id)arg1 challenge:(id)arg2 userAgent:(id)arg3;	// IMP=0x00000000000f9d28

@end

