//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCancelWorkoutIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBCancelWorkoutIntent : PBCodable <_INPBCancelWorkoutIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    _INPBDataString *_workoutName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b0e1d
- (void).cxx_destruct;	// IMP=0x00000000001b0bd1
@property(retain, nonatomic) _INPBDataString *workoutName; // @synthesize workoutName=_workoutName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b0ab3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b07a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b06ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b0658
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b0559
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b0476
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b0469
@property(readonly, nonatomic) _Bool hasWorkoutName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

