//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SUPreviewOverlayViewController, SUPurchaseManager, SUQueueSessionManager, SUTabBarController, SUUIAppearance, SUViewControllerFactory, UIColor;
@protocol OS_dispatch_queue, SUClientInterfaceDelegate, SUClientInterfaceDelegatePrivate;

@interface SUClientInterface : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    NSString *_applicationVersion;	// 16 = 0x10
    NSString *_askToBuyApprovalPrompt;	// 24 = 0x18
    SUUIAppearance *_appearance;	// 32 = 0x20
    _Bool _inAskToBuyApprovalFlow;	// 40 = 0x28
    NSString *_clientIdentifier;	// 48 = 0x30
    UIColor *_darkKeyColor;	// 56 = 0x38
    id <SUClientInterfaceDelegatePrivate> _delegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 72 = 0x48
    _Bool _ignoresExpectedClientsProtocol;	// 80 = 0x50
    UIColor *_lightKeyColor;	// 88 = 0x58
    NSString *_localStoragePath;	// 96 = 0x60
    SUPurchaseManager *_purchaseManager;	// 104 = 0x68
    SUQueueSessionManager *_queueSessionManager;	// 112 = 0x70
    _Bool _showDialogOnError;	// 120 = 0x78
    NSMutableDictionary *_urlBagKeys;	// 128 = 0x80
    NSString *_userAgent;	// 136 = 0x88
    SUViewControllerFactory *_viewControllerFactory;	// 144 = 0x90
    _Bool _wasLaunchedFromLibrary;	// 152 = 0x98
    _Bool _ignoreDefaultKeyboardNotifications;	// 153 = 0x99
    _Bool inAskToBuyApprovalFlow;	// 154 = 0x9a
    _Bool _financeInterruption;	// 155 = 0x9b
    NSString *_hostApplicationIdentifier;	// 160 = 0xa0
}

+ (id)_defaultApplicationVersion;	// IMP=0x000000000011cdab
+ (id)_defaultApplicationIdentifier;	// IMP=0x000000000011cd66
@property(retain) SUViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property _Bool showDialogOnError; // @synthesize showDialogOnError=_showDialogOnError;
@property(copy) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property(getter=isFinanceInterruption) _Bool financeInterruption; // @synthesize financeInterruption=_financeInterruption;
@property(copy, nonatomic) UIColor *lightKeyColor; // @synthesize lightKeyColor=_lightKeyColor;
@property(nonatomic) id <SUClientInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) UIColor *darkKeyColor; // @synthesize darkKeyColor=_darkKeyColor;
@property _Bool inAskToBuyApprovalFlow; // @synthesize inAskToBuyApprovalFlow;
@property(copy, nonatomic) NSString *askToBuyApprovalPrompt; // @synthesize askToBuyApprovalPrompt=_askToBuyApprovalPrompt;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;	// IMP=0x000000000011cd16
@property(getter=_ignoresExpectedClientsProtocol, setter=_setIgnoresExpectedClientsProtocol:) _Bool _ignoresExpectedClientsProtocol;
- (void)_setStatusBarStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000011cc65
- (void)_setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;	// IMP=0x000000000011cc12
- (void)_returnToLibrary;	// IMP=0x000000000011cbd8
- (id)_newScriptInterface;	// IMP=0x000000000011cb93
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3;	// IMP=0x000000000011cb28
- (void)_presentDialog:(id)arg1;	// IMP=0x000000000011cad9
- (void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000011ca8a
- (void)_hidePreviewOverlayAnimated:(_Bool)arg1;	// IMP=0x000000000011c994
- (void)_exitStoreWithReason:(long long)arg1;	// IMP=0x000000000011c945
- (void)_dispatchXEvent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000011c8e9
- (void)_dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2;	// IMP=0x000000000011c897
- (void)_dismissViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000011c7ef
- (void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2;	// IMP=0x000000000011c796
@property _Bool wasLaunchedFromLibrary;
@property(copy) NSString *userAgent;
- (id)URLBagKeyForIdentifier:(id)arg1;	// IMP=0x000000000011c511
@property(readonly, nonatomic) SUTabBarController *tabBarController;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000011c2f9
@property(retain) SUQueueSessionManager *queueSessionManager;
@property(retain) SUPurchaseManager *purchaseManager;
@property(copy) NSString *localStoragePath;
@property _Bool ignoreDefaultKeyboardNotifications; // @synthesize ignoreDefaultKeyboardNotifications=_ignoreDefaultKeyboardNotifications;
@property(copy) NSString *clientIdentifier;
@property(copy) SUUIAppearance *appearance;
@property(copy) NSString *applicationVersion;
@property(copy) NSString *applicationIdentifier;
@property(readonly, nonatomic) SUPreviewOverlayViewController *previewOverlay;
- (void)dealloc;	// IMP=0x000000000011b5eb
- (id)init;	// IMP=0x000000000011b4bd

@end

