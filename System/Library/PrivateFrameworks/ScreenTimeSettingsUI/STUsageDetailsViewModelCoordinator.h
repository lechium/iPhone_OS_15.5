//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeSettingsUI/NSFetchedResultsControllerDelegate-Protocol.h>
#import <ScreenTimeSettingsUI/STUsageDetailsViewModelCoordinator-Protocol.h>

@class NSArray, NSDate, NSFetchedResultsController, NSNumber, NSString, NSTimer, STUsageDetailsViewModel;
@protocol STPersistenceControllerProtocol;

@interface STUsageDetailsViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STUsageDetailsViewModelCoordinator>
{
    _Bool _refreshing;	// 8 = 0x8
    STUsageDetailsViewModel *_viewModel;	// 16 = 0x10
    NSArray *_devices;	// 24 = 0x18
    NSString *_selectedDeviceIdentifier;	// 32 = 0x20
    NSString *_organizationIdentifier;	// 40 = 0x28
    NSNumber *_userDSID;	// 48 = 0x30
    long long _usageContext;	// 56 = 0x38
    id <STPersistenceControllerProtocol> _persistenceController;	// 64 = 0x40
    NSFetchedResultsController *_usageBlocksFetchedResultsController;	// 72 = 0x48
    NSDate *_lastUsageDataRefreshTime;	// 80 = 0x50
    NSTimer *_usageDataRefreshTimer;	// 88 = 0x58
    unsigned long long _usageDataRefreshReferenceCount;	// 96 = 0x60
}

+ (void)setDefaultUsageReportType:(id)arg1 childDSID:(id)arg2;	// IMP=0x00000000000a0cbd
+ (id)defaultUsageReportTypeForChild:(id)arg1;	// IMP=0x00000000000a0bf3
+ (void)setDefaultDeviceIdentifier:(id)arg1 childDSID:(id)arg2;	// IMP=0x00000000000a0a36
+ (id)defaultDeviceIdentifierForChild:(id)arg1;	// IMP=0x00000000000a096c
+ (void)setDefaultUsageReportTypeForLocalUser:(id)arg1;	// IMP=0x00000000000a08ef
+ (id)defaultUsageReportTypeForLocalUser;	// IMP=0x00000000000a0891
+ (void)setDefaultDeviceIdentifierForLocalUser:(id)arg1;	// IMP=0x00000000000a0814
+ (id)defaultDeviceIdentifierForLocalUser;	// IMP=0x00000000000a07b6
- (void).cxx_destruct;	// IMP=0x00000000000a5697
@property(getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) unsigned long long usageDataRefreshReferenceCount; // @synthesize usageDataRefreshReferenceCount=_usageDataRefreshReferenceCount;
@property(retain, nonatomic) NSTimer *usageDataRefreshTimer; // @synthesize usageDataRefreshTimer=_usageDataRefreshTimer;
@property(retain, nonatomic) NSDate *lastUsageDataRefreshTime; // @synthesize lastUsageDataRefreshTime=_lastUsageDataRefreshTime;
@property(retain, nonatomic) NSFetchedResultsController *usageBlocksFetchedResultsController; // @synthesize usageBlocksFetchedResultsController=_usageBlocksFetchedResultsController;
@property(retain, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly) long long usageContext; // @synthesize usageContext=_usageContext;
@property(copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(copy, nonatomic) NSString *selectedDeviceIdentifier; // @synthesize selectedDeviceIdentifier=_selectedDeviceIdentifier;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) STUsageDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_updateWeekAndDayReportsWithUsageItems:(id)arg1 weekStartDate:(id)arg2 lastUpdatedDate:(id)arg3 referenceDate:(id)arg4 selectedItemDisplayName:(id)arg5 isSelectedWeek:(_Bool)arg6 selectedDay:(unsigned long long)arg7 weekUsageReports:(id)arg8 dayUsageReports:(id)arg9 dayUsageReportByWeekdays:(id)arg10 firstPickupByWeekdayByWeek:(id)arg11;	// IMP=0x00000000000a4e84
- (void)_loadAllHistoricalUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 selectedDay:(unsigned long long)arg3 selectedWeek:(unsigned long long)arg4 hadUsageData:(_Bool)arg5 referenceDate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000a4325
- (void)_loadLastWeekUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a3f50
- (void)_loadTodayUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a3b7d
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a2a45
- (id)_usageItemsWithUsageBlocks:(id)arg1 lastUpdatedDate:(id *)arg2 firstPickupByWeekdayByWeek:(id)arg3 referenceDate:(id)arg4 usageContext:(long long)arg5;	// IMP=0x00000000000a128d
- (id)_usageBlocksWithUser:(id)arg1 device:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a0fd5
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000000000a0e7a
- (void)_refreshUsageDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a01f6
- (void)refreshUsageData;	// IMP=0x00000000000a01e2
- (void)_refreshUsageDataAndReschedule;	// IMP=0x000000000009fec5
- (void)scheduleRefreshUsageData;	// IMP=0x000000000009fda0
- (void)stopRefreshingUsageData;	// IMP=0x000000000009fcf5
- (void)startRefreshingUsageData;	// IMP=0x000000000009fc8f
- (void)dealloc;	// IMP=0x000000000009fbb5
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 devices:(id)arg4 selectedDeviceIdentifier:(id)arg5 selectedUsageReportType:(id)arg6 usageContext:(long long)arg7;	// IMP=0x000000000009f760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

