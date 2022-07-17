//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVExternalDeviceInternal, NSArray, NSData, NSDictionary, NSString;
@protocol AVExternalDeviceDelegate;

@interface AVExternalDevice : NSObject
{
    AVExternalDeviceInternal *_externalDevice;	// 8 = 0x8
}

+ (id)sharedLocalDevice;	// IMP=0x000000000012a2cf
+ (id)currentCarPlayExternalDevice;	// IMP=0x000000000012a264
+ (id)currentExternalDevice;	// IMP=0x000000000012a24b
- (struct OpaqueFigEndpoint *)figEndpoint;	// IMP=0x000000000012c8af
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;	// IMP=0x000000000012c7a5
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;	// IMP=0x000000000012c73a
- (void)takeScreenForConnection;	// IMP=0x000000000012c6de
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;	// IMP=0x000000000012c678
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;	// IMP=0x000000000012c62e
- (id)requestTurnByTurnNavigationOwnership;	// IMP=0x000000000012c5f8
- (void)requestViewArea:(long long)arg1 forScreenID:(id)arg2;	// IMP=0x000000000012c592
- (void)requestCarUIForURL:(id)arg1 withUUID:(id)arg2;	// IMP=0x000000000012c52c
- (void)requestCarUIForURL:(id)arg1;	// IMP=0x000000000012c518
- (void)requestCarUI;	// IMP=0x000000000012c502
@property(readonly, nonatomic) NSData *MFiCertificateSerialNumber;
@property(readonly, nonatomic) long long transportType;
@property(readonly, nonatomic) long long navigationAidedDriving;
@property(readonly, nonatomic) long long electronicTollCollection;
@property(readonly, nonatomic) NSArray *supportedFeatures;
@property(readonly, nonatomic) _Bool recognizingSpeech;
@property(readonly, nonatomic) _Bool ownsScreen;
@property(readonly, nonatomic) _Bool ownsTurnByTurnNavigation;
@property(readonly, nonatomic) _Bool limitedUI;
@property(readonly, nonatomic) NSArray *limitedUIElements;
@property(readonly, nonatomic) _Bool rightHandDrive;
@property(readonly, nonatomic) _Bool nightModeSupported;
@property(readonly, nonatomic) _Bool nightMode;
@property(readonly, nonatomic) NSString *modelName;
@property(readonly, nonatomic) _Bool OEMIconVisible;
@property(readonly, nonatomic) NSString *OEMIconLabel;
@property(readonly, nonatomic) NSArray *OEMIcons;
@property(readonly, nonatomic) NSData *OEMIcon;
- (id)externalDeviceHIDWithUUID:(id)arg1;	// IMP=0x000000000012ba3b
@property(readonly, nonatomic) NSArray *externalDeviceHIDs;
@property(readonly, nonatomic) NSDictionary *screenPrimaryInputDevices;
@property(readonly, nonatomic) NSDictionary *screenInputCapabilities;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSDictionary *screenSafeAreas;
@property(readonly, nonatomic) NSDictionary *screenViewAreas;
@property(readonly, nonatomic) NSArray *screenIDs;
- (id)_screenInfo;	// IMP=0x000000000012aa99
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000012aa23
@property(nonatomic) id <AVExternalDeviceDelegate> delegate;
- (void)dealloc;	// IMP=0x000000000012a668
- (id)_weakReference;	// IMP=0x000000000012a65a
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;	// IMP=0x000000000012a381
- (id)init;	// IMP=0x000000000012a2fa

@end
