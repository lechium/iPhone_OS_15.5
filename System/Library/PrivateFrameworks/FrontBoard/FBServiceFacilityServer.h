//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <FrontBoard/FBSServiceFacilityManaging-Protocol.h>

@class BSServiceConnectionListener, BSServiceDomainSpecification, NSMutableDictionary, NSMutableSet, NSString;

@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSServiceDomainSpecification *_domain;	// 16 = 0x10
    BSServiceConnectionListener *_serviceListener;	// 24 = 0x18
    NSMutableDictionary *_lock_facilitiesByIdentifier;	// 32 = 0x20
    NSMutableSet *_lock_completedMilestones;	// 40 = 0x28
    NSMutableDictionary *_lock_suspendedFacilitiesByIdentifier;	// 48 = 0x30
    NSMutableSet *_lock_pendingConnects;	// 56 = 0x38
}

+ (id)sharedInstanceDomain;	// IMP=0x000000000000d97c
+ (id)sharedInstance;	// IMP=0x000000000000d7d0
- (void).cxx_destruct;	// IMP=0x000000000000f418
@property(readonly, copy, nonatomic) BSServiceDomainSpecification *domain; // @synthesize domain=_domain;
- (void)_lock_evaluateSuspendedFacility:(id)arg1;	// IMP=0x000000000000f0d8
- (_Bool)_lock_areFacilityPrerequisitesSatisfied:(id)arg1;	// IMP=0x000000000000f045
- (void)_facilityQueue_facility:(id)arg1 handleMessage:(id)arg2 client:(id)arg3;	// IMP=0x000000000000ed56
- (void)noteMilestoneReached:(id)arg1;	// IMP=0x000000000000eb42
- (void)removeFacility:(id)arg1;	// IMP=0x000000000000e9cd
- (void)addFacility:(id)arg1;	// IMP=0x000000000000e6bb
- (void)run;	// IMP=0x000000000000e6a5
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000000e181
- (void)dealloc;	// IMP=0x000000000000e083
- (id)_initWithDomain:(id)arg1;	// IMP=0x000000000000dddd
- (id)init;	// IMP=0x000000000000dcaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
