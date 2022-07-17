//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ApprovalRequest, NSString, UIActivityIndicatorView, UILabel, UIView, WKWebView;
@protocol ProductViewControllerActionDelegate;

@interface WebProductViewController : UIViewController
{
    id <ProductViewControllerActionDelegate> _actionDelegate;	// 8 = 0x8
    ApprovalRequest *_request;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicatorView;	// 24 = 0x18
    UILabel *_bannerLabel;	// 32 = 0x20
    UIView *_separatorView;	// 40 = 0x28
    WKWebView *_webView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000004ff0
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *bannerLabel; // @synthesize bannerLabel=_bannerLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) ApprovalRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <ProductViewControllerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0010000000004dd8
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000004c32
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x0010000000004bf0
- (void)_loadWebsite;	// IMP=0x0010000000004b1e
- (void)_declineButtonAction;	// IMP=0x0010000000004adc
- (void)_approveButtonAction;	// IMP=0x0010000000004a9d
- (void)_setupSubviews;	// IMP=0x00100000000045c0
- (void)_setupNavigationItem;	// IMP=0x001000000000439b
- (void)_setup;	// IMP=0x001000000000436d
- (void)viewWillLayoutSubviews;	// IMP=0x001000000000408e
- (void)viewDidLoad;	// IMP=0x0010000000004038
- (void)loadView;	// IMP=0x0010000000003f9d
- (id)initWithRequest:(id)arg1;	// IMP=0x0010000000003f2f

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
