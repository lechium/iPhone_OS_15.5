//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKChartOverlayVersionProviding-Protocol.h>
#import <HealthUI/HKCurrentTimeViewDelegate-Protocol.h>
#import <HealthUI/HKCurrentValueViewDataSourceDelegate-Protocol.h>
#import <HealthUI/HKGraphViewDelegate-Protocol.h>
#import <HealthUI/HKInteractiveChartAnnotationViewDelegate-Protocol.h>
#import <HealthUI/HKInteractiveChartCurrentValueViewCallbacks-Protocol.h>
#import <HealthUI/HKInteractiveChartCurrentValueViewHandler-Protocol.h>
#import <HealthUI/HKLollipopDelegate-Protocol.h>
#import <HealthUI/HKMonthViewControllerDelegate-Protocol.h>
#import <HealthUI/HKSampleTypeDateRangeControllerObserver-Protocol.h>
#import <HealthUI/UIGestureRecognizerDelegate-Protocol.h>

@class HKChartDataCacheController, HKCurrentTimeView, HKCurrentValueViewDataSource, HKDateCache, HKDisplayCategoryController, HKDisplayType, HKDisplayTypeController, HKGraphViewController, HKHealthStore, HKInteractiveChartAnnotationViewDataSource, HKLollipopController, HKSampleType, HKSampleTypeDateRangeController, HKSelectedRangeFormatter, HKSelectedTimeScopeController, HKTimeScopeControl, HKUIDateLabel, HKUnitPreferenceController, NSArray, NSCalendar, NSDate, NSDictionary, NSMutableArray, NSString, NSUserActivity, UIColor, UIFont, UIImpactFeedbackGenerator, UILabel, UIView;
@protocol HKCurrentValueViewDataSourceDelegate, HKInteractiveChartCurrentValueViewCallbacks, HKInteractiveChartCurrentValueViewHandler;

@interface HKInteractiveChartViewController <HKGraphViewDelegate, HKSampleTypeDateRangeControllerObserver, HKCurrentTimeViewDelegate, HKInteractiveChartAnnotationViewDelegate, UIGestureRecognizerDelegate, HKMonthViewControllerDelegate, HKLollipopDelegate, HKInteractiveChartCurrentValueViewHandler, HKInteractiveChartCurrentValueViewCallbacks, HKCurrentValueViewDataSourceDelegate, HKChartOverlayVersionProviding>
{
    NSMutableArray *_observers;	// 8 = 0x8
    long long _displayState;	// 16 = 0x10
    UILabel *_selectedSeriesLabel;	// 24 = 0x18
    UILabel *_selectedSeriesUnitLabel;	// 32 = 0x20
    HKTimeScopeControl *_radioButtons;	// 40 = 0x28
    HKCurrentTimeView *_currentTimeView;	// 48 = 0x30
    UIView *_currentValueView;	// 56 = 0x38
    double _bannerBottom;	// 64 = 0x40
    UIView *_graphTopDividerView;	// 72 = 0x48
    UIView *_graphBottomDividerView;	// 80 = 0x50
    UILabel *_dashboardEmptyHeader;	// 88 = 0x58
    UILabel *_dashboardEmptyDescription;	// 96 = 0x60
    NSArray *_allGraphSeriesConfigurationManagers;	// 104 = 0x68
    UIFont *_majorSelectedPointFont;	// 112 = 0x70
    UIFont *_minorSelectedPointFont;	// 120 = 0x78
    HKUIDateLabel *_selectedPointDateLabel;	// 128 = 0x80
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;	// 136 = 0x88
    UIView *_primaryGraphViewWrapper;	// 144 = 0x90
    HKGraphViewController *_primaryGraphViewController;	// 152 = 0x98
    NSDate *_creationDate;	// 160 = 0xa0
    unsigned long long _options;	// 168 = 0xa8
    double _lastDateValueRangeUpdate;	// 176 = 0xb0
    _Bool _disableCurrentValueViewForInitialLollipop;	// 184 = 0xb8
    NSCalendar *_currentCalendar;	// 192 = 0xc0
    HKHealthStore *_healthStore;	// 200 = 0xc8
    HKUnitPreferenceController *_unitPreferenceController;	// 208 = 0xd0
    HKDateCache *_dateCache;	// 216 = 0xd8
    HKSelectedTimeScopeController *_selectedTimeScopeController;	// 224 = 0xe0
    HKSelectedRangeFormatter *_selectedRangeFormatter;	// 232 = 0xe8
    HKChartDataCacheController *_chartDataCacheController;	// 240 = 0xf0
    HKDisplayTypeController *_displayTypeController;	// 248 = 0xf8
    HKDisplayCategoryController *_displayCategoryController;	// 256 = 0x100
    HKSampleTypeDateRangeController *_sampleTypeDateRangeController;	// 264 = 0x108
    id <HKInteractiveChartCurrentValueViewHandler> _currentValueViewHandler;	// 272 = 0x110
    id <HKCurrentValueViewDataSourceDelegate> _currentValueViewDataSourceDelegate;	// 280 = 0x118
    NSUserActivity *_restorationUserActivity;	// 288 = 0x120
    long long _annotationDataSourceFirstWeekday;	// 296 = 0x128
    HKInteractiveChartAnnotationViewDataSource *_annotationDataSource;	// 304 = 0x130
    HKLollipopController *_lollipopController;	// 312 = 0x138
    double _legendBottomLocation;	// 320 = 0x140
    NSArray *_displayTypeStack;	// 328 = 0x148
    HKCurrentValueViewDataSource *_currentValueViewDataSource;	// 336 = 0x150
    id _initialXValue;	// 344 = 0x158
    long long _sampleDateRangeUpdateCount;	// 352 = 0x160
    long long _delayedAutoscaleRequestCount;	// 360 = 0x168
    long long _delayedAutoscaleActualCount;	// 368 = 0x170
    CDUnknownBlockType _startupReportingBlock;	// 376 = 0x178
    id <HKInteractiveChartCurrentValueViewCallbacks> _standardCurrentValueViewCallbacks;	// 384 = 0x180
    NSDictionary *_timeScopeRanges;	// 392 = 0x188
}

+ (void)saveRestorationUserActivity:(id)arg1 viewController:(id)arg2;	// IMP=0x00000000001dda05
+ (id)baseRestorationUserActivity:(id)arg1 activityType:(id)arg2 title:(id)arg3;	// IMP=0x00000000001dd870
+ (id)standardChartRestorationActivity:(id)arg1 primaryDisplayType:(id)arg2;	// IMP=0x00000000001dd7ad
+ (id)mergeRestorationDictionary:(id)arg1 otherDictionary:(id)arg2;	// IMP=0x00000000001dd484
+ (id)_encodeCurrentProfileIdentifierForHealthStore:(id)arg1;	// IMP=0x00000000001dd3ba
+ (id)standardChartRestorationDictionary:(id)arg1 healthStore:(id)arg2;	// IMP=0x00000000001dd143
+ (long long)_timeScopeForTimeScope:(long long)arg1 availableTimeScopes:(id)arg2;	// IMP=0x00000000001d32bb
+ (_Bool)_timeScope:(long long)arg1 inTimeScopeRanges:(id)arg2;	// IMP=0x00000000001d321d
+ (id)_timeScopesWithOptions:(unsigned long long)arg1 timeScopeRanges:(id)arg2;	// IMP=0x00000000001d3015
- (void).cxx_destruct;	// IMP=0x00000000001dde83
@property(retain, nonatomic) NSDictionary *timeScopeRanges; // @synthesize timeScopeRanges=_timeScopeRanges;
@property(nonatomic) _Bool disableCurrentValueViewForInitialLollipop; // @synthesize disableCurrentValueViewForInitialLollipop=_disableCurrentValueViewForInitialLollipop;
@property(nonatomic) __weak id <HKInteractiveChartCurrentValueViewCallbacks> standardCurrentValueViewCallbacks; // @synthesize standardCurrentValueViewCallbacks=_standardCurrentValueViewCallbacks;
@property(copy, nonatomic) CDUnknownBlockType startupReportingBlock; // @synthesize startupReportingBlock=_startupReportingBlock;
@property(nonatomic) long long delayedAutoscaleActualCount; // @synthesize delayedAutoscaleActualCount=_delayedAutoscaleActualCount;
@property(nonatomic) long long delayedAutoscaleRequestCount; // @synthesize delayedAutoscaleRequestCount=_delayedAutoscaleRequestCount;
@property(nonatomic) long long sampleDateRangeUpdateCount; // @synthesize sampleDateRangeUpdateCount=_sampleDateRangeUpdateCount;
@property(retain, nonatomic) id initialXValue; // @synthesize initialXValue=_initialXValue;
@property(retain, nonatomic) HKCurrentValueViewDataSource *currentValueViewDataSource; // @synthesize currentValueViewDataSource=_currentValueViewDataSource;
@property(retain, nonatomic) NSArray *displayTypeStack; // @synthesize displayTypeStack=_displayTypeStack;
@property(nonatomic) double legendBottomLocation; // @synthesize legendBottomLocation=_legendBottomLocation;
@property(retain, nonatomic) HKLollipopController *lollipopController; // @synthesize lollipopController=_lollipopController;
@property(retain, nonatomic) HKInteractiveChartAnnotationViewDataSource *annotationDataSource; // @synthesize annotationDataSource=_annotationDataSource;
@property(nonatomic) long long annotationDataSourceFirstWeekday; // @synthesize annotationDataSourceFirstWeekday=_annotationDataSourceFirstWeekday;
@property(readonly, nonatomic) NSUserActivity *restorationUserActivity; // @synthesize restorationUserActivity=_restorationUserActivity;
@property(nonatomic) __weak id <HKCurrentValueViewDataSourceDelegate> currentValueViewDataSourceDelegate; // @synthesize currentValueViewDataSourceDelegate=_currentValueViewDataSourceDelegate;
@property(nonatomic) __weak id <HKInteractiveChartCurrentValueViewHandler> currentValueViewHandler; // @synthesize currentValueViewHandler=_currentValueViewHandler;
@property(readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController; // @synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController;
@property(readonly, nonatomic) HKDisplayCategoryController *displayCategoryController; // @synthesize displayCategoryController=_displayCategoryController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) HKChartDataCacheController *chartDataCacheController; // @synthesize chartDataCacheController=_chartDataCacheController;
@property(retain, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // @synthesize selectedRangeFormatter=_selectedRangeFormatter;
@property(readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController; // @synthesize selectedTimeScopeController=_selectedTimeScopeController;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) NSCalendar *currentCalendar; // @synthesize currentCalendar=_currentCalendar;
@property(readonly, nonatomic) HKGraphViewController *primaryGraphViewController; // @synthesize primaryGraphViewController=_primaryGraphViewController;
@property(readonly, nonatomic) NSString *chartOverlayVersion;
- (void)saveRestorationState;	// IMP=0x00000000001dd08b
- (id)restorationStateDictionary;	// IMP=0x00000000001dcffd
- (void)restoreUserActivityState:(id)arg1;	// IMP=0x00000000001dcff7
- (void)setRestorationUserActivity:(id)arg1;	// IMP=0x00000000001dcfe3
- (void)selectTimeScope:(long long)arg1;	// IMP=0x00000000001dcf9d
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2;	// IMP=0x00000000001dcf5e
- (void)_updateGraphViewAxisDateRange;	// IMP=0x00000000001dcc68
- (id)_dateForMostRecentData;	// IMP=0x00000000001dc95f
- (id)_defaultAxisRangeIncludeToday:(_Bool)arg1;	// IMP=0x00000000001dc5f7
- (void)_automaticAutoScale;	// IMP=0x00000000001dc53c
- (void)updateCurrentValueViewWithVisibleRange;	// IMP=0x00000000001dc468
- (_Bool)_primaryDisplayTypeHasNoData;	// IMP=0x00000000001dc32c
- (id)_formatterForSeries:(id)arg1;	// IMP=0x00000000001dc205
- (id)_chartDataForPoint:(id)arg1;	// IMP=0x00000000001dc1a1
- (id)_dateForBlockPoint:(id)arg1;	// IMP=0x00000000001dc155
- (id)_debugDateStringForPoint:(id)arg1;	// IMP=0x00000000001dc0dc
- (void)_setVisibleRangeUsingDateFromDateSelector:(id)arg1;	// IMP=0x00000000001dc008
- (void)_setDateSelectorToVisibleRange;	// IMP=0x00000000001dbcf4
- (id)_midPointDateFromVisibleRange;	// IMP=0x00000000001dbbcf
- (id)infographicViewControllerForDisplayType:(id)arg1 healthStore:(id)arg2;	// IMP=0x00000000001dbb5f
- (_Bool)infographicSupportedForDisplayType:(id)arg1 healthStore:(id)arg2;	// IMP=0x00000000001dbafd
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000001dba72
- (void)didTapOnInfoButtonFromCurrentValueView:(id)arg1;	// IMP=0x00000000001db93a
- (void)didTapOnDateFromCurrentValueView:(id)arg1;	// IMP=0x00000000001db91d
- (void)setCurrentValueViewCallbacks:(id)arg1;	// IMP=0x00000000001db90b
- (void)updateCurrentValueView:(id)arg1 graphView:(id)arg2 timeScope:(long long)arg3;	// IMP=0x00000000001db7ed
- (id)makeCurrentValueView;	// IMP=0x00000000001db625
- (void)didTapBackButtonForMonthViewController:(id)arg1;	// IMP=0x00000000001db61f
- (void)monthViewController:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x00000000001db5e7
- (void)currentTimeViewDidTapOnNextTimeButton:(id)arg1;	// IMP=0x00000000001db5d0
- (void)currentTimeViewDidTapOnPreviousTimeButton:(id)arg1;	// IMP=0x00000000001db5b7
- (void)_moveSelectedDateInDirection:(long long)arg1;	// IMP=0x00000000001db430
- (void)_scrollToAnchorDate:(id)arg1 graphView:(id)arg2 alignment:(long long)arg3;	// IMP=0x00000000001db2a0
- (void)currentTimeViewDidTapOnDateSelector:(id)arg1;	// IMP=0x00000000001db099
@property(readonly) UIColor *calendarDaySamplePresentColor;
@property(readonly) HKSampleType *calendarQuerySampleType;
@property(readonly) HKDisplayType *calendarQueryDisplayType;
- (void)graphViewExternalSelectionEnd:(id)arg1;	// IMP=0x00000000001dae8f
- (void)graphView:(id)arg1 startupTime:(long long)arg2;	// IMP=0x00000000001dac79
- (_Bool)_viewHierarchyIsHidden:(id)arg1;	// IMP=0x00000000001dabf3
- (long long)_defaultAlignmentForTimeScope:(long long)arg1;	// IMP=0x00000000001dab55
- (void)_scrollToMostRecentDataWithAlignment:(long long)arg1;	// IMP=0x00000000001daab4
- (void)scrollToRange:(id)arg1 withVisibleAlignment:(long long)arg2;	// IMP=0x00000000001da71e
- (void)scrollToDate:(id)arg1 withVisibleAlignment:(long long)arg2;	// IMP=0x00000000001da683
- (void)scrollToMostRecentData;	// IMP=0x00000000001da637
- (void)graphViewDidTapYAxis:(id)arg1;	// IMP=0x00000000001da615
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;	// IMP=0x00000000001da5dd
- (id)seriesSelectionLineColorForGraphView:(id)arg1;	// IMP=0x00000000001da5cb
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3 changeContext:(long long)arg4;	// IMP=0x00000000001da326
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;	// IMP=0x00000000001da320
- (void)graphViewSizeChanged:(id)arg1;	// IMP=0x00000000001da30e
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;	// IMP=0x00000000001da2cb
- (void)_scheduleDelayedAutoscale;	// IMP=0x00000000001da192
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;	// IMP=0x00000000001da0fd
- (_Bool)_shouldHandleVisibleRangeChangeWithChangeContext:(long long)arg1;	// IMP=0x00000000001da0b6
- (void)_notifyObserversDidUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;	// IMP=0x00000000001d9f02
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x00000000001d9c89
- (long long)stackCountForGraphView:(id)arg1;	// IMP=0x00000000001d9c6c
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;	// IMP=0x00000000001d9aa6
- (void)graphViewDidEndSelection:(id)arg1;	// IMP=0x00000000001d9a64
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;	// IMP=0x00000000001d98ff
- (long long)_userInfoSelectionCount:(id)arg1;	// IMP=0x00000000001d977e
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;	// IMP=0x00000000001d96e5
- (id)_displayTypeForSeries:(id)arg1;	// IMP=0x00000000001d9695
- (id)_pointSelectionInfo:(id)arg1;	// IMP=0x00000000001d9529
- (_Bool)_shouldShowDateRangeForSelectedPointDateLabel;	// IMP=0x00000000001d950b
- (void)graphViewDidBeginSelection:(id)arg1;	// IMP=0x00000000001d9505
- (_Bool)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg1;	// IMP=0x00000000001d94fd
- (long long)_dateZoom;	// IMP=0x00000000001d94e0
- (void)_createAndPrepareFeedbackGenerator;	// IMP=0x00000000001d947f
- (id)_configurationForDisplayType:(id)arg1;	// IMP=0x00000000001d92e5
- (id)_configurationForSeries:(id)arg1;	// IMP=0x00000000001d914b
- (void)_setSelectedGraphSeries:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001d8f31
- (id)makeAnnotationDataSource;	// IMP=0x00000000001d8e72
- (double)lollipopExtensionLength;	// IMP=0x00000000001d8e60
- (id)lollipopExtensionColor;	// IMP=0x00000000001d8dea
- (id)lollipopAnnotationColor;	// IMP=0x00000000001d8d74
- (id)lollipopFieldColor;	// IMP=0x00000000001d8d5b
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;	// IMP=0x00000000001d8cae
- (void)_showTimeDateControls;	// IMP=0x00000000001d8c89
- (void)_hideTimeDateControls;	// IMP=0x00000000001d8c69
- (void)_radioButtonsDidUpdate:(id)arg1;	// IMP=0x00000000001d8bcd
- (void)_showHideNoGraphSeriesLabels;	// IMP=0x00000000001d8aa6
- (void)_createDashboardEmptyLabelsIfNecessary;	// IMP=0x00000000001d8753
- (_Bool)_dashboardEmptyLabelsExist;	// IMP=0x00000000001d873e
- (id)makeStandardCurrentValueViewDataSource;	// IMP=0x00000000001d853e
- (id)_colorForDisplayType:(id)arg1;	// IMP=0x00000000001d848d
- (id)_primaryDisplayType;	// IMP=0x00000000001d8409
- (id)_createGraphSeriesConfigurationFromDisplayType:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000001d825d
- (long long)_countOfHorizontalSectionsForConfigurationManager:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000001d809c
- (void)_addSeriesForDisplayType:(id)arg1 updatingTimeScopeProperties:(id)arg2 configurationManager:(id)arg3;	// IMP=0x00000000001d7f64
- (_Bool)_displayTypeIsHorizontalForTimeScope:(long long)arg1 displayType:(id)arg2;	// IMP=0x00000000001d7f08
- (long long)_numHorizontalDisplayTypesForTimeScope:(long long)arg1 displayTypes:(id)arg2;	// IMP=0x00000000001d7d58
- (void)_configureCustomDisplayType:(id)arg1 graphSeries:(id)arg2 configurationManager:(id)arg3 timeScope:(long long)arg4;	// IMP=0x00000000001d7bb8
- (id)_customGraphSeriesForDisplayType:(id)arg1;	// IMP=0x00000000001d7b57
- (_Bool)removeDisplayTypeStackAtIndex:(long long)arg1;	// IMP=0x00000000001d7a71
- (void)removeAllStackedDisplayTypes;	// IMP=0x00000000001d7987
- (long long)addNewDisplayTypeStackWithDisplayTypes:(id)arg1;	// IMP=0x00000000001d7719
- (void)_setVisibleDisplayTypes:(id)arg1;	// IMP=0x00000000001d7406
- (void)_updateAfterConfigurationChangeIncludeDateAxis:(_Bool)arg1;	// IMP=0x00000000001d736c
- (void)_addDisplayTypeToConfiguration:(id)arg1 allDisplayTypes:(id)arg2 configurationManager:(id)arg3;	// IMP=0x00000000001d6e10
- (void)_updateSelectedSeriesLabel:(id)arg1;	// IMP=0x00000000001d6914
- (id)_allDisplayTypes;	// IMP=0x00000000001d6779
- (id)_displayUnitForDisplayType:(id)arg1;	// IMP=0x00000000001d66f4
- (id)_displayNameForDisplayType:(id)arg1;	// IMP=0x00000000001d66b9
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000001d66b1
- (void)primaryGraphViewControllerDidInitialize:(id)arg1;	// IMP=0x00000000001d66ab
- (void)_updateAxisScalingRulesForUnitPreferenceChangesOfTypes:(id)arg1;	// IMP=0x00000000001d6083
- (void)unitPreferencesWillUpdate:(id)arg1;	// IMP=0x00000000001d607d
- (void)_unitPreferencesDidUpdate:(id)arg1;	// IMP=0x00000000001d5ef5
- (void)_handleInitialLollipopSelection;	// IMP=0x00000000001d5daf
- (void)_handleVisibleRangeChange;	// IMP=0x00000000001d5d81
- (void)_configureSelectedRangeFormatterWithChartRangeProvider;	// IMP=0x00000000001d5cf4
- (void)_replacePrimaryGraphViewControllerWithScalarController;	// IMP=0x00000000001d5c19
- (void)_replacePrimaryGraphViewControllerWithTimeScope:(long long)arg1 anchorDate:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001d5356
- (id)makeAnchorDateFromPreviousAnchorDate:(id)arg1 previousEffectiveVisibleRange:(id)arg2 previousTimeScope:(long long)arg3 currentTimeScope:(long long)arg4;	// IMP=0x00000000001d4e54
- (_Bool)_visibleRangeIsNowForTimeScope:(long long)arg1;	// IMP=0x00000000001d4ca5
- (id)_graphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 fixedRange:(id)arg2;	// IMP=0x00000000001d4a35
- (_Bool)_acceptSubclassRange:(id)arg1 proposedRange:(id)arg2 axisRange:(id)arg3;	// IMP=0x00000000001d4872
- (void)_setGraphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 preserveScrollPosition:(_Bool)arg3;	// IMP=0x00000000001d447d
- (_Bool)_valueRange:(id)arg1 fitsInsideValueRange:(id)arg2;	// IMP=0x00000000001d436a
- (id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2;	// IMP=0x00000000001d4354
- (id)fixedRangeForTimeScope:(long long)arg1;	// IMP=0x00000000001d428e
- (id)_singleFixedRange;	// IMP=0x00000000001d411f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001d400c
- (void)viewDidLoad;	// IMP=0x00000000001d367b
- (_Bool)_selectedSeriesWantsLastRecordedDate;	// IMP=0x00000000001d3632
- (long long)_defaultTimeScopeWithAvailableTimeScopes:(id)arg1;	// IMP=0x00000000001d355c
- (void)_layoutDashboardEmptyLabelsIfNecessary;	// IMP=0x00000000001d2b6b
- (void)_layoutDividerViews;	// IMP=0x00000000001d296f
- (void)_omitLayoutHeader;	// IMP=0x00000000001d28f8
- (void)_layoutHeader;	// IMP=0x00000000001d2045
- (_Bool)_inPointSelectionMode;	// IMP=0x00000000001d2030
- (double)_annotationViewCenterY;	// IMP=0x00000000001d1fed
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001d1ed5
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000001d1e53
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001d1982
- (double)_effectiveHorizontalMargin;	// IMP=0x00000000001d1902
- (void)loadView;	// IMP=0x00000000001d1835
- (void)dealloc;	// IMP=0x00000000001d178a
- (_Bool)_drawsGridlinesPerSeriesGroup;	// IMP=0x00000000001d1774
- (_Bool)_prefersOpaqueLegends;	// IMP=0x00000000001d1761
- (_Bool)_tilingDisabled;	// IMP=0x00000000001d174b
@property(readonly, nonatomic) double dateSelectorHeight;
- (_Bool)_currentValueEnabled;	// IMP=0x00000000001d1729
- (_Bool)_timeScopeEnabled;	// IMP=0x00000000001d1715
- (_Bool)_headerLineEnabled;	// IMP=0x00000000001d1700
- (_Bool)_selectedDateRangeLabelEnabled;	// IMP=0x00000000001d16eb
- (_Bool)_chartHasDateAxis;	// IMP=0x00000000001d16d7
- (double)minimumHeightForChart;	// IMP=0x00000000001d16c9
- (long long)stackOffsetCount;	// IMP=0x00000000001d16ac
- (void)setDetailView:(id)arg1;	// IMP=0x00000000001d163a
- (id)graphSeriesForDisplayType:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x00000000001d1587
- (id)currentDisplayTypesForStackOffset:(long long)arg1;	// IMP=0x00000000001d152c
- (void)removeOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2 automaticAutoscale:(_Bool)arg3;	// IMP=0x00000000001d1479
- (void)removeOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2;	// IMP=0x00000000001d1461
- (void)addOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2;	// IMP=0x00000000001d135e
- (void)replaceCurrentDisplayTypesWithTypes:(id)arg1 stackOffset:(long long)arg2 resetDateRange:(_Bool)arg3;	// IMP=0x00000000001d0ffd
- (void)removeChartViewObserver:(id)arg1;	// IMP=0x00000000001d0ef8
- (void)addChartViewObserver:(id)arg1;	// IMP=0x00000000001d0c9c
- (void)reportStartupTime:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d0c8a
- (id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000001d0533
- (id)replaceRangeClause:(id)arg1;	// IMP=0x00000000001d03d1
- (id)_numberForXCoordinate:(double)arg1 graphView:(id)arg2;	// IMP=0x00000000001d02c4
- (id)_dateForXCoordinate:(double)arg1 graphView:(id)arg2;	// IMP=0x00000000001d0202
- (id)descriptionForXCoordinate:(double)arg1 graphView:(id)arg2;	// IMP=0x00000000001d006e
- (id)_rangeValueAsNumber:(id)arg1;	// IMP=0x00000000001d0020
- (id)descriptionSpansForGraphView:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000001cfdd6
- (id)descriptionSeriesForGraphView:(id)arg1;	// IMP=0x00000000001cfdc1
- (_Bool)_date:(id)arg1 closeToDate:(id)arg2 epsilonDateComponents:(id)arg3 calendar:(id)arg4;	// IMP=0x00000000001cfcf2
- (id)_addNoDataEntries:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000001cf74c
- (id)accessibilityDataForChart;	// IMP=0x00000000001cf353
- (id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 currentCalendarOverride:(id)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000001cf1bd
- (id)initWithStackedDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 currentCalendarOverride:(id)arg9 options:(unsigned long long)arg10 timeScopeRanges:(id)arg11;	// IMP=0x00000000001cec60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

