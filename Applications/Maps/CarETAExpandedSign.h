//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CarCardRoundedButton, CarFocusableButton, GuidanceETA, NSArray, NSString, SharedTripSuggestionsDataSource, UILabel, UIStackView;
@protocol CarETACardSignDelegate, CarETAExpandedSignDataSource;

__attribute__((visibility("hidden")))
@interface CarETAExpandedSign : UIView
{
    UILabel *_etaLabel;	// 8 = 0x8
    CarFocusableButton *_expandButton;	// 16 = 0x10
    UIStackView *_buttonsStackView;	// 24 = 0x18
    CarCardRoundedButton *_searchButton;	// 32 = 0x20
    CarCardRoundedButton *_endButton;	// 40 = 0x28
    SharedTripSuggestionsDataSource *_suggestionDataSource;	// 48 = 0x30
    GuidanceETA *_latestETA;	// 56 = 0x38
    id <CarETACardSignDelegate> _delegate;	// 64 = 0x40
    CarCardRoundedButton *_shareTripButton;	// 72 = 0x48
    CarCardRoundedButton *_reportIncidentButton;	// 80 = 0x50
    id <CarETAExpandedSignDataSource> _dataSource;	// 88 = 0x58
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0020000000142c6f
- (void).cxx_destruct;	// IMP=0x002000000014501d
@property(nonatomic) __weak id <CarETAExpandedSignDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CarCardRoundedButton *reportIncidentButton; // @synthesize reportIncidentButton=_reportIncidentButton;
@property(retain, nonatomic) CarCardRoundedButton *shareTripButton; // @synthesize shareTripButton=_shareTripButton;
@property(nonatomic) __weak id <CarETACardSignDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
- (_Bool)_shouldEnableShareTripButton;	// IMP=0x0010000000144f20
- (void)suggestionsDataSourceDidUpdateContactsForDisplay:(id)arg1;	// IMP=0x0010000000144eda
- (void)suggestionsDataSourceWillUpdateContactsForDisplay:(id)arg1;	// IMP=0x0010000000144ec8
- (void)incidentsReportingEnablementDidUpdate;	// IMP=0x0010000000144e39
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)_buttonTapped:(id)arg1;	// IMP=0x0010000000144a92
- (void)updateContent;	// IMP=0x0010000000144a80
- (void)_updateSharingButtonDisabledTitle;	// IMP=0x0010000000144746
- (void)_updateStyling;	// IMP=0x0010000000143f83
- (void)_updateContent;	// IMP=0x0010000000143d11
- (void)_rebuildButtons;	// IMP=0x0010000000143a50
- (void)_setupConstraints;	// IMP=0x0010000000143474
@property(readonly, nonatomic) NSArray *stackedButtons;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000142c77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

