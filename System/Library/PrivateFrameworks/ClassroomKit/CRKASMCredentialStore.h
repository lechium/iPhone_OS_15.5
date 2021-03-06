//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRKASMCredentialManifest, CRKAnnotatedCredentialStore, NSDictionary;
@protocol CRKKeychain;

@interface CRKASMCredentialStore : NSObject
{
    id <CRKKeychain> _keychain;	// 8 = 0x8
    CRKAnnotatedCredentialStore *_certificateAnnotatedStore;	// 16 = 0x10
    CRKAnnotatedCredentialStore *_identityAnnotatedStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001539d
@property(readonly, nonatomic) CRKAnnotatedCredentialStore *identityAnnotatedStore; // @synthesize identityAnnotatedStore=_identityAnnotatedStore;
@property(readonly, nonatomic) CRKAnnotatedCredentialStore *certificateAnnotatedStore; // @synthesize certificateAnnotatedStore=_certificateAnnotatedStore;
@property(readonly, nonatomic) id <CRKKeychain> keychain; // @synthesize keychain=_keychain;
- (id)makeEntryWithCertificate:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x00000000000151dc
- (id)addIdentity:(id)arg1 entry:(id)arg2;	// IMP=0x0000000000014fb8
- (id)addIdentity:(id)arg1 forUserIdentifier:(id)arg2;	// IMP=0x0000000000014e03
- (void)clearIdentities;	// IMP=0x0000000000014d94
- (id)makeIdentityWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x0000000000014c8a
- (void)forgetIdentitiesWithPersistentIDs:(id)arg1;	// IMP=0x0000000000014c18
- (void)removeIdentitiesWithPersistentIDs:(id)arg1;	// IMP=0x0000000000014ba6
- (id)identityWithPersistentID:(id)arg1;	// IMP=0x0000000000014b23
@property(readonly, copy, nonatomic) CRKASMCredentialManifest *identityManifest;
- (id)addEntriesByCertificate:(id)arg1;	// IMP=0x0000000000014788
- (id)addCertificate:(id)arg1 entry:(id)arg2;	// IMP=0x00000000000145c4
- (id)addCertificates:(id)arg1 forUserIdentifier:(id)arg2;	// IMP=0x0000000000014324
- (id)addCertificate:(id)arg1 forUserIdentifier:(id)arg2;	// IMP=0x000000000001416d
- (void)clearCertificates;	// IMP=0x00000000000140fe
- (id)makeCertificateWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x00000000000140ae
- (void)forgetCertificatesWithPersistentIDs:(id)arg1;	// IMP=0x000000000001403c
- (void)removeCertificatesWithPersistentIDs:(id)arg1;	// IMP=0x0000000000013fca
- (id)certificateWithPersistentID:(id)arg1;	// IMP=0x0000000000013f47
@property(readonly, copy, nonatomic) CRKASMCredentialManifest *certificateManifest;
@property(readonly, copy, nonatomic) NSDictionary *debugInfo;
- (id)initWithKeychain:(id)arg1 accessGroup:(id)arg2 certificateManifestStorageKey:(id)arg3 identityManifestStorageKey:(id)arg4;	// IMP=0x0000000000013c69

@end

