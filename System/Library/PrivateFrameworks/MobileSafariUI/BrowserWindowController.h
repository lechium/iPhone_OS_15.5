//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/CloudTabStoreDelegate-Protocol.h>
#import <MobileSafariUI/_SFNavigationIntentHandling-Protocol.h>

@class CloudTabStore, NSArray, NSMapTable, NSString, _SFBrowserSavedState, _SFPageZoomPreferenceManager, _SFPerSitePreferencesVendor;
@protocol WBStateProvider;

@interface BrowserWindowController : NSObject <CloudTabStoreDelegate, _SFNavigationIntentHandling>
{
    CDUnknownBlockType _browserControllerUIDelegateProvider;	// 8 = 0x8
    NSMapTable *_UIDelegatesByBrowserController;	// 16 = 0x10
    _Bool _consideredMergingCloudTabsForDeviceRestoration;	// 24 = 0x18
    _SFBrowserSavedState *_savedState;	// 32 = 0x20
    CDUnknownBlockType _automationWindowInitializedCompletionHandler;	// 40 = 0x28
    _SFPageZoomPreferenceManager *_privateBrowsingPageZoomManager;	// 48 = 0x30
    _Bool _cloudTabsEnabled;	// 56 = 0x38
    NSArray *_browserControllers;	// 64 = 0x40
    id <WBStateProvider> _stateProvider;	// 72 = 0x48
    _SFPerSitePreferencesVendor *_perSitePreferencesVendor;	// 80 = 0x50
    CloudTabStore *_cloudTabStore;	// 88 = 0x58
}

+ (id)_printWindowToSceneMapping;	// IMP=0x00000000000cf601
- (void).cxx_destruct;	// IMP=0x00000000000d0f02
@property(readonly, nonatomic) CloudTabStore *cloudTabStore; // @synthesize cloudTabStore=_cloudTabStore;
@property(readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor; // @synthesize perSitePreferencesVendor=_perSitePreferencesVendor;
@property(readonly, nonatomic) id <WBStateProvider> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(nonatomic) _Bool cloudTabsEnabled; // @synthesize cloudTabsEnabled=_cloudTabsEnabled;
@property(readonly, copy, nonatomic) NSArray *browserControllers; // @synthesize browserControllers=_browserControllers;
- (void)handleNavigationIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d0d03
- (void)dispatchNavigationIntent:(id)arg1;	// IMP=0x00000000000d0c8b
- (id)_browserWindowsToPersist;	// IMP=0x00000000000d0ba4
- (void)_restoreWindowsFromBrowserSavedState:(id)arg1;	// IMP=0x00000000000d087a
- (id)_mergeWindowStates:(id)arg1 intoWindowState:(id)arg2;	// IMP=0x00000000000d05e2
- (id)_mergeAndSaveWindowStates:(id)arg1 intoWindowState:(id)arg2;	// IMP=0x00000000000d043d
- (void)_restoreWindowsWithState:(id)arg1 shouldMergeAllWindowsIfNeeded:(_Bool)arg2;	// IMP=0x00000000000d01a5
- (void)_saveBrowserStateWithQuickUpdate:(_Bool)arg1;	// IMP=0x00000000000cfec7
- (void)saveBrowserState;	// IMP=0x00000000000cfeb3
- (void)tearDownAutomationWindow;	// IMP=0x00000000000cfcba
- (void)setUpAutomationWindowWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf8cb
- (id)_printWindowToSceneMapping;	// IMP=0x00000000000cf682
- (void)mergeAllWindowsIntoWindow:(id)arg1;	// IMP=0x00000000000cf3a1
- (void)removeWindowsNotMatchingSceneIDs:(id)arg1 supportsMultipleScenes:(_Bool)arg2;	// IMP=0x00000000000cef9e
- (void)_windowDidClose:(id)arg1;	// IMP=0x00000000000cecf7
- (id)windowForSceneID:(id)arg1 options:(id)arg2;	// IMP=0x00000000000ce6a8
- (id)_newAutomationWindowWithSceneID:(id)arg1;	// IMP=0x00000000000ce506
- (long long)modeForNewWindowUserActivity:(id)arg1;	// IMP=0x00000000000ce40c
- (void)openNewWindowWithPrivateBrowsingEnabled:(_Bool)arg1 fromWindow:(id)arg2;	// IMP=0x00000000000ce31d
- (void)saveCloudTabsUsingCloudTabStore:(id)arg1;	// IMP=0x00000000000ce2e2
- (void)cloudTabStoreDidGetCachedDevicesFromCloudKit:(id)arg1;	// IMP=0x00000000000ce275
- (void)cloudTabStore:(id)arg1 didUpdateDevicesFromCloudKitWithError:(id)arg2;	// IMP=0x00000000000ce17a
- (void)cloudTabStore:(id)arg1 cloudTabsEnabledDidChange:(_Bool)arg2;	// IMP=0x00000000000ce168
- (void)cloudTabStore:(id)arg1 didReceiveTabCloseRequest:(id)arg2;	// IMP=0x00000000000cdf74
- (void)_mergeTabsFromCloudTabsForDeviceRestoration:(id)arg1;	// IMP=0x00000000000cd447
- (void)_mergeTabsFromCloudTabsForDeviceRestorationIfNeededAfterCloudTabsFinishedSyncing:(_Bool)arg1;	// IMP=0x00000000000cca97
- (void)restoreEducationDeviceCloudTabs:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000cc63a
- (void)restoreEducationDeviceTabs;	// IMP=0x00000000000cc5cc
- (void)updateCloudTabsForEnteringBackground;	// IMP=0x00000000000cc221
- (void)updateCloudTabsForEnteringForeground;	// IMP=0x00000000000cc1de
- (void)saveCloudTabs;	// IMP=0x00000000000cc16d
- (void)_destroyCloudTabsStore;	// IMP=0x00000000000cc128
- (void)_createCloudTabsStore;	// IMP=0x00000000000cc0cb
- (void)updateCloudTabUpdatesEnabled;	// IMP=0x00000000000cc022
- (void)_cloudTabFeatureAvailabilityDidChange:(id)arg1;	// IMP=0x00000000000cc010
- (id)_sceneIDToLocalGroupTabs;	// IMP=0x00000000000cbcb2
- (id)_allNormalLocalTabDocuments;	// IMP=0x00000000000cba58
@property(readonly, nonatomic) _SFPageZoomPreferenceManager *privateBrowsingPageZoomManager;
- (id)browserControllerWithUUID:(id)arg1;	// IMP=0x00000000000cb811
- (id)oldestTabsWithLimit:(unsigned long long)arg1 inPrivateBrowsing:(_Bool)arg2;	// IMP=0x00000000000cb695
- (id)tabsOlderThan:(id)arg1 inPrivateBrowsing:(_Bool)arg2;	// IMP=0x00000000000cb2ac
- (unsigned long long)numberOfTabsInPrivateBrowsing:(_Bool)arg1;	// IMP=0x00000000000cb0d0
- (id)tabsInPrivateBrowsing:(_Bool)arg1;	// IMP=0x00000000000caead
- (id)uiDelegateForBrowserController:(id)arg1;	// IMP=0x00000000000cae18
- (void)dealloc;	// IMP=0x00000000000cadda
- (id)initWithStateProvider:(id)arg1 perSitePreferencesVendor:(id)arg2 shouldMergeAllWindowsIfNeeded:(_Bool)arg3 browserControllerUIDelegateProvider:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cac0e
- (id)initWithStateProvider:(id)arg1;	// IMP=0x00000000000cabf4
- (id)initWithBrowserSavedState:(id)arg1 perSitePreferencesVendor:(id)arg2 browserControllerUIDelegateProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000000caa39
- (id)initWithBrowserSavedState:(id)arg1;	// IMP=0x00000000000caa22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
