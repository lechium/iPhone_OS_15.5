//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayVoicemailIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBPlayVoicemailIntent : PBCodable <_INPBPlayVoicemailIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_callRecordIdentifier;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000119d6d
- (void).cxx_destruct;	// IMP=0x0000000000119b53
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSString *callRecordIdentifier; // @synthesize callRecordIdentifier=_callRecordIdentifier;
- (id)dictionaryRepresentation;	// IMP=0x0000000000119a14
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011970a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011964b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001195b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001194ba
- (void)writeTo:(id)arg1;	// IMP=0x00000000001193f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001193e5
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasCallRecordIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

