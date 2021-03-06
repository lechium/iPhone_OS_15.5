//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SKUIPassbookLoaderDelegate-Protocol.h>
#import <iTunesStoreUI/SUTabBarControllerDelegate-Protocol.h>

@class ISOperation, NSString, NSURL, SKUIPassbookLoader, SKUIURL, SUMediaPlayerViewController, SUPlaceholderViewController, SUPreviewOverlayViewController, SUSectionsResponse, SUTabBarController, UINavigationController;

@interface SUClientApplicationController <SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate>
{
    SUMediaPlayerViewController *_activeMediaPlayer;	// 112 = 0x70
    NSString *_exitStoreButtonTitle;	// 120 = 0x78
    SUPlaceholderViewController *_fetchSectionsPlaceholder;	// 128 = 0x80
    long long _ignoreDownloadQueueChangeCount;	// 136 = 0x88
    SKUIURL *_launchURL;	// 144 = 0x90
    SUSectionsResponse *_lastBackgroundSectionsResponse;	// 152 = 0x98
    SUSectionsResponse *_lastSectionsResponse;	// 160 = 0xa0
    ISOperation *_loadSectionsOperation;	// 168 = 0xa8
    id _locationObserver;	// 176 = 0xb0
    SKUIPassbookLoader *_passbookLoader;	// 184 = 0xb8
    NSString *_preMediaDefaultPNG;	// 192 = 0xc0
    SUPreviewOverlayViewController *_previewOverlay;	// 200 = 0xc8
    _Bool _reloadForStorefrontChangeAfterAccountSetup;	// 208 = 0xd0
    _Bool _reloadSectionsOnNextLaunch;	// 209 = 0xd1
    _Bool _shouldPrepareUserInterfaceWhenActivated;	// 210 = 0xd2
    SUTabBarController *_tabBarController;	// 216 = 0xd8
}

+ (id)sharedController;	// IMP=0x00000000000f8517
+ (void)setSharedController:(id)arg1;	// IMP=0x00000000000f84e8
@property(nonatomic) _Bool shouldPrepareUserInterfaceWhenActivated; // @synthesize shouldPrepareUserInterfaceWhenActivated=_shouldPrepareUserInterfaceWhenActivated;
@property(copy, nonatomic) NSString *exitStoreButtonTitle; // @synthesize exitStoreButtonTitle=_exitStoreButtonTitle;
@property(retain, nonatomic, getter=_activeMediaPlayer, setter=_setActiveMediaPlayer:) SUMediaPlayerViewController *_activeMediaPlayer; // @synthesize _activeMediaPlayer;
- (_Bool)_showWildcatAccountViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000fc5e0
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;	// IMP=0x00000000000fc591
- (void)_setupTabBarController;	// IMP=0x00000000000fbea7
- (id)_resumableViewController;	// IMP=0x00000000000fbd65
- (id)_previewOverlayViewController;	// IMP=0x00000000000fbd03
- (void)_openClientURL:(id)arg1;	// IMP=0x00000000000fbc3a
- (_Bool)_displayClientURL:(id)arg1;	// IMP=0x00000000000fbb71
- (void)_cancelSuspendAfterDialogsDismissed;	// IMP=0x00000000000fbb2c
- (id)_accountViewController;	// IMP=0x00000000000fba75
- (void)_handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;	// IMP=0x00000000000fb808
- (void)_handleDonationURL:(id)arg1;	// IMP=0x00000000000fb720
- (void)_handleAddPassbookPassURL:(id)arg1;	// IMP=0x00000000000fb66b
- (void)_handleAccountURL:(id)arg1;	// IMP=0x00000000000fb5f0
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;	// IMP=0x00000000000fb4de
- (void)_retrySectionsAfterNetworkTransition;	// IMP=0x00000000000fb2a9
- (void)_reloadWithSectionsResponse:(id)arg1;	// IMP=0x00000000000fb0c8
- (_Bool)_reloadForStorefrontChange;	// IMP=0x00000000000faf4b
- (void)_presentSectionFetchUI;	// IMP=0x00000000000fae61
- (_Bool)_loadSectionsAllowingCache:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fad79
- (void)_handleSectionsLoadFailedWithError:(id)arg1;	// IMP=0x00000000000fab2b
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;	// IMP=0x00000000000faa71
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;	// IMP=0x00000000000fa882
- (void)_cancelSectionFetchPlaceholder;	// IMP=0x00000000000fa847
- (void)_cancelLoadSectionsOperation;	// IMP=0x00000000000fa7f1
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x00000000000fa52c
- (void)_selectFooterSectionNotification:(id)arg1;	// IMP=0x00000000000fa37a
- (void)_restrictionsChangedNotification:(id)arg1;	// IMP=0x00000000000fa1c7
- (void)_reloadForNetworkTypeChange:(id)arg1;	// IMP=0x00000000000fa1b5
- (void)_dialogDidFinishNotification:(id)arg1;	// IMP=0x00000000000fa168
- (void)bagDidLoadNotification:(id)arg1;	// IMP=0x00000000000f9f1a
- (void)_accountControllerDisappearedNotification:(id)arg1;	// IMP=0x00000000000f9d9f
- (_Bool)tabBarController:(id)arg1 shouldShowSection:(id)arg2;	// IMP=0x00000000000f9d97
- (id)presentationViewControllerForPassbookLoader:(id)arg1;	// IMP=0x00000000000f9d85
- (void)passbookLoaderDidFinish:(id)arg1;	// IMP=0x00000000000f9d45
- (id)tabBarControllerForClientInterface:(id)arg1;	// IMP=0x00000000000f9d33
- (void)returnToLibraryForClientInterface:(id)arg1;	// IMP=0x00000000000f9d21
- (id)previewOverlayForClientInterface:(id)arg1;	// IMP=0x00000000000f9cfe
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(_Bool)arg2;	// IMP=0x00000000000f9943
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(_Bool)arg2;	// IMP=0x00000000000f9900
- (id)_showPageForExternalOriginatedURLBagKey:(id)arg1;	// IMP=0x00000000000f97f3
- (void)_restorePreMediaPlayerSettings;	// IMP=0x00000000000f96fe
- (id)_newTabBarController;	// IMP=0x00000000000f9581
- (void)resignActive;	// IMP=0x00000000000f934d
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;	// IMP=0x00000000000f9330
- (void)presentExternalURLViewController:(id)arg1;	// IMP=0x00000000000f9224
- (_Bool)presentAccountViewController:(id)arg1 showNavigationBar:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000f90f8
- (id)overlayBackgroundViewController;	// IMP=0x00000000000f90db
- (_Bool)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;	// IMP=0x00000000000f900c
- (_Bool)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;	// IMP=0x00000000000f8ed1
- (_Bool)dismissTopViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000f8e82
- (void)dismissOverlayBackgroundViewController;	// IMP=0x00000000000f8e65
- (void)cancelAllOperations;	// IMP=0x00000000000f8e27
- (void)becomeActive;	// IMP=0x00000000000f8da3
@property(readonly, nonatomic, getter=wasLaunchedFromLibrary) _Bool launchedFromLibrary;
@property(readonly, nonatomic) UINavigationController *topNavigationController;
- (void)tearDownUI;	// IMP=0x00000000000f8c35
@property(readonly, nonatomic) SUTabBarController *tabBarController;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;	// IMP=0x00000000000f8a23
- (void)setupUI;	// IMP=0x00000000000f896a
- (_Bool)selectSectionWithIdentifier:(id)arg1;	// IMP=0x00000000000f88a9
- (void)returnToLibrary;	// IMP=0x00000000000f88a3
- (_Bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;	// IMP=0x00000000000f8862
- (void)prepareUserInterface;	// IMP=0x00000000000f8834
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic, getter=isTabBarControllerLoaded) _Bool tabBarControllerLoaded;
@property(readonly, nonatomic, getter=isIgnoringDownloadQueueChanges) _Bool ignoringDownloadQueueChanges;
- (void)exitStoreAfterDialogsDismiss;	// IMP=0x00000000000f874b
- (void)endIgnoringDownloadQueueChanges;	// IMP=0x00000000000f86ee
@property(readonly, nonatomic) NSString *defaultPNGNameForSuspend;
- (double)defaultImageSnapshotExpiration;	// IMP=0x00000000000f8568
- (id)copySuspendSettings;	// IMP=0x00000000000f8557
- (void)beginIgnoringDownloadQueueChanges;	// IMP=0x00000000000f8546
- (void)dealloc;	// IMP=0x00000000000f8333
- (id)initWithClientInterface:(id)arg1;	// IMP=0x00000000000f8077

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

