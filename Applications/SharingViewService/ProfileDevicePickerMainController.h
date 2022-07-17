//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, SFDeviceDiscovery, SFSystemSession, UIAlertController;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ProfileDevicePickerMainController
{
    UIAlertController *_alertController;	// 24 = 0x18
    SFDeviceDiscovery *_deviceDiscovery;	// 32 = 0x20
    NSMutableDictionary *_devices;	// 40 = 0x28
    _Bool _dismissed;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_installTimeoutTimer;	// 56 = 0x38
    unsigned int _pickerFlags;	// 64 = 0x40
    SFSystemSession *_systemSession;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001ab1ca
- (void)_pickerAlertCanceled;	// IMP=0x00100000001ab0f5
- (void)_pickerAlertShowSuccess;	// IMP=0x00100000001aaf19
- (void)_pickerAlertShowError:(id)arg1;	// IMP=0x00100000001aac48
- (void)_pickerAlertShowNoDevices;	// IMP=0x00100000001aaa0b
- (void)_pickerAlertHandlePickedDevice:(id)arg1;	// IMP=0x00100000001aa73b
- (void)_pickerAlertShow;	// IMP=0x00100000001a9fd7
- (void)_discoveryTimeout;	// IMP=0x00100000001a9f44
- (void)_discoveryFoundDevice:(id)arg1;	// IMP=0x00100000001a9d13
- (void)_discoveryStop;	// IMP=0x00100000001a9cdb
- (void)_discoveryStart;	// IMP=0x00100000001a9bb7
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000001a9a13
- (void)dismiss:(int)arg1;	// IMP=0x00100000001a9944
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001a9846
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001a97b2
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a96bc

@end
