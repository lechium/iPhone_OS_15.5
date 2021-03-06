//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCDeviceManager-Protocol.h>

@class NSNumber, _GCCControllerHIDServiceInfo;
@protocol GCPhysicalDeviceRegistry, _GCDeviceDriverConnection;

@protocol _GCPhysicalDeviceManager <_GCDeviceManager>
@property __weak id <GCPhysicalDeviceRegistry> deviceRegistry;
- (void)relinquishHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;
- (void)claimHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;
- (NSNumber *)matchHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;

@optional
- (id <_GCDeviceDriverConnection>)driverConnectionForHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;
- (_Bool)acceptFilterConnection:(id <_GCDeviceDriverConnection>)arg1 forHIDDevice:(_GCCControllerHIDServiceInfo *)arg2;
- (_Bool)acceptDriverConnection:(id <_GCDeviceDriverConnection>)arg1 forHIDDevice:(_GCCControllerHIDServiceInfo *)arg2;
@end

