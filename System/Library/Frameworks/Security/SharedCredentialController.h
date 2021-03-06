//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/ASAuthorizationControllerDelegate-Protocol.h>
#import <Security/ASAuthorizationControllerPresentationContextProviding-Protocol.h>

@class ASAuthorizationController, ASAuthorizationPasswordProvider, ASPasswordCredential, NSError, NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SharedCredentialController : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>
{
    ASAuthorizationPasswordProvider *_provider;	// 8 = 0x8
    ASAuthorizationController *_controller;	// 16 = 0x10
    ASPasswordCredential *_passwordCredential;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    int _result;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a8057
- (id)presentationAnchorForAuthorizationController:(id)arg1;	// IMP=0x00000000000a7fd9
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000000000a7f0a
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;	// IMP=0x00000000000a7dcf
- (int)result;	// IMP=0x00000000000a7dc6
- (id)error;	// IMP=0x00000000000a7db8
- (id)passwordCredential;	// IMP=0x00000000000a7d6e
- (void)_requestCredential;	// IMP=0x00000000000a7bb3
- (void)dealloc;	// IMP=0x00000000000a7b57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

