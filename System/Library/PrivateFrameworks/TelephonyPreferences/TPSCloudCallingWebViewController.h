//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TelephonyPreferences/UIWebViewDelegate-Protocol.h>

@class NSData, NSString, NSURL, UIActivityIndicatorView, UIWebView;

@interface TPSCloudCallingWebViewController : UIViewController <UIWebViewDelegate>
{
    long long _type;	// 8 = 0x8
    UIWebView *_webView;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
    NSData *_body;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000d2e5
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)setupControllerInWebFrame:(id)arg1;	// IMP=0x000000000000d12d
- (void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;	// IMP=0x000000000000d118
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x000000000000d08c
- (void)doWebViewTimedOut;	// IMP=0x000000000000cf4d
- (void)doProvisioningFailed;	// IMP=0x000000000000ce22
- (void)doProvisioningCanceled;	// IMP=0x000000000000cce3
- (void)doProvisioningDone;	// IMP=0x000000000000cb90
- (void)_cancelButtonClicked:(id)arg1;	// IMP=0x000000000000cb1a
- (void)cancelWebView;	// IMP=0x000000000000caa4
- (void)loadURL:(id)arg1 body:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c783
- (void)loadWebViewWithSpinner:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c4ea
@property(readonly, nonatomic, getter=isPresentingURL) _Bool presentingURL;
- (void)loadView;	// IMP=0x000000000000c23e
- (id)initWithType:(long long)arg1;	// IMP=0x000000000000c1cb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c1bd
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000c1af
- (id)init;	// IMP=0x000000000000c1a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

