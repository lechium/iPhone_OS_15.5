//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchContainerViewController.h>

@class CarMapTrackingController, NGChromeViewController, NSArray, NSString, UINavigationController, UIViewController;
@protocol CarKeyboardResultsProviding;

__attribute__((visibility("hidden")))
@interface CarKeyboardModeController : UISearchContainerViewController
{
    UINavigationController *_wrapperNavigationController;	// 8 = 0x8
    NGChromeViewController *_chromeViewController;	// 16 = 0x10
    UIViewController<CarKeyboardResultsProviding> *_resultsProvider;	// 24 = 0x18
    unsigned long long _requestedInteractionModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001f552d
@property(readonly, nonatomic) unsigned long long requestedInteractionModel; // @synthesize requestedInteractionModel=_requestedInteractionModel;
@property(retain, nonatomic) UIViewController<CarKeyboardResultsProviding> *resultsProvider; // @synthesize resultsProvider=_resultsProvider;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)pptInvokeSearch:(id)arg1;	// IMP=0x00100000001f5458
- (void)pptEndEditing;	// IMP=0x00100000001f53ee
- (void)pptHandleTextChange:(id)arg1;	// IMP=0x00100000001f535e
- (void)_ppt_selectKeyboardSearchButton;	// IMP=0x00100000001f5218
- (void)_ppt_selectKeyboardMode;	// IMP=0x00100000001f5212
- (void)_ppt_selectFirstCarplayBrowseCategory;	// IMP=0x00100000001f520c
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00100000001f51a1
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00100000001f512f
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00100000001f50b1
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00100000001f5021
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00100000001f4faf
- (void)configureFocusContainerGuideController:(id)arg1;	// IMP=0x00100000001f4f98
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
- (id)fullscreenViewController;	// IMP=0x00100000001f4f19
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) long long autohideBehavior;
- (_Bool)showsNavigationBar;	// IMP=0x00100000001f4efe
- (_Bool)showsMapView;	// IMP=0x00100000001f4ef6
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001f4e27
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001f4d42
- (void)viewDidLoad;	// IMP=0x00100000001f4b32
- (id)initWithRequestedInteractionModel:(unsigned long long)arg1 resultsProvider:(id)arg2;	// IMP=0x00100000001f498a

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

