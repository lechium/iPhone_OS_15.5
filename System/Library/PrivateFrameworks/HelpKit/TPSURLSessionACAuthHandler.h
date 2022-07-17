//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HelpKit/TPSURLSessionCustomAuthHandling-Protocol.h>

@class NSString, PPCExtensibleSSOAuthenticator, TPSURLSessionACAuthContext;
@protocol OS_dispatch_queue;

@interface TPSURLSessionACAuthHandler : NSObject <TPSURLSessionCustomAuthHandling>
{
    TPSURLSessionACAuthContext *_authenticationContext;	// 8 = 0x8
    TPSURLSessionACAuthContext *_authContext;	// 16 = 0x10
    PPCExtensibleSSOAuthenticator *_ssoAuthenticator;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_syncQueue;	// 32 = 0x20
}

+ (_Bool)canAuthenticateWithURLResponse:(id)arg1;	// IMP=0x0000000000005d0f
- (void).cxx_destruct;	// IMP=0x00000000000067c3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) PPCExtensibleSSOAuthenticator *ssoAuthenticator; // @synthesize ssoAuthenticator=_ssoAuthenticator;
@property(copy, nonatomic) TPSURLSessionACAuthContext *authContext; // @synthesize authContext=_authContext;
@property(readonly, copy, nonatomic) TPSURLSessionACAuthContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)customHeaderFields;	// IMP=0x0000000000006691
- (void)authenticateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005ed5
- (id)initWithAuthenticationContext:(id)arg1;	// IMP=0x0000000000005e4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
