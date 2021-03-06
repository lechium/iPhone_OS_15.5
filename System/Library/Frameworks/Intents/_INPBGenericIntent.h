//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGenericIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <_INPBGenericIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_domain;	// 8 = 0x8
    _INPBIntentMetadata *_metadata;	// 16 = 0x10
    NSArray *_parameters;	// 24 = 0x18
    NSString *_verb;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bd749
+ (Class)parametersType;	// IMP=0x00000000000bd738
- (void).cxx_destruct;	// IMP=0x00000000000bd452
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)dictionaryRepresentation;	// IMP=0x00000000000bd095
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bcb55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bca2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bc998
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bc899
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bc678
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bc66b
@property(readonly, nonatomic) _Bool hasVerb;
- (id)parametersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bc605
@property(readonly, nonatomic) unsigned long long parametersCount;
- (void)addParameters:(id)arg1;	// IMP=0x00000000000bc56e
- (void)clearParameters;	// IMP=0x00000000000bc551
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

