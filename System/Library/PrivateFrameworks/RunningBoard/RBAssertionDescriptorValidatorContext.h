//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>
#import <RunningBoard/RBAssertionContextProviding-Protocol.h>

@class NSDictionary, NSString, RBAssertionAcquisitionContext, RBAssertionDescriptorValidator, RBProcess, RBProcessState, RBSAssertionDescriptor, RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBBundleProperties, RBBundlePropertiesManaging, RBConcreteTargeting, RBDomainAttributeManaging, RBEntitlementManaging, RBEntitlementPossessing;

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying, RBAssertionContextProviding>
{
    unsigned long long _ignoreRestrictions;	// 8 = 0x8
    _Bool _targetIsSystem;	// 16 = 0x10
    RBProcess *_targetProcess;	// 24 = 0x18
    id <RBBundleProperties> _targetProperties;	// 32 = 0x20
    id <RBEntitlementPossessing> _targetEntitlements;	// 40 = 0x28
    RBProcess *_originatorProcess;	// 48 = 0x30
    id <RBBundleProperties> _originatorProperties;	// 56 = 0x38
    id <RBEntitlementPossessing> _originatorEntitlements;	// 64 = 0x40
    RBAssertionDescriptorValidator *_assertionDescriptionValidator;	// 72 = 0x48
    RBSAssertionDescriptor *_assertionDescriptor;	// 80 = 0x50
    RBProcessState *_originatorState;	// 88 = 0x58
    id <RBConcreteTargeting> _target;	// 96 = 0x60
    RBSProcessIdentity *_targetIdentity;	// 104 = 0x68
    RBSProcessIdentifier *_targetIdentifier;	// 112 = 0x70
    RBProcessState *_targetState;	// 120 = 0x78
    RBAssertionAcquisitionContext *_acquisitionContext;	// 128 = 0x80
    id <RBEntitlementManaging> _entitlementManager;	// 136 = 0x88
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;	// 144 = 0x90
    id <RBDomainAttributeManaging> _domainAttributeManager;	// 152 = 0x98
    NSDictionary *_savedEndowments;	// 160 = 0xa0
}

+ (id)context;	// IMP=0x000000000001ff11
- (void).cxx_destruct;	// IMP=0x0000000000020467
@property(readonly, nonatomic) _Bool targetIsSystem; // @synthesize targetIsSystem=_targetIsSystem;
@property(retain, nonatomic) NSDictionary *savedEndowments; // @synthesize savedEndowments=_savedEndowments;
@property(retain, nonatomic) id <RBDomainAttributeManaging> domainAttributeManager; // @synthesize domainAttributeManager=_domainAttributeManager;
@property(retain, nonatomic) id <RBBundlePropertiesManaging> bundlePropertiesManager; // @synthesize bundlePropertiesManager=_bundlePropertiesManager;
@property(retain, nonatomic) id <RBEntitlementManaging> entitlementManager; // @synthesize entitlementManager=_entitlementManager;
@property(retain, nonatomic) RBAssertionAcquisitionContext *acquisitionContext; // @synthesize acquisitionContext=_acquisitionContext;
@property(retain, nonatomic) RBProcessState *targetState; // @synthesize targetState=_targetState;
@property(retain, nonatomic) RBSProcessIdentifier *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(retain, nonatomic) RBSProcessIdentity *targetIdentity; // @synthesize targetIdentity=_targetIdentity;
@property(retain, nonatomic) id <RBConcreteTargeting> target; // @synthesize target=_target;
@property(retain, nonatomic) RBProcessState *originatorState; // @synthesize originatorState=_originatorState;
@property(retain, nonatomic) RBSAssertionDescriptor *assertionDescriptor; // @synthesize assertionDescriptor=_assertionDescriptor;
@property(retain, nonatomic) RBAssertionDescriptorValidator *assertionDescriptionValidator; // @synthesize assertionDescriptionValidator=_assertionDescriptionValidator;
@property(retain, nonatomic) id <RBEntitlementPossessing> originatorEntitlements; // @synthesize originatorEntitlements=_originatorEntitlements;
@property(readonly, nonatomic) id <RBBundleProperties> originatorProperties; // @synthesize originatorProperties=_originatorProperties;
@property(retain, nonatomic) RBProcess *originatorProcess; // @synthesize originatorProcess=_originatorProcess;
@property(retain, nonatomic) id <RBEntitlementPossessing> targetEntitlements; // @synthesize targetEntitlements=_targetEntitlements;
@property(readonly, nonatomic) RBProcess *targetProcess; // @synthesize targetProcess=_targetProcess;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000201aa
@property(readonly, nonatomic) RBSProcessIdentity *originatorIdentity;
@property(readonly, nonatomic) id <RBBundleProperties> targetProperties; // @synthesize targetProperties=_targetProperties;
- (void)setTargetProperties:(id)arg1;	// IMP=0x000000000001ffb0
- (void)setTargetProcess:(id)arg1;	// IMP=0x000000000001ff9f
@property(readonly, nonatomic) _Bool ignoreRestrictions;
- (void)popIgnoreRestrictions;	// IMP=0x000000000001ff34
- (void)pushIgnoreRestrictions;	// IMP=0x000000000001ff2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
