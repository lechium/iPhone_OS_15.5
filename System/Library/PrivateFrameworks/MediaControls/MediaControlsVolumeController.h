//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaControls/MPVolumeControllerDelegate-Protocol.h>

@class MPAVEndpointRoute, MPAVOutputDeviceRoute, MPVolumeController, NSHashTable, NSString;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>
{
    _Bool _isSplitRoute;	// 8 = 0x8
    _Bool _supportsHeadTrackedSpatialAudio;	// 9 = 0x9
    _Bool _headTrackedSpatialAudioActive;	// 10 = 0xa
    _Bool _primaryInteractionEnabled;	// 11 = 0xb
    _Bool _secondaryInteractionEnabled;	// 12 = 0xc
    MPAVOutputDeviceRoute *_systemOutputDeviceRoute;	// 16 = 0x10
    MPAVEndpointRoute *_systemRoute;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    MPVolumeController *_systemVolumeController;	// 40 = 0x28
    MPVolumeController *_primaryVolumeController;	// 48 = 0x30
    MPVolumeController *_secondaryVolumeController;	// 56 = 0x38
    MPAVOutputDeviceRoute *_primaryOutputDeviceRoute;	// 64 = 0x40
    MPAVOutputDeviceRoute *_secondaryOutputDeviceRoute;	// 72 = 0x48
}

+ (_Bool)isDefaultPackage:(id)arg1;	// IMP=0x00000000000203d6
- (void).cxx_destruct;	// IMP=0x000000000002013c
@property(nonatomic) _Bool secondaryInteractionEnabled; // @synthesize secondaryInteractionEnabled=_secondaryInteractionEnabled;
@property(nonatomic) _Bool primaryInteractionEnabled; // @synthesize primaryInteractionEnabled=_primaryInteractionEnabled;
@property(retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute; // @synthesize secondaryOutputDeviceRoute=_secondaryOutputDeviceRoute;
@property(retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute; // @synthesize primaryOutputDeviceRoute=_primaryOutputDeviceRoute;
@property(retain, nonatomic) MPVolumeController *secondaryVolumeController; // @synthesize secondaryVolumeController=_secondaryVolumeController;
@property(retain, nonatomic) MPVolumeController *primaryVolumeController; // @synthesize primaryVolumeController=_primaryVolumeController;
@property(retain, nonatomic) MPVolumeController *systemVolumeController; // @synthesize systemVolumeController=_systemVolumeController;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) MPAVEndpointRoute *systemRoute; // @synthesize systemRoute=_systemRoute;
@property(readonly, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute; // @synthesize systemOutputDeviceRoute=_systemOutputDeviceRoute;
@property(readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) _Bool headTrackedSpatialAudioActive; // @synthesize headTrackedSpatialAudioActive=_headTrackedSpatialAudioActive;
@property(readonly, nonatomic) _Bool supportsHeadTrackedSpatialAudio; // @synthesize supportsHeadTrackedSpatialAudio=_supportsHeadTrackedSpatialAudio;
@property(readonly, nonatomic) _Bool isSplitRoute; // @synthesize isSplitRoute=_isSplitRoute;
- (id)outputContextDescription;	// IMP=0x000000000001ffc0
- (id)_volumePackageNameForClusterRoute:(id)arg1 isRTL:(_Bool)arg2;	// IMP=0x000000000001fd79
- (id)_volumePackageNameForRTL:(_Bool)arg1;	// IMP=0x000000000001fd5b
- (id)_packageNameForRoute:(id)arg1 isRTL:(_Bool)arg2 isSlider:(_Bool)arg3;	// IMP=0x000000000001f8e4
- (_Bool)_setupOutputDevicesAndVolumeControllersIfNeeded;	// IMP=0x000000000001f399
- (long long)_routeForVolumeController:(id)arg1;	// IMP=0x000000000001f37a
- (void)_notifyUserInteractionEnabledChanged:(_Bool)arg1 routeType:(long long)arg2;	// IMP=0x000000000001f203
- (void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(_Bool)arg2 effectiveVolume:(float)arg3;	// IMP=0x000000000001f06d
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000000001f008
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000000001efa1
- (void)routeDidChangeNotification;	// IMP=0x000000000001ef42
- (void)setUserInteractionEnabled:(_Bool)arg1 forRouteType:(long long)arg2;	// IMP=0x000000000001ef19
- (_Bool)userInteractionEnabledForRouteType:(long long)arg1;	// IMP=0x000000000001eef9
- (void)setVolume:(float)arg1 forRouteType:(long long)arg2;	// IMP=0x000000000001eed2
- (_Bool)volumeControlAvailableForRouteType:(long long)arg1;	// IMP=0x000000000001eeb1
- (float)volumeForRouteType:(long long)arg1;	// IMP=0x000000000001ee23
- (void)setHeadTrackedSpatialAudioMode:(id)arg1 forRouteType:(long long)arg2;	// IMP=0x000000000001ec66
- (id)headTrackedSpatialAudioModeForRouteType:(long long)arg1;	// IMP=0x000000000001ec19
- (void)logFailedSetBluetoothListeningMode:(id)arg1 forRouteType:(long long)arg2;	// IMP=0x000000000001eac1
- (id)availableBluetoothListeningModeForRouteType:(long long)arg1;	// IMP=0x000000000001ea78
- (id)setCurrentBluetoothListeningModeForRouteType:(long long)arg1 bluetoothListeningMode:(id)arg2;	// IMP=0x000000000001e9fe
- (id)currentBluetoothListeningModeForRouteType:(long long)arg1;	// IMP=0x000000000001e9c7
- (id)glyphStateForVolumeLevel:(double)arg1 packageName:(id)arg2;	// IMP=0x000000000001e907
- (id)packageNameForRouteType:(long long)arg1 isRTL:(_Bool)arg2 isSlider:(_Bool)arg3;	// IMP=0x000000000001e8ae
- (id)routeNameForRouteType:(long long)arg1;	// IMP=0x000000000001e877
- (id)outputeDeviceForRouteType:(long long)arg1;	// IMP=0x000000000001e848
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001e832
- (void)addObserver:(id)arg1;	// IMP=0x000000000001e81c
@property(copy, nonatomic) NSString *volumeAudioCategory;
- (id)init;	// IMP=0x000000000001e6cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
