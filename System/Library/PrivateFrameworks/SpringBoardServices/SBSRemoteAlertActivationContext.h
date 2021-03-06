//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUUID, SBSRemoteAlertPresentationTarget;

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding>
{
    _Bool _activatingForSiri;	// 8 = 0x8
    _Bool _shouldDismissPresentedBanners;	// 9 = 0x9
    _Bool _shouldInvalidateWhenDeactivated;	// 10 = 0xa
    _Bool _switcherEligible;	// 11 = 0xb
    NSString *_reason;	// 16 = 0x10
    NSSet *_actions;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
    SBSRemoteAlertPresentationTarget *_presentationTarget;	// 40 = 0x28
    NSUUID *_activityContinuationIdentifier;	// 48 = 0x30
    NSDictionary *_legacyAlertOptions;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000287b4
+ (id)activationContextWithLegacyAlertOptions:(id)arg1;	// IMP=0x00000000000284a0
- (void).cxx_destruct;	// IMP=0x0000000000029122
@property(nonatomic, getter=isSwitcherEligible) _Bool switcherEligible; // @synthesize switcherEligible=_switcherEligible;
@property(nonatomic) _Bool shouldInvalidateWhenDeactivated; // @synthesize shouldInvalidateWhenDeactivated=_shouldInvalidateWhenDeactivated;
@property(copy, nonatomic) NSDictionary *legacyAlertOptions; // @synthesize legacyAlertOptions=_legacyAlertOptions;
@property(copy, nonatomic) NSUUID *activityContinuationIdentifier; // @synthesize activityContinuationIdentifier=_activityContinuationIdentifier;
@property(retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // @synthesize presentationTarget=_presentationTarget;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool shouldDismissPresentedBanners; // @synthesize shouldDismissPresentedBanners=_shouldDismissPresentedBanners;
@property(nonatomic, getter=isActivatingForSiri) _Bool activatingForSiri; // @synthesize activatingForSiri=_activatingForSiri;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000028ced
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000028c9d
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000028c81
- (id)succinctDescription;	// IMP=0x0000000000028c31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028ac3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000287bc
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000028688
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000028506
@property(readonly, copy) NSString *description;
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000283c8
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2;	// IMP=0x00000000000283b3
- (id)initWithActions:(id)arg1;	// IMP=0x000000000002839f
- (id)init;	// IMP=0x000000000002835f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

