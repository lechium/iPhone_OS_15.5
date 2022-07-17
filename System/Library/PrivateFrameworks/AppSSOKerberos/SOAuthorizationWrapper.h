//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSSOKerberos/SOAuthorizationCoreDelegate-Protocol.h>

@class NSString, SOAuthorizationCore;

@interface SOAuthorizationWrapper : NSObject <SOAuthorizationCoreDelegate>
{
    SOAuthorizationCore *_authorization;	// 8 = 0x8
    CDUnknownBlockType _authorizationCompletion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000202eb
@property(copy) CDUnknownBlockType authorizationCompletion; // @synthesize authorizationCompletion=_authorizationCompletion;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x000000000002029c
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;	// IMP=0x0000000000020237
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;	// IMP=0x0000000000020205
- (void)authorizationDidComplete:(id)arg1;	// IMP=0x00000000000201d4
- (void)authorizationDidCancel:(id)arg1;	// IMP=0x00000000000201a6
- (void)authorizationDidNotHandle:(id)arg1;	// IMP=0x0000000000020178
- (_Bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2;	// IMP=0x000000000002015f
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 andCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000200ad
- (id)init;	// IMP=0x0000000000020007

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
