//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFAuthenticationSession;
@protocol ASWebAuthenticationPresentationContextProviding;

@interface ASWebAuthenticationSession : NSObject
{
    SFAuthenticationSession *_authenticationSession;	// 8 = 0x8
    CDUnknownBlockType _originalCompletionHandler;	// 16 = 0x10
    ASWebAuthenticationSession *_referenceToSelf;	// 24 = 0x18
    _Bool _prefersEphemeralWebBrowserSession;	// 32 = 0x20
    id <ASWebAuthenticationPresentationContextProviding> _presentationContextProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000022ab4
@property(nonatomic) _Bool prefersEphemeralWebBrowserSession; // @synthesize prefersEphemeralWebBrowserSession=_prefersEphemeralWebBrowserSession;
@property(nonatomic) __weak id <ASWebAuthenticationPresentationContextProviding> presentationContextProvider; // @synthesize presentationContextProvider=_presentationContextProvider;
- (void)_invalidate;	// IMP=0x0000000000022a6a
- (void)cancel;	// IMP=0x0000000000022a10
- (_Bool)_startDryRun:(_Bool)arg1;	// IMP=0x000000000002261c
- (_Bool)start;	// IMP=0x0000000000022608
@property(readonly, nonatomic) _Bool canStart;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022253
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002223b

@end
