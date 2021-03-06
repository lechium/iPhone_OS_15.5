//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/PLPhotosApplication.h>

@class CAMNebulaDaemonProxyManager, NSMutableArray, NSSet, NSString, PHPhotoLibrary, PUImportViewController, PUTabbedLibraryViewController, PXActionManager, PXAlertController;
@protocol PXActionManagerProvider, PXCollectionActionReceiver;

@interface PhotosApplication : PLPhotosApplication
{
    PUImportViewController *_importViewController;	// 8 = 0x8
    NSMutableArray *_importDeviceQueue;	// 16 = 0x10
    id <PXActionManagerProvider> _actionManagerProvider;	// 24 = 0x18
    _Bool _hasPresentedWelcomeViewControllers;	// 32 = 0x20
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;	// 40 = 0x28
    PXAlertController *_iPhotoMigrationAlertController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0010000000034f69
@property(retain, nonatomic) PXAlertController *iPhotoMigrationAlertController; // @synthesize iPhotoMigrationAlertController=_iPhotoMigrationAlertController;
@property(retain, nonatomic, setter=_setNebulaDaemonProxyManager:) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property(readonly, nonatomic) id <PXCollectionActionReceiver> keyCollectionActionReceiver;
@property(readonly, nonatomic) PUTabbedLibraryViewController *keyTabbedLibraryViewController;
- (id)keySpec;	// IMP=0x0010000000034e2f
- (id)photosWindowSceneDelegate;	// IMP=0x0010000000034afb
- (void)performNebuladCrashRecoveryIfNeededForceEndLastTimelapseSession:(_Bool)arg1;	// IMP=0x0010000000034a48
- (void)importController:(id)arg1 removedImportSource:(id)arg2;	// IMP=0x0010000000034737
- (void)importController:(id)arg1 addedImportSource:(id)arg2;	// IMP=0x0010000000034471
- (void)_showWelcomeViewControllersIfNecessary;	// IMP=0x00100000000343bf
- (void)_showSyncReminderPromptIfNecessary;	// IMP=0x0010000000034068
- (void)_showCPLOverQuotaPromptIfNecessary;	// IMP=0x0010000000033c2a
- (void)_showCloudPhotoLibraryExitPromptIfNecessary;	// IMP=0x0010000000033716
- (void)beginIPhotoMigration;	// IMP=0x00100000000335d8
- (void)handleOAuthRedirectURL:(id)arg1;	// IMP=0x0010000000033397
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;	// IMP=0x001000000003337a
- (void)_tearDownImportViewController;	// IMP=0x00100000000332fe
- (void)_dequeueNextImportDevice;	// IMP=0x001000000003317c
- (_Bool)isShowingImportTab;	// IMP=0x0010000000033119
- (id)_newImportViewController;	// IMP=0x0010000000032fdd
- (void)_focusDidUpdate:(id)arg1;	// IMP=0x0010000000032fcb
- (void)_userDidTakeScreenshot:(id)arg1;	// IMP=0x0010000000032e97
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032c7b
- (void)_registerForUserNotifications;	// IMP=0x0010000000032c2b
- (void)_displayAndRemovePhoneInvitationFailures;	// IMP=0x0010000000032bd5
- (void)prepareForApplicationWillEnterForeground;	// IMP=0x0010000000032a8e
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x00100000000327b0
- (void)invalidateActionManagerProvider;	// IMP=0x001000000003278f
@property(readonly, nonatomic) PXActionManager *assetActionManager;
@property(readonly) PHPhotoLibrary *px_photoLibrary;
- (id)contentViewController;	// IMP=0x00100000000325c3
- (void)trashAssetsWithoutConfirmation:(id)arg1;	// IMP=0x0010000000038d4b
- (void)trashAssets:(id)arg1;	// IMP=0x0010000000038c85
- (void)favoriteAssets:(id)arg1;	// IMP=0x0010000000038c10
- (void)hideAssets:(id)arg1;	// IMP=0x0010000000038b9b
- (void)duplicateAssets:(id)arg1;	// IMP=0x0010000000038b26
- (void)addAssetsToAlbum:(id)arg1;	// IMP=0x0010000000038ab1
- (void)shareAssets:(id)arg1;	// IMP=0x0010000000038a3c
- (void)printAssets:(id)arg1;	// IMP=0x00100000000389c7
- (void)copy:(id)arg1;	// IMP=0x0010000000038952
- (void)navigateToSearch:(id)arg1;	// IMP=0x0010000000038915
- (void)validateCommand:(id)arg1;	// IMP=0x0010000000038824
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000387ab
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000038635
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x0010000000037023

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *notificationSuppressionContexts;
@property(readonly) Class superclass;

@end

