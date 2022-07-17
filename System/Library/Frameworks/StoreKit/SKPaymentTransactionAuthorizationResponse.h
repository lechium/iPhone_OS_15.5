//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationCredential, NSError;

@interface SKPaymentTransactionAuthorizationResponse : NSObject
{
    AKAuthorizationCredential *_authorizationAppleIDCredential;	// 8 = 0x8
    NSError *_accountSignupError;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000028765
@property(readonly, nonatomic) NSError *accountSignupError; // @synthesize accountSignupError=_accountSignupError;
@property(readonly, nonatomic) AKAuthorizationCredential *authorizationAppleIDCredential; // @synthesize authorizationAppleIDCredential=_authorizationAppleIDCredential;
- (id)initWithAuthorizationCredential:(id)arg1 error:(id)arg2;	// IMP=0x0000000000028661

@end
