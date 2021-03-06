//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INContactEventTrigger, INSpatialEventTrigger, INSpeakableString, INTemporalEventTrigger, NSDateComponents, NSString;

@interface INTask : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_title;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    INSpatialEventTrigger *_spatialEventTrigger;	// 24 = 0x18
    INTemporalEventTrigger *_temporalEventTrigger;	// 32 = 0x20
    NSDateComponents *_createdDateComponents;	// 40 = 0x28
    NSDateComponents *_modifiedDateComponents;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    long long _taskType;	// 64 = 0x40
    long long _priority;	// 72 = 0x48
    INContactEventTrigger *_contactEventTrigger;	// 80 = 0x50
    long long _taskReference;	// 88 = 0x58
    NSString *_parentIdentifier;	// 96 = 0x60
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000000f719a
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f7192
- (void).cxx_destruct;	// IMP=0x00000000000f7128
@property(readonly, copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, nonatomic) long long taskReference; // @synthesize taskReference=_taskReference;
@property(readonly, copy, nonatomic) INContactEventTrigger *contactEventTrigger; // @synthesize contactEventTrigger=_contactEventTrigger;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents; // @synthesize modifiedDateComponents=_modifiedDateComponents;
@property(readonly, copy, nonatomic) NSDateComponents *createdDateComponents; // @synthesize createdDateComponents=_createdDateComponents;
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) INSpeakableString *title; // @synthesize title=_title;
- (id)_dictionaryRepresentation;	// IMP=0x00000000000f6c53
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000000f6b77
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000000f67c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f6685
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f6369
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f635e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f61b4
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8;	// IMP=0x00000000000f5fc7
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9 contactEventTrigger:(id)arg10 taskReference:(long long)arg11 parentIdentifier:(id)arg12;	// IMP=0x00000000000f5df8
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9;	// IMP=0x00000000000f5c83
- (id)init;	// IMP=0x00000000000f5c54
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000885ce
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 contactEventTrigger:(id)arg9 taskReference:(long long)arg10;	// IMP=0x00000000003cf10b
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00000000003deeff
- (id)_intents_cacheableObjects;	// IMP=0x00000000003dee4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

