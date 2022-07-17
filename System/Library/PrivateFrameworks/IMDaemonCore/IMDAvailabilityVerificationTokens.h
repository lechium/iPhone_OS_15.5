//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDAvailabilityVerificationTokens : NSObject
{
    NSString *_subscriptionValidationToken;	// 8 = 0x8
    NSString *_encryptionValidationToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000024fa1
@property(readonly, nonatomic) NSString *encryptionValidationToken; // @synthesize encryptionValidationToken=_encryptionValidationToken;
@property(readonly, nonatomic) NSString *subscriptionValidationToken; // @synthesize subscriptionValidationToken=_subscriptionValidationToken;
- (unsigned long long)hash;	// IMP=0x0000000000024f00
- (_Bool)isEqualToAvailabilityVerificationTokens:(id)arg1;	// IMP=0x0000000000024dd5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024d78
- (id)description;	// IMP=0x0000000000024cc2
- (id)initWithSubscriptionValidationToken:(id)arg1 encryptionValidationToken:(id)arg2;	// IMP=0x0000000000024c09

@end
