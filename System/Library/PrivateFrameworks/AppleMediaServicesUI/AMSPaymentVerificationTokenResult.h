//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/NSSecureCoding-Protocol.h>

@class NSData;

@interface AMSPaymentVerificationTokenResult : NSObject <NSSecureCoding>
{
    NSData *_tokenData;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000038a8
- (void).cxx_destruct;	// IMP=0x00000000000039e6
@property(readonly, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000394b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000038b0
- (id)initWithTokenData:(id)arg1;	// IMP=0x000000000000383d

@end

