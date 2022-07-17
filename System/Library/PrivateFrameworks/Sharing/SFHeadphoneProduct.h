//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFHeadphoneProduct : NSObject
{
    _Bool _supportsMobileAsset;	// 8 = 0x8
    _Bool _supportsRepair;	// 9 = 0x9
    _Bool _supportsSiri;	// 10 = 0xa
    _Bool _supportsSpatialAudio;	// 11 = 0xb
    _Bool _supportsOptimizedBatteryCharging;	// 12 = 0xc
    _Bool _supportsWirelessSplitterInEar;	// 13 = 0xd
    _Bool _showsStatus;	// 14 = 0xe
    _Bool _showsStatusOutOfCase;	// 15 = 0xf
    _Bool _hasAddressInAdvertisement;	// 16 = 0x10
    _Bool _hasW1Chip;	// 17 = 0x11
    _Bool _hasLid;	// 18 = 0x12
    _Bool _hasSplitBattery;	// 19 = 0x13
    _Bool _usesProductCaseName;	// 20 = 0x14
    _Bool _hasSplitCaseColors;	// 21 = 0x15
    _Bool _isAirPods;	// 22 = 0x16
    unsigned int _productID;	// 24 = 0x18
    unsigned long long _model;	// 32 = 0x20
    NSString *_bluetoothModel;	// 40 = 0x28
    unsigned long long _buttonLocation;	// 48 = 0x30
}

+ (id)b494;	// IMP=0x00000000000976cd
+ (id)b688;	// IMP=0x0000000000097553
+ (id)b507;	// IMP=0x00000000000973f4
+ (id)powerBeatsPro;	// IMP=0x0000000000097292
+ (id)powerBeats4;	// IMP=0x0000000000097196
+ (id)powerBeats3;	// IMP=0x000000000009709a
+ (id)beatsFlex;	// IMP=0x0000000000096f89
+ (id)beatsX;	// IMP=0x0000000000096e8d
+ (id)beatsStudio;	// IMP=0x0000000000096d91
+ (id)beatsSoloPro;	// IMP=0x0000000000096c95
+ (id)beatsSolo;	// IMP=0x0000000000096b84
+ (id)airPodsMax;	// IMP=0x0000000000096a5e
+ (id)airPodsPro;	// IMP=0x00000000000968e4
+ (id)airPodsSecondGeneration;	// IMP=0x000000000009677f
+ (id)airPods;	// IMP=0x0000000000096605
- (void).cxx_destruct;	// IMP=0x0000000000097990
@property(nonatomic) _Bool isAirPods; // @synthesize isAirPods=_isAirPods;
@property(nonatomic) _Bool hasSplitCaseColors; // @synthesize hasSplitCaseColors=_hasSplitCaseColors;
@property(nonatomic) _Bool usesProductCaseName; // @synthesize usesProductCaseName=_usesProductCaseName;
@property(nonatomic) unsigned long long buttonLocation; // @synthesize buttonLocation=_buttonLocation;
@property(nonatomic) _Bool hasSplitBattery; // @synthesize hasSplitBattery=_hasSplitBattery;
@property(nonatomic) _Bool hasLid; // @synthesize hasLid=_hasLid;
@property(nonatomic) _Bool hasW1Chip; // @synthesize hasW1Chip=_hasW1Chip;
@property(nonatomic) _Bool hasAddressInAdvertisement; // @synthesize hasAddressInAdvertisement=_hasAddressInAdvertisement;
@property(nonatomic) _Bool showsStatusOutOfCase; // @synthesize showsStatusOutOfCase=_showsStatusOutOfCase;
@property(nonatomic) _Bool showsStatus; // @synthesize showsStatus=_showsStatus;
@property(nonatomic) _Bool supportsWirelessSplitterInEar; // @synthesize supportsWirelessSplitterInEar=_supportsWirelessSplitterInEar;
@property(nonatomic) _Bool supportsOptimizedBatteryCharging; // @synthesize supportsOptimizedBatteryCharging=_supportsOptimizedBatteryCharging;
@property(nonatomic) _Bool supportsSpatialAudio; // @synthesize supportsSpatialAudio=_supportsSpatialAudio;
@property(nonatomic) _Bool supportsSiri; // @synthesize supportsSiri=_supportsSiri;
@property(nonatomic) _Bool supportsRepair; // @synthesize supportsRepair=_supportsRepair;
@property(nonatomic) _Bool supportsMobileAsset; // @synthesize supportsMobileAsset=_supportsMobileAsset;
@property(copy, nonatomic) NSString *bluetoothModel; // @synthesize bluetoothModel=_bluetoothModel;
@property(nonatomic) unsigned long long model; // @synthesize model=_model;
@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
- (id)initWithProductID:(unsigned int)arg1;	// IMP=0x00000000000964f7
- (id)initWithBluetoothModel:(id)arg1;	// IMP=0x0000000000096334
- (id)initWithModel:(unsigned long long)arg1;	// IMP=0x00000000000962e4
- (id)initWithProductID:(unsigned int)arg1 supportsMobileAsset:(_Bool)arg2;	// IMP=0x00000000000962a3

@end
