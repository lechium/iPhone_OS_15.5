//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICFullDeviceInfo
{
    NSString *_model;	// 24 = 0x18
    NSString *_modelDisplayName;	// 32 = 0x20
    NSString *_softwareVersion;	// 40 = 0x28
    struct ICDeviceHardwareInfo _hardwareInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c63e9
@property(readonly, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(readonly, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) struct ICDeviceHardwareInfo hardwareInfo; // @synthesize hardwareInfo=_hardwareInfo;
- (_Bool)shouldBeHidden;	// IMP=0x00000000000c62fd
- (unsigned long long)hardwareInfoNameFromString:(id)arg1;	// IMP=0x00000000000c6159
- (struct ICDeviceHardwareInfo)hardwareInfoFromModelId:(id)arg1;	// IMP=0x00000000000c5f25
- (_Bool)upgradedToIOS14EorMacOS11E;	// IMP=0x00000000000c5eb8
- (_Bool)upgradedToIOS13;	// IMP=0x00000000000c5e78
- (_Bool)upgraded;	// IMP=0x00000000000c5dd1
- (_Bool)upgradedToMajor:(int)arg1 minor:(int)arg2;	// IMP=0x00000000000c5c28
- (_Bool)isHardwareInfoUpgradableToMacOS11:(struct ICDeviceHardwareInfo)arg1;	// IMP=0x00000000000c5ba1
- (_Bool)upgradableToIOS14orMacOS11;	// IMP=0x00000000000c5b12
- (_Bool)isHardwareInfoUpgradableToIOS13:(struct ICDeviceHardwareInfo)arg1;	// IMP=0x00000000000c59ee
- (_Bool)upgradableToIOS13;	// IMP=0x00000000000c59a0
- (_Bool)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo)arg1;	// IMP=0x00000000000c5912
- (_Bool)isIOSDevice;	// IMP=0x00000000000c58de
- (_Bool)isOSXDevice;	// IMP=0x00000000000c58aa
- (_Bool)upgradable;	// IMP=0x00000000000c585c
- (id)loggableDescription;	// IMP=0x00000000000c570c
- (id)description;	// IMP=0x00000000000c5599
- (id)initWithName:(id)arg1 model:(id)arg2 modelDisplayName:(id)arg3 softwareVersion:(id)arg4;	// IMP=0x00000000000c5489
- (id)init;	// IMP=0x00000000000c547b

@end
