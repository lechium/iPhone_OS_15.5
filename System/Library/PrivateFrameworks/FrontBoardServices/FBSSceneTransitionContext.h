//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, BSMutableSettings, BSProcessHandle, FBSceneUpdateContext, FBWatchdogTransitionContext, NSSet, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    FBSceneUpdateContext *_updateContext;	// 8 = 0x8
    FBWatchdogTransitionContext *_watchdogTransitionContext;	// 16 = 0x10
    _Bool _allowCPUThrottling;	// 24 = 0x18
    _Bool _runningBoardAssertionDisabled;	// 25 = 0x19
    BSAnimationSettings *_animationSettings;	// 32 = 0x20
    BKSAnimationFenceHandle *_animationFence;	// 40 = 0x28
    NSSet *_actions;	// 48 = 0x30
    BSProcessHandle *_originatingProcess;	// 56 = 0x38
    BSMutableSettings *_otherSettings;	// 64 = 0x40
    BSMutableSettings *_transientLocalClientSettings;	// 72 = 0x48
}

+ (id)transitionContext;	// IMP=0x0000000000001e96
- (void).cxx_destruct;	// IMP=0x00000000000028e3
@property(retain, nonatomic) BSProcessHandle *originatingProcess; // @synthesize originatingProcess=_originatingProcess;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(copy, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000002873
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x000000000000286b
- (_Bool)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;	// IMP=0x0000000000002863
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;	// IMP=0x000000000000285b
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;	// IMP=0x0000000000002853
- (_Bool)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;	// IMP=0x000000000000284b
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000027a9
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000026c3
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000256a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002558
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000022e9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000002299
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000227d
- (id)succinctDescription;	// IMP=0x000000000000222d
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000020cc
@property(readonly) unsigned long long hash;
- (_Bool)_isEmpty;	// IMP=0x0000000000001f76
- (id)transientLocalClientSettings;	// IMP=0x0000000000001f3b
- (id)otherSettings;	// IMP=0x0000000000001eec
- (void)dealloc;	// IMP=0x0000000000001ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(retain, nonatomic) FBSceneUpdateContext *updateContext; // @dynamic updateContext;
@property(retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext; // @dynamic watchdogTransitionContext;

@end
