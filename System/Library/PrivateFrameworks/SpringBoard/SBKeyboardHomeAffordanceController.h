//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneManagerObserverPrivate-Protocol.h>
#import <SpringBoard/SBSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>

@class NSHashTable, NSString, SBHomeGrabberRotationView, SBKeyboardHomeAffordanceAssertion;

@interface SBKeyboardHomeAffordanceController : NSObject <SBHomeGrabberDelegate, SBSceneHandleObserver, SBUIActiveOrientationObserver, SBMainDisplaySceneManagerObserverPrivate>
{
    NSHashTable *_assertions;	// 8 = 0x8
    SBHomeGrabberRotationView *_homeGrabberView;	// 16 = 0x10
    _Bool _isHomeGrabberContainingViewAlwaysPortrait;	// 24 = 0x18
    _Bool _isKeyboardDocked;	// 25 = 0x19
    SBKeyboardHomeAffordanceAssertion *_topMostAssertion;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000006127c3
- (void).cxx_destruct;	// IMP=0x0000000000613645
- (void)sceneManagerUsingMedusaHostedKeyboardWindowDidChange:(id)arg1;	// IMP=0x0000000000613633
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;	// IMP=0x000000000061362b
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;	// IMP=0x0000000000613623
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;	// IMP=0x00000000006135e7
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;	// IMP=0x000000000061346b
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;	// IMP=0x0000000000613465
- (void)_updateTopMostAssertion;	// IMP=0x00000000006131f6
- (void)_updateHomeAffordance;	// IMP=0x0000000000612d69
- (void)_getHomeGrabberContainingView:(id *)arg1 isAlwaysPortrait:(_Bool *)arg2;	// IMP=0x0000000000612c06
- (void)_didChangeKeyboardDocked:(id)arg1;	// IMP=0x0000000000612b76
- (void)_didChangeAdditionalEdgeMarginForAssertion:(id)arg1;	// IMP=0x0000000000612aee
- (void)unregisterAssertion:(id)arg1;	// IMP=0x0000000000612ab6
- (void)registerAssertion:(id)arg1;	// IMP=0x0000000000612a7e
- (void)dealloc;	// IMP=0x00000000006129e4
- (id)init;	// IMP=0x0000000000612923

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
