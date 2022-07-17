//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebViewClientInterface-Protocol.h>
#import <AppleMediaServicesUI/WKNavigationDelegatePrivate-Protocol.h>
#import <AppleMediaServicesUI/WKUIDelegate-Protocol.h>

@class AMSBinaryPromise, AMSUIWebClientContext, AMSUIWebDelegateProxy, NSArray, NSString, WKWebView, _WKRemoteObjectInterface;
@protocol AMSUIWebViewPluginInterface;

__attribute__((visibility("hidden")))
@interface AMSUIWebView <AMSUIWebViewClientInterface, WKUIDelegate, WKNavigationDelegatePrivate>
{
    _Bool _contentLoaded;	// 8 = 0x8
    double _topInset;	// 16 = 0x10
    WKWebView *_underlyingWebView;	// 24 = 0x18
    NSArray *_baseScripts;	// 32 = 0x20
    AMSBinaryPromise *_contentRulesPromise;	// 40 = 0x28
    AMSUIWebClientContext *_context;	// 48 = 0x30
    AMSBinaryPromise *_currentLoadPromise;	// 56 = 0x38
    _WKRemoteObjectInterface *_exportedInterface;	// 64 = 0x40
    AMSUIWebDelegateProxy *_exportedObjectProxy;	// 72 = 0x48
    id <AMSUIWebViewPluginInterface> _remoteProxy;	// 80 = 0x50
}

+ (id)_sharedProcessPool;	// IMP=0x00000000000a52a6
+ (id)_getSetCookiesForResponse:(id)arg1;	// IMP=0x00000000000a3fb9
- (void).cxx_destruct;	// IMP=0x00000000000a572a
@property(retain, nonatomic) id <AMSUIWebViewPluginInterface> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property(retain, nonatomic) AMSUIWebDelegateProxy *exportedObjectProxy; // @synthesize exportedObjectProxy=_exportedObjectProxy;
@property(retain, nonatomic) _WKRemoteObjectInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) AMSBinaryPromise *currentLoadPromise; // @synthesize currentLoadPromise=_currentLoadPromise;
@property(nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSBinaryPromise *contentRulesPromise; // @synthesize contentRulesPromise=_contentRulesPromise;
@property(retain, nonatomic) NSArray *baseScripts; // @synthesize baseScripts=_baseScripts;
@property(readonly, nonatomic) WKWebView *underlyingWebView; // @synthesize underlyingWebView=_underlyingWebView;
@property(readonly, nonatomic) _Bool contentLoaded; // @synthesize contentLoaded=_contentLoaded;
- (void)_unregisterProxies;	// IMP=0x00000000000a5422
- (id)_setupContentRulesForWebView:(id)arg1 context:(id)arg2;	// IMP=0x00000000000a45f7
- (id)_prepareWithURL:(id)arg1 loadBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4209
- (void)_addScriptsToContentController:(id)arg1 additionalScripts:(id)arg2;	// IMP=0x00000000000a3823
- (void)_webView:(id)arg1 didFailToInitializePlugInWithInfo:(id)arg2;	// IMP=0x00000000000a36d3
- (void)_webView:(id)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;	// IMP=0x00000000000a358f
- (void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4;	// IMP=0x00000000000a3424
- (void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;	// IMP=0x00000000000a32d4
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;	// IMP=0x00000000000a3160
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000a2f58
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;	// IMP=0x00000000000a2e2a
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;	// IMP=0x00000000000a2cfc
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x00000000000a2bce
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00000000000a2aa0
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x00000000000a2902
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a2739
- (void)webPlugInWillDestroyContext;	// IMP=0x00000000000a25b6
- (void)webPlugInDidCreateContext;	// IMP=0x00000000000a2432
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a2356
- (void)receiveJSObject:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a19be
- (void)frameFinishedLoading;	// IMP=0x00000000000a1806
- (void)updateUserScriptsWithScripts:(id)arg1;	// IMP=0x00000000000a16c7
- (void)takeSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a1591
- (id)sendJSRequest:(id)arg1;	// IMP=0x00000000000a13ee
- (id)loadRequest:(id)arg1;	// IMP=0x00000000000a1106
- (id)loadRequest:(id)arg1 response:(id)arg2 responseData:(id)arg3;	// IMP=0x00000000000a0baa
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) double bottomInset;
- (void)dealloc;	// IMP=0x00000000000a09ef
- (void)layoutSubviews;	// IMP=0x00000000000a0959
- (id)initWithContext:(id)arg1 additionalScripts:(id)arg2;	// IMP=0x00000000000a0515

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
