//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/APUIAppIconGridViewDelegate-Protocol.h>
#import <AppPredictionUIWidget/ATXHomeScreenSuggestionClientObserver-Protocol.h>
#import <AppPredictionUIWidget/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <AppPredictionUIWidget/SBHLegibility-Protocol.h>
#import <AppPredictionUIWidget/SBHWidgetContextMenuControlling-Protocol.h>
#import <AppPredictionUIWidget/SBIconLocationPresenting-Protocol.h>
#import <AppPredictionUIWidget/SBIconViewQuerying-Protocol.h>

@class APUIAppIconGridView, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, _UILegibilitySettings;
@protocol APUIAppPredictionViewControllerDelegate;

@interface APUIAppPredictionViewController <ATXHomeScreenSuggestionClientObserver, APUIAppIconGridViewDelegate, SBIconViewQuerying, SBIconLocationPresenting, SBHWidgetContextMenuControlling, SBHLegibility, LSApplicationWorkspaceObserverProtocol>
{
    APUIAppIconGridView *_gridView;	// 8 = 0x8
    NSMutableDictionary *_bundleIdSuggestionMap;	// 16 = 0x10
    NSMutableSet *_installingBundleIds;	// 24 = 0x18
    NSString *_selectedBundleId;	// 32 = 0x20
    NSString *_selectedAppLocalizedName;	// 40 = 0x28
    NSMutableSet *_usedFallbacks;	// 48 = 0x30
    _Bool _showingContextMenu;	// 56 = 0x38
    _Bool _occluded;	// 57 = 0x39
    _Bool _userInteracting;	// 58 = 0x3a
    _Bool _showingAlert;	// 59 = 0x3b
    unsigned long long _mode;	// 64 = 0x40
    _UILegibilitySettings *_legibilitySettings;	// 72 = 0x48
    id <APUIAppPredictionViewControllerDelegate> _delegate;	// 80 = 0x50
    struct UIEdgeInsets _parentLayoutInsets;	// 88 = 0x58
}

+ (id)_bundleIdentifierSetFromApplicationProxies:(id)arg1;	// IMP=0x000000000000553a
+ (id)_bundleIdentifierSetFromApplicationRecords:(id)arg1;	// IMP=0x0000000000005374
- (void).cxx_destruct;	// IMP=0x000000000000568c
@property(nonatomic, getter=isShowingAlert) _Bool showingAlert; // @synthesize showingAlert=_showingAlert;
@property(nonatomic) __weak id <APUIAppPredictionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUserInteracting) _Bool userInteracting; // @synthesize userInteracting=_userInteracting;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic, getter=isOccluded) _Bool occluded; // @synthesize occluded=_occluded;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) struct UIEdgeInsets parentLayoutInsets; // @synthesize parentLayoutInsets=_parentLayoutInsets;
@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu; // @synthesize showingContextMenu=_showingContextMenu;
- (void)_updateGridViewForBundleIds:(id)arg1;	// IMP=0x0000000000005110
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000004f93
- (void)applicationInstallsDidUpdateIcon:(id)arg1;	// IMP=0x0000000000004e3f
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000000004cc2
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x0000000000004b45
- (void)didSelectApplicationShortcutItem:(id)arg1;	// IMP=0x0000000000004500
- (_Bool)_canDismissSelectedSuggestion;	// IMP=0x0000000000004267
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
- (void)willShowContextMenuAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000003f48
- (void)_updateUserInteractingState;	// IMP=0x0000000000003e10
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;	// IMP=0x0000000000003bc7
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003baa
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003b8d
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;	// IMP=0x0000000000003b70
- (_Bool)isDisplayingIconView:(id)arg1;	// IMP=0x0000000000003b53
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x0000000000003b36
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x0000000000003b19
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;	// IMP=0x0000000000003afc
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;	// IMP=0x0000000000003adf
- (id)firstIconViewForIcon:(id)arg1;	// IMP=0x0000000000003ac2
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x0000000000003aa5
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;	// IMP=0x0000000000003a88
- (id)appIconGridView:(id)arg1 iconForApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000000000039dd
- (_Bool)appIconGridView:(id)arg1 shouldDisplayBadgeWithBundleIdentifier:(id)arg2;	// IMP=0x0000000000003940
- (_Bool)appIconGridView:(id)arg1 launchAppFromIcon:(id)arg2;	// IMP=0x00000000000037a4
- (void)_loadAppsInGridView:(id)arg1;	// IMP=0x00000000000023ea
- (id)_fallbackBundleIds;	// IMP=0x0000000000002370
- (void)suggestionClientDidRefreshProactiveWidgetLayouts:(id)arg1;	// IMP=0x00000000000022f0
@property(nonatomic) unsigned long long layoutSize;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000001e1e
- (void)viewDidLoad;	// IMP=0x0000000000001c95
- (void)dealloc;	// IMP=0x0000000000001be3
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000001bdb
- (_Bool)matchesWidgetUniqueID:(id)arg1 stackID:(id)arg2;	// IMP=0x0000000000001b64
- (id)initWithIdentifier:(id)arg1 layoutSize:(unsigned long long)arg2 mode:(unsigned long long)arg3;	// IMP=0x00000000000016ad
- (id)initWithIdentifier:(id)arg1 layoutSize:(unsigned long long)arg2;	// IMP=0x0000000000001698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

