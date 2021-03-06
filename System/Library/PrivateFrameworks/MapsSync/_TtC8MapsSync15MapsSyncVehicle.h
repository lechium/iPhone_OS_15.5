//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSDate, NSNumber, NSString;

@interface _TtC8MapsSync15MapsSyncVehicle
{
    MISSING_TYPE *_colorHex;	// 0 = 0x0
    MISSING_TYPE *_currentVehicleState;	// 0 = 0x0
    MISSING_TYPE *_dateOfVehicleIngestion;	// 0 = 0x0
    MISSING_TYPE *_displayName;	// 0 = 0x0
    MISSING_TYPE *_headUnitBluetoothIdentifier;	// 0 = 0x0
    MISSING_TYPE *_headUnitMacAddress;	// 0 = 0x0
    MISSING_TYPE *_iapIdentifier;	// 0 = 0x0
    MISSING_TYPE *_lastStateUpdateDate;	// 0 = 0x0
    MISSING_TYPE *_licensePlate;	// 0 = 0x0
    MISSING_TYPE *_lprPowerType;	// 0 = 0x0
    MISSING_TYPE *_lprVehicleType;	// 0 = 0x0
    MISSING_TYPE *_manufacturer;	// 0 = 0x0
    MISSING_TYPE *_model;	// 0 = 0x0
    MISSING_TYPE *_pairedAppIdentifier;	// 0 = 0x0
    MISSING_TYPE *_powerByConnector;	// 0 = 0x0
    MISSING_TYPE *_siriIntentsIdentifier;	// 0 = 0x0
    MISSING_TYPE *_supportedConnectors;	// 0 = 0x0
    MISSING_TYPE *_vehicleIdentifier;	// 0 = 0x0
    MISSING_TYPE *_vehicleType;	// 0 = 0x0
    MISSING_TYPE *_year;	// 0 = 0x0
}

+ (void)fetchForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016480
+ (void)fetch:(long long)arg1:(long long)arg2:(id)arg3 sort:(long long)arg4 ascending:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000163c0
- (void).cxx_destruct;	// IMP=0x0000000000095b90
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000959c0
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000095600
- (Class)managedObjectClass;	// IMP=0x0000000000095580
- (Class)mutableObjectClass;	// IMP=0x0000000000095560
- (void)setPropertiesWithObject:(id)arg1;	// IMP=0x0000000000095500
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000094c30
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSNumber *year;
@property(nonatomic, readonly) NSNumber *vehicleType;
@property(nonatomic, readonly) NSString *vehicleIdentifier;
@property(nonatomic, readonly) NSNumber *supportedConnectors;
@property(nonatomic, readonly) NSString *siriIntentsIdentifier;
@property(nonatomic, readonly) NSData *powerByConnector;
@property(nonatomic, readonly) NSString *pairedAppIdentifier;
@property(nonatomic, readonly) NSString *model;
@property(nonatomic, readonly) NSString *manufacturer;
@property(nonatomic, readonly) NSString *lprVehicleType;
@property(nonatomic, readonly) NSString *lprPowerType;
@property(nonatomic, readonly) NSString *licensePlate;
@property(nonatomic, readonly) NSDate *lastStateUpdateDate;
@property(nonatomic, readonly) NSString *iapIdentifier;
@property(nonatomic, readonly) NSString *headUnitMacAddress;
@property(nonatomic, readonly) NSString *headUnitBluetoothIdentifier;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSDate *dateOfVehicleIngestion;
@property(nonatomic, readonly) NSData *currentVehicleState;
@property(nonatomic, readonly) NSString *colorHex;

@end

