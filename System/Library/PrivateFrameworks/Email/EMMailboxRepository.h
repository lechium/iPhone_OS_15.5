//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EFLoggable-Protocol.h>
#import <Email/EMMailboxChangeObserver-Protocol.h>
#import <Email/EMMailboxTypeResolver-Protocol.h>

@class EFPromise, EMAccountRepository, EMRemoteConnection, NSMapTable, NSMutableDictionary, NSOrderedSet, NSSet, NSString;
@protocol EFCancelable;

@interface EMMailboxRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver>
{
    struct os_unfair_lock_s _mailboxesPromiseLock;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSMutableDictionary *_mailboxesByObjectID;	// 16 = 0x10
    EMRemoteConnection *_connection;	// 24 = 0x18
    id <EFCancelable> _registrationCancelable;	// 32 = 0x20
    EFPromise *_mailboxesPromise;	// 40 = 0x28
    NSMapTable *_observerMap;	// 48 = 0x30
    EMAccountRepository *_accountRepository;	// 56 = 0x38
}

+ (id)remoteInterface;	// IMP=0x00000000000304b4
+ (id)log;	// IMP=0x000000000002fe76
- (void).cxx_destruct;	// IMP=0x00000000000332bb
@property(readonly, nonatomic) EMAccountRepository *accountRepository; // @synthesize accountRepository=_accountRepository;
@property(retain, nonatomic) NSMapTable *observerMap; // @synthesize observerMap=_observerMap;
@property(retain, nonatomic) EFPromise *mailboxesPromise; // @synthesize mailboxesPromise=_mailboxesPromise;
@property(retain) id <EFCancelable> registrationCancelable; // @synthesize registrationCancelable=_registrationCancelable;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
@property(readonly) NSOrderedSet *mailboxesIfAvailable;
- (id)_mailboxesFuture;	// IMP=0x0000000000033114
- (void)mailboxListChanged:(id)arg1;	// IMP=0x00000000000324d9
- (id)_filterIDsFromMailbox:(id)arg1 withQuery:(id)arg2;	// IMP=0x00000000000323e9
- (long long)remoteMailboxTypeForMailboxObjectID:(id)arg1;	// IMP=0x00000000000321de
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;	// IMP=0x00000000000320d1
- (id)remoteMailboxObjectIDsForMailboxType:(long long)arg1;	// IMP=0x0000000000031ed1
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;	// IMP=0x0000000000031d03
- (id)remoteAllMailboxObjectIDs;	// IMP=0x0000000000031b16
@property(readonly, nonatomic) NSSet *allMailboxObjectIDs;
- (id)performMailboxChangeAction:(id)arg1;	// IMP=0x000000000003184e
- (void)refreshMailboxList;	// IMP=0x00000000000317c1
- (id)mailboxesIfAvailableForObjectIDs:(id)arg1;	// IMP=0x000000000003172f
- (id)mailboxIfAvailableForObjectID:(id)arg1;	// IMP=0x000000000003167a
- (id)mailboxesForObjectIDs:(id)arg1;	// IMP=0x00000000000315e8
- (id)mailboxForObjectID:(id)arg1;	// IMP=0x00000000000313b6
- (void)_prepareMailboxes:(id)arg1;	// IMP=0x0000000000031084
- (void)refreshQueryWithObserver:(id)arg1;	// IMP=0x0000000000031071
- (id)performQuery:(id)arg1 withObserver:(id)arg2;	// IMP=0x0000000000030d41
- (void)performQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030a72
- (void)_restartObservingMailboxChangesIfNecessary;	// IMP=0x0000000000030a60
- (void)_startObservingMailboxChangesIfNecessary;	// IMP=0x00000000000306f3
- (void)dealloc;	// IMP=0x0000000000030439
- (void)_commonInitWithAccountRepository:(id)arg1;	// IMP=0x0000000000030349
- (id)initForTestingWithAccountRepository:(id)arg1;	// IMP=0x00000000000302b5
- (id)initForTesting;	// IMP=0x00000000000302a0
- (id)initWithRemoteConnection:(id)arg1 accountRepository:(id)arg2;	// IMP=0x000000000002ffa2
- (id)initInternal;	// IMP=0x000000000002ff53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

