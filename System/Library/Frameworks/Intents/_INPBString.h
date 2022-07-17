//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBString-Protocol.h>

@class NSArray, NSString;

@interface _INPBString : PBCodable <_INPBString, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fab96
+ (Class)valueType;	// IMP=0x00000000000fab85
- (void).cxx_destruct;	// IMP=0x00000000000fa9bc
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x00000000000fa78f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fa5f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fa56e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fa4dc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fa3dd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fa2ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fa2a0
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fa283
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x00000000000fa1ec
- (void)clearValues;	// IMP=0x00000000000fa1cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
