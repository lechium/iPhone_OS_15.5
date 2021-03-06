//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BCBatteryDeviceObserving-Protocol.h>
#import <SpringBoard/BSInvalidatable-Protocol.h>

@class BCBatteryDeviceController, NSString, STBatteryStatusDomainPublisher;

@interface SBSystemStatusBatteryDataProvider : NSObject <BCBatteryDeviceObserving, BSInvalidatable>
{
    _Bool _shouldExposeNotChargingState;	// 8 = 0x8
    STBatteryStatusDomainPublisher *_batteryDataPublisher;	// 16 = 0x10
    BCBatteryDeviceController *_batteryDeviceController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ff443
@property(nonatomic) _Bool shouldExposeNotChargingState; // @synthesize shouldExposeNotChargingState=_shouldExposeNotChargingState;
@property(readonly, nonatomic) BCBatteryDeviceController *batteryDeviceController; // @synthesize batteryDeviceController=_batteryDeviceController;
@property(readonly, nonatomic) STBatteryStatusDomainPublisher *batteryDataPublisher; // @synthesize batteryDataPublisher=_batteryDataPublisher;
- (_Bool)_isInNotChargingState;	// IMP=0x00000000002ff30c
- (void)_updateShouldExposeNotChargingState;	// IMP=0x00000000002ff2a4
- (void)_noteNotChargingStatusChanged;	// IMP=0x00000000002ff1c5
- (void)_updateData;	// IMP=0x00000000002fef73
- (void)_registerForNotifications;	// IMP=0x00000000002feea6
- (void)connectedDevicesDidChange:(id)arg1;	// IMP=0x00000000002fed53
- (void)invalidate;	// IMP=0x00000000002feced
- (void)dealloc;	// IMP=0x00000000002fecaf
- (id)init;	// IMP=0x00000000002febbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

