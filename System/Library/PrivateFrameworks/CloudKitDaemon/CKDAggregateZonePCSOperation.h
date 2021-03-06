//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDPCSKeySyncCoreAnalytics, CKRecordZone, CKRecordZoneID, NSArray, NSError, NSMutableDictionary;

@interface CKDAggregateZonePCSOperation
{
    _Bool _isHandlingRetryableError;	// 8 = 0x8
    NSArray *_sourceZoneIDs;	// 16 = 0x10
    CKRecordZone *_targetZone;	// 24 = 0x18
    NSMutableDictionary *_zonePCSDataByZoneID;	// 32 = 0x20
    NSError *_currentError;	// 40 = 0x28
    long long _numZoneSaveAttempts;	// 48 = 0x30
    long long _maxZoneSaveAttempts;	// 56 = 0x38
    CKRecordZoneID *_zoneWaitingOnKeyRegistrySync;	// 64 = 0x40
    CKDPCSKeySyncCoreAnalytics *_keySyncAnalytics;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000022e148
@property(retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics; // @synthesize keySyncAnalytics=_keySyncAnalytics;
@property(retain, nonatomic) CKRecordZoneID *zoneWaitingOnKeyRegistrySync; // @synthesize zoneWaitingOnKeyRegistrySync=_zoneWaitingOnKeyRegistrySync;
@property(nonatomic) long long maxZoneSaveAttempts; // @synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts;
@property(nonatomic) long long numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(retain) NSError *currentError; // @synthesize currentError=_currentError;
@property _Bool isHandlingRetryableError; // @synthesize isHandlingRetryableError=_isHandlingRetryableError;
@property(retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID; // @synthesize zonePCSDataByZoneID=_zonePCSDataByZoneID;
@property(retain, nonatomic) CKRecordZone *targetZone; // @synthesize targetZone=_targetZone;
@property(retain, nonatomic) NSArray *sourceZoneIDs; // @synthesize sourceZoneIDs=_sourceZoneIDs;
- (void)_setPermanentFailure;	// IMP=0x000000000022dd83
- (void)_handleZoneSavedWithID:(id)arg1 responseCode:(id)arg2;	// IMP=0x000000000022d0da
- (void)_sendCoreAnalyticsEventForKeySync;	// IMP=0x000000000022cec9
- (void)_sychronizeUserKeyRegistryIfNeeded;	// IMP=0x000000000022c9d8
- (int)operationType;	// IMP=0x000000000022c9cd
- (_Bool)_saveTargetZone;	// IMP=0x000000000022c26d
- (void)_prepareTargetZonePCS;	// IMP=0x000000000022bae3
- (void)_fetchPCSDataForZoneID:(id)arg1;	// IMP=0x000000000022b4f9
- (void)_fetchZonePCS;	// IMP=0x000000000022b254
- (void)main;	// IMP=0x000000000022b240
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x000000000022b1cc
- (_Bool)makeStateTransition;	// IMP=0x000000000022afb8
- (id)relevantZoneIDs;	// IMP=0x000000000022aec5
- (id)activityCreate;	// IMP=0x000000000022ae9c
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000022ad78

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

