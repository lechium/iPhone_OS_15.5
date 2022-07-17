//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStringValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBStringValue : PBCodable <_INPBStringValue, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_value;	// 8 = 0x8
    _INPBValueMetadata *_valueMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000139952
- (void).cxx_destruct;	// IMP=0x0000000000139738
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (id)dictionaryRepresentation;	// IMP=0x00000000001395f9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001392ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000139230
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013919e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013909f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000138fd7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000138fca
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
