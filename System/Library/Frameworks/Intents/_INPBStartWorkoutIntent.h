//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartWorkoutIntent-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata, _INPBWorkoutCustomization;

@interface _INPBStartWorkoutIntent : PBCodable <_INPBStartWorkoutIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isBuiltInWorkoutType:1;
        unsigned int isOpenEnded:1;
        unsigned int isVoiceOnly:1;
        unsigned int sequenceLabel:1;
        unsigned int workoutGoalUnitType:1;
        unsigned int workoutLocationType:1;
    } _has;	// 8 = 0x8
    _Bool _isBuiltInWorkoutType;	// 12 = 0xc
    _Bool _isOpenEnded;	// 13 = 0xd
    _Bool _isVoiceOnly;	// 14 = 0xe
    int _sequenceLabel;	// 16 = 0x10
    int _workoutGoalUnitType;	// 20 = 0x14
    int _workoutLocationType;	// 24 = 0x18
    NSArray *_associatedItems;	// 32 = 0x20
    _INPBWorkoutCustomization *_customization;	// 40 = 0x28
    _INPBDouble *_goalValue;	// 48 = 0x30
    _INPBIntentMetadata *_intentMetadata;	// 56 = 0x38
    _INPBDataString *_workoutName;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002cbcad
+ (Class)associatedItemsType;	// IMP=0x00000000002cbc9c
- (void).cxx_destruct;	// IMP=0x00000000002cb54d
@property(retain, nonatomic) _INPBDataString *workoutName; // @synthesize workoutName=_workoutName;
@property(nonatomic) int workoutLocationType; // @synthesize workoutLocationType=_workoutLocationType;
@property(nonatomic) int workoutGoalUnitType; // @synthesize workoutGoalUnitType=_workoutGoalUnitType;
@property(nonatomic) int sequenceLabel; // @synthesize sequenceLabel=_sequenceLabel;
@property(nonatomic) _Bool isVoiceOnly; // @synthesize isVoiceOnly=_isVoiceOnly;
@property(nonatomic) _Bool isOpenEnded; // @synthesize isOpenEnded=_isOpenEnded;
@property(nonatomic) _Bool isBuiltInWorkoutType; // @synthesize isBuiltInWorkoutType=_isBuiltInWorkoutType;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDouble *goalValue; // @synthesize goalValue=_goalValue;
@property(retain, nonatomic) _INPBWorkoutCustomization *customization; // @synthesize customization=_customization;
@property(copy, nonatomic) NSArray *associatedItems; // @synthesize associatedItems=_associatedItems;
- (id)dictionaryRepresentation;	// IMP=0x00000000002cada6
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ca389
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ca0fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ca068
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002c9f69
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c9ba4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c9b97
@property(readonly, nonatomic) _Bool hasWorkoutName;
- (int)StringAsWorkoutLocationType:(id)arg1;	// IMP=0x00000000002c9b0c
- (id)workoutLocationTypeAsString:(int)arg1;	// IMP=0x00000000002c9ab7
@property(nonatomic) _Bool hasWorkoutLocationType;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;	// IMP=0x00000000002c98e4
- (id)workoutGoalUnitTypeAsString:(int)arg1;	// IMP=0x00000000002c9819
@property(nonatomic) _Bool hasWorkoutGoalUnitType;
- (int)StringAsSequenceLabel:(id)arg1;	// IMP=0x00000000002c9757
- (id)sequenceLabelAsString:(int)arg1;	// IMP=0x00000000002c9702
@property(nonatomic) _Bool hasSequenceLabel;
@property(nonatomic) _Bool hasIsVoiceOnly;
@property(nonatomic) _Bool hasIsOpenEnded;
@property(nonatomic) _Bool hasIsBuiltInWorkoutType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasGoalValue;
@property(readonly, nonatomic) _Bool hasCustomization;
- (id)associatedItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002c9531
@property(readonly, nonatomic) unsigned long long associatedItemsCount;
- (void)addAssociatedItems:(id)arg1;	// IMP=0x00000000002c949a
- (void)clearAssociatedItems;	// IMP=0x00000000002c947d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

