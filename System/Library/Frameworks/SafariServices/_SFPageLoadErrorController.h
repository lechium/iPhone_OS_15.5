//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSCertificateWarningPageHandler-Protocol.h>

@class NSString, NSTimer, NSURL, NSURLRequest, UINavigationController, WBSCertificateWarningPageContext, WBSSecIdentitiesCache, WKWebView, _WKRemoteObjectInterface;
@protocol OS_dispatch_queue, SFDialogPresenting, WBSCertificateWarningPagePresenter, _SFPageLoadErrorControllerDelegate;

@interface _SFPageLoadErrorController : NSObject <WBSCertificateWarningPageHandler>
{
    _Bool _reloadAfterResume;	// 8 = 0x8
    WKWebView *_webView;	// 16 = 0x10
    NSTimer *_crashCountResetTimer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_certManagerQueue;	// 32 = 0x20
    WBSSecIdentitiesCache *_secIdentitiesCache;	// 40 = 0x28
    id <WBSCertificateWarningPagePresenter> _certificateWarningPagePresenterProxy;	// 48 = 0x30
    _WKRemoteObjectInterface *_certificateWarningPageHandlerInterface;	// 56 = 0x38
    _Bool _certificateWarningPageHandlerInterfaceInvalidated;	// 64 = 0x40
    struct __SecTrust *_certificateTrust;	// 72 = 0x48
    CDUnknownBlockType _certificateRecoveryAttempter;	// 80 = 0x50
    NSURL *_certificateFailingURL;	// 88 = 0x58
    UINavigationController *_certificateNavigationViewController;	// 96 = 0x60
    WBSCertificateWarningPageContext *_legacyTLSWarningPageContext;	// 104 = 0x68
    NSURL *_clickThroughURL;	// 112 = 0x70
    _Bool _reloadingFailedRequest;	// 120 = 0x78
    id <_SFPageLoadErrorControllerDelegate> _delegate;	// 128 = 0x80
    NSURLRequest *_failedRequest;	// 136 = 0x88
    unsigned long long _crashesSinceLastSuccessfulLoad;	// 144 = 0x90
    id <SFDialogPresenting> _dialogPresenter;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000001cc33
@property(nonatomic) __weak id <SFDialogPresenting> dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly, nonatomic) unsigned long long crashesSinceLastSuccessfulLoad; // @synthesize crashesSinceLastSuccessfulLoad=_crashesSinceLastSuccessfulLoad;
@property(readonly, nonatomic) NSURLRequest *failedRequest; // @synthesize failedRequest=_failedRequest;
@property(readonly, nonatomic) _Bool reloadingFailedRequest; // @synthesize reloadingFailedRequest=_reloadingFailedRequest;
@property(nonatomic) __weak id <_SFPageLoadErrorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openClockSettings;	// IMP=0x000000000001cb3b
- (void)_dismissCertificateViewButtonTapped;	// IMP=0x000000000001cb02
- (void)showCertificateInformation;	// IMP=0x000000000001c8e0
- (void)visitInsecureWebsite;	// IMP=0x000000000001c6dc
- (void)visitInsecureWebsiteWithTemporaryBypass;	// IMP=0x000000000001c6be
- (void)goBackButtonClicked;	// IMP=0x000000000001c628
- (void)webViewDidCommitErrorPagePreview:(id)arg1;	// IMP=0x000000000001c5a0
- (void)scheduleResetCrashCount;	// IMP=0x000000000001c582
- (_Bool)updateCrashesAndShowCrashError:(id)arg1 URLString:(id)arg2;	// IMP=0x000000000001c53f
- (void)_resetCrashCountSoon;	// IMP=0x000000000001c4e1
- (void)clearCrashCountResetTimer;	// IMP=0x000000000001c4af
- (void)_resetCrashCount:(id)arg1;	// IMP=0x000000000001c49e
- (void)_showRepeatedWebProcessCrashError:(id)arg1 URLString:(id)arg2;	// IMP=0x000000000001c3a3
- (void)addDownloadFailedAlertWithDescription:(id)arg1;	// IMP=0x000000000001c2c1
- (void)addInvalidProfileAlert;	// IMP=0x000000000001c1fe
- (void)addInvalidURLAlert;	// IMP=0x000000000001c16c
- (void)handleClientCertificateAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bda3
- (void)handleLegacyTLSWithFailingURL:(id)arg1 clickThroughURL:(id)arg2 authenticationChallenge:(id)arg3;	// IMP=0x000000000001bc8c
- (void)handleSubframeCertificateError:(id)arg1;	// IMP=0x000000000001bbaf
- (void)handleFrameLoadError:(id)arg1;	// IMP=0x000000000001ba40
- (void)reloadAfterError;	// IMP=0x000000000001b9e0
- (void)clearFailedRequest;	// IMP=0x000000000001b9bd
- (void)addDisallowedFileURLAlert;	// IMP=0x000000000001b92b
- (void)addDisallowedUseOfJavaScriptAlert;	// IMP=0x000000000001b899
- (void)_handleFrameLoadError:(id)arg1 forURL:(id)arg2 recoveryAttempter:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b549
- (id)_titleForError:(id)arg1;	// IMP=0x000000000001b4a4
- (void)_setFailedRequest:(id)arg1;	// IMP=0x000000000001b311
- (void)_reachabilityChanged:(id)arg1;	// IMP=0x000000000001b260
- (void)_handleCertificateError:(id)arg1 forURL:(id)arg2 isMainFrame:(_Bool)arg3 recoveryAttempter:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001a374
- (void)_loadCertificateWarningPageForContext:(id)arg1;	// IMP=0x000000000001a20b
- (id)_certificateWarningPagePresenterProxy;	// IMP=0x000000000001a14c
- (void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 forError:(id)arg3;	// IMP=0x000000000001a134
- (void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 learnMoreLink:(id)arg3 forError:(id)arg4;	// IMP=0x0000000000019c66
- (void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2;	// IMP=0x0000000000019c0d
- (void)addFormAlertWithTitle:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019b25
- (void)performAction:(int)arg1 forAlert:(id)arg2;	// IMP=0x0000000000019069
- (void)_continueWithoutCredentialsUsingAlertContext:(id)arg1;	// IMP=0x0000000000018fb0
- (void)_continueAfterCertificateAlertWithURL:(id)arg1 trust:(struct __SecTrust *)arg2 recoveryAttempter:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018e80
- (void)addAlert:(id)arg1;	// IMP=0x0000000000018d24
- (void)addDialog:(id)arg1;	// IMP=0x0000000000018c55
- (id)_genericMessageForError:(id)arg1;	// IMP=0x0000000000018b93
- (id)_specializedMessageForError:(id)arg1 URL:(id)arg2;	// IMP=0x00000000000182f7
- (void)_clearCertificateWarningPageHandlerInterface;	// IMP=0x000000000001825f
- (void)_setUpCertificateWarningPageHandlerInterface;	// IMP=0x00000000000181c1
- (void)_cacheSecIdentityIfNeeded:(struct __SecIdentity *)arg1 forIdentityDomain:(id)arg2;	// IMP=0x0000000000018158
- (void)invalidate;	// IMP=0x000000000001813a
- (void)dealloc;	// IMP=0x00000000000180ac
- (id)initWithWebView:(id)arg1;	// IMP=0x0000000000017fa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

