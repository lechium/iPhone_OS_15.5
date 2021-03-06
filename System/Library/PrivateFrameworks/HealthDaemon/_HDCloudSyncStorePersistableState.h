//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class CKServerChangeToken, NSDate, NSDictionary, NSString;

@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying>
{
    _Bool _hasEncounteredGapInCurrentEpoch;	// 8 = 0x8
    int _syncProtocolVersion;	// 12 = 0xc
    NSString *_ownerIdentifier;	// 16 = 0x10
    NSString *_containerIdentifier;	// 24 = 0x18
    CKServerChangeToken *_serverChangeToken;	// 32 = 0x20
    unsigned long long _baselineEpoch;	// 40 = 0x28
    NSDate *_rebaseDeadline;	// 48 = 0x30
    NSDate *_lastSyncDate;	// 56 = 0x38
    NSDictionary *_emptyZoneDateByZoneID;	// 64 = 0x40
    NSDate *_lastCheckDate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000066fd3a
@property(readonly, nonatomic) int syncProtocolVersion; // @synthesize syncProtocolVersion=_syncProtocolVersion;
@property(readonly, nonatomic) _Bool hasEncounteredGapInCurrentEpoch; // @synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch;
@property(readonly, nonatomic) NSDate *lastCheckDate; // @synthesize lastCheckDate=_lastCheckDate;
@property(readonly, nonatomic) NSDictionary *emptyZoneDateByZoneID; // @synthesize emptyZoneDateByZoneID=_emptyZoneDateByZoneID;
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) NSDate *rebaseDeadline; // @synthesize rebaseDeadline=_rebaseDeadline;
@property(readonly, nonatomic) unsigned long long baselineEpoch; // @synthesize baselineEpoch=_baselineEpoch;
@property(readonly, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (id)stateWithSyncProtocolVersion:(int)arg1;	// IMP=0x000000000066fcb2
- (id)stateWithBaselineEpoch:(unsigned long long)arg1;	// IMP=0x000000000066fc8a
- (id)stateWithGapEncountered:(_Bool)arg1;	// IMP=0x000000000066fc64
- (id)stateByRecordingLastCheckDate:(id)arg1;	// IMP=0x000000000066fbf3
- (id)stateWithEmptyZones:(id)arg1;	// IMP=0x000000000066fb82
- (id)stateByRecordingLastSyncDate:(id)arg1;	// IMP=0x000000000066fb11
- (id)stateByRequiringUrgentRebase;	// IMP=0x000000000066fac3
- (id)stateByResettingRebaselineDeadline;	// IMP=0x000000000066fa8d
- (id)stateWithServerChangeToken:(id)arg1;	// IMP=0x000000000066fa4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000066f9d5
- (id)initWithServerChangeToken:(id)arg1 baselineEpoch:(unsigned long long)arg2 rebaseDeadline:(id)arg3 lastSyncDate:(id)arg4 emptyZones:(id)arg5 lastCheckDate:(id)arg6 ownerIdentifier:(id)arg7 containerIdentifier:(id)arg8 syncProtocolVersion:(int)arg9;	// IMP=0x000000000066f850

@end

