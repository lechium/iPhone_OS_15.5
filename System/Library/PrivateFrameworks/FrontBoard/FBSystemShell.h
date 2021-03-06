//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class BKSSystemShellService, BSCompoundAssertion, FBSystemShellInitializationContext, NSMutableArray, NSMutableSet, NSString, RBSAssertion;

@interface FBSystemShell : NSObject <BSDescriptionProviding>
{
    FBSystemShellInitializationContext *_initializationContext;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    id _observerToken;	// 24 = 0x18
    RBSAssertion *_runningAssertion;	// 32 = 0x20
    BKSSystemShellService *_systemShellService;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    RBSAssertion *_lock_preventSleepAssertion;	// 56 = 0x38
    NSMutableSet *_lock_preventIdleSleepReasons;	// 64 = 0x40
    NSMutableArray *_lock_blocksToRunWhenReady;	// 72 = 0x48
    BSCompoundAssertion *_lock_temporaryWatchdogAssertion;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x000000000000902a
+ (id)_createSingletonWithOptions:(id)arg1;	// IMP=0x0000000000008eaf
- (void).cxx_destruct;	// IMP=0x0000000000009fce
@property(readonly, nonatomic) unsigned long long _state; // @synthesize _state;
@property(readonly, nonatomic) FBSystemShellInitializationContext *initializationContext; // @synthesize initializationContext=_initializationContext;
- (void)_setState:(unsigned long long)arg1;	// IMP=0x0000000000009ad9
- (void)_setSystemIdleSleepDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000000095f6
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009595
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009545
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000094c4
- (id)succinctDescription;	// IMP=0x0000000000009474
@property(readonly, copy) NSString *description;
- (void)_informSystemShellServiceDidFinishLaunching;	// IMP=0x000000000000944a
- (void)_startSystemShellService;	// IMP=0x0000000000009434
- (void)_addBlockToExecuteWhenReady:(CDUnknownBlockType)arg1;	// IMP=0x00000000000093b4
- (void)_initializationComplete;	// IMP=0x000000000000939d
- (id)assertWatchdogEnabledForLimitedDurationForReason:(id)arg1;	// IMP=0x00000000000091fe
- (void)sendActionsToBackBoard:(id)arg1;	// IMP=0x0000000000009052
- (void)readyForInteraction;	// IMP=0x000000000000903b
- (id)_initWithOptions:(id)arg1;	// IMP=0x0000000000008931

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

