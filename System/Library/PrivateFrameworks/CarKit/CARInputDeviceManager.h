//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarKit/CARInputDeviceTouchpadDelegate-Protocol.h>

@class CARSession, NSArray, NSString;

@interface CARInputDeviceManager : NSObject <CARInputDeviceTouchpadDelegate>
{
    NSArray *_inputDevices;	// 8 = 0x8
    CARSession *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002cc39
@property(readonly, nonatomic) __weak CARSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSArray *inputDevices; // @synthesize inputDevices=_inputDevices;
- (id)_initWithInputDevices:(id)arg1 session:(id)arg2;	// IMP=0x000000000002cb80
- (id)_touchpadSettingsFromVehicleInformation:(id)arg1;	// IMP=0x000000000002cae0
- (void)_updateTouchpadSettings:(id)arg1;	// IMP=0x000000000002c9bc
- (id)_inputDeviceWithSenderID:(unsigned long long)arg1;	// IMP=0x000000000002c82f
- (void)_enumerateTouchpadsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c716
- (void)performHapticType:(unsigned long long)arg1 deviceUUID:(id)arg2;	// IMP=0x000000000002c5ed
- (id)touchpadWithSenderID:(unsigned long long)arg1;	// IMP=0x000000000002c58d
- (_Bool)touchpadCharacterRecognitionSupported;	// IMP=0x000000000002c4b0
- (void)vehicleInformationChanged:(id)arg1;	// IMP=0x000000000002c469
@property(readonly, copy) NSString *description;
- (id)_generateInputDevicesWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3;	// IMP=0x000000000002bd2a
- (id)initWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 session:(id)arg4;	// IMP=0x000000000002bc42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

