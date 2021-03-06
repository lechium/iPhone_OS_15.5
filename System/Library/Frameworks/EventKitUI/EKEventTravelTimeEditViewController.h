//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKTravelRouteEstimationControllerDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKCalendarItem, EKEventStore, EKStructuredLocation, EKTravelRouteEstimationController, NSDate, NSIndexPath, NSString, UISwitch, UITableView, UITableViewCell, UIView;

@interface EKEventTravelTimeEditViewController <UITableViewDataSource, UITableViewDelegate, EKTravelRouteEstimationControllerDelegate, EKEditItemViewControllerDelegate>
{
    struct CGRect _initFrame;	// 72 = 0x48
    EKCalendarItem *_calendarItem;	// 104 = 0x68
    EKEventStore *_eventStore;	// 112 = 0x70
    UITableView *_table;	// 120 = 0x78
    NSIndexPath *_checkedItem;	// 128 = 0x80
    UISwitch *_switchControl;	// 136 = 0x88
    long long _travelTimeSelectedChoice;	// 144 = 0x90
    double _customTravelTimeDuration;	// 152 = 0x98
    _Bool _estimationGroupIsShowing;	// 160 = 0xa0
    _Bool _customTimesGroupIsShowing;	// 161 = 0xa1
    _Bool _externallySetValueGroupIsShowing;	// 162 = 0xa2
    _Bool _isAnimatingTableSections;	// 163 = 0xa3
    _Bool _pendingReloadData;	// 164 = 0xa4
    NSString *_routeEstimationErrorMessage;	// 168 = 0xa8
    _Bool _isOriginSelectionVisible;	// 176 = 0xb0
    _Bool _suppressErrors;	// 177 = 0xb1
    _Bool _needsShowOriginAlert;	// 178 = 0xb2
    _Bool _estimatedRowIsChecked;	// 179 = 0xb3
    EKTravelRouteEstimationController *_routeEstimationControler;	// 184 = 0xb8
    long long _selectedRoutingMode;	// 192 = 0xc0
    long long _originalSelectedRoutingMode;	// 200 = 0xc8
    double _originalSelectedTravelTime;	// 208 = 0xd0
    UIView *_shadowView;	// 216 = 0xd8
    UITableViewCell *_sampleSizingCell;	// 224 = 0xe0
    double _selectedTravelTime;	// 232 = 0xe8
    NSDate *_arrivalDate;	// 240 = 0xf0
    EKStructuredLocation *_originStructuredLocation;	// 248 = 0xf8
    EKStructuredLocation *_destinationStructuredLocation;	// 256 = 0x100
}

+ (id)_directionsCouldNotBeFoundLocalizedString;	// IMP=0x0000000000101878
+ (id)_okLocalizedString;	// IMP=0x000000000010108d
+ (id)_cannotProvideDirectionsLocalizedString;	// IMP=0x0000000000100fb9
+ (id)_startingLocationLocalizedString;	// IMP=0x0000000000100591
+ (id)_travelTimeLocalizedString;	// IMP=0x00000000000ffc92
- (void).cxx_destruct;	// IMP=0x0000000000103439
@property(retain, nonatomic) EKStructuredLocation *destinationStructuredLocation; // @synthesize destinationStructuredLocation=_destinationStructuredLocation;
@property(retain, nonatomic) EKStructuredLocation *originStructuredLocation; // @synthesize originStructuredLocation=_originStructuredLocation;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(nonatomic) double selectedTravelTime; // @synthesize selectedTravelTime=_selectedTravelTime;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000103288
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000010311c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000103107
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000102f77
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000102697
- (long long)_cellStyleForIndexPath:(id)arg1;	// IMP=0x000000000010262b
- (void)setCell:(id)arg1 checked:(_Bool)arg2;	// IMP=0x0000000000102516
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000102458
- (long long)_numberOfEstimatedTravelTimeResultRows;	// IMP=0x0000000000102403
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001023d1
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001023ab
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000001022fa
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000102224
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000102213
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000010220b
- (unsigned long long)_externallySetValueTravelTimeSection;	// IMP=0x00000000001021de
- (unsigned long long)_customTravelTimeSection;	// IMP=0x00000000001021b7
- (unsigned long long)_estimatedTravelTimeSection;	// IMP=0x00000000001021a0
- (unsigned long long)_toggleSwitchSection;	// IMP=0x0000000000102198
- (id)_indexPathForSelectedTravelTime;	// IMP=0x0000000000101edb
- (long long)travelTimeSelectedChoice;	// IMP=0x0000000000101eca
- (void)setTravelTimeSelectedChoice:(long long)arg1;	// IMP=0x0000000000101cc2
- (_Bool)setTravelTimeSelectedChoiceEstimatedRowAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000101b92
- (void)setTravelTimeSelectedChoiceToFirstValidEstimatedRow;	// IMP=0x0000000000101ada
- (void)_checkItemAtIndexPath:(id)arg1;	// IMP=0x0000000000101a18
- (id)_errorStringForMapKitErrorCode:(unsigned long long)arg1;	// IMP=0x00000000001018d0
- (void)_handleEstimationControllerTravelTimeLookupErrors;	// IMP=0x000000000010176a
- (void)routeEstimationControllerDidFinishTravelTimeLookup:(id)arg1;	// IMP=0x000000000010168c
- (void)routeEstimationControllerDidBeginTravelTimeLookup:(id)arg1;	// IMP=0x0000000000101617
- (void)_travelTimeActivationSwitchChanged:(id)arg1;	// IMP=0x0000000000101511
- (void)_setEstimationActive:(_Bool)arg1;	// IMP=0x00000000001013bc
- (void)_showRouteEstimationAlert;	// IMP=0x00000000001011a1
- (id)_routeEstimationControler;	// IMP=0x00000000001010e5
- (void)_handleOriginLocationErrorsWithAlert:(_Bool)arg1;	// IMP=0x0000000000101011
- (void)routeEstimationControllerDidFinishOriginLocationLookup:(id)arg1;	// IMP=0x0000000000100f5b
- (void)routeEstimationControllerDidBeginOriginLocationLookup:(id)arg1;	// IMP=0x0000000000100f49
- (id)editItemEventToDetach;	// IMP=0x0000000000100f41
- (_Bool)editItemViewControllerShouldShowDetachAlert;	// IMP=0x0000000000100f39
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;	// IMP=0x0000000000100b71
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x0000000000100acf
- (void)_locationsChanged;	// IMP=0x0000000000100a12
- (void)_originLocationButtonWasTapped;	// IMP=0x0000000000100717
- (id)_stringForOriginLocation;	// IMP=0x00000000001005e9
@property(nonatomic) long long selectedRoutingMode;
- (void)_updateTableView;	// IMP=0x000000000010038e
- (void)_autoselectFromAvailableChoices;	// IMP=0x00000000001001ef
- (void)_updateVisibleSections;	// IMP=0x00000000001000a7
- (_Bool)_showingOptions;	// IMP=0x000000000010008a
- (_Bool)_showingOptionsInitialState;	// IMP=0x000000000010006d
- (_Bool)_shouldAutoSelectEstimatedTravelTimeOnLookupCompletion;	// IMP=0x0000000000100058
- (void)_layoutShadowView;	// IMP=0x00000000000ffcea
- (void)_contentCategorySizeChanged:(id)arg1;	// IMP=0x00000000000ffc1d
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000ffbdc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000ffb5a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000ffb2b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ffa25
- (void)viewDidLoad;	// IMP=0x00000000000ff9db
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ff9c9
- (void)resetBackgroundColor;	// IMP=0x00000000000ff916
- (void)loadView;	// IMP=0x00000000000ff756
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;	// IMP=0x00000000000ff488

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

