//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRKASMCredentialStore;

@interface CRKASMCertificateVendor : NSObject
{
    CRKASMCredentialStore *_credentialStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007da7d
@property(readonly, nonatomic) CRKASMCredentialStore *credentialStore; // @synthesize credentialStore=_credentialStore;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007d701
- (unsigned long long)hash;	// IMP=0x000000000007d6bd
- (void)forgetPersistentIDs:(id)arg1;	// IMP=0x000000000007d5fd
- (id)manifest;	// IMP=0x000000000007d4c9
- (id)certificatesForUserIdentifiers:(id)arg1;	// IMP=0x000000000007cedb
- (id)certificatesForUserIdentifier:(id)arg1;	// IMP=0x000000000007ce75
- (id)initWithCredentialStore:(id)arg1;	// IMP=0x000000000007ce0a

@end

