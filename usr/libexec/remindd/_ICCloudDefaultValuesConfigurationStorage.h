//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _ICCloudDefaultValuesConfigurationStorage
{
}

+ (id)sharedConfiguration;	// IMP=0x004000000003f51a
- (unsigned long long)staledFileAttachmentCleanupPerRunDeleteLimit;	// IMP=0x004000000003f875
- (id)staledFileAttachmentCleanupRateReduceFactor;	// IMP=0x001000000003f859
- (double)staledFileAttachmentCleanupBackoffThrottleInterval;	// IMP=0x001000000003f84b
- (double)staledFileAttachmentCleanupDefaultThrottleInterval;	// IMP=0x001000000003f83d
- (double)extraneousAlarmsThrottleInterval;	// IMP=0x001000000003f82f
- (double)extraneousAlarmsBackoffThrottleInterval;	// IMP=0x001000000003f821
- (unsigned long long)extraneousAlarmsDeleteCountThreshold;	// IMP=0x001000000003f816
- (unsigned long long)extraneousAlarmsDeleteCountLimit;	// IMP=0x001000000003f80b
- (id)extraneousAlarmsCleanUpTriggerReductionFactor;	// IMP=0x001000000003f7ea
- (double)cloudConfigurationDownloadThrottleInterval;	// IMP=0x001000000003f7dc
- (double)housekeepingActivityMinimumDelay;	// IMP=0x001000000003f7ce
- (double)tapToRadarThrottlingInterval;	// IMP=0x001000000003f7c0
- (id)manualSortHintLastAccessedUpdatePolicy;	// IMP=0x001000000003f7b3
- (unsigned long long)alarmIDsLimitPerReminder;	// IMP=0x001000000003f7a8
- (double)manualSortHintClientSideExpiration;	// IMP=0x001000000003f79a
- (id)suggestedAttributesHarvestingOverrides;	// IMP=0x001000000003f78d
- (id)suggestedAttributesTrainingOverrides;	// IMP=0x001000000003f780
- (unsigned long long)objectEffectiveVersionValidationFlushBatchSize;	// IMP=0x001000000003f775
- (unsigned long long)cloudSchemaCatchUpSyncMaximumRetryCount;	// IMP=0x001000000003f76a
- (double)cloudSchemaCatchUpSyncInitialRetryInterval;	// IMP=0x001000000003f75c
- (double)mergeLocalObjectsRetryStartOverThrottleInterval;	// IMP=0x001000000003f74e
- (unsigned long long)mergeLocalObjectsMaximumRetryCount;	// IMP=0x001000000003f743
- (double)mergeLocalObjectsInitialRetryInterval;	// IMP=0x001000000003f735
- (double)accountChangedDebouncerInterval;	// IMP=0x001000000003f727
- (double)apsDebouncerWatchMigrationInProgressInterval;	// IMP=0x001000000003f719
- (double)apsDebouncerWatchDefaultInterval;	// IMP=0x001000000003f70b
- (double)apsDebouncerMigrationInProgressInterval;	// IMP=0x001000000003f6fd
- (double)apsDebouncerDefaultInterval;	// IMP=0x001000000003f6ef
- (double)persistedSubscriptionIDsValidityPeriod;	// IMP=0x001000000003f6e1
- (double)launchAndSignificantTimeChangePollThrottleInterval;	// IMP=0x001000000003f6d3
- (double)reachabilityChangeSyncThrottleInterval;	// IMP=0x001000000003f6c5
- (unsigned long long)fetchCacheCountLimit;	// IMP=0x001000000003f6ba
- (unsigned long long)fetchBatchSize;	// IMP=0x001000000003f6af
- (unsigned long long)resultsLimitPerSyncOperation;	// IMP=0x001000000003f6a4
- (unsigned long long)maxSubAttachmentsPerAttachment;	// IMP=0x001000000003f699
- (unsigned long long)maxAttachmentsPerNote;	// IMP=0x001000000003f68e
- (id)maximumAttachmentSizeMB;	// IMP=0x001000000003f670
- (unsigned long long)maxInlineAssetSizeBytes;	// IMP=0x001000000003f665
- (double)pollingInterval;	// IMP=0x001000000003f65c
- (id)throttlingPolicy;	// IMP=0x001000000003f57c
- (id)minimumClientVersion;	// IMP=0x001000000003f56f

@end

