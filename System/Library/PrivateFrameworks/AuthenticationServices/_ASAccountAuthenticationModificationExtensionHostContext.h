//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <AuthenticationServices/_ASAccountAuthenticationModificationExtensionHostContextProtocol-Protocol.h>
#import <AuthenticationServices/_ASExtensionHostContext-Protocol.h>

@class NSString;
@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate;

__attribute__((visibility("hidden")))
@interface _ASAccountAuthenticationModificationExtensionHostContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionHostContextProtocol, _ASExtensionHostContext>
{
    id <_ASAccountAuthenticationModificationExtensionHostContextDelegate> _delegate;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000002ad5a
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000002ad41
- (void).cxx_destruct;	// IMP=0x000000000002b0f0
@property(nonatomic) __weak id <_ASAccountAuthenticationModificationExtensionHostContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissRequestUI;	// IMP=0x000000000002b06c
- (void)prepareToCancelRequestWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002afc5
- (void)prepareToCompleteRequestWithUpdatedCredential:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002af0b
- (void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ae64
- (void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ad73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
