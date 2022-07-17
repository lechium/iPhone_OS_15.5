//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForTimersIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSearchForTimersIntent : PBCodable <_INPBSearchForTimersIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int duration:1;
        unsigned int state:1;
        unsigned int type:1;
    } _has;	// 8 = 0x8
    int _state;	// 12 = 0xc
    int _type;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    _INPBIntentMetadata *_intentMetadata;	// 32 = 0x20
    _INPBDataString *_label;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000036a660
- (void).cxx_destruct;	// IMP=0x000000000036a294
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) _INPBDataString *label; // @synthesize label=_label;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)dictionaryRepresentation;	// IMP=0x0000000000369f99
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003699c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000036987b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003697e9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003696ea
- (void)writeTo:(id)arg1;	// IMP=0x0000000000369581
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000369574
- (int)StringAsType:(id)arg1;	// IMP=0x00000000003694e2
- (id)typeAsString:(int)arg1;	// IMP=0x000000000036947c
@property(nonatomic) _Bool hasType;
- (int)StringAsState:(id)arg1;	// IMP=0x000000000036938a
- (id)stateAsString:(int)arg1;	// IMP=0x0000000000369324
@property(nonatomic) _Bool hasState;
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(nonatomic) _Bool hasDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
