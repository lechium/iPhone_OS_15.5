//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction
{
    id <SBLockScreenEnvironment> _lockScreenEnvironment;	// 24 = 0x18
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000058e994
- (void)_didComplete;	// IMP=0x000000000058e935
- (void)_lockScreenDidActivate;	// IMP=0x000000000058e923
- (void)_setupAndActivate;	// IMP=0x000000000058e8c5
- (void)_activateLockScreen;	// IMP=0x000000000058e800
- (void)_begin;	// IMP=0x000000000058e7c2
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;	// IMP=0x000000000058e7ba
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;	// IMP=0x000000000058e7b2
- (void)dealloc;	// IMP=0x000000000058e769
- (id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2;	// IMP=0x000000000058e62c

@end

