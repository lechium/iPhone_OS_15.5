//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOAddressObject, GEOMapItemClientAttributes, GEOPlace, NSDate, NSDictionary, NSString;

@interface GEOMapItemCoreRoutineEvent
{
    NSDictionary *_addressDictionary;	// 8 = 0x8
    GEOMapItemClientAttributes *_clientAttributes;	// 16 = 0x10
    GEOPlace *_place;	// 24 = 0x18
    NSString *_eventName;	// 32 = 0x20
    NSString *_eventTitle;	// 40 = 0x28
    NSDate *_eventDate;	// 48 = 0x30
    _Bool _eventIsAllDay;	// 56 = 0x38
    CDStruct_2c43369c _coordinate;	// 64 = 0x40
    GEOAddressObject *_addressObject;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000012161e6
- (id)weatherDisplayName;	// IMP=0x0000000001216196
- (id)addressObject;	// IMP=0x0000000001216124
- (id)geoAddress;	// IMP=0x00000000012160e6
- (id)_clientAttributes;	// IMP=0x00000000012160d1
- (id)_place;	// IMP=0x0000000001216003
- (_Bool)_responseStatusIsIncomplete;	// IMP=0x0000000001215ffb
- (_Bool)_hasResolvablePartialInformation;	// IMP=0x0000000001215fe6
- (_Bool)isEventAllDay;	// IMP=0x0000000001215fd6
- (id)eventDate;	// IMP=0x0000000001215fc1
- (id)eventName;	// IMP=0x0000000001215fac
- (id)addressDictionary;	// IMP=0x0000000001215f97
- (CDStruct_c3b9c2ee)coordinate;	// IMP=0x0000000001215f7f
- (id)name;	// IMP=0x0000000001215f6a
- (_Bool)isValid;	// IMP=0x0000000001215f62
- (id)description;	// IMP=0x0000000001215dd1
- (id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(_Bool)arg5 coordinate:(CDStruct_c3b9c2ee)arg6 clientAttributes:(id)arg7;	// IMP=0x0000000001215c4c

@end

