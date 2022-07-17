//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCAdaptiveTriggersServiceClientInterface-Protocol.h>
#import <GameController/GCBatteryServiceClientInterface-Protocol.h>
#import <GameController/GCGameIntentServiceClientInterface-Protocol.h>
#import <GameController/_GCDeviceAdaptiveTriggersComponent-Protocol.h>
#import <GameController/_GCDeviceBatteryComponent-Protocol.h>
#import <GameController/_GCDeviceGameIntentComponent-Protocol.h>
#import <GameController/_GCDeviceGamepadComponent-Protocol.h>
#import <GameController/_GCDeviceHapticCapabilitiesComponent-Protocol.h>
#import <GameController/_GCDeviceLightComponent-Protocol.h>
#import <GameController/_GCDeviceMotionComponent-Protocol.h>
#import <GameController/_GCDevicePlayerIndexIndicatorComponent-Protocol.h>
#import <GameController/_GCExternalAccessory-Protocol.h>
#import <GameController/_GCPhysicalDevice-Protocol.h>

@class GCDeviceBattery, GCDeviceLight, GCHapticCapabilityGraph, NSArray, NSSet, NSString, _GCCControllerHIDServiceInfo;
@protocol GCAdaptiveTriggersServiceServerInterface, GCBatteryServiceServerInterface, GCGameIntentServiceServerInterface, GCLightServiceServerInterface, GCMotionServiceServerInterface, NSObject><NSCopying><NSSecureCoding, _GCDefaultPhysicalDeviceDelegate, _GCDeviceDriverConnection, _GCDeviceManager, _GCGamepadEventSourceDescription, _GCMotionEventSourceDescription;

__attribute__((visibility("hidden")))
@interface _GCDefaultPhysicalDevice : NSObject <_GCDeviceGamepadComponent, _GCDeviceMotionComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceLightComponent, _GCDeviceAdaptiveTriggersComponent, GCAdaptiveTriggersServiceClientInterface, _GCDeviceBatteryComponent, GCBatteryServiceClientInterface, _GCDeviceHapticCapabilitiesComponent, _GCDeviceGameIntentComponent, GCGameIntentServiceClientInterface, _GCExternalAccessory, _GCPhysicalDevice>
{
    id <_GCDeviceDriverConnection> _driverConnection;	// 8 = 0x8
    id _driverConnectionInvalidationRegistration;	// 16 = 0x10
    id <_GCDeviceDriverConnection> _filterConnection;	// 24 = 0x18
    id _filterConnectionInvalidationRegistration;	// 32 = 0x20
    CDUnknownBlockType _lightComponentServiceConnectedHandler;	// 40 = 0x28
    CDUnknownBlockType _adaptiveTriggersComponentServiceConnectedHandler;	// 48 = 0x30
    CDUnknownBlockType _adaptiveTriggersComponentStatusUpdatedHandler;	// 56 = 0x38
    CDUnknownBlockType _motionComponentServiceConnectedHandler;	// 64 = 0x40
    CDUnknownBlockType _batteryComponentServiceConnectedHandler;	// 72 = 0x48
    CDUnknownBlockType _batteryComponentBatteryUpdatedHandler;	// 80 = 0x50
    long long _cachedIntentEvent;	// 88 = 0x58
    CDUnknownBlockType _gameIntentComponentGameIntentTriggeredHandler;	// 96 = 0x60
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 104 = 0x68
    id <_GCDeviceManager> _manager;	// 112 = 0x70
    id <_GCDefaultPhysicalDeviceDelegate> _delegate;	// 120 = 0x78
    id <GCAdaptiveTriggersServiceServerInterface> _adaptiveTriggersServiceServer;	// 128 = 0x80
    id <GCLightServiceServerInterface> _lightServiceServer;	// 136 = 0x88
    id <GCMotionServiceServerInterface> _motionServiceServer;	// 144 = 0x90
    id <GCBatteryServiceServerInterface> _batteryServiceServer;	// 152 = 0x98
    id <GCGameIntentServiceServerInterface> _gameIntentServiceServer;	// 160 = 0xa0
    _GCCControllerHIDServiceInfo *_serviceInfo;	// 168 = 0xa8
}

+ (id)identifierForService:(id)arg1;	// IMP=0x0000000000057a28
- (void).cxx_destruct;	// IMP=0x0000000000057bd1
@property(readonly, nonatomic) _GCCControllerHIDServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(readonly, nonatomic) id <GCGameIntentServiceServerInterface> gameIntentServiceServer; // @synthesize gameIntentServiceServer=_gameIntentServiceServer;
@property(readonly, nonatomic) id <GCBatteryServiceServerInterface> batteryServiceServer; // @synthesize batteryServiceServer=_batteryServiceServer;
@property(readonly, nonatomic) id <GCMotionServiceServerInterface> motionServiceServer; // @synthesize motionServiceServer=_motionServiceServer;
@property(readonly, nonatomic) id <GCLightServiceServerInterface> lightServiceServer; // @synthesize lightServiceServer=_lightServiceServer;
@property(readonly, nonatomic) id <GCAdaptiveTriggersServiceServerInterface> adaptiveTriggersServiceServer; // @synthesize adaptiveTriggersServiceServer=_adaptiveTriggersServiceServer;
@property(nonatomic) __weak id <_GCDefaultPhysicalDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak id <_GCDeviceManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000000579a9
@property(readonly) NSSet *components;
- (id)driverConnection;	// IMP=0x000000000005797f
- (void)setDriverConnection:(id)arg1;	// IMP=0x0000000000056d0b
- (void)setFilterConnection:(id)arg1;	// IMP=0x000000000005697f
@property(readonly, copy) NSString *debugDescription;
- (id)redactedDescription;	// IMP=0x0000000000056831
@property(readonly, copy) NSString *description;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000056607
- (id)init;	// IMP=0x00000000000565dc
- (id)initWithHIDDevice:(id)arg1 manager:(id)arg2;	// IMP=0x0000000000056507
@property(readonly) id <_GCGamepadEventSourceDescription> gamepadEventSource;
- (_Bool)supportsGamepad;	// IMP=0x0000000000057ccd
@property(nonatomic) _Bool sensorsActive;
@property(readonly, nonatomic) id <_GCMotionEventSourceDescription> motionEventSource;
@property(copy, nonatomic) CDUnknownBlockType deviceMotionServiceConnectedHandler;
- (_Bool)supportsMotion;	// IMP=0x0000000000057fd4
@property long long indicatedPlayerIndex;
- (_Bool)supportsPlayerIndicator;	// IMP=0x0000000000058352
@property(retain, nonatomic) GCDeviceLight *light;
@property(copy, nonatomic) CDUnknownBlockType deviceLightServiceConnectedHandler;
- (_Bool)supportsLight;	// IMP=0x0000000000058450
@property(readonly, nonatomic) NSArray *triggerStatuses;
@property(copy, nonatomic) CDUnknownBlockType deviceAdaptiveTriggersComponentStatusUpdatedHandler;
- (void)setAdaptiveTriggersPayload:(id)arg1 forIndex:(int)arg2;	// IMP=0x0000000000058920
@property(copy, nonatomic) CDUnknownBlockType deviceAdaptiveTriggersServiceConnectedHandler;
- (_Bool)supportsAdaptiveTriggers;	// IMP=0x00000000000587ce
- (void)updateAdaptiveTriggerStatusWithLeftMode:(unsigned char)arg1 leftStatus:(unsigned char)arg2 leftArmPosition:(unsigned char)arg3 rightMode:(unsigned char)arg4 rightStatus:(unsigned char)arg5 rightArmPosition:(unsigned char)arg6;	// IMP=0x0000000000058b68
@property(readonly, nonatomic) GCDeviceBattery *battery;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryComponentBatteryUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryServiceConnectedHandler;
- (_Bool)supportsBattery;	// IMP=0x0000000000058daa
- (void)updateBattery:(unsigned char)arg1 isCharging:(_Bool)arg2;	// IMP=0x00000000000590b2
@property(readonly, nonatomic) GCHapticCapabilityGraph *hapticCapabilityGraph;
@property(readonly, nonatomic) NSArray *hapticEngines;
- (_Bool)supportsHapticCapabilities;	// IMP=0x000000000005925d
@property(copy, nonatomic) CDUnknownBlockType deviceGameIntentComponentGameIntentTriggeredHandler;
- (void)setEnableGlobalGameControllerFunctionality:(_Bool)arg1;	// IMP=0x00000000000593b5
- (void)triggerGameIntentWithEvent:(long long)arg1;	// IMP=0x000000000005942c
- (long long)getGlyphSetOverride;	// IMP=0x000000000005962a

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
