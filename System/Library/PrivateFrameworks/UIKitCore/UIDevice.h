//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface UIDevice : NSObject
{
    long long _numDeviceOrientationObservers;	// 8 = 0x8
    float _batteryLevel;	// 16 = 0x10
    struct {
        unsigned int batteryMonitoringEnabled:1;
        unsigned int proximityMonitoringEnabled:1;
        unsigned int expectsFaceContactInLandscape:1;
        unsigned int orientation:3;
        unsigned int batteryState:2;
        unsigned int proximityState:1;
        unsigned int hasTouchPadOverride:1;
        unsigned int hasTouchPad:1;
        unsigned int isHardwareKeyboardAvailable:1;
    } _deviceFlags;	// 20 = 0x14
}

+ (id)currentDevice;	// IMP=0x0000000000865018
+ (_Bool)_isWatchCompanion;	// IMP=0x0000000000864bbd
+ (_Bool)_isWatch;	// IMP=0x0000000000864ab0
+ (long long)currentDeviceOrientationAllowingAmbiguous:(_Bool)arg1;	// IMP=0x0000000000864975
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;	// IMP=0x0000000000866033
+ (_Bool)_hasHomeButton;	// IMP=0x00000000008665f5
+ (_Bool)_isLowEnd;	// IMP=0x00000000008665b2
@property(readonly, nonatomic, getter=_isHardwareKeyboardAvailable) _Bool _hardwareKeyboardAvailable;
- (void)_hardwareKeyboardAvailabilityChanged;	// IMP=0x0000000000865fa0
- (void)_playInputDeleteSound;	// IMP=0x0000000000865f89
- (void)_playInputSelectSound;	// IMP=0x0000000000865f72
- (void)_playSystemSound:(unsigned int)arg1;	// IMP=0x0000000000865e3e
- (void)_unregisterForSystemSounds:(id)arg1;	// IMP=0x0000000000865ddb
- (void)_registerForSystemSounds:(id)arg1;	// IMP=0x0000000000865c65
- (_Bool)_isSystemSoundEnabled;	// IMP=0x0000000000865bf2
- (void)_updateSystemSoundActiveStatus:(id)arg1;	// IMP=0x0000000000865987
- (float)_softwareDimmingAlpha;	// IMP=0x0000000000865973
@property(nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
- (void)playInputClick;	// IMP=0x000000000086582d
@property(readonly, nonatomic) long long userInterfaceIdiom;
- (void)_setActiveUserInterfaceIdiom:(long long)arg1;	// IMP=0x00000000008657cb
@property(readonly, nonatomic, getter=isMultitaskingSupported) _Bool multitaskingSupported;
@property(readonly, nonatomic) _Bool proximityState;
- (void)_setExpectsFaceContactInLandscape:(_Bool)arg1;	// IMP=0x00000000008657a9
@property(nonatomic, getter=isProximityMonitoringEnabled) _Bool proximityMonitoringEnabled;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) long long batteryState;
@property(nonatomic, getter=isBatteryMonitoringEnabled) _Bool batteryMonitoringEnabled;
@property(readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) _Bool generatesDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;	// IMP=0x0000000000865715
- (void)beginGeneratingDeviceOrientationNotifications;	// IMP=0x00000000008656c7
@property(readonly, nonatomic) long long orientation;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000865500
@property(readonly, nonatomic) NSUUID *identifierForVendor;
@property(readonly, retain, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic) NSString *localizedModel;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
- (id)_deviceInfoForKey:(struct __CFString *)arg1;	// IMP=0x0000000000865224
- (void)dealloc;	// IMP=0x00000000008651a1
- (id)init;	// IMP=0x000000000086509d
- (id)_tapticEngine;	// IMP=0x00000000006513d0
@property(readonly, nonatomic, getter=_feedbackSupportLevel) long long feedbackSupportLevel;
- (void)_enableDeviceOrientationEvents:(_Bool)arg1;	// IMP=0x00000000008648bd
- (_Bool)_supportsDeepColor;	// IMP=0x000000000086656f
- (_Bool)_supportsForceTouch;	// IMP=0x000000000086652c
- (_Bool)_hasGraphicsQualityOverride;	// IMP=0x000000000086637d
- (void)_clearGraphicsQualityOverride;	// IMP=0x0000000000866365
- (void)_setGraphicsQualityOverride:(long long)arg1;	// IMP=0x0000000000866351
- (long long)_graphicsQuality;	// IMP=0x000000000086632c
- (void)_setHasTouchPad:(_Bool)arg1;	// IMP=0x0000000000866310
- (_Bool)_hasTouchPad;	// IMP=0x00000000008662c9
- (void)_setBatteryLevel:(float)arg1;	// IMP=0x00000000008662c3
- (void)_setBatteryState:(long long)arg1;	// IMP=0x000000000086623a
- (void)_setProximityState:(_Bool)arg1;	// IMP=0x00000000008661b3
@property(readonly, nonatomic) _Bool _supportsPencil;
- (long long)_nativeScreenGamut;	// IMP=0x000000000086670d
- (long long)_predictionGraphicsQuality;	// IMP=0x00000000008666fb
- (long long)_keyboardGraphicsQuality;	// IMP=0x00000000008666e9

@end
