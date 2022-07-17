//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INAirline, INAirportGate, INDateComponentsRange, NSString;

@interface INFlight : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INAirline *_airline;	// 8 = 0x8
    NSString *_flightNumber;	// 16 = 0x10
    INDateComponentsRange *_boardingTime;	// 24 = 0x18
    INDateComponentsRange *_flightDuration;	// 32 = 0x20
    INAirportGate *_departureAirportGate;	// 40 = 0x28
    INAirportGate *_arrivalAirportGate;	// 48 = 0x30
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000003d52b3
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003d52ab
- (void).cxx_destruct;	// IMP=0x00000000003d5257
@property(readonly, copy, nonatomic) INAirportGate *arrivalAirportGate; // @synthesize arrivalAirportGate=_arrivalAirportGate;
@property(readonly, copy, nonatomic) INAirportGate *departureAirportGate; // @synthesize departureAirportGate=_departureAirportGate;
@property(readonly, copy, nonatomic) INDateComponentsRange *flightDuration; // @synthesize flightDuration=_flightDuration;
@property(readonly, copy, nonatomic) INDateComponentsRange *boardingTime; // @synthesize boardingTime=_boardingTime;
@property(readonly, copy, nonatomic) NSString *flightNumber; // @synthesize flightNumber=_flightNumber;
@property(readonly, copy, nonatomic) INAirline *airline; // @synthesize airline=_airline;
- (id)_dictionaryRepresentation;	// IMP=0x00000000003d4f99
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000003d4ebd
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000003d4cd0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d4c13
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d4a1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d4a11
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d48db
@property(readonly) unsigned long long hash;
- (id)initWithAirline:(id)arg1 flightNumber:(id)arg2 boardingTime:(id)arg3 flightDuration:(id)arg4 departureAirportGate:(id)arg5 arrivalAirportGate:(id)arg6;	// IMP=0x00000000003d46ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
