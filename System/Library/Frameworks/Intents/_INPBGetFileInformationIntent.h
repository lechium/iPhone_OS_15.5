//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetFileInformationIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBGetFileInformationIntent : PBCodable <_INPBGetFileInformationIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int entityType:1;
        unsigned int propertyName:1;
        unsigned int qualifier:1;
    } _has;	// 8 = 0x8
    int _entityType;	// 12 = 0xc
    int _propertyName;	// 16 = 0x10
    int _qualifier;	// 20 = 0x14
    _INPBString *_entityName;	// 24 = 0x18
    _INPBIntentMetadata *_intentMetadata;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000020ab18
- (void).cxx_destruct;	// IMP=0x000000000020a70e
@property(nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
@property(nonatomic) int propertyName; // @synthesize propertyName=_propertyName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
- (id)dictionaryRepresentation;	// IMP=0x000000000020a2e9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000209e12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000209cd0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000209c3e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000209b3f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002099d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002099cb
- (int)StringAsQualifier:(id)arg1;	// IMP=0x0000000000209900
- (id)qualifierAsString:(int)arg1;	// IMP=0x0000000000209874
@property(nonatomic) _Bool hasQualifier;
- (int)StringAsPropertyName:(id)arg1;	// IMP=0x0000000000209658
- (id)propertyNameAsString:(int)arg1;	// IMP=0x000000000020956e
@property(nonatomic) _Bool hasPropertyName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsEntityType:(id)arg1;	// IMP=0x0000000000209438
- (id)entityTypeAsString:(int)arg1;	// IMP=0x00000000002093b9
@property(nonatomic) _Bool hasEntityType;
@property(readonly, nonatomic) _Bool hasEntityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

