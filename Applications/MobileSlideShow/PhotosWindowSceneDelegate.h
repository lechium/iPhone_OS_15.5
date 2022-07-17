//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKShareMetadata, NSDate, NSString, NSURL, NSUserActivity, PUTabbedLibraryViewController, PXProgrammaticNavigationDestination, PXProgrammaticNavigationRequest, PXSplitViewController, PhotosAppSpec, PhotosURLNavigationRequest, UIWindow;
@protocol PXCollectionActionReceiver;

@interface PhotosWindowSceneDelegate : NSObject
{
    PhotosAppSpec *_spec;	// 8 = 0x8
    PUTabbedLibraryViewController *_tabbedLibraryViewController;	// 16 = 0x10
    id <PXCollectionActionReceiver> _collectionActionReceiver;	// 24 = 0x18
    UIWindow *_mainWindow;	// 32 = 0x20
    PXSplitViewController *_splitViewController;	// 40 = 0x28
    NSDate *_lastDidEnterBackgroundDate;	// 48 = 0x30
    NSUserActivity *_pendingUserActivity;	// 56 = 0x38
    CKShareMetadata *_pendingCloudKitShareMetadataToAccept;	// 64 = 0x40
    PXProgrammaticNavigationRequest *_pendingProgrammaticNavigationRequestToOpen;	// 72 = 0x48
    NSURL *_pendingURLToOpen;	// 80 = 0x50
    PhotosURLNavigationRequest *_inProgressURLNavigationRequest;	// 88 = 0x58
}

+ (void)_showContactsPromptIfNecessary;	// IMP=0x0020000000007a2f
- (void).cxx_destruct;	// IMP=0x0020000000006f7b
@property(retain, nonatomic) PhotosURLNavigationRequest *inProgressURLNavigationRequest; // @synthesize inProgressURLNavigationRequest=_inProgressURLNavigationRequest;
@property(retain, nonatomic) NSURL *pendingURLToOpen; // @synthesize pendingURLToOpen=_pendingURLToOpen;
@property(retain, nonatomic) PXProgrammaticNavigationRequest *pendingProgrammaticNavigationRequestToOpen; // @synthesize pendingProgrammaticNavigationRequestToOpen=_pendingProgrammaticNavigationRequestToOpen;
@property(retain, nonatomic) CKShareMetadata *pendingCloudKitShareMetadataToAccept; // @synthesize pendingCloudKitShareMetadataToAccept=_pendingCloudKitShareMetadataToAccept;
@property(retain, nonatomic) NSUserActivity *pendingUserActivity; // @synthesize pendingUserActivity=_pendingUserActivity;
@property(retain, nonatomic) NSDate *lastDidEnterBackgroundDate; // @synthesize lastDidEnterBackgroundDate=_lastDidEnterBackgroundDate;
@property(retain, nonatomic) PXSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain, nonatomic) UIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(readonly, nonatomic) id <PXCollectionActionReceiver> collectionActionReceiver; // @synthesize collectionActionReceiver=_collectionActionReceiver;
@property(retain, nonatomic) PUTabbedLibraryViewController *tabbedLibraryViewController; // @synthesize tabbedLibraryViewController=_tabbedLibraryViewController;
@property(retain, nonatomic) PhotosAppSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x0010000000006e01
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006d28
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0010000000006d1d
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0010000000006c96
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x0010000000006ae1
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;	// IMP=0x0010000000006a6a
- (void)showNetworkPromptIfNecessary;	// IMP=0x001000000000670d
- (_Bool)_canProceedWithPhotoLibraryInGoodState;	// IMP=0x0010000000006436
- (void)setupAppUI;	// IMP=0x00100000000057c4
- (id)shortcutURLForShortcutItem:(id)arg1;	// IMP=0x00100000000055ff
- (id)userActivityURLForUserActivity:(id)arg1;	// IMP=0x0010000000004d03
- (void)acceptCloudKitShareInvitation:(id)arg1;	// IMP=0x0010000000004c32
- (void)openRoutingURL:(id)arg1;	// IMP=0x0010000000004510
- (void)_openSiriSearchActivity:(id)arg1;	// IMP=0x0010000000003c4d
- (void)_openSpotlightSearchActivity:(id)arg1;	// IMP=0x0010000000003975
- (void)_openUniversalLinkActivity:(id)arg1;	// IMP=0x00100000000037ef
- (_Bool)_isUserActivityExpired:(id)arg1;	// IMP=0x0010000000003736
- (void)openUserActivity:(id)arg1;	// IMP=0x00100000000033a7
- (void)windowScene:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;	// IMP=0x00100000000032ed
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x00100000000032d8
- (id)stateRestorationActivityForScene:(id)arg1;	// IMP=0x00100000000032c3
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000031ab
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x001000000000309e
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x001000000000304b
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000002e41
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000002ce8
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000002773
- (id)init;	// IMP=0x00100000000026f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
