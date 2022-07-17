//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;
@protocol CDPAuthProvider, CDPStateUIProvider;

@interface CDPController : NSObject
{
    CDPContext *_context;	// 8 = 0x8
    id <CDPStateUIProvider> _uiProvider;	// 16 = 0x10
    id <CDPAuthProvider> _authProvider;	// 24 = 0x18
    CDPDaemonConnection *_daemonConn;	// 32 = 0x20
    CDPStateUIProviderProxy *_uiProviderProxy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001a7be
@property(retain, nonatomic) CDPStateUIProviderProxy *uiProviderProxy; // @synthesize uiProviderProxy=_uiProviderProxy;
@property(retain, nonatomic) CDPDaemonConnection *daemonConn; // @synthesize daemonConn=_daemonConn;
@property(retain, nonatomic) id <CDPAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(retain, nonatomic) id <CDPStateUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void)dealloc;	// IMP=0x000000000001a6c7
- (void)invalidate;	// IMP=0x000000000001a62a
- (id)initWithContext:(id)arg1;	// IMP=0x000000000001a5d0
- (id)init;	// IMP=0x000000000001a57a
- (id)initWithXpcEndpoint:(id)arg1 context:(id)arg2;	// IMP=0x000000000001a4f6

@end
