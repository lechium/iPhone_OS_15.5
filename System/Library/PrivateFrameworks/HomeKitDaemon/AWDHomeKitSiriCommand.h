//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitSiriCommand : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _actionType;	// 16 = 0x10
    NSString *_clientMetricIdentifier;	// 24 = 0x18
    unsigned int _currentConfigurationVersion;	// 32 = 0x20
    unsigned int _duration;	// 36 = 0x24
    unsigned int _lastSyncedConfigurationVersion;	// 40 = 0x28
    unsigned int _numEntities;	// 44 = 0x2c
    unsigned int _numFailures;	// 48 = 0x30
    unsigned int _numIncompleteOperations;	// 52 = 0x34
    int _outcome;	// 56 = 0x38
    unsigned int _serverConfigurationVersion;	// 60 = 0x3c
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
        unsigned int currentConfigurationVersion:1;
        unsigned int duration:1;
        unsigned int lastSyncedConfigurationVersion:1;
        unsigned int numEntities:1;
        unsigned int numFailures:1;
        unsigned int numIncompleteOperations:1;
        unsigned int outcome:1;
        unsigned int serverConfigurationVersion:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005eee8c
@property(retain, nonatomic) NSString *clientMetricIdentifier; // @synthesize clientMetricIdentifier=_clientMetricIdentifier;
@property(nonatomic) unsigned int serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property(nonatomic) unsigned int lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property(nonatomic) unsigned int currentConfigurationVersion; // @synthesize currentConfigurationVersion=_currentConfigurationVersion;
@property(nonatomic) unsigned int numIncompleteOperations; // @synthesize numIncompleteOperations=_numIncompleteOperations;
@property(nonatomic) unsigned int numFailures; // @synthesize numFailures=_numFailures;
@property(nonatomic) unsigned int numEntities; // @synthesize numEntities=_numEntities;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000005eec80
- (unsigned long long)hash;	// IMP=0x00000000005eeb32
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005ee8ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005ee75c
- (void)copyTo:(id)arg1;	// IMP=0x00000000005ee5f6
- (void)writeTo:(id)arg1;	// IMP=0x00000000005ee461
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005ee454
- (id)dictionaryRepresentation;	// IMP=0x00000000005edf2d
- (id)description;	// IMP=0x00000000005ede7e
@property(readonly, nonatomic) _Bool hasClientMetricIdentifier;
@property(nonatomic) _Bool hasServerConfigurationVersion;
@property(nonatomic) _Bool hasLastSyncedConfigurationVersion;
@property(nonatomic) _Bool hasCurrentConfigurationVersion;
@property(nonatomic) _Bool hasNumIncompleteOperations;
@property(nonatomic) _Bool hasNumFailures;
@property(nonatomic) _Bool hasNumEntities;
- (int)StringAsOutcome:(id)arg1;	// IMP=0x00000000005edae4
- (id)outcomeAsString:(int)arg1;	// IMP=0x00000000005ed9fb
@property(nonatomic) _Bool hasOutcome;
@property(nonatomic) int outcome; // @synthesize outcome=_outcome;
@property(nonatomic) _Bool hasDuration;
- (int)StringAsActionType:(id)arg1;	// IMP=0x00000000005ed80c
- (id)actionTypeAsString:(int)arg1;	// IMP=0x00000000005ed758
@property(nonatomic) _Bool hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool hasTimestamp;

@end

