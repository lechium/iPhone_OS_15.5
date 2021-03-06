//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSFetchedResultsControllerDelegate-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSFetchedResultsController, NSNumber, NSSet, NSString;

@interface STUsageReporter : NSObject <NSFetchedResultsControllerDelegate>
{
    _Bool _includeTotalUsageDetailItem;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    NSNumber *_userDSID;	// 24 = 0x18
    NSFetchedResultsController *_fetchedResultsController;	// 32 = 0x20
    NSFetchedResultsController *_installedAppsController;	// 40 = 0x28
    NSSet *_installedBundleIdentifiers;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingNotifications;	// IMP=0x0000000000058c4e
- (void).cxx_destruct;	// IMP=0x000000000005be2f
@property(copy) NSSet *installedBundleIdentifiers; // @synthesize installedBundleIdentifiers=_installedBundleIdentifiers;
@property(retain, nonatomic) NSFetchedResultsController *installedAppsController; // @synthesize installedAppsController=_installedAppsController;
@property(readonly) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(readonly, copy) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(readonly, copy) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property _Bool includeTotalUsageDetailItem; // @synthesize includeTotalUsageDetailItem=_includeTotalUsageDetailItem;
- (void)_updateInstalledBundleIdentifiers;	// IMP=0x000000000005b8c4
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000000005b6d5
- (void)_enumerateUsageBlocksWithUnitGranularity:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b2ac
- (id)notificationRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2;	// IMP=0x000000000005af18
- (id)notificationsPerCalendarUnit:(unsigned long long)arg1;	// IMP=0x000000000005acb0
- (id)_firstPickupFromUsageBlocks:(id)arg1;	// IMP=0x000000000005abd5
- (id)firstPickupOfIntervalWithMostPickups:(unsigned long long *)arg1 perCalendarUnit:(unsigned long long)arg2;	// IMP=0x000000000005aa54
@property(readonly, copy) NSDate *firstPickup;
- (id)pickupRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2;	// IMP=0x000000000005a517
- (id)pickupsPerCalendarUnit:(unsigned long long)arg1;	// IMP=0x000000000005a171
- (id)ratiosForWebDomain:(id)arg1 perCalendarUnit:(unsigned long long)arg2;	// IMP=0x0000000000059ca4
- (id)ratiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2;	// IMP=0x00000000000597d7
- (id)_ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned long long)arg2 useTotalScreenTime:(_Bool)arg3;	// IMP=0x00000000000593e6
- (id)ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned long long)arg2;	// IMP=0x00000000000593ce
- (id)categoryRatiosPerCalendarUnit:(unsigned long long)arg1 numberOfCategories:(unsigned long long)arg2;	// IMP=0x000000000005919b
- (id)screenTimeUsagePerCalendarUnit:(unsigned long long)arg1;	// IMP=0x000000000005903f
@property(readonly, copy) NSArray *pickups;
@property(readonly, copy) NSArray *notifications;
@property(readonly, copy) NSArray *applicationAndWebUsage;
- (id)_categoryUsageWithoutAllUsageItem;	// IMP=0x000000000005899e
@property(readonly, copy) NSArray *categoryUsage;
@property(readonly) long long totalNotifications;
@property(readonly) long long totalPickups;
@property(readonly) double totalScreenTime;
- (_Bool)generateReport:(id *)arg1;	// IMP=0x0000000000058430
- (id)initWithUsage:(id)arg1 dateInterval:(id)arg2;	// IMP=0x00000000000581f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

