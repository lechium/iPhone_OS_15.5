//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBContactHandle-Protocol.h>

@class NSString;

@interface _INPBContactHandle : PBCodable <_INPBContactHandle, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int emergencyType:1;
        unsigned int faceTimeType:1;
        unsigned int suggested:1;
        unsigned int type:1;
    } _has;	// 8 = 0x8
    _Bool _suggested;	// 12 = 0xc
    int _emergencyType;	// 16 = 0x10
    int _faceTimeType;	// 20 = 0x14
    int _type;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f8d34
- (void).cxx_destruct;	// IMP=0x00000000000f8906
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool suggested; // @synthesize suggested=_suggested;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int faceTimeType; // @synthesize faceTimeType=_faceTimeType;
@property(nonatomic) int emergencyType; // @synthesize emergencyType=_emergencyType;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f852b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f7fd4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f7e61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f7dcf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f7cd0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f7b71
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f7b64
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000f7a50
- (id)typeAsString:(int)arg1;	// IMP=0x00000000000f79c6
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasSuggested;
@property(readonly, nonatomic) _Bool hasLabel;
- (int)StringAsFaceTimeType:(id)arg1;	// IMP=0x00000000000f7840
- (id)faceTimeTypeAsString:(int)arg1;	// IMP=0x00000000000f77da
@property(nonatomic) _Bool hasFaceTimeType;
- (int)StringAsEmergencyType:(id)arg1;	// IMP=0x00000000000f76ea
- (id)emergencyTypeAsString:(int)arg1;	// IMP=0x00000000000f7684
@property(nonatomic) _Bool hasEmergencyType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
