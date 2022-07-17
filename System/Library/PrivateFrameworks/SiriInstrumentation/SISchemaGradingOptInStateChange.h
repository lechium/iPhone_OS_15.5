//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaGradingOptInStateChange
{
    int _prevOptInState;	// 8 = 0x8
    int _newOptInState;	// 12 = 0xc
    int _source;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    NSString *_systemBuild;	// 32 = 0x20
    unsigned long long _epochEventTimestampInSeconds;	// 40 = 0x28
    struct {
        unsigned int prevOptInState:1;
        unsigned int newOptInState:1;
        unsigned int source:1;
        unsigned int epochEventTimestampInSeconds:1;
    } _has;	// 48 = 0x30
    _Bool _hasReason;	// 52 = 0x34
    _Bool _hasSystemBuild;	// 53 = 0x35
}

- (void).cxx_destruct;	// IMP=0x000000000018af6d
@property(nonatomic) _Bool hasSystemBuild; // @synthesize hasSystemBuild=_hasSystemBuild;
@property(nonatomic) _Bool hasReason; // @synthesize hasReason=_hasReason;
@property(nonatomic) unsigned long long epochEventTimestampInSeconds; // @synthesize epochEventTimestampInSeconds=_epochEventTimestampInSeconds;
@property(copy, nonatomic) NSString *systemBuild; // @synthesize systemBuild=_systemBuild;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) int newOptInState; // @synthesize newOptInState=_newOptInState;
@property(nonatomic) int prevOptInState; // @synthesize prevOptInState=_prevOptInState;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000018ab9e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000018aae0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000018a737
- (unsigned long long)hash;	// IMP=0x000000000018a652
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018a2b5
- (void)writeTo:(id)arg1;	// IMP=0x000000000018a182
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018a175
- (void)deleteEpochEventTimestampInSeconds;	// IMP=0x000000000018a14b
@property(nonatomic) _Bool hasEpochEventTimestampInSeconds;
- (void)deleteSystemBuild;	// IMP=0x000000000018a0eb
- (void)deleteReason;	// IMP=0x000000000018a0c2
- (void)deleteSource;	// IMP=0x000000000018a083
@property(nonatomic) _Bool hasSource;
- (void)deleteNewOptInState;	// IMP=0x000000000018a00e
@property(nonatomic) _Bool hasNewOptInState;
- (void)deletePrevOptInState;	// IMP=0x0000000000189f9b
@property(nonatomic) _Bool hasPrevOptInState;
- (id)qualifiedMessageName;	// IMP=0x0000000000189f49
- (int)getAnyEventType;	// IMP=0x0000000000189f3e
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003467b9

@end
