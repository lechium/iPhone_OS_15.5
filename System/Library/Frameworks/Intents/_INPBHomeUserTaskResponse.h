//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeUserTaskResponse-Protocol.h>

@class NSString, _INPBHomeUserTask;

@interface _INPBHomeUserTaskResponse : PBCodable <_INPBHomeUserTaskResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int taskOutcome:1;
    } _has;	// 8 = 0x8
    int _taskOutcome;	// 12 = 0xc
    _INPBHomeUserTask *_userTask;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003b38e6
- (void).cxx_destruct;	// IMP=0x00000000003b3685
@property(retain, nonatomic) _INPBHomeUserTask *userTask; // @synthesize userTask=_userTask;
@property(nonatomic) int taskOutcome; // @synthesize taskOutcome=_taskOutcome;
- (id)dictionaryRepresentation;	// IMP=0x00000000003b33fe
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b31b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b3112
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003b3080
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b2f81
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b2ece
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b2ec1
@property(readonly, nonatomic) _Bool hasUserTask;
- (int)StringAsTaskOutcome:(id)arg1;	// IMP=0x00000000003b2b8c
- (id)taskOutcomeAsString:(int)arg1;	// IMP=0x00000000003b2a0d
@property(nonatomic) _Bool hasTaskOutcome;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
