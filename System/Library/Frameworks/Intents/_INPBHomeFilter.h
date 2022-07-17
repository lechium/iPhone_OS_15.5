//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeFilter-Protocol.h>

@class NSArray, NSString, _INPBDataString;

@interface _INPBHomeFilter : PBCodable <_INPBHomeFilter, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int deviceType:1;
        unsigned int entityType:1;
        unsigned int hasAllQuantifier:1;
        unsigned int isExcludeFilter:1;
        unsigned int outerDeviceType:1;
        unsigned int serviceType:1;
        unsigned int subServiceType:1;
    } _has;	// 8 = 0x8
    _Bool _hasAllQuantifier;	// 12 = 0xc
    _Bool _isExcludeFilter;	// 13 = 0xd
    int _deviceType;	// 16 = 0x10
    int _entityType;	// 20 = 0x14
    int _outerDeviceType;	// 24 = 0x18
    int _serviceType;	// 28 = 0x1c
    int _subServiceType;	// 32 = 0x20
    _INPBDataString *_accessory;	// 40 = 0x28
    NSArray *_entityIdentifiers;	// 48 = 0x30
    _INPBDataString *_entityName;	// 56 = 0x38
    _INPBDataString *_group;	// 64 = 0x40
    _INPBDataString *_home;	// 72 = 0x48
    _INPBDataString *_outerDeviceName;	// 80 = 0x50
    _INPBDataString *_room;	// 88 = 0x58
    _INPBDataString *_scene;	// 96 = 0x60
    _INPBDataString *_service;	// 104 = 0x68
    _INPBDataString *_zone;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000018e0c
- (void).cxx_destruct;	// IMP=0x00000000000183fa
@property(retain, nonatomic) _INPBDataString *zone; // @synthesize zone=_zone;
@property(nonatomic) int subServiceType; // @synthesize subServiceType=_subServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) _INPBDataString *service; // @synthesize service=_service;
@property(retain, nonatomic) _INPBDataString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) _INPBDataString *room; // @synthesize room=_room;
@property(nonatomic) int outerDeviceType; // @synthesize outerDeviceType=_outerDeviceType;
@property(retain, nonatomic) _INPBDataString *outerDeviceName; // @synthesize outerDeviceName=_outerDeviceName;
@property(nonatomic) _Bool isExcludeFilter; // @synthesize isExcludeFilter=_isExcludeFilter;
@property(retain, nonatomic) _INPBDataString *home; // @synthesize home=_home;
@property(nonatomic) _Bool hasAllQuantifier; // @synthesize hasAllQuantifier=_hasAllQuantifier;
@property(retain, nonatomic) _INPBDataString *group; // @synthesize group=_group;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBDataString *entityName; // @synthesize entityName=_entityName;
@property(copy, nonatomic) NSArray *entityIdentifiers; // @synthesize entityIdentifiers=_entityIdentifiers;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) _INPBDataString *accessory; // @synthesize accessory=_accessory;
- (id)dictionaryRepresentation;	// IMP=0x000000000001733c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000162eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015f2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015e9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015d9d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000157e2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000157d5
@property(readonly, nonatomic) _Bool hasZone;
- (int)StringAsSubServiceType:(id)arg1;	// IMP=0x00000000000156f8
- (id)subServiceTypeAsString:(int)arg1;	// IMP=0x0000000000015677
@property(nonatomic) _Bool hasSubServiceType;
- (int)StringAsServiceType:(id)arg1;	// IMP=0x00000000000150e0
- (id)serviceTypeAsString:(int)arg1;	// IMP=0x0000000000014e54
@property(nonatomic) _Bool hasServiceType;
@property(readonly, nonatomic) _Bool hasService;
@property(readonly, nonatomic) _Bool hasScene;
@property(readonly, nonatomic) _Bool hasRoom;
- (int)StringAsOuterDeviceType:(id)arg1;	// IMP=0x000000000001477c
- (id)outerDeviceTypeAsString:(int)arg1;	// IMP=0x000000000001447a
@property(nonatomic) _Bool hasOuterDeviceType;
@property(readonly, nonatomic) _Bool hasOuterDeviceName;
@property(nonatomic) _Bool hasIsExcludeFilter;
@property(readonly, nonatomic) _Bool hasHome;
@property(nonatomic) _Bool hasHasAllQuantifier;
@property(readonly, nonatomic) _Bool hasGroup;
- (int)StringAsEntityType:(id)arg1;	// IMP=0x00000000000141f8
- (id)entityTypeAsString:(int)arg1;	// IMP=0x0000000000014151
@property(nonatomic) _Bool hasEntityType;
@property(readonly, nonatomic) _Bool hasEntityName;
- (id)entityIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000140ad
@property(readonly, nonatomic) unsigned long long entityIdentifiersCount;
- (void)addEntityIdentifiers:(id)arg1;	// IMP=0x0000000000014016
- (void)clearEntityIdentifiers;	// IMP=0x0000000000013ff9
- (int)StringAsDeviceType:(id)arg1;	// IMP=0x00000000000139c8
- (id)deviceTypeAsString:(int)arg1;	// IMP=0x00000000000136c8
@property(nonatomic) _Bool hasDeviceType;
@property(readonly, nonatomic) _Bool hasAccessory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
