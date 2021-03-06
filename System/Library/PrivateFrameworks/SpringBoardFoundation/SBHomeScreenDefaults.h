//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SBHomeScreenDefaults
{
}

- (_Bool)automaticallyAddsNewApplicationsExists;	// IMP=0x000000000003d568
- (_Bool)hasLayoutLowDensityBeenAltered;	// IMP=0x000000000003d51d
- (void)_bindAndRegisterDefaults;	// IMP=0x000000000003cd24

// Remaining properties
@property(nonatomic) _Bool automaticallyAddsNewApplications; // @dynamic automaticallyAddsNewApplications;
@property(nonatomic) _Bool enableModalWidgetDiscoverabilityForTesting; // @dynamic enableModalWidgetDiscoverabilityForTesting;
@property(nonatomic, getter=isLayoutLowDensity) _Bool layoutLowDensity; // @dynamic layoutLowDensity;
@property(nonatomic, getter=isLayoutRestrictedWidgets) _Bool layoutRestrictedWidgets; // @dynamic layoutRestrictedWidgets;
@property(copy, nonatomic) NSString *overriddenScreenType; // @dynamic overriddenScreenType;
@property(nonatomic) _Bool pagesHaveEverBeenHidden; // @dynamic pagesHaveEverBeenHidden;
@property(nonatomic) _Bool shouldAddDefaultWidgetsToHomeScreen; // @dynamic shouldAddDefaultWidgetsToHomeScreen;
@property(nonatomic) _Bool shouldAutoFillFavoriteList; // @dynamic shouldAutoFillFavoriteList;
@property(nonatomic) _Bool shouldFudgeShortcutsToCauseMaximumPain; // @dynamic shouldFudgeShortcutsToCauseMaximumPain;
@property(nonatomic) _Bool shouldHideReportWidgetStackRotationQuickAction; // @dynamic shouldHideReportWidgetStackRotationQuickAction;
@property(nonatomic) _Bool shouldPrepareDefaultTodayList; // @dynamic shouldPrepareDefaultTodayList;
@property(nonatomic) _Bool shouldPrepareStackForDefaultTodayList; // @dynamic shouldPrepareStackForDefaultTodayList;
@property(nonatomic) _Bool shouldShowInternalWidgets; // @dynamic shouldShowInternalWidgets;
@property(nonatomic) _Bool shouldShowLibraryEducationView; // @dynamic shouldShowLibraryEducationView;
@property(nonatomic) _Bool shouldShowWidgetIntroductionPopover; // @dynamic shouldShowWidgetIntroductionPopover;
@property(nonatomic) _Bool shouldUpgradeEnableWidgetSuggestions; // @dynamic shouldUpgradeEnableWidgetSuggestions;
@property(nonatomic) _Bool shouldUseLargeIcons; // @dynamic shouldUseLargeIcons;
@property(nonatomic) _Bool showsBadgesInAppLibrary; // @dynamic showsBadgesInAppLibrary;
@property(nonatomic, getter=hasSidebarEverBeenVisible) _Bool sidebarEverBeenVisible; // @dynamic sidebarEverBeenVisible;
@property(copy, nonatomic) NSDate *sidebarLearningCadenceCommenceDate; // @dynamic sidebarLearningCadenceCommenceDate;
@property(nonatomic) long long sidebarLearningCadenceEpoch; // @dynamic sidebarLearningCadenceEpoch;
@property(nonatomic, getter=isSidebarPinned) _Bool sidebarPinned; // @dynamic sidebarPinned;
@property(nonatomic, getter=isSidebarVisible) _Bool sidebarVisible; // @dynamic sidebarVisible;
@property(nonatomic) _Bool userDidUndoSuggestedWidget; // @dynamic userDidUndoSuggestedWidget;
@property(nonatomic) _Bool userHasDeletedSuggestedWidget; // @dynamic userHasDeletedSuggestedWidget;
@property(nonatomic, getter=isWidgetScalingEnabled) _Bool widgetScalingEnabled; // @dynamic widgetScalingEnabled;

@end

