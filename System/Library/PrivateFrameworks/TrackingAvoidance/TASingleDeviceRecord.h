//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, TASPAdvertisement;

@interface TASingleDeviceRecord : NSObject <NSSecureCoding>
{
    _Bool _hasSurfacedNotification;	// 8 = 0x8
    NSData *_address;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    NSDate *_creationDate;	// 40 = 0x28
    TASPAdvertisement *_latestAdvertisement;	// 48 = 0x30
    NSDate *_earliestObservationDate;	// 56 = 0x38
    unsigned long long _numStagedDetections;	// 64 = 0x40
    NSDate *_firstStagedDetectionDate;	// 72 = 0x48
    NSDate *_latestBeepOnMoveDate;	// 80 = 0x50
    unsigned long long _numSurfacedAlerts;	// 88 = 0x58
    NSDate *_firstSurfacedAlertDate;	// 96 = 0x60
    unsigned long long _playSoundSuccessCount;	// 104 = 0x68
    unsigned long long _playSoundFailureCount;	// 112 = 0x70
    double _keepAliveInterval;	// 120 = 0x78
    NSMutableArray *_stagedDetectionResults;	// 128 = 0x80
    NSMutableSet *_backgroundDetectionTypesInTravelSession;	// 136 = 0x88
    NSMutableDictionary *_backgroundDetectionCount;	// 144 = 0x90
    NSMutableDictionary *_firstBackgroundDetectionDate;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000258c2
- (void).cxx_destruct;	// IMP=0x00000000000260a9
@property(retain, nonatomic) NSMutableDictionary *firstBackgroundDetectionDate; // @synthesize firstBackgroundDetectionDate=_firstBackgroundDetectionDate;
@property(retain, nonatomic) NSMutableDictionary *backgroundDetectionCount; // @synthesize backgroundDetectionCount=_backgroundDetectionCount;
@property(retain, nonatomic) NSMutableSet *backgroundDetectionTypesInTravelSession; // @synthesize backgroundDetectionTypesInTravelSession=_backgroundDetectionTypesInTravelSession;
@property(retain, nonatomic) NSMutableArray *stagedDetectionResults; // @synthesize stagedDetectionResults=_stagedDetectionResults;
@property(nonatomic) double keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(readonly, nonatomic) unsigned long long playSoundFailureCount; // @synthesize playSoundFailureCount=_playSoundFailureCount;
@property(readonly, nonatomic) unsigned long long playSoundSuccessCount; // @synthesize playSoundSuccessCount=_playSoundSuccessCount;
@property(readonly, nonatomic) NSDate *firstSurfacedAlertDate; // @synthesize firstSurfacedAlertDate=_firstSurfacedAlertDate;
@property(readonly, nonatomic) unsigned long long numSurfacedAlerts; // @synthesize numSurfacedAlerts=_numSurfacedAlerts;
@property(readonly, nonatomic) NSDate *latestBeepOnMoveDate; // @synthesize latestBeepOnMoveDate=_latestBeepOnMoveDate;
@property(readonly, nonatomic) NSDate *firstStagedDetectionDate; // @synthesize firstStagedDetectionDate=_firstStagedDetectionDate;
@property(readonly, nonatomic) unsigned long long numStagedDetections; // @synthesize numStagedDetections=_numStagedDetections;
@property(nonatomic) _Bool hasSurfacedNotification; // @synthesize hasSurfacedNotification=_hasSurfacedNotification;
@property(readonly, nonatomic) NSDate *earliestObservationDate; // @synthesize earliestObservationDate=_earliestObservationDate;
@property(readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // @synthesize latestAdvertisement=_latestAdvertisement;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *address; // @synthesize address=_address;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025d8b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000258ca
- (id)description;	// IMP=0x00000000000257d6
- (id)descriptionDictionary;	// IMP=0x000000000002562f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024bc4
@property(readonly, nonatomic) unsigned long long playSoundAttemptCount;
- (void)processPlaySoundSuccess:(id)arg1;	// IMP=0x0000000000024a00
- (id)firstDetectionDateForDetectionType:(unsigned long long)arg1;	// IMP=0x0000000000024996
- (unsigned long long)backgroundDetectionCountForDetectionType:(unsigned long long)arg1;	// IMP=0x00000000000248a8
- (void)processBackgroundDetection:(id)arg1;	// IMP=0x0000000000024372
- (void)processSurfacedAlert:(id)arg1;	// IMP=0x0000000000024152
- (unsigned long long)getDeviceType;	// IMP=0x000000000002413c
- (void)updateSingleDeviceRecordOnSessionChangeWithCurrentDate:(id)arg1;	// IMP=0x0000000000024089
@property(readonly, nonatomic) _Bool hasStagedImmediateDetections;
- (void)mergeWithAnotherSingleDeviceRecord:(id)arg1;	// IMP=0x000000000002331e
- (void)updateAdvertisement:(id)arg1;	// IMP=0x0000000000023109
- (void)_updateEarliestObservationDateWithDate:(id)arg1;	// IMP=0x00000000000230b1
- (id)getDetectionsReadyToPush;	// IMP=0x0000000000022e71
- (void)purgeStagedDetectionsWithClock:(id)arg1;	// IMP=0x0000000000022bfc
- (_Bool)_shouldPushStagedDetection:(id)arg1;	// IMP=0x0000000000022b33
@property(readonly, nonatomic) NSDate *keepStagedDetectionAliveUntilDate;
- (void)clearAllStagedDetections;	// IMP=0x00000000000228aa
- (id)getStagedDetections;	// IMP=0x0000000000022889
- (void)stageDetection:(id)arg1;	// IMP=0x000000000002251c
- (id)initWithDeviceAdvertisement:(id)arg1 state:(unsigned long long)arg2 type:(unsigned long long)arg3 date:(id)arg4 keepAliveInterval:(double)arg5;	// IMP=0x0000000000022284

@end

