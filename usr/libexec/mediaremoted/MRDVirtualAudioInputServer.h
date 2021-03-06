//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol MRDVirtualAudioInputServerDelegate, OS_dispatch_queue;

@interface MRDVirtualAudioInputServer : NSObject
{
    NSMutableArray *_recordingEndpointClients;	// 8 = 0x8
    NSMutableArray *_registeredDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    id <MRDVirtualAudioInputServerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000cc109
@property(nonatomic) __weak id <MRDVirtualAudioInputServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleRecordingEndpointAvailabilityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cbfa1
- (void)_handleVoiceDataReceivedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cbe51
- (void)_handleRecordingStateChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cbcb6
- (void)_handleInputDeviceDisconnectedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cb79d
- (void)_handleInputDeviceConnectedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cb3a7
- (void)_handleGetDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cb11f
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00100000000cb04f
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cafca
- (void)clearRecordingEndpointsForClient:(id)arg1;	// IMP=0x00100000000cade2
- (void)clearRegisteredDevicesForClient:(id)arg1;	// IMP=0x00100000000cab8e
- (id)registeredDeviceWithID:(unsigned int)arg1;	// IMP=0x00100000000ca973
@property(readonly, copy, nonatomic) NSArray *registeredDevices;
@property(readonly, copy, nonatomic) NSArray *recordingEndpointClients;
- (id)init;	// IMP=0x00100000000ca6a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

