//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString, NSUUID, UITraitCollection, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, _UIRemoteViewService;
@protocol OS_dispatch_queue, _UIViewServiceDeputyXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject
{
    _UIRemoteViewService *_service;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSString *_viewServiceBundleIdentifier;	// 24 = 0x18
    NSString *_viewControllerClassName;	// 32 = 0x20
    NSUUID *_contextToken;	// 40 = 0x28
    NSArray *_serializedAppearanceCustomizations;	// 48 = 0x30
    UITraitCollection *_traits;	// 56 = 0x38
    id _exportedHostingObject;	// 64 = 0x40
    Class _remoteViewControllerClass;	// 72 = 0x48
    id <_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;	// 80 = 0x50
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;	// 88 = 0x58
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    _Bool _isCancelledOrComplete;	// 112 = 0x70
    NSError *_error;	// 120 = 0x78
    _UIAsyncInvocation *_requestCancellationInvocation;	// 128 = 0x80
}

+ (id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 traitCollection:(id)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000113792b
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 traitCollection:(id)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000011378ef
+ (id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 traitCollection:(id)arg5 exportedHostingObject:(id)arg6 serviceViewControllerDeputyInterface:(id)arg7 connectionHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000113705a
- (void).cxx_destruct;	// IMP=0x00000000011395c0
- (id)_cancelWithError:(id)arg1;	// IMP=0x0000000001139519
- (void)_didFinishEstablishingConnection;	// IMP=0x00000000011394b9
- (void)_connectToViewControllerControlMessageDeputy;	// IMP=0x00000000011393c1
- (void)_connectToServiceViewController;	// IMP=0x00000000011392bb
- (void)_sendServiceTextEffectsRequest;	// IMP=0x0000000001139081
- (void)_connectToTextEffectsOperator;	// IMP=0x0000000001138f08
- (void)_sendServiceViewControllerRequest;	// IMP=0x00000000011389d5
- (void)_connectToViewControllerOperator;	// IMP=0x000000000113885c
- (void)_connectToPlugInKitService;	// IMP=0x00000000011384a4
- (void)_connectToViewService;	// IMP=0x00000000011380ec
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001137e2f
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000001137ace
- (void)dealloc;	// IMP=0x0000000001137a46

@end

