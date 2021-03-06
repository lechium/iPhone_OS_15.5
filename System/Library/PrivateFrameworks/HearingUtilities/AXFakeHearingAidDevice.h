//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CBPeripheral, NSArray, NSDate, NSMutableArray, NSString;

@interface AXFakeHearingAidDevice
{
    NSMutableArray *_leftFakePrograms;	// 8 = 0x8
    NSMutableArray *_rightFakePrograms;	// 16 = 0x10
    CDUnknownBlockType _writeBlock;	// 24 = 0x18
    _Bool _isConnecting;	// 32 = 0x20
    _Bool _connected;	// 33 = 0x21
    short _leftMicrophoneVolumeSteps;	// 34 = 0x22
    short _rightMicrophoneVolumeSteps;	// 36 = 0x24
    int _type;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSArray *_manufacturer;	// 56 = 0x38
    NSArray *_model;	// 64 = 0x40
    NSString *_leftUUID;	// 72 = 0x48
    NSString *_rightUUID;	// 80 = 0x50
    double _rightBatteryLevel;	// 88 = 0x58
    double _leftBatteryLevel;	// 96 = 0x60
    NSString *_leftFirmwareVersion;	// 104 = 0x68
    NSString *_rightFirmwareVersion;	// 112 = 0x70
    NSString *_leftHardwareVersion;	// 120 = 0x78
    NSString *_rightHardwareVersion;	// 128 = 0x80
    NSDate *_leftBatteryLowDate;	// 136 = 0x88
    NSDate *_rightBatteryLowDate;	// 144 = 0x90
    CBPeripheral *leftPeripheral;	// 152 = 0x98
    CBPeripheral *rightPeripheral;	// 160 = 0xa0
    unsigned long long _excludedProperties;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000733c6
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) unsigned long long excludedProperties; // @synthesize excludedProperties=_excludedProperties;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) CBPeripheral *rightPeripheral; // @synthesize rightPeripheral;
@property(retain, nonatomic) CBPeripheral *leftPeripheral; // @synthesize leftPeripheral;
@property(nonatomic) short rightMicrophoneVolumeSteps; // @synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps;
@property(nonatomic) short leftMicrophoneVolumeSteps; // @synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps;
@property(retain, nonatomic) NSDate *rightBatteryLowDate; // @synthesize rightBatteryLowDate=_rightBatteryLowDate;
@property(retain, nonatomic) NSDate *leftBatteryLowDate; // @synthesize leftBatteryLowDate=_leftBatteryLowDate;
@property(retain, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion=_rightHardwareVersion;
@property(retain, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion=_leftHardwareVersion;
@property(retain, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion=_rightFirmwareVersion;
@property(retain, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion=_leftFirmwareVersion;
@property(nonatomic) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;
@property(nonatomic) double leftBatteryLevel; // @synthesize leftBatteryLevel=_leftBatteryLevel;
@property(nonatomic) double rightBatteryLevel; // @synthesize rightBatteryLevel=_rightBatteryLevel;
@property(retain, nonatomic) NSString *rightUUID; // @synthesize rightUUID=_rightUUID;
@property(retain, nonatomic) NSString *leftUUID; // @synthesize leftUUID=_leftUUID;
@property(retain, nonatomic) NSArray *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isFakeDevice;	// IMP=0x00000000000730cf
- (void)setNewName:(id)arg1;	// IMP=0x00000000000730bd
- (void)registerWriteBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000073089
- (void)persist;	// IMP=0x0000000000073013
- (_Bool)didLoadRequiredProperties;	// IMP=0x000000000007300b
- (_Bool)didLoadBasicProperties;	// IMP=0x0000000000073003
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;	// IMP=0x0000000000072f84
- (id)valueForProperty:(unsigned long long)arg1;	// IMP=0x0000000000072df2
- (id)persistentRepresentation;	// IMP=0x0000000000072d1e
- (void)writeSignedInt:(BOOL)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;	// IMP=0x0000000000072cb2
- (void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;	// IMP=0x0000000000072afa
- (_Bool)programsListsAreEqual;	// IMP=0x0000000000072809
- (_Bool)showCombinedPrograms;	// IMP=0x0000000000072773
- (_Bool)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;	// IMP=0x000000000007274b
- (_Bool)deviceSupportsProperty:(unsigned long long)arg1;	// IMP=0x0000000000072723
- (unsigned long long)availablePropertiesForPeripheral:(id)arg1;	// IMP=0x00000000000725e2
- (id)rightPrograms;	// IMP=0x00000000000725bb
- (id)leftPrograms;	// IMP=0x0000000000072594
- (void)createPrograms;	// IMP=0x0000000000071a2f
- (_Bool)isPersistent;	// IMP=0x0000000000071a27
- (_Bool)hasConnection;	// IMP=0x0000000000071a15
- (_Bool)isRightConnected;	// IMP=0x0000000000071a03
- (_Bool)isLeftConnected;	// IMP=0x00000000000719f1
- (_Bool)isConnected;	// IMP=0x00000000000719df
- (_Bool)rightAvailable;	// IMP=0x0000000000071966
- (_Bool)leftAvailable;	// IMP=0x00000000000718ed
- (void)disconnect;	// IMP=0x00000000000718d9
- (void)connect;	// IMP=0x0000000000071818
- (id)modelForType;	// IMP=0x00000000000717a5
- (id)manufacturerForType;	// IMP=0x000000000007177d
- (void)dealloc;	// IMP=0x000000000007169f
- (id)initWithDeviceType:(int)arg1;	// IMP=0x00000000000712aa

@end

