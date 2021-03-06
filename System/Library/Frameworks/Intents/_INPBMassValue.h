//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMassValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBMassValue : PBCodable <_INPBMassValue, NSSecureCoding, NSCopying>
{
    CDStruct_74078a21 _has;	// 8 = 0x8
    int _unit;	// 12 = 0xc
    double _magnitude;	// 16 = 0x10
    _INPBValueMetadata *_valueMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000405328
- (void).cxx_destruct;	// IMP=0x0000000000405067
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
- (id)dictionaryRepresentation;	// IMP=0x0000000000404dc2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004049f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040491f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000040488d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000040478e
- (void)writeTo:(id)arg1;	// IMP=0x00000000004046ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004046a0
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsUnit:(id)arg1;	// IMP=0x000000000040441c
- (id)unitAsString:(int)arg1;	// IMP=0x00000000004042f0
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) _Bool hasMagnitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

