//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString, NSXPCInterface, NSXPCListener, RDDefaults, RDStateCache, SRAuthorizationStore;
@protocol OS_dispatch_queue, RDAuthorizationBroadcasterDelegate, SRFollowUpPosting;

@interface RDAuthorizationBroadcaster : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    _Bool _listening;	// 16 = 0x10
    id <RDAuthorizationBroadcasterDelegate> _delegate;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
    NSXPCInterface *_exportedInterface;	// 40 = 0x28
    NSXPCInterface *_remoteInterface;	// 48 = 0x30
    NSMapTable *_connectionToBundleIds;	// 56 = 0x38
    NSMutableDictionary *_bundleIdToConnections;	// 64 = 0x40
    id <SRFollowUpPosting> _followUpController;	// 72 = 0x48
    RDDefaults *_defaults;	// 80 = 0x50
    RDStateCache *_stateCache;	// 88 = 0x58
    SRAuthorizationStore *_authStore;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x002000000003f2b0
- (void).cxx_destruct;	// IMP=0x0020000000042f10
- (_Bool)hasReaderEntitlementForConnection:(id)arg1;	// IMP=0x0010000000042d80
- (id)valueForEntitlement:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000042d60
- (void)onboardingAirGapEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042c20
- (void)legacyResearchStudyEntitlement:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042ae0
- (void)legacyResearchStudyBundleIDs:(CDUnknownBlockType)arg1;	// IMP=0x00100000000429a0
- (void)setFirstRunOnboardingCompleted:(_Bool)arg1;	// IMP=0x0010000000042840
- (void)setDataCollectionEnabled:(_Bool)arg1;	// IMP=0x0010000000042680
- (void)retrieveCurrentAuthorizedServicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042010
- (void)registerForAuthorizationChangeNotificationsWithEffectiveBundleId:(id)arg1;	// IMP=0x0010000000041b90
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000041340
- (void)authorizationStore:(id)arg1 didUpdateAuthorizationsForBundleId:(id)arg2 sensors:(id)arg3;	// IMP=0x0010000000041020
- (void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2;	// IMP=0x0010000000040bf0
- (void)dealloc;	// IMP=0x001000000003f570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
