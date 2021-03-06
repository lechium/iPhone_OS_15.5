//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSProgress, NSSet;

@interface FullSearchOperation
{
    NSProgress *_progress;	// 96 = 0x60
    struct os_unfair_lock_s _accountsLock;	// 104 = 0x68
    NSSet *_accounts;	// 112 = 0x70
    struct os_unfair_lock_s _remoteSearchCoordinatorsByAccountIdentifierLock;	// 120 = 0x78
    NSMutableDictionary *_remoteSearchCoordinatorsByAccountIdentifier;	// 128 = 0x80
}

+ (id)fullSearchForManager:(id)arg1 searchContext:(id)arg2 sources:(id)arg3;	// IMP=0x00400000000cffc9
- (void).cxx_destruct;	// IMP=0x00200000000d3531
- (id)_orderedMailboxesForAccount:(id)arg1;	// IMP=0x00100000000d2eac
- (id)_orderedEnumeratorForSources:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000000d27fd
- (void)_performRemoteSearchForAccount:(id)arg1 coordinator:(id)arg2;	// IMP=0x00100000000d2564
- (id)_performRemoteSearchesForAccount:(id)arg1;	// IMP=0x00100000000d1ba2
- (id)_performRemoteSearchesWithSources:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000d16f8
- (void)performRemoteSearches;	// IMP=0x00100000000d0fd5
- (id)_remoteSearchableSourcesByAccount;	// IMP=0x00100000000d0c0b
- (void)accountsChanged:(id)arg1;	// IMP=0x00100000000d0ba4
- (void)updateWithAccounts:(id)arg1;	// IMP=0x00100000000d0759
- (id)accounts;	// IMP=0x00100000000d0715
- (void)main;	// IMP=0x00100000000d045e
- (void)cancel;	// IMP=0x00100000000d03ae
- (id)progress;	// IMP=0x00100000000d0399
- (id)initWithManager:(id)arg1 sources:(id)arg2 searchContext:(id)arg3;	// IMP=0x00100000000d0079

@end

