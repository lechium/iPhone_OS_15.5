//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, RideBookingOutlineController;

__attribute__((visibility("hidden")))
@interface RideBookingAppStoreApplicationsOutlineSection
{
    _Bool _shouldHideAppStoreSuggestionsSection;	// 17 = 0x11
    _Bool _onlyAppStoreSuggestionsSection;	// 18 = 0x12
    _Bool _shouldShowEnableAppsCell;	// 19 = 0x13
    RideBookingOutlineController *_parentDataSource;	// 24 = 0x18
    NSArray *_appStoreSuggestions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001bb450
@property(nonatomic) _Bool shouldShowEnableAppsCell; // @synthesize shouldShowEnableAppsCell=_shouldShowEnableAppsCell;
@property(nonatomic) _Bool onlyAppStoreSuggestionsSection; // @synthesize onlyAppStoreSuggestionsSection=_onlyAppStoreSuggestionsSection;
@property(nonatomic) _Bool shouldHideAppStoreSuggestionsSection; // @synthesize shouldHideAppStoreSuggestionsSection=_shouldHideAppStoreSuggestionsSection;
@property(retain, nonatomic) NSArray *appStoreSuggestions; // @synthesize appStoreSuggestions=_appStoreSuggestions;
@property(nonatomic) __weak RideBookingOutlineController *parentDataSource; // @synthesize parentDataSource=_parentDataSource;
- (void)configureWithRideBookingRideOptionState:(id)arg1;	// IMP=0x00100000001bb0a4
- (void)ridesharingAppLargeIconTableViewCell:(id)arg1 didSelectActionButton:(id)arg2;	// IMP=0x00100000001bad85
- (void)ridesharingEnableAllAppsTableViewCellDidPerformEnableCommand:(id)arg1;	// IMP=0x00100000001bacc7
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x00100000001bac36
- (id)viewForHeaderInSection:(long long)arg1;	// IMP=0x00100000001baaa4
- (void)didSelectItemAtIndexPath:(id)arg1;	// IMP=0x00100000001ba959
- (long long)numberOfSections;	// IMP=0x00100000001ba8e7
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00100000001ba885
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00100000001ba5d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
