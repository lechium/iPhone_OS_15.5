//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/SBActivationSettings-Protocol.h>
#import <SpringBoard/SBDeactivationSettings-Protocol.h>
#import <SpringBoard/SBLayoutElementDescriptor-Protocol.h>

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor>
{
    NSString *_identifier;	// 8 = 0x8
    long long _layoutRole;	// 16 = 0x10
    SBActivationSettings *_activationSettings;	// 24 = 0x18
    SBDeactivationSettings *_deactivationSettings;	// 32 = 0x20
    long long __mainDisplayPreferredInterfaceOrientation;	// 40 = 0x28
}

+ (id)entity;	// IMP=0x0000000000012230
- (void).cxx_destruct;	// IMP=0x0000000000008128
@property(nonatomic, getter=_mainDisplayPreferredInterfaceOrientation, setter=_setMainDisplayPreferredInterfaceOrientation:) long long _mainDisplayPreferredInterfaceOrientation; // @synthesize _mainDisplayPreferredInterfaceOrientation=__mainDisplayPreferredInterfaceOrientation;
@property(readonly, nonatomic) SBDeactivationSettings *deactivationSettings; // @synthesize deactivationSettings=_deactivationSettings;
@property(readonly, nonatomic) SBActivationSettings *activationSettings; // @synthesize activationSettings=_activationSettings;
@property(nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;	// IMP=0x000000000007bbcb
- (_Bool)supportsLayoutRole:(long long)arg1;	// IMP=0x00000000005ee832
@property(readonly, copy, nonatomic) CDUnknownBlockType entityGenerator;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000005ee5ae
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000005ee55e
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000014922
- (id)succinctDescription;	// IMP=0x00000000000148d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d508
- (CDUnknownBlockType)_generator;	// IMP=0x00000000005ee4db
- (_Bool)_supportsLayoutRole:(long long)arg1;	// IMP=0x00000000005ee4d3
@property(readonly, copy) NSString *description;
- (void)setPreferredInterfaceOrientation:(long long)arg1 onDisplayWithIdentity:(id)arg2;	// IMP=0x000000000006ae77
- (long long)preferredInterfaceOrientationOnDisplayWithIdentity:(id)arg1;	// IMP=0x0000000000058a05
- (_Bool)isAnalogousToEntity:(id)arg1;	// IMP=0x00000000005ee408
@property(readonly, nonatomic) _Bool wantsExclusiveForeground;
@property(readonly, nonatomic) _Bool supportsPresentationAtAnySize;
- (void)clearDeactivationSettings;	// IMP=0x00000000000122cd
- (void)applyDeactivationSettings:(id)arg1;	// IMP=0x000000000000d671
- (id)copyDeactivationSettings;	// IMP=0x00000000005ee3e2
- (id)objectForDeactivationSetting:(unsigned int)arg1;	// IMP=0x0000000000064cdd
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;	// IMP=0x00000000005ee376
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;	// IMP=0x00000000005ee360
- (long long)flagForDeactivationSetting:(unsigned int)arg1;	// IMP=0x00000000005ee339
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;	// IMP=0x00000000005ee2d5
- (void)clearActivationSettings;	// IMP=0x000000000000d78a
- (void)applyActivationSettings:(id)arg1;	// IMP=0x000000000000d60a
- (id)copyActivationSettings;	// IMP=0x00000000005ee2bf
- (id)objectForActivationSetting:(unsigned int)arg1;	// IMP=0x0000000000018565
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;	// IMP=0x000000000007ad2f
- (_Bool)boolForActivationSetting:(unsigned int)arg1;	// IMP=0x00000000000140af
- (long long)flagForActivationSetting:(unsigned int)arg1;	// IMP=0x000000000007b36d
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;	// IMP=0x0000000000070b65
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;	// IMP=0x0000000000007d47
- (id)init;	// IMP=0x0000000000012242
- (id)appClipPlaceholderEntity;	// IMP=0x000000000021994c
- (_Bool)isAppClipPlaceholderEntity;	// IMP=0x0000000000219944
- (id)deviceApplicationSceneEntity;	// IMP=0x0000000000283bd4
- (_Bool)isDeviceApplicationSceneEntity;	// IMP=0x0000000000283bcc
@property(readonly, nonatomic) _Bool isPreviousWorkspaceEntity;
@property(readonly, nonatomic) _Bool isEmptyWorkspaceEntity;
@property(readonly, nonatomic) _Bool isHomeScreenEntity;
- (id)applicationSceneEntity;	// IMP=0x0000000000070c68
- (_Bool)isApplicationSceneEntity;	// IMP=0x0000000000063bdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
