//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKObserverSet, HKTaskServerProxyProvider, NSArray, NSString;

@interface HKSharingAuthorizationRecipientStore : NSObject <_HKXPCExportable>
{
    NSArray *_authorizationIdentifiers;	// 8 = 0x8
    NSArray *_sharingAuthorizations;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
    HKTaskServerProxyProvider *_proxyProvider;	// 32 = 0x20
    HKObserverSet *_observers;	// 40 = 0x28
}

+ (id)serverInterface;	// IMP=0x000000000006fc78
+ (id)clientInterface;	// IMP=0x000000000006fbcb
- (void).cxx_destruct;	// IMP=0x000000000006fde3
@property(readonly, nonatomic) HKObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, copy, nonatomic) NSArray *sharingAuthorizations; // @synthesize sharingAuthorizations=_sharingAuthorizations;
@property(readonly, copy, nonatomic) NSArray *authorizationIdentifiers; // @synthesize authorizationIdentifiers=_authorizationIdentifiers;
- (void)connectionInterrupted;	// IMP=0x000000000006fdab
- (void)connectionInvalidated;	// IMP=0x000000000006fd99
- (id)remoteInterface;	// IMP=0x000000000006fd7f
- (id)exportedInterface;	// IMP=0x000000000006fd65
- (void)_registerRemoteObservers;	// IMP=0x000000000006faef
- (void)clientRemote_didRevokeRecipientIdentifier:(id)arg1;	// IMP=0x000000000006fa39
- (void)clientRemote_didRemoveRecipientIdentifier:(id)arg1 sharingAuthorizations:(id)arg2;	// IMP=0x000000000006f8cc
- (void)clientRemote_didAddRecipientIdentifier:(id)arg1 sharingAuthorizations:(id)arg2;	// IMP=0x000000000006f75f
- (void)removeObserver:(id)arg1;	// IMP=0x000000000006f60e
- (void)addObserver:(id)arg1;	// IMP=0x000000000006f475
- (void)fetchRecipientIdentifiersByAuthorizationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f2f2
- (id)initWithHealthStore:(id)arg1 sharingAuthorizations:(id)arg2;	// IMP=0x000000000006f0fc
- (void)fetchRecipientIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000070083
- (id)initWithHealthStore:(id)arg1 authorizationIdentifiers:(id)arg2;	// IMP=0x000000000007001b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

