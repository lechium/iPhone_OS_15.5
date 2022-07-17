//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/SBHMultiplexingViewControllerObserver-Protocol.h>

@class NSString, UIView;
@protocol SBHWidgetContainerViewControllerDelegate;

@interface SBHWidgetContainerViewController : UIViewController <SBHMultiplexingViewControllerObserver>
{
    _Bool _requiresClippingToBounds;	// 8 = 0x8
    _Bool _showsSnapshotWhenDeactivated;	// 9 = 0x9
    UIViewController *_widgetViewController;	// 16 = 0x10
    unsigned long long _gridSizeClass;	// 24 = 0x18
    NSString *_applicationName;	// 32 = 0x20
    id <SBHWidgetContainerViewControllerDelegate> _delegate;	// 40 = 0x28
    unsigned long long _userVisibilityStatus;	// 48 = 0x30
    UIView *_deactivationSnapshotView;	// 56 = 0x38
    struct SBIconApproximateLayoutPosition _approximateLayoutPosition;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000227cd8
@property(retain, nonatomic) UIView *deactivationSnapshotView; // @synthesize deactivationSnapshotView=_deactivationSnapshotView;
@property(nonatomic) struct SBIconApproximateLayoutPosition approximateLayoutPosition; // @synthesize approximateLayoutPosition=_approximateLayoutPosition;
@property(nonatomic) _Bool showsSnapshotWhenDeactivated; // @synthesize showsSnapshotWhenDeactivated=_showsSnapshotWhenDeactivated;
@property(nonatomic) _Bool requiresClippingToBounds; // @synthesize requiresClippingToBounds=_requiresClippingToBounds;
@property(nonatomic) unsigned long long userVisibilityStatus; // @synthesize userVisibilityStatus=_userVisibilityStatus;
@property(nonatomic) __weak id <SBHWidgetContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(readonly, nonatomic) unsigned long long gridSizeClass; // @synthesize gridSizeClass=_gridSizeClass;
@property(readonly, nonatomic) UIViewController *widgetViewController; // @synthesize widgetViewController=_widgetViewController;
@property(readonly, copy) NSString *description;
- (void)_updateWidgetVisibility;	// IMP=0x00000000002278d6
- (id)_widgetExtensionBundleIdentifier;	// IMP=0x0000000000227886
- (id)_avocadoWidget;	// IMP=0x0000000000227836
- (id)_avocadoViewController;	// IMP=0x00000000002277a9
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000002277a1
- (void)_clearDeactivationSnapshotView;	// IMP=0x000000000022775f
- (void)multiplexingViewControllerWillDeactivate:(id)arg1;	// IMP=0x00000000002275da
- (void)multiplexingViewControllerDidActivate:(id)arg1;	// IMP=0x0000000000227574
@property(nonatomic) unsigned long long presentationMode;
@property(nonatomic) _Bool allowsEdgeAntialiasing;
@property(nonatomic, getter=isBlockedForScreenTimeExpiration) _Bool blockedForScreenTimeExpiration;
@property(nonatomic, getter=isPaused) _Bool paused;
- (id)widgetContextMenuController;	// IMP=0x0000000000227073
- (id)cancelTouchesForCurrentEventInHostedContent;	// IMP=0x0000000000226fb9
- (id)snapshotView;	// IMP=0x0000000000226cb0
@property(readonly, nonatomic) _Bool wantsSystemMaterialBackground;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000226b88
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000226aa4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002269c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002268dc
- (id)widgetContainerView;	// IMP=0x00000000002268ca
- (void)loadView;	// IMP=0x0000000000226812
- (id)initWithWidgetViewController:(id)arg1 gridSizeClass:(unsigned long long)arg2 applicationName:(id)arg3;	// IMP=0x0000000000226702

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
