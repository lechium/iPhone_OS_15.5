//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PromotedContentUI/WKNavigationDelegatePrivate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC17PromotedContentUI26WebAdNavigationCoordinator : NSObject <WKNavigationDelegatePrivate>
{
    MISSING_TYPE *navigationResponder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ad60
- (id)init;	// IMP=0x000000000000ad00
- (void)_webView:(id)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;	// IMP=0x000000000000aca0
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a860
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x000000000000a730
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000000000a5f0
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000000000a5d0
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x000000000000a5b0
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;	// IMP=0x000000000000a550

@end
