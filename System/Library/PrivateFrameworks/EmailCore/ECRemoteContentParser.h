//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailCore/ECRemoteContentWebViewObserver-Protocol.h>
#import <EmailCore/EFSignpostable-Protocol.h>
#import <EmailCore/WKNavigationDelegate-Protocol.h>

@class ECRemoteContentWebViewObserver, EFLocked, NSString, WKWebView, _WKRemoteObjectInterface;

@interface ECRemoteContentParser : NSObject <ECRemoteContentWebViewObserver, EFSignpostable, WKNavigationDelegate>
{
    _WKRemoteObjectInterface *_observerInterface;	// 8 = 0x8
    ECRemoteContentWebViewObserver *_observer;	// 16 = 0x10
    EFLocked *_state;	// 24 = 0x18
    WKWebView *_webView;	// 32 = 0x20
}

+ (id)signpostLog;	// IMP=0x00000000000286d3
- (void).cxx_destruct;	// IMP=0x0000000000029c22
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029c11
- (id)remoteContentLinksFromHTMLData:(id)arg1 cancelationToken:(id)arg2 defaultCharsetName:(id)arg3;	// IMP=0x00000000000292f3
- (void)setContentRuleLists:(id)arg1;	// IMP=0x0000000000029039
- (void)baseURL:(id)arg1 didRequestRemoteContentURLs:(id)arg2;	// IMP=0x0000000000028e09
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (id)webViewConfiguration;	// IMP=0x000000000002896a
- (void)dealloc;	// IMP=0x00000000000288b8
- (id)init;	// IMP=0x00000000000287f9
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
