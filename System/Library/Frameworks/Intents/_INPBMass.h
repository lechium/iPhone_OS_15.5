//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMass-Protocol.h>

@class NSArray, NSString;

@interface _INPBMass : PBCodable <_INPBMass, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000405d2b
+ (Class)valueType;	// IMP=0x0000000000405d1a
- (void).cxx_destruct;	// IMP=0x0000000000405b51
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x0000000000405924
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000405785
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000405703
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000405671
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000405572
- (void)writeTo:(id)arg1;	// IMP=0x0000000000405442
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000405435
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000405418
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x0000000000405381
- (void)clearValues;	// IMP=0x0000000000405364

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

