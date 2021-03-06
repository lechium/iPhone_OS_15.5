//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBUncompressFileIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBUncompressFileIntent : PBCodable <_INPBUncompressFileIntent, NSSecureCoding, NSCopying>
{
    CDStruct_032f6352 _has;	// 8 = 0x8
    int _entityType;	// 12 = 0xc
    _INPBString *_entityName;	// 16 = 0x10
    _INPBIntentMetadata *_intentMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001471c9
- (void).cxx_destruct;	// IMP=0x0000000000146ee2
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
- (id)dictionaryRepresentation;	// IMP=0x0000000000146ced
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014693e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000146859
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001467c7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001466c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001465b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001465ac
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsEntityType:(id)arg1;	// IMP=0x00000000001464d4
- (id)entityTypeAsString:(int)arg1;	// IMP=0x0000000000146455
@property(nonatomic) _Bool hasEntityType;
@property(readonly, nonatomic) _Bool hasEntityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

