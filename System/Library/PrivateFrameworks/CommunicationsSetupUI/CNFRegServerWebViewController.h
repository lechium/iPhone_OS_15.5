//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CommunicationsSetupUI/RUIObjectModelDelegate-Protocol.h>
#import <CommunicationsSetupUI/UIWebViewDelegate-Protocol.h>

@class CNFRegController, CNFRegLoadingView, NSMutableArray, NSString, NSTimer, RUILoader, UIWebView;

__attribute__((visibility("hidden")))
@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, RUIObjectModelDelegate>
{
    CNFRegController *_regController;	// 8 = 0x8
    CNFRegLoadingView *_loadingView;	// 16 = 0x10
    NSTimer *_timeoutTimer;	// 24 = 0x18
    RUILoader *_loader;	// 32 = 0x20
    NSMutableArray *_objectModels;	// 40 = 0x28
    struct {
        unsigned int isLoading:1;
        unsigned int isLoaded:1;
        unsigned int wantsWifi:1;
        unsigned int modifiedWiFi:1;
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int checkedLogState:1;
        unsigned int shouldLog:1;
        unsigned int timedOut;
    } _webControllerFlags;	// 48 = 0x30
    UIWebView *_webView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003f18c
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(readonly, nonatomic) _Bool timedOut; // @dynamic timedOut;
@property(readonly, nonatomic) _Bool isLoading; // @dynamic isLoading;
@property(readonly, nonatomic) _Bool isLoaded; // @dynamic isLoaded;
- (void)applicationWillSuspend;	// IMP=0x000000000003f0ad
- (void)_handleTimeout;	// IMP=0x000000000003f0a7
- (void)_timeoutFired:(id)arg1;	// IMP=0x000000000003ef7f
- (void)_stopTimeout;	// IMP=0x000000000003ee73
- (void)_startTimeoutWithDuration:(double)arg1;	// IMP=0x000000000003ecfd
- (_Bool)canSendURLRequest:(id)arg1;	// IMP=0x000000000003ecf5
- (_Bool)shouldSetHeadersForRequest:(id)arg1;	// IMP=0x000000000003eced
- (void)setHeadersForRequest:(id)arg1;	// IMP=0x000000000003ece7
- (id)overrideURLForURL:(id)arg1;	// IMP=0x000000000003ecd1
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x000000000003eb7e
- (void)loader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000003ea32
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;	// IMP=0x000000000003e7ef
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;	// IMP=0x000000000003e26c
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;	// IMP=0x000000000003d81c
- (void)cancelButtonPressed:(id)arg1;	// IMP=0x000000000003d716
- (void)objectModelDidChange:(id)arg1;	// IMP=0x000000000003d628
- (void)objectModelPressedBack:(id)arg1;	// IMP=0x000000000003d45d
- (id)parentViewControllerForObjectModel:(id)arg1;	// IMP=0x000000000003d2be
- (void)_popObjectModelAnimated:(_Bool)arg1;	// IMP=0x000000000003d0e1
- (void)_cleanupLoader;	// IMP=0x000000000003d08c
- (void)loadURL:(id)arg1;	// IMP=0x000000000003ca60
- (void)hideSpinner;	// IMP=0x000000000003ca28
- (void)showSpinner;	// IMP=0x000000000003c8eb
- (void)setWantsWifi:(_Bool)arg1;	// IMP=0x000000000003c8e5
- (void)stopRequiringWifi;	// IMP=0x000000000003c889
- (void)startRequiringWifi;	// IMP=0x000000000003c82a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000003c7e9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000003c796
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000003c73d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003c6fc
- (_Bool)_shouldLog;	// IMP=0x000000000003c6b3
- (id)logName;	// IMP=0x000000000003c6a6
- (void)dealloc;	// IMP=0x000000000003c637
- (void)viewDidUnload;	// IMP=0x000000000003c608
- (void)viewDidLoad;	// IMP=0x000000000003c5d9
- (void)loadView;	// IMP=0x000000000003c542
- (id)init;	// IMP=0x000000000003c4b4
- (id)initWithRegController:(id)arg1;	// IMP=0x000000000003c44c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

