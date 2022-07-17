//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/WKNavigationDelegate-Protocol.h>

@class NSString, WKWebView;
@protocol OS_dispatch_semaphore;

@interface SGDOMParser : NSObject <WKNavigationDelegate>
{
    NSObject<OS_dispatch_semaphore> *_loadedSem;	// 8 = 0x8
    WKWebView *_webView;	// 16 = 0x10
    NSString *_html;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000148aa7
- (void)runJavascriptOnWebView:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000014882f
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x000000000014881a
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000000148805
- (id)_parseDocument:(id)arg1;	// IMP=0x000000000014853e
- (id)webView;	// IMP=0x0000000000147fb9
- (id)parseHTML:(id)arg1;	// IMP=0x000000000014794d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
