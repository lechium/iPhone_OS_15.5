//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteUI/RUIServerHookDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, RemoteUIController, UIViewController;

@interface RUIServerHookHandler : NSObject <RUIServerHookDelegate>
{
    NSMutableArray *_hookIdentifiers;	// 8 = 0x8
    RemoteUIController *_remoteUIController;	// 16 = 0x10
    UIViewController *_presentingControllerOverride;	// 24 = 0x18
    NSArray *_serverHooks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000d512
@property(copy, nonatomic) NSArray *serverHooks; // @synthesize serverHooks=_serverHooks;
@property(retain, nonatomic) UIViewController *presentingControllerOverride; // @synthesize presentingControllerOverride=_presentingControllerOverride;
- (id)_refreshRequestWithInfo:(id)arg1 initiatingObjectModel:(id)arg2 attributes:(id)arg3;	// IMP=0x000000000000d1e6
- (void)_reloadUIWithInfo:(id)arg1 attributes:(id)arg2 initiatingObjectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000d086
- (void)refreshWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cda8
- (id)_responseDataForResult:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000000000cc10
- (_Bool)isUserCancelError:(id)arg1;	// IMP=0x000000000000cc08
- (void)dismissObjectModelsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cba0
- (id)presentationContextForHook:(id)arg1;	// IMP=0x000000000000cb8e
- (id)currentPresenter;	// IMP=0x000000000000ca5a
- (void)processServerResponse:(id)arg1;	// IMP=0x000000000000c867
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c232
- (void)_handleResponseForHook:(id)arg1 success:(_Bool)arg2 error:(id)arg3 attributes:(id)arg4 objectModel:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000000bfbf
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2;	// IMP=0x000000000000bfaa
- (void)_rebuildServerHookHandlers;	// IMP=0x000000000000b585
- (id)initWithRemoteUIController:(id)arg1 hooks:(id)arg2;	// IMP=0x000000000000b4a2
- (id)initWithRemoteUIController:(id)arg1;	// IMP=0x000000000000b489

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

