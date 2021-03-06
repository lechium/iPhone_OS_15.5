//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/NSXPCListenerDelegate-Protocol.h>
#import <VoiceShortcuts/SBSRemoteAlertHandleObserver-Protocol.h>
#import <VoiceShortcuts/WFDialogAlertPresenter-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener, SBSRemoteAlertHandle;
@protocol OS_dispatch_source, WFDialogAlertPresenterDelegate;

@interface WFSpringBoardRemoteAlertPresenter : NSObject <SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, WFDialogAlertPresenter>
{
    id <WFDialogAlertPresenterDelegate> _delegate;	// 8 = 0x8
    SBSRemoteAlertHandle *_activeHandle;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_deactivateTimer;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
    NSXPCConnection *_activeConnection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001a454
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *deactivateTimer; // @synthesize deactivateTimer=_deactivateTimer;
@property(retain, nonatomic) SBSRemoteAlertHandle *activeHandle; // @synthesize activeHandle=_activeHandle;
@property(nonatomic) __weak id <WFDialogAlertPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000001a065
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x0000000000019f02
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0000000000019db6
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x0000000000019d22
- (void)deactivateAlert;	// IMP=0x0000000000019c21
- (void)activateAlertWithPresentationTarget:(id)arg1;	// IMP=0x000000000001996e
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000196c9
@property(readonly, nonatomic) _Bool alertIsActive;
- (id)init;	// IMP=0x00000000000195ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

