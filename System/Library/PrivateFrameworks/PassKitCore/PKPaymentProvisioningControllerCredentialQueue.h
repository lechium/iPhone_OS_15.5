//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject
{
    NSMutableArray *_credentials;	// 8 = 0x8
    NSMutableArray *_completedCredentials;	// 16 = 0x10
    unsigned long long _currentIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022aa48
- (id)completedCredentials;	// IMP=0x000000000022aa2a
- (id)credentials;	// IMP=0x000000000022aa0c
- (unsigned long long)completedCount;	// IMP=0x000000000022a9f6
- (unsigned long long)remaining;	// IMP=0x000000000022a9ac
- (unsigned long long)count;	// IMP=0x000000000022a996
- (void)setCurrentCredential:(id)arg1;	// IMP=0x000000000022a960
- (id)nextCredentialToProvision;	// IMP=0x000000000022a8ec
- (void)removeCredential:(id)arg1;	// IMP=0x000000000022a84a
- (void)setCredentialsToProvision:(id)arg1;	// IMP=0x000000000022a7fc
- (id)init;	// IMP=0x000000000022a798

@end
