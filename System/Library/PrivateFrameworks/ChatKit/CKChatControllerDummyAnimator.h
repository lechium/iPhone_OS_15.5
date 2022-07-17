//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CAAnimationDelegate-Protocol.h>
#import <ChatKit/CKImpactEffectAnimationProvider-Protocol.h>

@class CAEmitterLayer, NSString;
@protocol CKSendAnimationManager, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider>
{
    id <CKSendAnimationManager> _animationDelegate;	// 8 = 0x8
    CAEmitterLayer *_dustEmitter;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_throwAnimationGroup;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004756bf
@property(retain, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup; // @synthesize throwAnimationGroup=_throwAnimationGroup;
@property(retain, nonatomic) CAEmitterLayer *dustEmitter; // @synthesize dustEmitter=_dustEmitter;
@property(nonatomic) __weak id <CKSendAnimationManager> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void)_configureForVFD:(id)arg1;	// IMP=0x000000000047554e
- (void)_beginGentleAnimationWithContext:(id)arg1;	// IMP=0x0000000000474723
- (void)_beginFocusAnimationWithContext:(id)arg1;	// IMP=0x0000000000473708
- (void)_beginLoudAnimationsWithContext:(id)arg1;	// IMP=0x0000000000472229
- (void)_beginImpactAnimationWithContext:(id)arg1;	// IMP=0x000000000046f97a
- (void)_beginThrowAnimationWithContext:(id)arg1;	// IMP=0x000000000046d472
- (void)beginAnimationWithSendAnimationContext:(id)arg1;	// IMP=0x000000000046cfd9
- (void)stopAnimationWithSendAnimationContext:(id)arg1;	// IMP=0x000000000046c130
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000046c0f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
