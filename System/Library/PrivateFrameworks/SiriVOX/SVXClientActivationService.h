//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientActivationServicing-Protocol.h>
#import <SiriVOX/SVXClientServiceConsuming-Protocol.h>

@class AFAnalytics, NSMutableArray, NSString, NSUUID, SVXActivationContext;
@protocol SVXClientActivationServiceDelegate, SVXClientServiceProviding, SVXPerforming;

__attribute__((visibility("hidden")))
@interface SVXClientActivationService : NSObject <SVXClientActivationServicing, SVXClientServiceConsuming>
{
    id <SVXPerforming> _performer;	// 8 = 0x8
    id <SVXClientServiceProviding> _clientServiceProvider;	// 16 = 0x10
    AFAnalytics *_analytics;	// 24 = 0x18
    NSMutableArray *_queuedButtonEvents;	// 32 = 0x20
    SVXActivationContext *_lastButtonActivationContext;	// 40 = 0x28
    NSUUID *_preheatToken;	// 48 = 0x30
    id <SVXClientActivationServiceDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005a659
@property(nonatomic) __weak id <SVXClientActivationServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_preheatTimerArrivedWithToken:(id)arg1;	// IMP=0x000000000005a56a
- (void)_stopPreheatTimer;	// IMP=0x000000000005a4c5
- (void)_startPreheatTimer;	// IMP=0x000000000005a35f
- (void)_preheatWithActivationSource:(long long)arg1;	// IMP=0x000000000005a21e
- (void)_transitToAutomaticEndpointing;	// IMP=0x000000000005a115
- (void)_performManualEndpointing;	// IMP=0x000000000005a00c
- (void)_deactivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059ccb
- (void)_activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059784
- (void)_prewarmWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059593
- (_Bool)_requestPermissionToActivateWithContext:(id)arg1;	// IMP=0x000000000005947a
- (void)_processLastButtonActivationContext;	// IMP=0x0000000000058e80
- (void)_enqueueButtonEvent:(id)arg1;	// IMP=0x0000000000058b3a
- (void)deactivateWithButtonEvent:(id)arg1 userInfo:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000058823
- (void)deactivateWithUserInfo:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005853c
- (void)deactivateWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000581df
- (void)activateWithSystemEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057e89
- (void)prewarmForSystemEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005793d
- (void)activateWithButtonEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000574c7
- (void)activateWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005716a
- (void)activateWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056e3d
- (void)enqueueButtonEvent:(id)arg1;	// IMP=0x0000000000056c7c
- (void)handleButtonEvent:(id)arg1;	// IMP=0x0000000000056c4a
- (void)clientServiceDidChange:(_Bool)arg1;	// IMP=0x0000000000056c44
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;	// IMP=0x0000000000056b8d
- (void)handleDidDeactivateWithContext:(id)arg1;	// IMP=0x0000000000056ab8
- (void)handleWillDeactivateWithContext:(id)arg1;	// IMP=0x00000000000569e3
- (void)handleDidNotActivateWithContext:(id)arg1 error:(id)arg2;	// IMP=0x00000000000568c5
- (void)handleDidActivateWithContext:(id)arg1;	// IMP=0x00000000000567d5
- (void)handleWillActivateWithContext:(id)arg1;	// IMP=0x00000000000566bf
- (void)handleRequestPermissionToActivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000565c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

