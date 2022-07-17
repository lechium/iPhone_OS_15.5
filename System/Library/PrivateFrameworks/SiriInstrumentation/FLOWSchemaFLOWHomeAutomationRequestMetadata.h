//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface FLOWSchemaFLOWHomeAutomationRequestMetadata
{
    _Bool _isHomeAutomationRequestAsynchronous;	// 8 = 0x8
    unsigned int _targetedEntityCount;	// 12 = 0xc
    unsigned int _fulfilledEntityCount;	// 16 = 0x10
    NSArray *_targetedEntityTypes;	// 24 = 0x18
    int _smallestTargetedContainer;	// 32 = 0x20
    NSString *_targetAttribute;	// 40 = 0x28
    int _conditionType;	// 48 = 0x30
    _Bool _isRecurring;	// 52 = 0x34
    struct {
        unsigned int isHomeAutomationRequestAsynchronous:1;
        unsigned int targetedEntityCount:1;
        unsigned int fulfilledEntityCount:1;
        unsigned int smallestTargetedContainer:1;
        unsigned int conditionType:1;
        unsigned int isRecurring:1;
    } _has;	// 56 = 0x38
    _Bool _hasTargetAttribute;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x000000000014bf4c
@property(nonatomic) _Bool hasTargetAttribute; // @synthesize hasTargetAttribute=_hasTargetAttribute;
@property(nonatomic) _Bool isRecurring; // @synthesize isRecurring=_isRecurring;
@property(nonatomic) int conditionType; // @synthesize conditionType=_conditionType;
@property(copy, nonatomic) NSString *targetAttribute; // @synthesize targetAttribute=_targetAttribute;
@property(nonatomic) int smallestTargetedContainer; // @synthesize smallestTargetedContainer=_smallestTargetedContainer;
@property(copy, nonatomic) NSArray *targetedEntityTypes; // @synthesize targetedEntityTypes=_targetedEntityTypes;
@property(nonatomic) unsigned int fulfilledEntityCount; // @synthesize fulfilledEntityCount=_fulfilledEntityCount;
@property(nonatomic) unsigned int targetedEntityCount; // @synthesize targetedEntityCount=_targetedEntityCount;
@property(nonatomic) _Bool isHomeAutomationRequestAsynchronous; // @synthesize isHomeAutomationRequestAsynchronous=_isHomeAutomationRequestAsynchronous;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014b912
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000014b854
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000014b417
- (unsigned long long)hash;	// IMP=0x000000000014b2db
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014aeb7
- (void)writeTo:(id)arg1;	// IMP=0x000000000014ac68
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014ac5b
- (void)deleteIsRecurring;	// IMP=0x000000000014ac31
@property(nonatomic) _Bool hasIsRecurring;
- (void)deleteConditionType;	// IMP=0x000000000014abbc
@property(nonatomic) _Bool hasConditionType;
- (void)deleteTargetAttribute;	// IMP=0x000000000014ab5d
- (void)deleteSmallestTargetedContainer;	// IMP=0x000000000014ab1e
@property(nonatomic) _Bool hasSmallestTargetedContainer;
- (id)targetedEntityTypesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014aab6
- (unsigned long long)targetedEntityTypesCount;	// IMP=0x000000000014aa99
- (void)addTargetedEntityTypes:(id)arg1;	// IMP=0x000000000014aa1f
- (void)deleteTargetedEntityTypes;	// IMP=0x000000000014aa0d
- (void)clearTargetedEntityTypes;	// IMP=0x000000000014a9f0
- (void)deleteFulfilledEntityCount;	// IMP=0x000000000014a9c6
@property(nonatomic) _Bool hasFulfilledEntityCount;
- (void)deleteTargetedEntityCount;	// IMP=0x000000000014a951
@property(nonatomic) _Bool hasTargetedEntityCount;
- (void)deleteIsHomeAutomationRequestAsynchronous;	// IMP=0x000000000014a8de
@property(nonatomic) _Bool hasIsHomeAutomationRequestAsynchronous;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000343561

@end
