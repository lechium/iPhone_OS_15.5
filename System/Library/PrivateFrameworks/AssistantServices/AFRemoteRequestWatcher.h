//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationListenerDelegate-Protocol.h>

@class AFSiriActivationListener, NSString;
@protocol OS_dispatch_queue;

@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFSiriActivationListener *_siriActivationListener;	// 16 = 0x10
    CDUnknownBlockType _prewarmHandler;	// 24 = 0x18
    CDUnknownBlockType _requestHandler;	// 32 = 0x20
    CDUnknownBlockType _dismissalHandler;	// 40 = 0x28
    CDUnknownBlockType _intentHandler;	// 48 = 0x30
    CDUnknownBlockType _intentForwardingActionHandler;	// 56 = 0x38
    int _speechRequestToken;	// 64 = 0x40
    CDUnknownBlockType _speechRequestHandler;	// 72 = 0x48
    CDUnknownBlockType _buttonEventHandler;	// 80 = 0x50
    CDUnknownBlockType _activationHandler;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000b9eb4
- (void)setNewSpeechRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9dee
- (void)_dispatchSpeechRequestOptions:(id)arg1;	// IMP=0x00000000000b9d38
- (void)_setupSpeechRequestListener;	// IMP=0x00000000000b9a3e
- (void)setActivationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9989
- (void)setButtonEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b98d4
- (void)setIntentForwardingActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b981f
- (void)setIntentHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b976a
- (void)setDismissalHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b96b5
- (void)setRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b95ef
- (void)setNewRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9509
- (void)setPrewarmHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9454
- (void)_setupRequestListener;	// IMP=0x00000000000b9253
- (void)siriActivationListener:(id)arg1 handleButtonEventFromContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b9138
- (void)siriActivationListener:(id)arg1 handleIntentForwardingAction:(id)arg2 inBackgroundApplicationWithBundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b9017
- (void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b8ec3
- (void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000b8d1b
- (void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b8abb
- (void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b89a0
- (void)dealloc;	// IMP=0x00000000000b8935
- (id)init;	// IMP=0x00000000000b883a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

