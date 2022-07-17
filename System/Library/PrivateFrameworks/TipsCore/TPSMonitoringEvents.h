//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface TPSMonitoringEvents
{
    NSDictionary *_initialDisplayEventMap;	// 8 = 0x8
    NSDictionary *_displayEventMap;	// 16 = 0x10
    NSDictionary *_restartTrackingTriggerEventMap;	// 24 = 0x18
    NSDictionary *_restartTrackingDisplayEventMap;	// 32 = 0x20
    NSDictionary *_dismissalEventMap;	// 40 = 0x28
    NSDictionary *_desiredOutcomeEventMap;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000103d9
- (void).cxx_destruct;	// IMP=0x00000000000122fc
@property(copy, nonatomic) NSDictionary *desiredOutcomeEventMap; // @synthesize desiredOutcomeEventMap=_desiredOutcomeEventMap;
@property(copy, nonatomic) NSDictionary *dismissalEventMap; // @synthesize dismissalEventMap=_dismissalEventMap;
@property(copy, nonatomic) NSDictionary *restartTrackingDisplayEventMap; // @synthesize restartTrackingDisplayEventMap=_restartTrackingDisplayEventMap;
@property(copy, nonatomic) NSDictionary *restartTrackingTriggerEventMap; // @synthesize restartTrackingTriggerEventMap=_restartTrackingTriggerEventMap;
@property(copy, nonatomic) NSDictionary *displayEventMap; // @synthesize displayEventMap=_displayEventMap;
@property(copy, nonatomic) NSDictionary *initialDisplayEventMap; // @synthesize initialDisplayEventMap=_initialDisplayEventMap;
- (id)debugDescription;	// IMP=0x0000000000011e81
- (id)clientContextEventsForMap:(id)arg1;	// IMP=0x0000000000011c96
- (id)clientContextKeysForMap:(id)arg1;	// IMP=0x0000000000011a80
- (id)registrableContextualEventsForMap:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000011886
- (id)autoDismissEvents;	// IMP=0x000000000001175b
- (id)registrableContextualEventsForEventOptions:(unsigned long long)arg1 type:(long long)arg2;	// IMP=0x000000000001145b
- (id)clientContextKeysForEventOptions:(unsigned long long)arg1;	// IMP=0x0000000000011175
- (_Bool)hasRegistrableContextualEventsForEventOptions:(unsigned long long)arg1;	// IMP=0x00000000000110d6
- (_Bool)hasClientContextKeysForEventOptions:(unsigned long long)arg1;	// IMP=0x000000000001108e
- (unsigned long long)eventOptionsForEventIdentifier:(id)arg1;	// IMP=0x0000000000010df1
- (id)eventMapFromMonitoringEventsDictionary:(id)arg1;	// IMP=0x0000000000010b52
@property(readonly, nonatomic) _Bool hasEvents; // @dynamic hasEvents;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010954
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001086d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010656
- (id)initWithDictionary:(id)arg1 desiredOutcomeDictionary:(id)arg2;	// IMP=0x00000000000103e1

@end
