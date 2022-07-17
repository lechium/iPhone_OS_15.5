//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKConceptStoreClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKObserverSet, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface>
{
    HKObserverSet *_conceptObservers;	// 8 = 0x8
    struct os_unfair_lock_s _conceptIndexManagerStateLock;	// 16 = 0x10
    unsigned long long _lastKnownConceptIndexManagerState;	// 24 = 0x18
    HKHealthStore *_healthStore;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    HKTaskServerProxyProvider *_proxyProvider;	// 48 = 0x30
}

+ (id)clientInterface;	// IMP=0x00000000001a047d
+ (id)serverInterface;	// IMP=0x00000000001a0352
+ (id)conceptStore;	// IMP=0x000000000019ec27
+ (id)taskServerIdentifier;	// IMP=0x000000000019ec1a
- (void).cxx_destruct;	// IMP=0x00000000001a0559
@property(retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)connectionInvalidated;	// IMP=0x00000000001a04d1
- (id)remoteInterface;	// IMP=0x00000000001a04b7
- (id)exportedInterface;	// IMP=0x00000000001a049d
- (void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)arg1;	// IMP=0x00000000001a0275
- (void)unregisterAsConceptObserver:(id)arg1 onQueue:(id)arg2;	// IMP=0x00000000001a025f
- (void)registerAsConceptObserver:(id)arg1 onQueue:(id)arg2;	// IMP=0x00000000001a00fc
@property(readonly, nonatomic) unsigned long long currentConceptIndexerState;
- (void)resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019fcb5
- (id)countOfConceptsAssociatedToUserRecordsWithError:(id *)arg1;	// IMP=0x000000000019f9e1
- (_Bool)loadRelationshipsForConcept:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019f64d
- (void)fetchConceptForIdentifier:(id)arg1 loadRelationships:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019f480
- (id)conceptForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019f1ad
- (void)_startTaskServerIfNeeded;	// IMP=0x000000000019f0e1
- (id)ontologyVersionWithError:(id *)arg1;	// IMP=0x000000000019ee44
- (id)initWithHealthStore:(id)arg1;	// IMP=0x000000000019ecee
- (id)init;	// IMP=0x000000000019ec74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
