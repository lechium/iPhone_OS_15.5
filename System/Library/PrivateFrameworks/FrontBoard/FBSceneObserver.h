//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneDelegate-Protocol.h>
#import <FrontBoard/FBSceneObserver-Protocol.h>

@class NSString;
@protocol FBSceneDelegate, FBSceneObserver;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneObserver, FBSceneDelegate>
{
    id <FBSceneObserver> _observer;	// 8 = 0x8
    unsigned long long _observerAddress;	// 16 = 0x10
    Class _observerClass;	// 24 = 0x18
    _Bool _isDelegate;	// 32 = 0x20
    struct {
        _Bool contentStateDidChange;
        _Bool updatePrepared;
        _Bool updateApplied;
        _Bool updateCompleted;
        _Bool clientSettingsUpdated;
        _Bool didActivate;
        _Bool willDeactivateWithError;
        _Bool didInvalidate;
        _Bool clientDidConnect;
    } _observerFlags;	// 33 = 0x21
    struct {
        _Bool didReceiveActions;
        _Bool didDeactivateWithError;
    } _delegateFlags;	// 42 = 0x2a
}

- (void).cxx_destruct;	// IMP=0x000000000004963b
@property(readonly, nonatomic) __weak id <FBSceneObserver> observer; // @synthesize observer=_observer;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000049613
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000049453
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000493b0
- (id)succinctDescription;	// IMP=0x0000000000049360
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;	// IMP=0x0000000000049290
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000049189
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x00000000000490ee
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000049032
- (void)sceneDidActivate:(id)arg1;	// IMP=0x0000000000048f97
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x0000000000048eb1
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;	// IMP=0x0000000000048df5
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;	// IMP=0x0000000000048d39
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x0000000000048c9e
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000048bd2
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x0000000000048b06
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048a6c
@property(readonly) unsigned long long hash;
- (_Bool)delegateHandlesActions;	// IMP=0x0000000000048a24
- (_Bool)isDelegate;	// IMP=0x0000000000048a1b
@property(readonly, nonatomic) __weak id <FBSceneDelegate> delegate;
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000004898d
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000004897b
- (id)_initWithObserver:(id)arg1;	// IMP=0x000000000004884f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
