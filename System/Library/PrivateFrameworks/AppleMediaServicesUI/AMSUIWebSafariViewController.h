//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebPagePresenter-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebSafariWebDelegate-Protocol.h>
#import <AppleMediaServicesUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/WKNavigationDelegate-Protocol.h>

@class AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebSafariPageModel, AMSUIWebSafariWebView, NSString, NSURL, UIBarButtonItem, UIToolbar, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIWebSafariViewController <WKNavigationDelegate, AMSUIWebSafariWebDelegate, UIAdaptivePresentationControllerDelegate, AMSUIWebPagePresenter>
{
    _Bool _shouldDismissOnCallback;	// 8 = 0x8
    _Bool _shouldSetPresentationDelegate;	// 9 = 0x9
    _Bool _didHandleDismiss;	// 10 = 0xa
    _Bool _performingNavigation;	// 11 = 0xb
    CDUnknownBlockType _actionHandler;	// 16 = 0x10
    AMSUIWebAppearance *_appearance;	// 24 = 0x18
    AMSUIWebClientContext *_context;	// 32 = 0x20
    UIViewController *_placeholderPage;	// 40 = 0x28
    AMSUIWebSafariPageModel *_model;	// 48 = 0x30
    long long _pageState;	// 56 = 0x38
    UIToolbar *_toolbar;	// 64 = 0x40
    UIBarButtonItem *_toolbarLeft;	// 72 = 0x48
    UIBarButtonItem *_toolbarRight;	// 80 = 0x50
    AMSUIWebSafariWebView *_webView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000009b5f8
@property(readonly, nonatomic) AMSUIWebSafariWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) UIBarButtonItem *toolbarRight; // @synthesize toolbarRight=_toolbarRight;
@property(readonly, nonatomic) UIBarButtonItem *toolbarLeft; // @synthesize toolbarLeft=_toolbarLeft;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) _Bool performingNavigation; // @synthesize performingNavigation=_performingNavigation;
@property(nonatomic) long long pageState; // @synthesize pageState=_pageState;
@property(readonly, nonatomic) AMSUIWebSafariPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIViewController *placeholderPage; // @synthesize placeholderPage=_placeholderPage;
@property(nonatomic) _Bool didHandleDismiss; // @synthesize didHandleDismiss=_didHandleDismiss;
@property(readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool shouldSetPresentationDelegate; // @synthesize shouldSetPresentationDelegate=_shouldSetPresentationDelegate;
@property(nonatomic) _Bool shouldDismissOnCallback; // @synthesize shouldDismissOnCallback=_shouldDismissOnCallback;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)_updateButtons;	// IMP=0x000000000009b39e
- (void)_setupSafariNavBarWithSpinner:(_Bool)arg1;	// IMP=0x000000000009adc2
- (void)_transitionToWebView;	// IMP=0x000000000009ad28
- (void)_transitionToLoading;	// IMP=0x000000000009ac58
- (void)_transitionToErrorViewWithError:(id)arg1;	// IMP=0x000000000009a761
- (void)_startErrorTimer;	// IMP=0x000000000009a61a
- (void)_share:(id)arg1;	// IMP=0x000000000009a35d
- (void)_setupPageForWebView;	// IMP=0x000000000009a20f
- (void)_startLoadingWebView;	// IMP=0x0000000000099de4
- (void)_refresh:(id)arg1;	// IMP=0x0000000000099d9f
- (void)_presentPlaceholderModel:(id)arg1;	// IMP=0x0000000000099caa
- (void)_pop;	// IMP=0x0000000000099c50
- (_Bool)_callActionHandlerWithURL:(id)arg1 error:(id)arg2;	// IMP=0x0000000000099b3a
- (void)_handleDismiss;	// IMP=0x0000000000099ad2
- (void)_forward:(id)arg1;	// IMP=0x0000000000099a8d
- (void)_finishedLoadingWithSuccess:(_Bool)arg1;	// IMP=0x0000000000099a26
- (void)_dismiss;	// IMP=0x00000000000999f1
- (id)_createToolBar;	// IMP=0x0000000000099721
- (void)_cancel:(id)arg1;	// IMP=0x000000000009970f
- (void)_back:(id)arg1;	// IMP=0x00000000000996ca
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000098fe3
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;	// IMP=0x0000000000098e92
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x0000000000098e5f
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000000098e2f
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0000000000098c62
- (void)safariView:(id)arg1 didRedirectToSchemeWithURL:(id)arg2;	// IMP=0x0000000000098b28
- (void)safariView:(id)arg1 didReceiveAction:(id)arg2 body:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000098530
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000097efc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000097e49
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000097dec
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000097dda
- (void)dealloc;	// IMP=0x0000000000097d9c
- (void)loadView;	// IMP=0x00000000000979e2
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x0000000000097933
- (void)loadActionURL:(id)arg1 data:(id)arg2 callbackScheme:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000977da
@property(readonly, nonatomic) NSURL *originalURL;
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000097718

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
