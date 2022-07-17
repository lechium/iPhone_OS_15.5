//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/WKNavigationDelegate-Protocol.h>
#import <SafariServices/_SFReaderControllerDelegate-Protocol.h>

@class NSString, NSTimer, NSURL, WKProcessPool, WKWebView, _SFReaderController;

@interface _SFReaderExtractor : NSObject <WKNavigationDelegate, _SFReaderControllerDelegate>
{
    WKWebView *_webView;	// 8 = 0x8
    WKWebView *_readerWebView;	// 16 = 0x10
    WKProcessPool *_processPool;	// 24 = 0x18
    NSURL *_currentURL;	// 32 = 0x20
    _SFReaderController *_readerController;	// 40 = 0x28
    NSTimer *_loadingTimeoutTimer;	// 48 = 0x30
    NSTimer *_readerExtractionTimer;	// 56 = 0x38
    CDUnknownBlockType _completionHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000e2ed8
- (void)readerController:(id)arg1 didCollectArticleContent:(id)arg2;	// IMP=0x00000000000e2e2d
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x00000000000e2da5
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e2cb1
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000e2b85
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000e2b1a
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00000000000e2a98
- (void)getExtractedDataForURL:(id)arg1 withData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e29f3
- (void)getExtractedDataForURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e292d
- (void)_scheduleReaderDataExtractionTimeout;	// IMP=0x00000000000e279f
- (void)_scheduleLoadingTimeout;	// IMP=0x00000000000e2611
- (void)_invalidateTimers;	// IMP=0x00000000000e25ab
- (void)_finishWithContent:(id)arg1 error:(id)arg2;	// IMP=0x00000000000e22fe
- (void)_setUpReaderController;	// IMP=0x00000000000e21f0
- (id)_configuration;	// IMP=0x00000000000e2143
- (id)_processPool;	// IMP=0x00000000000e201b
- (id)init;	// IMP=0x00000000000e1fbd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
