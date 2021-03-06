//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFFutureDelegate-Protocol.h>
#import <Email/EFLoggable-Protocol.h>
#import <Email/EMVIPManager-Protocol.h>
#import <Email/EMVIPManagerObserver-Protocol.h>
#import <Email/EMVIPReader_Private-Protocol.h>

@class EAEmailAddressSet, EFCancelationToken, EFPromise, EMRemoteConnection, EMRemoteConnectionRecoveryAssertion, NSSet, NSString;

@interface EMVIPManager : NSObject <EFFutureDelegate, EFLoggable, EMVIPManagerObserver, EMVIPReader_Private, EMVIPManager>
{
    struct os_unfair_lock_s _vipsLock;	// 8 = 0x8
    EAEmailAddressSet *_cachedEmailAddresses;	// 16 = 0x10
    EFCancelationToken *_observerCancelationToken;	// 24 = 0x18
    EMRemoteConnectionRecoveryAssertion *_connectionRecoveryAssertion;	// 32 = 0x20
    EMRemoteConnection *_connection;	// 40 = 0x28
    EFPromise *_vipsByIdentifierPromise;	// 48 = 0x30
}

+ (id)remoteInterface;	// IMP=0x000000000008aea6
+ (id)log;	// IMP=0x000000000008ab17
- (void).cxx_destruct;	// IMP=0x000000000008d02e
@property(retain) EFPromise *vipsByIdentifierPromise; // @synthesize vipsByIdentifierPromise=_vipsByIdentifierPromise;
@property(retain, nonatomic) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;	// IMP=0x000000000008cfbe
- (void)didStartBlockingMainThreadForFuture:(id)arg1;	// IMP=0x000000000008cf49
- (void)observer:(id)arg1 updatedVIPs:(id)arg2 removedVIPs:(id)arg3;	// IMP=0x000000000008c716
- (void)observer:(id)arg1 gotVIPs:(id)arg2;	// IMP=0x000000000008c2ad
- (void)removeVIPsWithEmailAddresses:(id)arg1;	// IMP=0x000000000008c1e7
- (void)removeVIPsWithIdentifiers:(id)arg1;	// IMP=0x000000000008c121
- (void)saveVIPs:(id)arg1;	// IMP=0x000000000008c05b
- (_Bool)isVIPAddress:(id)arg1;	// IMP=0x000000000008bfcf
@property(readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *allVIPWaitForResult;
- (void)getAllVIPsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008ba88
@property(readonly, copy, nonatomic) NSSet *allVIPs;
- (id)vipWithIdentifier:(id)arg1;	// IMP=0x000000000008b8e4
@property(readonly, nonatomic) _Bool hasVIPs;
- (id)_vipsByIdentifier;	// IMP=0x000000000008b7d8
- (id)_vipsByIdentifierFuture;	// IMP=0x000000000008b758
- (void)_reset;	// IMP=0x000000000008b55c
- (void)_startObservingVIPChangesIfNecessary;	// IMP=0x000000000008b1d6
- (void)dealloc;	// IMP=0x000000000008ae32
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x000000000008ac3e
- (id)init;	// IMP=0x000000000008abf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

