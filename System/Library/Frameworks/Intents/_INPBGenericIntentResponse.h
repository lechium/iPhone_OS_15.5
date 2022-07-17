//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGenericIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntentResponse : PBCodable <_INPBGenericIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_metadata;	// 8 = 0x8
    NSArray *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033c689
+ (Class)propertiesType;	// IMP=0x000000000033c678
- (void).cxx_destruct;	// IMP=0x000000000033c423
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000033c18c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033be82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033bdc3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033bd31
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033bc32
- (void)writeTo:(id)arg1;	// IMP=0x000000000033baa7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033ba9a
- (id)propertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000033ba7d
@property(readonly, nonatomic) unsigned long long propertiesCount;
- (void)addProperties:(id)arg1;	// IMP=0x000000000033b9e6
- (void)clearProperties;	// IMP=0x000000000033b9c9
@property(readonly, nonatomic) _Bool hasMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
