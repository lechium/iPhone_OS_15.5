//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CarAdvisoriesView, CarAutohidingLabel, CarLoadingButton, CarMoreButton, CarStarRatingView, GuidanceETA, MKMapItem, NSArray, NSLayoutConstraint, NSString, NSTimer, SearchResult, UILabel, UIStackView, _MKLocalizedHoursBuilder;
@protocol CarPlaceCardCardViewControllerDataSource, CarPlaceCardCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CarPlaceCardCardViewController : UIViewController
{
    UIStackView *_textStackView;	// 8 = 0x8
    CarAutohidingLabel *_subtitleLabel;	// 16 = 0x10
    CarStarRatingView *_ratingView;	// 24 = 0x18
    CarAutohidingLabel *_addressLabel;	// 32 = 0x20
    UILabel *_etaLabel;	// 40 = 0x28
    UILabel *_mainDescriptionLabel;	// 48 = 0x30
    CarAutohidingLabel *_sharingETALabel;	// 56 = 0x38
    CarMoreButton *_moreButton;	// 64 = 0x40
    CarAdvisoriesView *_routeAdvisoriesView;	// 72 = 0x48
    CarLoadingButton *_goButton;	// 80 = 0x50
    NSLayoutConstraint *_etaLabelTrailingConstraint;	// 88 = 0x58
    NSLayoutConstraint *_routeAdvisoriesHeightConstraint;	// 96 = 0x60
    NSTimer *_etaUpdateTimer;	// 104 = 0x68
    GuidanceETA *_latestETA;	// 112 = 0x70
    NSTimer *_openingHoursUpdateTimer;	// 120 = 0x78
    _Bool _goButtonIsFocusable;	// 128 = 0x80
    _Bool _loading;	// 129 = 0x81
    _Bool _goButtonEnabled;	// 130 = 0x82
    _Bool _goButtonHidden;	// 131 = 0x83
    _Bool _hasCardFinishedTransitioning;	// 132 = 0x84
    _Bool _navigationAidedDrivingEnabled;	// 133 = 0x85
    _Bool _handoffEnabled;	// 134 = 0x86
    _Bool _shouldDisplayMoreButton;	// 135 = 0x87
    SearchResult *_searchResult;	// 136 = 0x88
    id <CarPlaceCardCardViewControllerDataSource> _dataSource;	// 144 = 0x90
    id <CarPlaceCardCardViewControllerDelegate> _delegate;	// 152 = 0x98
    long long _style;	// 160 = 0xa0
    _MKLocalizedHoursBuilder *_localizedHoursBuilder;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000004bab19
@property(retain, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder; // @synthesize localizedHoursBuilder=_localizedHoursBuilder;
@property(nonatomic) _Bool shouldDisplayMoreButton; // @synthesize shouldDisplayMoreButton=_shouldDisplayMoreButton;
@property(nonatomic, getter=isHandoffEnabled) _Bool handoffEnabled; // @synthesize handoffEnabled=_handoffEnabled;
@property(nonatomic, getter=isNavigationAidedDrivingEnabled) _Bool navigationAidedDrivingEnabled; // @synthesize navigationAidedDrivingEnabled=_navigationAidedDrivingEnabled;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <CarPlaceCardCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CarPlaceCardCardViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) _Bool hasCardFinishedTransitioning; // @synthesize hasCardFinishedTransitioning=_hasCardFinishedTransitioning;
@property(nonatomic, getter=isGoButtonHidden) _Bool goButtonHidden; // @synthesize goButtonHidden=_goButtonHidden;
@property(nonatomic, getter=isGoButtonEnabled) _Bool goButtonEnabled; // @synthesize goButtonEnabled=_goButtonEnabled;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)_externalDeviceUpdated:(id)arg1;	// IMP=0x00100000004ba845
- (void)_goButtonPressed:(id)arg1;	// IMP=0x00100000004ba747
- (void)startNavigation;	// IMP=0x00100000004ba733
- (void)_moreButtonPressed:(id)arg1;	// IMP=0x00100000004ba578
- (_Bool)_shouldHideNavigationRelatedInfo;	// IMP=0x00100000004ba4fe
- (void)_callDestination;	// IMP=0x00100000004ba0f4
- (void)_presentMoreOptions;	// IMP=0x00100000004b9679
- (id)_createAutohidingTextlabelWithVerticalCompressionResistancePriority:(float)arg1;	// IMP=0x00100000004b95df
- (id)_createEtaLabelTrailingConstraint;	// IMP=0x00100000004b94ca
- (id)_localizedHours;	// IMP=0x00100000004b9297
- (id)_sharingETAString;	// IMP=0x00100000004b908f
- (id)_subtitleString;	// IMP=0x00100000004b8e65
- (id)_attributesForPlainSubtitleString;	// IMP=0x00100000004b8d62
- (id)_visibleButtons;	// IMP=0x00100000004b8c8b
- (void)_updateOpeningHours;	// IMP=0x00100000004b8a37
- (void)_scheduleOpeningHoursUpdate;	// IMP=0x00100000004b89d1
- (void)_updateETA;	// IMP=0x00100000004b889c
- (void)_scheduleETAUpdate;	// IMP=0x00100000004b87cc
- (void)_cancelScheduleETAUpdate;	// IMP=0x00100000004b8720
- (_Bool)_canSafelyRequestFocusUpdate;	// IMP=0x00100000004b859c
- (_Bool)_isGoButtonFocusable;	// IMP=0x00100000004b8534
- (long long)titleNumberOfLines;	// IMP=0x00100000004b8506
@property(readonly, nonatomic) MKMapItem *mapItem;
- (void)_captureAnalytics;	// IMP=0x00100000004b7cb1
- (void)_updateETARelatedContents;	// IMP=0x00100000004b77b0
- (void)_updateRouteAdvisoriesStack;	// IMP=0x00100000004b765d
- (void)_updateContents;	// IMP=0x00100000004b6f2d
- (void)_updateConstraints;	// IMP=0x00100000004b6df3
- (void)reloadData;	// IMP=0x00100000004b6de1
- (void)_updateMoreButton;	// IMP=0x00100000004b6ca1
- (void)_setupStyling;	// IMP=0x00100000004b6777
- (void)_setupConstraints;	// IMP=0x00100000004b555a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000004b54e8
- (void)viewDidLoad;	// IMP=0x00100000004b4dd0
- (void)dealloc;	// IMP=0x00100000004b4d0c
- (id)initWithSearchResult:(id)arg1 style:(long long)arg2 dataSource:(id)arg3 delegate:(id)arg4;	// IMP=0x00100000004b4b53

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

