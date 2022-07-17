//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BRCSyncUpScheduler
{
}

- (void)schedule;	// IMP=0x000000000018c1af
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;	// IMP=0x000000000018c1a9
- (unsigned int)recoverAndReportMissingJobs;	// IMP=0x000000000018bce4
- (void)_scheduleSyncUpJob:(id)arg1;	// IMP=0x000000000018bb57
- (void)setState:(int)arg1 forItem:(id)arg2 zone:(id)arg3;	// IMP=0x000000000018ba5d
- (unsigned long long)postponeSyncUpForItem:(id)arg1 inZone:(id)arg2;	// IMP=0x000000000018b904
- (_Bool)isItemPendingSyncUp:(id)arg1;	// IMP=0x000000000018b828
- (unsigned long long)inFlightDiffsForItem:(id)arg1;	// IMP=0x000000000018b5ff
- (unsigned long long)inFlightDiffsForItem:(id)arg1 zoneRowID:(id)arg2;	// IMP=0x000000000018b4b0
- (_Bool)isItemInSyncUpAndInFlight:(id)arg1 inZone:(id)arg2;	// IMP=0x000000000018b497
- (_Bool)isItemInSyncUpAndInFlight:(id)arg1;	// IMP=0x000000000018b47e
- (unsigned long long)finishSyncUpForItem:(id)arg1 inZone:(id)arg2 success:(_Bool)arg3;	// IMP=0x000000000018afaf
- (void)_clearSyncUpErrorForItem:(id)arg1;	// IMP=0x000000000018af13
- (void)prepareItemForSyncUp:(id)arg1 inFlightDiffs:(unsigned long long)arg2 inZone:(id)arg3;	// IMP=0x000000000018adc4
- (void)deleteSyncUpJobsForItem:(id)arg1;	// IMP=0x000000000018adb2
- (void)createSyncUpJobForItem:(id)arg1 inZone:(id)arg2;	// IMP=0x000000000018ab30
- (id)descriptionForItem:(id)arg1 context:(id)arg2;	// IMP=0x000000000018a985
- (id)initWithAccountSession:(id)arg1;	// IMP=0x000000000018a948

@end
