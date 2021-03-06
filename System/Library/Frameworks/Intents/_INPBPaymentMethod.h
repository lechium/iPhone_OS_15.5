//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPaymentMethod-Protocol.h>

@class NSArray, NSString;

@interface _INPBPaymentMethod : PBCodable <_INPBPaymentMethod, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000167ecd
+ (Class)valueType;	// IMP=0x0000000000167ebc
- (void).cxx_destruct;	// IMP=0x0000000000167cf3
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x0000000000167ac6
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000167927
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001678a5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000167813
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167714
- (void)writeTo:(id)arg1;	// IMP=0x00000000001675e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001675d7
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001675ba
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x0000000000167523
- (void)clearValues;	// IMP=0x0000000000167506

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

