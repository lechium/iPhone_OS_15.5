//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioFanInfo
{
    unsigned int _fanId;	// 8 = 0x8
    int _currentSpeed;	// 12 = 0xc
    int _targetSpeed;	// 16 = 0x10
    struct {
        unsigned int fanId:1;
        unsigned int currentSpeed:1;
        unsigned int targetSpeed:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) int targetSpeed; // @synthesize targetSpeed=_targetSpeed;
@property(nonatomic) int currentSpeed; // @synthesize currentSpeed=_currentSpeed;
@property(nonatomic) unsigned int fanId; // @synthesize fanId=_fanId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001ca494
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001ca3d6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001ca1e3
- (unsigned long long)hash;	// IMP=0x00000000001ca181
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ca065
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c9fd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c9cb4
- (void)deleteTargetSpeed;	// IMP=0x00000000001c9c8a
@property(nonatomic) _Bool hasTargetSpeed;
- (void)deleteCurrentSpeed;	// IMP=0x00000000001c9c15
@property(nonatomic) _Bool hasCurrentSpeed;
- (void)deleteFanId;	// IMP=0x00000000001c9ba2
@property(nonatomic) _Bool hasFanId;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034aa4c

@end
