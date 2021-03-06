//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPauseWorkoutIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBPauseWorkoutIntent : PBCodable <_INPBPauseWorkoutIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    _INPBDataString *_workoutName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000026f3a5
- (void).cxx_destruct;	// IMP=0x000000000026f159
@property(retain, nonatomic) _INPBDataString *workoutName; // @synthesize workoutName=_workoutName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000026f03b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026ed31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026ec72
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000026ebe0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026eae1
- (void)writeTo:(id)arg1;	// IMP=0x000000000026e9fe
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026e9f1
@property(readonly, nonatomic) _Bool hasWorkoutName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

