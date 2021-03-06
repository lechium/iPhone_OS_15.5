//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ACMonitoredAccountStoreDelegateProtocol-Protocol.h>
#import <iTunesCloud/ICUserIdentityStoreBackend-Protocol.h>

@class ACAccount, ACMonitoredAccountStore, NSMutableDictionary, NSNumber, NSString;
@protocol ICUserIdentityStoreBackendDelegate, OS_dispatch_queue;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ACMonitoredAccountStoreDelegateProtocol, ICUserIdentityStoreBackend>
{
    ACMonitoredAccountStore *_accountStore;	// 8 = 0x8
    NSMutableDictionary *_identityPropertiesCache;	// 16 = 0x10
    NSMutableDictionary *_allStoreAccountsByDSID;	// 24 = 0x18
    ACAccount *_primaryICloudAccount;	// 32 = 0x20
    NSNumber *_activeAccountDSID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_accountStoreDelegateQueue;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    id <ICUserIdentityStoreBackendDelegate> _delegate;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000769aa
- (void).cxx_destruct;	// IMP=0x0000000000074d22
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_synchronize;	// IMP=0x0000000000074c1e
- (id)_newUserIdentityPropertiesForAccount:(id)arg1;	// IMP=0x0000000000074817
- (id)_userIdentityPropertiesForAccount:(id)arg1;	// IMP=0x0000000000074729
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)arg1;	// IMP=0x0000000000074688
- (id)_storeAccountForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000745f2
- (id)_activeStoreAccountWithError:(id *)arg1;	// IMP=0x0000000000074523
- (id)_primaryAppleAccountWithError:(id *)arg1;	// IMP=0x00000000000744c4
- (id)_allStoreAccountsWithError:(id *)arg1;	// IMP=0x0000000000074455
- (id)_registerAndLoadAccountsIfNecessary;	// IMP=0x0000000000073de4
- (void)_applyLocalStoreAccountProperties:(id)arg1 toAccount:(id)arg2;	// IMP=0x0000000000073d72
- (void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2;	// IMP=0x0000000000073b07
- (void)_postAccountsChangeNotification;	// IMP=0x0000000000073a81
- (void)accountCredentialChanged:(id)arg1;	// IMP=0x00000000000739f6
- (void)accountWasRemoved:(id)arg1;	// IMP=0x000000000007396b
- (void)accountWasModified:(id)arg1;	// IMP=0x00000000000738e0
- (void)accountWasAdded:(id)arg1;	// IMP=0x0000000000073855
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007384f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007383d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073832
- (id)storeAccountForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000073566
- (id)localStoreAccountWithError:(id *)arg1;	// IMP=0x0000000000073348
- (id)allStoreAccountsWithError:(id *)arg1;	// IMP=0x000000000007329f
- (id)allManageableStoreAccountDSIDsWithError:(id *)arg1;	// IMP=0x0000000000072fef
- (id)allStoreAccountDSIDsWithError:(id *)arg1;	// IMP=0x0000000000072d07
- (_Bool)setLocalStoreAccountProperties:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000072bf7
- (id)localStoreAccountPropertiesWithError:(id *)arg1;	// IMP=0x0000000000072b38
- (id)verificationContextForAccountEstablishmentWithError:(id *)arg1;	// IMP=0x0000000000072a35
- (id)verificationContextForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000728c7
- (void)synchronize;	// IMP=0x0000000000072895
- (_Bool)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000726cb
- (_Bool)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000072501
- (void)removeIdentityForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000722f5
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)arg1;	// IMP=0x00000000000721eb
- (id)identityPropertiesForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000720c4
- (_Bool)updateActiveLockerAccountDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000071f6a
- (id)activeLockerAccountDSIDWithError:(id *)arg1;	// IMP=0x0000000000071e93
- (_Bool)updateActiveAccountDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000071d3a
- (id)activeAccountDSIDWithError:(id *)arg1;	// IMP=0x0000000000071c88
- (id)init;	// IMP=0x0000000000071b26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

