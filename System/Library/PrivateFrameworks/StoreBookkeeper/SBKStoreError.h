//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString, SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKStoreError : NSError
{
    SBKTransaction *_transaction;	// 40 = 0x28
}

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x000000000000c5f2
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x000000000000c434
+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c418
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c3fc
+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c3e0
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x000000000000c345
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c2a5
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c205
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c165
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c0c5
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000c025
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000bf85
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000be8c
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000bd93
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000000000bbdc
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;	// IMP=0x000000000000ba50
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000b9b0
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000b910
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000b870
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000b73b
+ (id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000000000b63a
- (void).cxx_destruct;	// IMP=0x000000000000b627
@property(retain, nonatomic) SBKTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) double retrySeconds;
@property(readonly, copy, nonatomic) NSString *currentStoreAccountName;
@property(readonly, copy, nonatomic) NSString *previousStoreAccountName;
@property(readonly, nonatomic) _Bool isTransactionMissingInformationError;
@property(readonly, nonatomic) _Bool isTransactionCancelledError;
@property(readonly, nonatomic) _Bool isClampError;
@property(readonly, nonatomic) _Bool isRecoverableError;
@property(readonly, nonatomic) _Bool isAccountsChangedError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b351
- (id)description;	// IMP=0x000000000000b2af

@end
