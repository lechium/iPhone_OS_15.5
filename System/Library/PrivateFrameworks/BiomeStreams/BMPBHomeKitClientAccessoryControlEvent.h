//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class BMPBAccessoryState, BMPBHomeKitClientBase, NSMutableArray, NSString;

@interface BMPBHomeKitClientAccessoryControlEvent : PBCodable <NSCopying>
{
    NSString *_accessoryName;	// 8 = 0x8
    BMPBAccessoryState *_accessoryState;	// 16 = 0x10
    NSString *_accessoryUniqueIdentifier;	// 24 = 0x18
    BMPBHomeKitClientBase *_base;	// 32 = 0x20
    NSString *_characteristicType;	// 40 = 0x28
    NSString *_homeName;	// 48 = 0x30
    NSString *_roomName;	// 56 = 0x38
    NSString *_roomUniqueIdentifier;	// 64 = 0x40
    NSString *_serviceGroupName;	// 72 = 0x48
    NSString *_serviceGroupUniqueIdentifier;	// 80 = 0x50
    NSString *_serviceName;	// 88 = 0x58
    NSString *_serviceType;	// 96 = 0x60
    NSString *_serviceUniqueIdentifier;	// 104 = 0x68
    NSMutableArray *_zoneNames;	// 112 = 0x70
    NSMutableArray *_zoneUniqueIdentifiers;	// 120 = 0x78
}

+ (Class)zoneNamesType;	// IMP=0x000000000004c9cb
+ (Class)zoneUniqueIdentifiersType;	// IMP=0x000000000004c890
- (void).cxx_destruct;	// IMP=0x000000000004e894
@property(retain, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(retain, nonatomic) NSMutableArray *zoneNames; // @synthesize zoneNames=_zoneNames;
@property(retain, nonatomic) NSString *serviceGroupName; // @synthesize serviceGroupName=_serviceGroupName;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(retain, nonatomic) NSString *roomUniqueIdentifier; // @synthesize roomUniqueIdentifier=_roomUniqueIdentifier;
@property(retain, nonatomic) NSMutableArray *zoneUniqueIdentifiers; // @synthesize zoneUniqueIdentifiers=_zoneUniqueIdentifiers;
@property(retain, nonatomic) NSString *serviceGroupUniqueIdentifier; // @synthesize serviceGroupUniqueIdentifier=_serviceGroupUniqueIdentifier;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *serviceUniqueIdentifier; // @synthesize serviceUniqueIdentifier=_serviceUniqueIdentifier;
@property(retain, nonatomic) BMPBAccessoryState *accessoryState; // @synthesize accessoryState=_accessoryState;
@property(retain, nonatomic) NSString *accessoryUniqueIdentifier; // @synthesize accessoryUniqueIdentifier=_accessoryUniqueIdentifier;
@property(retain, nonatomic) BMPBHomeKitClientBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004e249
- (unsigned long long)hash;	// IMP=0x000000000004e094
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004dd2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d824
- (void)copyTo:(id)arg1;	// IMP=0x000000000004d51a
- (void)writeTo:(id)arg1;	// IMP=0x000000000004d185
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004d178
- (id)dictionaryRepresentation;	// IMP=0x000000000004caa0
- (id)description;	// IMP=0x000000000004c9f1
@property(readonly, nonatomic) _Bool hasHomeName;
- (id)zoneNamesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004c9ae
- (unsigned long long)zoneNamesCount;	// IMP=0x000000000004c991
- (void)addZoneNames:(id)arg1;	// IMP=0x000000000004c927
- (void)clearZoneNames;	// IMP=0x000000000004c90a
@property(readonly, nonatomic) _Bool hasServiceGroupName;
@property(readonly, nonatomic) _Bool hasRoomName;
@property(readonly, nonatomic) _Bool hasServiceName;
@property(readonly, nonatomic) _Bool hasAccessoryName;
@property(readonly, nonatomic) _Bool hasRoomUniqueIdentifier;
- (id)zoneUniqueIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004c873
- (unsigned long long)zoneUniqueIdentifiersCount;	// IMP=0x000000000004c856
- (void)addZoneUniqueIdentifiers:(id)arg1;	// IMP=0x000000000004c7ec
- (void)clearZoneUniqueIdentifiers;	// IMP=0x000000000004c7cf
@property(readonly, nonatomic) _Bool hasServiceGroupUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasCharacteristicType;
@property(readonly, nonatomic) _Bool hasServiceType;
@property(readonly, nonatomic) _Bool hasServiceUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasAccessoryState;
@property(readonly, nonatomic) _Bool hasAccessoryUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasBase;

@end
