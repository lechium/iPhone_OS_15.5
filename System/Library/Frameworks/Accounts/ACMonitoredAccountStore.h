//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACRemoteAccountStoreSessionDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol NSObject;

@interface ACMonitoredAccountStore <ACRemoteAccountStoreSessionDelegate>
{
    NSSet *_accountTypesToMonitor;	// 8 = 0x8
    NSMutableDictionary *_accountsByID;	// 16 = 0x10
    NSHashTable *_delegates;	// 24 = 0x18
    id <NSObject> _credentialsDidChangeObserver;	// 32 = 0x20
    id <NSObject> _remoteAccountDidChangeObserver;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000467a
- (void)connectionClosed;	// IMP=0x00000000000043fc
- (void)accountWasRemoved:(id)arg1;	// IMP=0x0000000000004160
- (void)accountWasModified:(id)arg1;	// IMP=0x0000000000003ec3
- (void)accountWasAdded:(id)arg1;	// IMP=0x0000000000003c26
- (void)credentialsChangedNotification:(id)arg1;	// IMP=0x00000000000039cf
- (void)_registerForCredentialChangedNotifications;	// IMP=0x0000000000003874
- (void)_accountsListPopulated:(id)arg1;	// IMP=0x0000000000003633
- (void)_processAccountsListForNotifications:(id)arg1;	// IMP=0x0000000000003160
- (void)_reregister;	// IMP=0x0000000000002e88
- (void)_registerAccountMonitorSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002c96
- (void)_registerAccountMonitorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000028a8
- (id)connectionDelegate;	// IMP=0x000000000000289f
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000000281e
- (void)addDelegate:(id)arg1;	// IMP=0x000000000000279d
- (id)monitoredAccountWithIdentifier:(id)arg1;	// IMP=0x000000000000270b
@property(readonly) NSArray *monitoredAccounts;
- (void)registerSynchronouslyWithError:(id *)arg1;	// IMP=0x000000000000215f
- (void)registerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001ca4
- (void)dealloc;	// IMP=0x0000000000001bd1
- (id)initWithWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 accountTypes:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000001ab8
- (id)initWithAccountTypes:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000001a9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

