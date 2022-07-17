//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSpeedValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBSpeedValue : PBCodable <_INPBSpeedValue, NSSecureCoding, NSCopying>
{
    CDStruct_74078a21 _has;	// 8 = 0x8
    int _unit;	// 12 = 0xc
    double _magnitude;	// 16 = 0x10
    _INPBValueMetadata *_valueMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000408940
- (void).cxx_destruct;	// IMP=0x000000000040867f
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
- (id)dictionaryRepresentation;	// IMP=0x0000000000408476
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004080a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000407fd3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000407f41
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000407e42
- (void)writeTo:(id)arg1;	// IMP=0x0000000000407d61
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000407d54
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsUnit:(id)arg1;	// IMP=0x0000000000407c60
- (id)unitAsString:(int)arg1;	// IMP=0x0000000000407bd4
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) _Bool hasMagnitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
