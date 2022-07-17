//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, STAllowanceProgressGroupSpecifierProvider, STDatePickerBar, STDevicePickupsUsageGroupSpecifierProvider, STMostUsedGroupSpecifierProvider, STNoUsageDataView, STNotificationsUsageGroupSpecifierProvider, STScreenTimeUsageGroupSpecifierProvider, STSegmentedControlGroupSpecifierProvider, STTestGroupSpecifierProvider;

__attribute__((visibility("hidden")))
@interface STUsageDetailListController
{
    STTestGroupSpecifierProvider *_testProvider;	// 192 = 0xc0
    STSegmentedControlGroupSpecifierProvider *_segmentedControlProvider;	// 200 = 0xc8
    STScreenTimeUsageGroupSpecifierProvider *_screenTimeProvider;	// 208 = 0xd0
    STAllowanceProgressGroupSpecifierProvider *_allowancesProvider;	// 216 = 0xd8
    STMostUsedGroupSpecifierProvider *_mostUsedProvider;	// 224 = 0xe0
    STNotificationsUsageGroupSpecifierProvider *_notificationsProvider;	// 232 = 0xe8
    STDevicePickupsUsageGroupSpecifierProvider *_pickupsProvider;	// 240 = 0xf0
    STNoUsageDataView *_noUsageDataView;	// 248 = 0xf8
    STDatePickerBar *_datePickerBar;	// 256 = 0x100
    NSLayoutConstraint *_datePickerTopConstraint;	// 264 = 0x108
    NSLayoutConstraint *_datePickerBottomConstraint;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000000009e535
@property(retain) NSLayoutConstraint *datePickerBottomConstraint; // @synthesize datePickerBottomConstraint=_datePickerBottomConstraint;
@property(retain) NSLayoutConstraint *datePickerTopConstraint; // @synthesize datePickerTopConstraint=_datePickerTopConstraint;
@property(retain) STDatePickerBar *datePickerBar; // @synthesize datePickerBar=_datePickerBar;
@property(retain) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(retain) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider; // @synthesize pickupsProvider=_pickupsProvider;
@property(retain) STNotificationsUsageGroupSpecifierProvider *notificationsProvider; // @synthesize notificationsProvider=_notificationsProvider;
@property(retain) STMostUsedGroupSpecifierProvider *mostUsedProvider; // @synthesize mostUsedProvider=_mostUsedProvider;
@property(retain) STAllowanceProgressGroupSpecifierProvider *allowancesProvider; // @synthesize allowancesProvider=_allowancesProvider;
@property(retain) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider; // @synthesize screenTimeProvider=_screenTimeProvider;
@property(retain) STSegmentedControlGroupSpecifierProvider *segmentedControlProvider; // @synthesize segmentedControlProvider=_segmentedControlProvider;
@property(retain) STTestGroupSpecifierProvider *testProvider; // @synthesize testProvider=_testProvider;
- (void)_reportCoreAnalyticsEventWithUser:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3;	// IMP=0x000000000009e1a2
@property(getter=isDatePickerHidden) _Bool datePickerHidden;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000009dd5b
- (void)_rightDatePickerBarButtonTapped:(id)arg1;	// IMP=0x000000000009dbc4
- (void)_leftDatePickerBarButtonTapped:(id)arg1;	// IMP=0x000000000009da51
- (void)_setSelectedDeviceIdentifier:(id)arg1;	// IMP=0x000000000009d909
- (id)_getUIActionForDevice:(id)arg1 deviceIndentifier:(id)arg2 weakSelf:(id)arg3;	// IMP=0x000000000009d751
- (id)_getDevicesDropDownMenu;	// IMP=0x000000000009d268
- (void)_setSelectedUsageReportType:(unsigned long long)arg1;	// IMP=0x000000000009d133
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000009c765
- (void)_devicesDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000009c53a
- (void)_hasUsageDataDidChange:(_Bool)arg1;	// IMP=0x000000000009bff9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009bbbe
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000009b937
- (void)viewDidLayoutSubviews;	// IMP=0x000000000009b7b5
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000009b71a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000009b612
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009b4f4
- (void)viewDidLoad;	// IMP=0x000000000009aeb8
- (void)dealloc;	// IMP=0x000000000009adec

@end
