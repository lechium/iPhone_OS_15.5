//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationStoreManager;

@interface AKApplicationAuthorizationController : NSObject
{
    AKAuthorizationStoreManager *_storeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006c774
- (void)_broadcastCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2 withHandlerBundleID:(id)arg3;	// IMP=0x001000000006c5b7
- (void)_broadcastCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000006c4a8
- (void)_notifyCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000006c1df
- (void)_credentialStateDidChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000006c178
- (void)_processCredentialStateChanges:(id)arg1;	// IMP=0x001000000006c06c
- (_Bool)revokeAuthorizationForAllApplications:(id *)arg1;	// IMP=0x001000000006bef1
- (void)removeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006bedb
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006bdb0
- (void)storeAuthorization:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000006bd22
- (void)updateAuthorizationListWithMetadataInfo:(id)arg1;	// IMP=0x001000000006bcb6
- (id)currentAuthorizationListVersion;	// IMP=0x001000000006bca0
- (id)initWithStoreManager:(id)arg1;	// IMP=0x001000000006bc03
- (id)init;	// IMP=0x001000000006bbef

@end

