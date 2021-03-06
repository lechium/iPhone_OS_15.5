//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class BSAnimationSettings, NSMutableArray, NSMutableDictionary, NSSet, NSString, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransitionContext : NSObject <BSDescriptionProviding>
{
    SBWorkspaceTransitionRequest *_request;	// 8 = 0x8
    NSMutableDictionary *_entities;	// 16 = 0x10
    NSMutableDictionary *_previousEntities;	// 24 = 0x18
    _Bool _animationDisabled;	// 32 = 0x20
    BSAnimationSettings *_animationSettings;	// 40 = 0x28
    NSMutableArray *_finalizeBlocks;	// 48 = 0x30
    _Bool _finalized;	// 56 = 0x38
}

+ (id)context;	// IMP=0x00000000003a2c5a
- (void).cxx_destruct;	// IMP=0x0000000000046cb1
@property(readonly, nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(nonatomic) _Bool animationDisabled; // @synthesize animationDisabled=_animationDisabled;
@property(nonatomic) __weak SBWorkspaceTransitionRequest *request; // @synthesize request=_request;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000003a2fb4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000003a2f64
- (id)succinctDescriptionBuilder;	// IMP=0x00000000003a2eff
- (id)succinctDescription;	// IMP=0x00000000003a2eaf
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000014811
- (void)finalize;	// IMP=0x0000000000012ced
- (void)addFinalizeBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b312
- (id)previousEntityForIdentifier:(id)arg1;	// IMP=0x00000000003a2c80
- (id)previousEntityForKey:(id)arg1;	// IMP=0x000000000000d1fc
- (void)setPreviousEntity:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000d354
@property(readonly, copy, nonatomic) NSSet *previousEntities;
- (id)entityForIdentifier:(id)arg1;	// IMP=0x000000000001db8b
- (id)entityForKey:(id)arg1;	// IMP=0x000000000000d805
- (void)setEntity:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000123f0
@property(readonly, copy, nonatomic) NSSet *entities;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000009777

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

