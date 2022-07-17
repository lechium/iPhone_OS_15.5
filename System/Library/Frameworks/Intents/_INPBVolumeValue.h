//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBVolumeValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBVolumeValue : PBCodable <_INPBVolumeValue, NSSecureCoding, NSCopying>
{
    CDStruct_74078a21 _has;	// 8 = 0x8
    int _unit;	// 12 = 0xc
    double _magnitude;	// 16 = 0x10
    _INPBValueMetadata *_valueMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000407124
- (void).cxx_destruct;	// IMP=0x0000000000406e63
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
- (id)dictionaryRepresentation;	// IMP=0x0000000000406afc
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040672d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000406659
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004065c7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004064c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000004063e7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004063da
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsUnit:(id)arg1;	// IMP=0x0000000000405fc4
- (id)unitAsString:(int)arg1;	// IMP=0x0000000000405dd8
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) _Bool hasMagnitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
