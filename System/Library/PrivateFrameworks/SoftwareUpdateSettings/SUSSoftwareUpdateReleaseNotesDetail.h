//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <SoftwareUpdateSettings/WKNavigationDelegate-Protocol.h>

@class NSString, WKWebView;

@interface SUSSoftwareUpdateReleaseNotesDetail : PSListController <WKNavigationDelegate>
{
    NSString *_releaseNotes;	// 192 = 0xc0
    WKWebView *_webView;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000009b80
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009980
- (id)specifiers;	// IMP=0x00000000000097c0
- (void)viewDidLoad;	// IMP=0x0000000000008ff0
- (id)init;	// IMP=0x0000000000008ea0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

