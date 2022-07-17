//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLong-Protocol.h>

@class NSArray, NSString;

@interface _INPBLong : PBCodable <_INPBLong, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029a4b3
+ (Class)valueType;	// IMP=0x000000000029a4a2
- (void).cxx_destruct;	// IMP=0x000000000029a2d9
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x000000000029a0ac
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000299f0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000299e8b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000299df9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000299cfa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000299bca
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000299bbd
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000299ba0
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x0000000000299b09
- (void)clearValues;	// IMP=0x0000000000299aec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
