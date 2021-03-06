//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICUserIdentityStoreBackend-Protocol.h>

@class ICLocalStoreAccountProperties, NSMutableDictionary, NSNumber, NSString;
@protocol ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend>
{
    NSNumber *_activeAccountDSID;	// 8 = 0x8
    NSNumber *_activeLockerAccountDSID;	// 16 = 0x10
    NSMutableDictionary *_identityProperties;	// 24 = 0x18
    ICLocalStoreAccountProperties *_localStoreAccountProperties;	// 32 = 0x20
    id <ICUserIdentityStoreBackendDelegate> _delegate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000da575
+ (void)setDefaultStorefrontIdentifier:(id)arg1;	// IMP=0x00000000000da541
+ (id)defaultStorefrontIdentifier;	// IMP=0x00000000000da530
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;	// IMP=0x00000000000da4fc
+ (id)defaultActiveLockerAccountDSID;	// IMP=0x00000000000da4eb
+ (void)setDefaultActiveAccountDSID:(id)arg1;	// IMP=0x00000000000da4b7
+ (id)defaultActiveAccountDSID;	// IMP=0x00000000000da4a6
- (void).cxx_destruct;	// IMP=0x00000000000da45f
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_propertiesToSaveForProperties:(id)arg1;	// IMP=0x00000000000da3f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000da35b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000da1ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000da0de
- (id)allManageableStoreAccountDSIDsWithError:(id *)arg1;	// IMP=0x00000000000da0cc
- (id)allStoreAccountDSIDsWithError:(id *)arg1;	// IMP=0x00000000000da036
- (_Bool)setLocalStoreAccountProperties:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d9ff8
- (id)localStoreAccountPropertiesWithError:(id *)arg1;	// IMP=0x00000000000d9fea
- (id)verificationContextForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d9f40
- (id)verificationContextForAccountEstablishmentWithError:(id *)arg1;	// IMP=0x00000000000d9edb
- (void)synchronize;	// IMP=0x00000000000d9ed5
- (_Bool)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000d9dfb
- (void)removeIdentityForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d9d5c
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)arg1;	// IMP=0x00000000000d9d48
- (_Bool)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000d9c86
- (id)identityPropertiesForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d9c59
- (_Bool)updateActiveLockerAccountDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d9c2f
- (id)activeLockerAccountDSIDWithError:(id *)arg1;	// IMP=0x00000000000d9c15
- (_Bool)updateActiveAccountDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d9beb
- (id)activeAccountDSIDWithError:(id *)arg1;	// IMP=0x00000000000d9bd1
- (id)init;	// IMP=0x00000000000d9b1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

