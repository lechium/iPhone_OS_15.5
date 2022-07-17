//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSCopying-Protocol.h>

@class RLMArray, RLMLinkingObjects;
@protocol WFRealmAccessResourcePermissionState, WFTrustedJavaScriptDomain;

@interface WFWorkflowTrustedResources <NSCopying>
{
    RLMArray<WFTrustedJavaScriptDomain> *_trustedDomains;	// 24 = 0x18
    RLMArray<WFRealmAccessResourcePermissionState> *_accessResourcePermissionStates;	// 32 = 0x20
    RLMLinkingObjects *_workflows;	// 40 = 0x28
}

+ (id)linkingObjectsProperties;	// IMP=0x00000000001b12dc
+ (id)requiredProperties;	// IMP=0x00000000001b126a
- (void).cxx_destruct;	// IMP=0x00000000001b1228
@property(readonly) RLMLinkingObjects *workflows; // @synthesize workflows=_workflows;
@property(retain) RLMArray<WFRealmAccessResourcePermissionState> *accessResourcePermissionStates; // @synthesize accessResourcePermissionStates=_accessResourcePermissionStates;
@property(retain) RLMArray<WFTrustedJavaScriptDomain> *trustedDomains; // @synthesize trustedDomains=_trustedDomains;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b1116

@end
