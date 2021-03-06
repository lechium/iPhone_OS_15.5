//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface _DKSync2Policy : NSObject
{
    _Bool _syncDisabled;	// 8 = 0x8
    _Bool _pushTriggersSync;	// 9 = 0x9
    _Bool _requireCharging;	// 10 = 0xa
    NSString *_name;	// 16 = 0x10
    NSNumber *_version;	// 24 = 0x18
    unsigned long long _maxSyncPeriodInDays;	// 32 = 0x20
    unsigned long long _maxSyncDownIntervalInDays;	// 40 = 0x28
    unsigned long long _minSyncIntervalInSeconds;	// 48 = 0x30
    unsigned long long _minSyncWindowInSeconds;	// 56 = 0x38
    unsigned long long _minSyncsPerDay;	// 64 = 0x40
    unsigned long long _maxSyncsPerDay;	// 72 = 0x48
    unsigned long long _numChangesTriggeringSync;	// 80 = 0x50
    unsigned long long _singleDeviceSyncIntervalInDays;	// 88 = 0x58
    NSDictionary *_streamNamesToSync;	// 96 = 0x60
    NSArray *_streamNamesWithAdditionsTriggeringSync;	// 104 = 0x68
    NSArray *_streamNamesWithDeletionsTriggeringSync;	// 112 = 0x70
    unsigned long long _syncBatchSizeInEvents;	// 120 = 0x78
    unsigned long long _maxBatchesPerSync;	// 128 = 0x80
    unsigned long long _syncTimeoutInSeconds;	// 136 = 0x88
    unsigned long long _triggeredSyncDelayInSeconds;	// 144 = 0x90
    unsigned long long _policyDownloadIntervalInDays;	// 152 = 0x98
    NSArray *_streamNamesToAlwaysSync;	// 160 = 0xa0
}

+ (id)disabledFeaturesForSyncType:(id)arg1 transports:(long long)arg2;	// IMP=0x00000000000115c0
+ (id)policyFromDictionary:(id)arg1;	// IMP=0x00000000000108eb
+ (void)setOkToDownloadPolicyUpdates:(_Bool)arg1;	// IMP=0x000000000000dad7
+ (_Bool)cloudSyncDisabled;	// IMP=0x000000000000da21
+ (_Bool)rapportSyncDisabled;	// IMP=0x000000000000d96b
+ (id)policyForSyncTransportType:(long long)arg1;	// IMP=0x000000000000d70d
- (void).cxx_destruct;	// IMP=0x0000000000012d4d
@property(retain, nonatomic) NSArray *streamNamesToAlwaysSync; // @synthesize streamNamesToAlwaysSync=_streamNamesToAlwaysSync;
@property(nonatomic) unsigned long long policyDownloadIntervalInDays; // @synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays;
@property(nonatomic) unsigned long long triggeredSyncDelayInSeconds; // @synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds;
@property(nonatomic) unsigned long long syncTimeoutInSeconds; // @synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds;
@property(nonatomic) unsigned long long maxBatchesPerSync; // @synthesize maxBatchesPerSync=_maxBatchesPerSync;
@property(nonatomic) unsigned long long syncBatchSizeInEvents; // @synthesize syncBatchSizeInEvents=_syncBatchSizeInEvents;
@property(retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync; // @synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync;
@property(retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync; // @synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync;
@property(retain, nonatomic) NSDictionary *streamNamesToSync; // @synthesize streamNamesToSync=_streamNamesToSync;
@property(nonatomic) unsigned long long singleDeviceSyncIntervalInDays; // @synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays;
@property(nonatomic) _Bool requireCharging; // @synthesize requireCharging=_requireCharging;
@property(nonatomic) _Bool pushTriggersSync; // @synthesize pushTriggersSync=_pushTriggersSync;
@property(nonatomic) unsigned long long numChangesTriggeringSync; // @synthesize numChangesTriggeringSync=_numChangesTriggeringSync;
@property(nonatomic) unsigned long long maxSyncsPerDay; // @synthesize maxSyncsPerDay=_maxSyncsPerDay;
@property(nonatomic) unsigned long long minSyncsPerDay; // @synthesize minSyncsPerDay=_minSyncsPerDay;
@property(nonatomic) unsigned long long minSyncWindowInSeconds; // @synthesize minSyncWindowInSeconds=_minSyncWindowInSeconds;
@property(nonatomic) unsigned long long minSyncIntervalInSeconds; // @synthesize minSyncIntervalInSeconds=_minSyncIntervalInSeconds;
@property(nonatomic) unsigned long long maxSyncDownIntervalInDays; // @synthesize maxSyncDownIntervalInDays=_maxSyncDownIntervalInDays;
@property(nonatomic) unsigned long long maxSyncPeriodInDays; // @synthesize maxSyncPeriodInDays=_maxSyncPeriodInDays;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(nonatomic) _Bool syncDisabled; // @synthesize syncDisabled=_syncDisabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000012364
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1 urgency:(unsigned long long)arg2;	// IMP=0x0000000000012203
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1;	// IMP=0x00000000000121ef
- (id)queryStartDateWithSyncType:(id)arg1 previousHighWaterMark:(id)arg2;	// IMP=0x0000000000012166
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 previousHighWaterMark:(id)arg4;	// IMP=0x00000000000120dd
- (_Bool)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2;	// IMP=0x0000000000011e94
- (_Bool)highPriorityForSyncDownWithSyncType:(id)arg1;	// IMP=0x0000000000011e21
- (_Bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isCharging:(_Bool)arg4;	// IMP=0x0000000000011a87
- (_Bool)canDeferSyncOperationWithSyncType:(id)arg1;	// IMP=0x0000000000011a36
- (id)streamNamesToSyncWithSyncType:(id)arg1 transportType:(long long)arg2;	// IMP=0x00000000000119d0
- (id)streamNamesToSyncWithDisabledFeatures:(id)arg1;	// IMP=0x0000000000011782

@end

