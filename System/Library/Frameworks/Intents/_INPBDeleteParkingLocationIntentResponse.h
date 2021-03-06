//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDeleteParkingLocationIntentResponse-Protocol.h>

@class NSString, _INPBLocation, _INPBString;

@interface _INPBDeleteParkingLocationIntentResponse : PBCodable <_INPBDeleteParkingLocationIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBLocation *_parkingLocation;	// 8 = 0x8
    _INPBString *_parkingNote;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000480bdc
- (void).cxx_destruct;	// IMP=0x0000000000480990
@property(retain, nonatomic) _INPBString *parkingNote; // @synthesize parkingNote=_parkingNote;
@property(retain, nonatomic) _INPBLocation *parkingLocation; // @synthesize parkingLocation=_parkingLocation;
- (id)dictionaryRepresentation;	// IMP=0x0000000000480872
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000480568
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004804a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000480417
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000480318
- (void)writeTo:(id)arg1;	// IMP=0x0000000000480235
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000480228
@property(readonly, nonatomic) _Bool hasParkingNote;
@property(readonly, nonatomic) _Bool hasParkingLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

