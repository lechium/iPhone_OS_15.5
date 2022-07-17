//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKUserDomainConceptStoreClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, NSUUID;
@protocol HKUserDomainConceptStoreDelegate;

@interface HKUserDomainConceptStore : NSObject <_HKXPCExportable, HKUserDomainConceptStoreClientInterface>
{
    NSUUID *_identifier;	// 8 = 0x8
    HKTaskServerProxyProvider *_proxyProvider;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    id <HKUserDomainConceptStoreDelegate> _delegate;	// 32 = 0x20
}

+ (id)clientInterface;	// IMP=0x000000000008652f
+ (id)serverInterface;	// IMP=0x00000000000864c1
- (void).cxx_destruct;	// IMP=0x0000000000086d94
- (void)_clientQueue_notifyForChangesToUserDomainConcepts:(id)arg1 changeType:(long long)arg2;	// IMP=0x0000000000086b4f
- (_Bool)_observeUserDomainConceptChanges:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000868a9
- (void)_storeUserDomainConcepts:(id)arg1 method:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008659d
- (void)client_notifyForChangesToUserDomainConcepts:(id)arg1 changeType:(long long)arg2;	// IMP=0x00000000000863c1
- (void)connectionInvalidated;	// IMP=0x00000000000863bb
- (id)remoteInterface;	// IMP=0x00000000000863a1
- (id)exportedInterface;	// IMP=0x0000000000086387
@property __weak id <HKUserDomainConceptStoreDelegate> delegate;
- (void)deleteUserDomainConcepts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086198
- (void)deleteUserDomainConcept:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000860cd
- (void)saveOrUpdateUserDomainConcept:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086007
- (void)saveOrUpdateUserDomainConcepts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085fed
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000085f22
- (id)init;	// IMP=0x0000000000085ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
