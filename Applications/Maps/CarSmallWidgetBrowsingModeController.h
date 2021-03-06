//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BrowseManager, CarMapTrackingController, CarSmallWidgetNoContentView, CarSmallWidgetSearchCategoriesView, CarSmallWidgetShortcutsView, CarWidgetShortcutsProvider, NGChromeViewController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CarSmallWidgetBrowsingModeController : UIViewController
{
    CarWidgetShortcutsProvider *_shortcutsProvider;	// 8 = 0x8
    CarSmallWidgetShortcutsView *_shortcutsView;	// 16 = 0x10
    BrowseManager *_browseManager;	// 24 = 0x18
    CarSmallWidgetSearchCategoriesView *_searchCategoriesView;	// 32 = 0x20
    CarSmallWidgetNoContentView *_noContentView;	// 40 = 0x28
    NGChromeViewController *_chromeViewController;	// 48 = 0x30
    long long _browsingState;	// 56 = 0x38
    NSArray *_searchCategories;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000074646b
// Error: Property attributes should begin with the type ('T') attribute, property name: searchCategories
// Property attributes: (null)

@property(nonatomic) long long browsingState; // @synthesize browsingState=_browsingState;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x00100000007463ff
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x00100000007463e2
- (void)shortcutsProviderUpdated:(id)arg1;	// IMP=0x00100000007463d0
- (void)_clearFocusableItems;	// IMP=0x00100000007462de
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000007461e5
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000745fb1
- (_Bool)showsMapView;	// IMP=0x0010000000745fa9
- (id)fullscreenViewController;	// IMP=0x0010000000745fa0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000745f5f
- (void)_addNoContentView;	// IMP=0x0010000000745ddb
- (void)_addSearchCategoriesView;	// IMP=0x0010000000745c57
- (void)_addShortcutsView;	// IMP=0x0010000000745add
- (void)_updateWidgetContents;	// IMP=0x0010000000745699
@property(readonly, nonatomic) _Bool modeHandlesGestures;
- (void)dealloc;	// IMP=0x0010000000745633
- (id)init;	// IMP=0x001000000074545a

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

