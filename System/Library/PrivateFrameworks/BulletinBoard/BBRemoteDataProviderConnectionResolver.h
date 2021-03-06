//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionCheckinServer-Protocol.h>
#import <BulletinBoard/BBDataProviderStore-Protocol.h>
#import <BulletinBoard/BBRemoteDataProviderStoreDelegate-Protocol.h>
#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSString, NSXPCListener;
@protocol BBDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_registerQueue;	// 24 = 0x18
    NSMutableDictionary *_dataProviderConnectionsByService;	// 32 = 0x20
    NSMutableDictionary *_dataProviderConnectionsBySectionID;	// 40 = 0x28
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;	// 48 = 0x30
    NSMutableDictionary *_xpcConnectionsByService;	// 56 = 0x38
    id <BBDataProviderStoreDelegate> _delegate;	// 64 = 0x40
    int _listeningToken;	// 72 = 0x48
    BKSApplicationStateMonitor *_appStateMonitor;	// 80 = 0x50
}

+ (id)xpcInterface;	// IMP=0x000000000003d053
+ (id)resolverWithDelegate:(id)arg1;	// IMP=0x000000000003bc55
- (void).cxx_destruct;	// IMP=0x000000000003e67e
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;	// IMP=0x000000000003e628
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;	// IMP=0x000000000003e43d
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003e22f
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;	// IMP=0x000000000003df9f
- (void)loadAllDataProviders;	// IMP=0x000000000003df99
- (void)removeDataProvider:(id)arg1;	// IMP=0x000000000003de86
- (id)dataProvidersForUniversalSectionID:(id)arg1;	// IMP=0x000000000003dc22
- (id)dataProviderForSectionID:(id)arg1;	// IMP=0x000000000003daae
- (void)wakeService:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000003d291
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;	// IMP=0x000000000003d0bf
- (void)_registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c83d
- (void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c702
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000003c449
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;	// IMP=0x000000000003c0c5
- (void)dealloc;	// IMP=0x000000000003bef2
- (void)_registerForPublicationNotification;	// IMP=0x000000000003be5a
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000003bca6

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

