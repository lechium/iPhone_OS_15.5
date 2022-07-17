//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, ExtensionsActionsFooterView, ExtensionsBannerAttributionView, ExtensionsBannerView, ExtensionsFeedbackView, ExtensionsPrimaryDetailsView, ExtensionsRidesharingTemplatedBannerView, ExtensionsSecondaryDetailsView, FeedbackHeaderView, INUIRemoteViewController, NSString, NSURL, ProminentActionButton, RideBookingRequestRideOptionProxy, RideBookingRideStatus, RideBookingRideStatusObserverProxy, RidesharingAnalyticsBookedSession, RidesharingCoordinator, RoutePlanningHeaderView, UIView, _MXExtension, _MXExtensionManager;

__attribute__((visibility("hidden")))
@interface RidesharingConfirmedRideViewController
{
    ContainerHeaderView *_containerHeaderView;	// 8 = 0x8
    RoutePlanningHeaderView *_routeFromToView;	// 16 = 0x10
    FeedbackHeaderView *_feedbackHeaderView;	// 24 = 0x18
    UIView *_roundedRectView;	// 32 = 0x20
    UIView *_bannerViewContainerView;	// 40 = 0x28
    ExtensionsBannerView *_bannerView;	// 48 = 0x30
    ExtensionsRidesharingTemplatedBannerView *_templatedBannerView;	// 56 = 0x38
    ExtensionsBannerAttributionView *_bannerAttributionView;	// 64 = 0x40
    ExtensionsFeedbackView *_feedbackView;	// 72 = 0x48
    ExtensionsPrimaryDetailsView *_primaryDetailsView;	// 80 = 0x50
    ExtensionsSecondaryDetailsView *_secondaryDetailsView;	// 88 = 0x58
    ExtensionsActionsFooterView *_openAppView;	// 96 = 0x60
    NSString *_driverPhoneNumber;	// 104 = 0x68
    NSURL *_cachedContactUrl;	// 112 = 0x70
    _Bool _hasShownFullContaineeLayout;	// 120 = 0x78
    _Bool _hasEverRequestedRemoteViewController;	// 121 = 0x79
    INUIRemoteViewController *_remoteViewController;	// 128 = 0x80
    RidesharingCoordinator *_coordinator;	// 136 = 0x88
    RideBookingRideStatus *_rideStatus;	// 144 = 0x90
    ProminentActionButton *_cancelButton;	// 152 = 0x98
    ProminentActionButton *_contactButton;	// 160 = 0xa0
    ProminentActionButton *_completedButton;	// 168 = 0xa8
    RideBookingRequestRideOptionProxy *_requestRideOptionProxy;	// 176 = 0xb0
    RideBookingRideStatusObserverProxy *_rideStatusObserverProxy;	// 184 = 0xb8
    NSString *_applicationIdentifier;	// 192 = 0xc0
    _MXExtensionManager *_extensionManager;	// 200 = 0xc8
    _MXExtension *_extensionForUI;	// 208 = 0xd0
    RidesharingAnalyticsBookedSession *_analyticsBookedSession;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00200000004a6499
@property(retain, nonatomic) RidesharingAnalyticsBookedSession *analyticsBookedSession; // @synthesize analyticsBookedSession=_analyticsBookedSession;
@property(retain, nonatomic) _MXExtension *extensionForUI; // @synthesize extensionForUI=_extensionForUI;
@property(retain, nonatomic) _MXExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) RideBookingRideStatusObserverProxy *rideStatusObserverProxy; // @synthesize rideStatusObserverProxy=_rideStatusObserverProxy;
@property(retain, nonatomic) RideBookingRequestRideOptionProxy *requestRideOptionProxy; // @synthesize requestRideOptionProxy=_requestRideOptionProxy;
@property(retain, nonatomic) ProminentActionButton *completedButton; // @synthesize completedButton=_completedButton;
@property(retain, nonatomic) ProminentActionButton *contactButton; // @synthesize contactButton=_contactButton;
@property(retain, nonatomic) ProminentActionButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) RideBookingRideStatus *rideStatus; // @synthesize rideStatus=_rideStatus;
@property(nonatomic) __weak RidesharingCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) INUIRemoteViewController *_remoteViewController; // @synthesize _remoteViewController;
- (void)getCanCallPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004a6154
- (void)presentCustomTipAlert:(id)arg1;	// IMP=0x00100000004a613a
- (void)dealloc;	// IMP=0x00100000004a60e9
- (void)remoteViewController:(id)arg1 desiresConstrainedSize:(struct CGSize)arg2;	// IMP=0x00100000004a60e3
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;	// IMP=0x00100000004a606e
- (struct CGSize)maximumSizeForRemoteViewController:(id)arg1;	// IMP=0x00100000004a600e
- (struct CGSize)minimumSizeForRemoteViewController:(id)arg1;	// IMP=0x00100000004a5fae
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000004a5dc8
- (id)stackedViews;	// IMP=0x00100000004a5d21
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000004a5ca5
- (void)_setBannerViewContainerContentView:(id)arg1;	// IMP=0x00100000004a522e
- (void)_updateFromRideStatus:(id)arg1;	// IMP=0x00100000004a44a3
- (void)rideStatusMapDidChange:(id)arg1;	// IMP=0x00100000004a440d
- (int)_currentAnalyticsTarget;	// IMP=0x00100000004a3eed
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000004a3e63
- (void)contactTapped:(id)arg1;	// IMP=0x00100000004a3d7a
- (void)_completedButtonTapped:(id)arg1;	// IMP=0x00100000004a3c44
- (id)_cancelConfirmationAlertControllerForApp:(id)arg1 withFee:(id)arg2 threshold:(id)arg3 continueBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000004a3403
- (void)_cleanupWithRideStatus:(id)arg1;	// IMP=0x00100000004a31f0
- (void)_cancelTapped:(id)arg1;	// IMP=0x00100000004a2a12
- (void)_openAppTapped;	// IMP=0x00100000004a290d
- (void)_bannerViewTapped:(id)arg1;	// IMP=0x00100000004a2872
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000004a2758
- (void)getRemoteViewControllerWithDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004a246b
- (void)extensionManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000004a2465
- (void)extensionManager:(id)arg1 didUpdateAvailableExtensions:(id)arg2;	// IMP=0x00100000004a224e
- (void)viewDidLoad;	// IMP=0x00100000004a14e0
- (id)init;	// IMP=0x00100000004a14ad
- (id)initWithApplicationIdentifier:(id)arg1;	// IMP=0x00100000004a1155

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
