//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TransparencyDetailsView/WKNavigationDelegate-Protocol.h>

@class NSDictionary, NSString, UIActivityIndicatorView, UILabel, UINavigationBar, WKWebView;
@protocol ADTransparencyViewControllerDelegate;

@interface ADTransparencyViewController : UIViewController <WKNavigationDelegate>
{
    UIActivityIndicatorView *activityIndicator;	// 8 = 0x8
    id <ADTransparencyViewControllerDelegate> _delegate;	// 16 = 0x10
    _Bool _isiPad;	// 24 = 0x18
    NSString *_transparencyDetailsUnavailableMessage;	// 32 = 0x20
    NSString *_transparencyRendererPayload;	// 40 = 0x28
    NSString *_transparencyRendererURL;	// 48 = 0x30
    NSString *_transparencyDetails;	// 56 = 0x38
    NSDictionary *_transparencyDetailsData;	// 64 = 0x40
    UILabel *_errorLabel;	// 72 = 0x48
    WKWebView *_myWebView;	// 80 = 0x50
    UINavigationBar *_transparencyNavBar;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000098cf
@property(nonatomic) _Bool isiPad; // @synthesize isiPad=_isiPad;
@property(retain, nonatomic) UINavigationBar *transparencyNavBar; // @synthesize transparencyNavBar=_transparencyNavBar;
@property(retain, nonatomic) WKWebView *myWebView; // @synthesize myWebView=_myWebView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) NSDictionary *transparencyDetailsData; // @synthesize transparencyDetailsData=_transparencyDetailsData;
@property(copy, nonatomic) NSString *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
@property(readonly, nonatomic) NSString *transparencyRendererURL; // @synthesize transparencyRendererURL=_transparencyRendererURL;
@property(readonly, nonatomic) NSString *transparencyRendererPayload; // @synthesize transparencyRendererPayload=_transparencyRendererPayload;
@property(readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage; // @synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage;
@property(retain, nonatomic) id <ADTransparencyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reportTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000090f4
- (void)_hideErrorMessage;	// IMP=0x0000000000009076
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000000000901c
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000008fc2
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000894c
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00000000000088f0
- (void)_showErrorMessage:(id)arg1;	// IMP=0x0000000000008470
- (void)_closeViewController:(id)arg1;	// IMP=0x0000000000008332
- (void)errorDelegate;	// IMP=0x000000000000825a
- (void)presentViewDelegate;	// IMP=0x00000000000081b3
- (void)loadWebView;	// IMP=0x0000000000007894
- (void)_commonInit;	// IMP=0x00000000000070c0
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000000007075
- (id)bundleForTransparencyDetailsView;	// IMP=0x0000000000006e9a
- (void)requestViewWithTransparencyDetailsDictionary:(id)arg1;	// IMP=0x0000000000006e86
- (void)requestViewWithTransparencyDetails:(id)arg1;	// IMP=0x0000000000006dc6
- (id)initWithTransparencyDetails:(id)arg1;	// IMP=0x0000000000006cde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
