//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/WebFrameLoadDelegate-Protocol.h>
#import <UIKitCore/WebPolicyDelegate-Protocol.h>
#import <UIKitCore/WebResourceLoadDelegate-Protocol.h>
#import <UIKitCore/WebUIDelegate-Protocol.h>

@class NSString, UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject <WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate>
{
    UIWebView *uiWebView;	// 8 = 0x8
}

- (void)_clearUIWebView;	// IMP=0x00000000013499ed
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;	// IMP=0x00000000013499d7
- (_Bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;	// IMP=0x00000000013499c1
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x00000000013499ab
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x0000000001349995
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x000000000134997f
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;	// IMP=0x0000000001349969
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;	// IMP=0x0000000001349953
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;	// IMP=0x000000000134993d
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;	// IMP=0x0000000001349927
- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x0000000001349911
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x00000000013498fb
- (void)webViewClose:(id)arg1;	// IMP=0x00000000013498e5
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x00000000013498cf
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000013498b9
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000013498a3
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x000000000134988d
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x0000000001349877
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;	// IMP=0x0000000001349861
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;	// IMP=0x000000000134984b
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;	// IMP=0x0000000001349835
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000000134981f
- (void)webViewSupportedOrientationsUpdated:(id)arg1;	// IMP=0x0000000001349809
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000013497f3
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000013497dd
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000013497c7
- (void)webView:(id)arg1 printFrameView:(id)arg2;	// IMP=0x00000000013497b1
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;	// IMP=0x000000000134979b
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;	// IMP=0x0000000001349785
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;	// IMP=0x000000000134976f
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x0000000001349759
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;	// IMP=0x0000000001349743
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;	// IMP=0x0000000001349714
- (id)initWithUIWebView:(id)arg1;	// IMP=0x00000000013496d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

