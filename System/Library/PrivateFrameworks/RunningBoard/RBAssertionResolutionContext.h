//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, NSSet, RBAssertionCollection, RBAttributeContext, RBProcessIndex, RBProcessMap, RBProcessStateChangeSet, RBSystemState;
@protocol RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging;

@interface RBAssertionResolutionContext : NSObject
{
    NSMutableSet *_assertions;	// 8 = 0x8
    NSMutableSet *_touchedAssertions;	// 16 = 0x10
    NSMutableSet *_lostStartTimeDefining;	// 24 = 0x18
    NSMutableSet *_gainedStartTimeDefining;	// 32 = 0x20
    NSMutableSet *_targetsPendingResolution;	// 40 = 0x28
    RBProcessMap *_resolvedState;	// 48 = 0x30
    RBProcessMap *_originatorInheritances;	// 56 = 0x38
    RBAttributeContext *_attributeContext;	// 64 = 0x40
    RBProcessStateChangeSet *_changeSet;	// 72 = 0x48
    RBAssertionCollection *_assertionCollection;	// 80 = 0x50
    RBProcessIndex *_processIndex;	// 88 = 0x58
    RBProcessMap *_stateMap;	// 96 = 0x60
    id <RBDomainAttributeManaging> _domainAttributeManager;	// 104 = 0x68
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;	// 112 = 0x70
    id <RBEntitlementManaging> _entitlementManager;	// 120 = 0x78
    NSMapTable *_savedEndowments;	// 128 = 0x80
    RBSystemState *_systemState;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000060a56
@property(readonly, nonatomic) NSSet *touchedAssertions; // @synthesize touchedAssertions=_touchedAssertions;
@property(readonly, nonatomic) RBSystemState *systemState; // @synthesize systemState=_systemState;
@property(readonly, nonatomic) RBProcessStateChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(readonly, nonatomic) NSSet *gainedStartTimeDefining; // @synthesize gainedStartTimeDefining=_gainedStartTimeDefining;
@property(readonly, nonatomic) NSSet *lostStartTimeDefining; // @synthesize lostStartTimeDefining=_lostStartTimeDefining;
- (void)_resolveSystemState;	// IMP=0x00000000000606db
- (void)_finalizeStateChangeSet;	// IMP=0x000000000006044e
- (void)_resolveProcessStateForTarget:(id)arg1 ofType:(unsigned long long)arg2 viaAssertion:(id)arg3;	// IMP=0x000000000005fe65
- (void)_suspendOrResumeAssertionsForTarget:(id)arg1 oldState:(id)arg2 newState:(id)arg3;	// IMP=0x000000000005f87b
- (id)_latestStateForIdentity:(id)arg1;	// IMP=0x000000000005f7e8
- (id)_originatorInheritancesForAssertion:(id)arg1;	// IMP=0x000000000005f786
- (id)_inheritancesForOriginator:(id)arg1;	// IMP=0x000000000005f358
- (void)_updateStatesForAssertion:(id)arg1;	// IMP=0x000000000005ed1a
- (void)_assertionGraphFromAssertion:(id)arg1 graph:(id)arg2;	// IMP=0x000000000005e8bb
- (id)_assertionGraphFromAssertion:(id)arg1;	// IMP=0x000000000005e843

@end

