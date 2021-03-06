//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetRelationshipIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBModifyRelationship;

@interface _INPBSetRelationshipIntent : PBCodable <_INPBSetRelationshipIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_contactIdentifiers;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
    _INPBModifyRelationship *_targetRelationship;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000434daa
+ (Class)contactIdentifiersType;	// IMP=0x0000000000434d99
- (void).cxx_destruct;	// IMP=0x0000000000434ac9
@property(retain, nonatomic) _INPBModifyRelationship *targetRelationship; // @synthesize targetRelationship=_targetRelationship;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
- (id)dictionaryRepresentation;	// IMP=0x00000000004347a8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043434c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000434262
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004341d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004340d1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000433ed5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000433ec8
@property(readonly, nonatomic) _Bool hasTargetRelationship;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000433e59
@property(readonly, nonatomic) unsigned long long contactIdentifiersCount;
- (void)addContactIdentifiers:(id)arg1;	// IMP=0x0000000000433dc2
- (void)clearContactIdentifiers;	// IMP=0x0000000000433da5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

