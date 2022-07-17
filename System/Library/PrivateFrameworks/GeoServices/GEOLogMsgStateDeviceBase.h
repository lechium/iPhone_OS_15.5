//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying>
{
    int _deviceBatteryState;	// 8 = 0x8
    int _deviceInterfaceOrientation;	// 12 = 0xc
    _Bool _deviceInVehicle;	// 16 = 0x10
    struct {
        unsigned int has_deviceBatteryState:1;
        unsigned int has_deviceInterfaceOrientation:1;
        unsigned int has_deviceInVehicle:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014c4f58
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014c52c5
- (unsigned long long)hash;	// IMP=0x00000000014c5246
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014c5128
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014c5092
- (void)copyTo:(id)arg1;	// IMP=0x00000000014c5005
- (void)writeTo:(id)arg1;	// IMP=0x00000000014c4f74
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014c4f65
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014c4ef8
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014c4ee6
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014c4b6f
- (id)jsonRepresentation;	// IMP=0x00000000014c4b60
- (id)dictionaryRepresentation;	// IMP=0x00000000014c48fd
- (id)description;	// IMP=0x00000000014c484e
@property(nonatomic) _Bool hasDeviceInVehicle;
@property(nonatomic) _Bool deviceInVehicle;
- (int)StringAsDeviceBatteryState:(id)arg1;	// IMP=0x00000000014c4744
- (id)deviceBatteryStateAsString:(int)arg1;	// IMP=0x00000000014c46c7
@property(nonatomic) _Bool hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;	// IMP=0x00000000014c4598
- (id)deviceInterfaceOrientationAsString:(int)arg1;	// IMP=0x00000000014c450c
@property(nonatomic) _Bool hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation;

@end
