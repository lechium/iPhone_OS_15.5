//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class ACAccount, AMSFDSOptions, NSNumber, NSString;

@interface AMSFDSRequest : NSObject <NSCopying, NSSecureCoding>
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    AMSFDSOptions *_options;	// 24 = 0x18
    NSNumber *_purchaseIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012f509
- (void).cxx_destruct;	// IMP=0x000000000012f548
@property(readonly, copy, nonatomic) NSNumber *purchaseIdentifier; // @synthesize purchaseIdentifier=_purchaseIdentifier;
@property(readonly, nonatomic) AMSFDSOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012f3c7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012f28b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012f1c2
- (id)initWithPurchaseIdentifier:(id)arg1 account:(id)arg2 options:(id)arg3;	// IMP=0x000000000012f0fb

@end

