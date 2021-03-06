//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVOutputDevice, NSArray, NSString;

@interface MRAVOutputContext : NSObject
{
    NSArray *_outputDevices;	// 8 = 0x8
    NSArray *_outputDevicesSnapshot;	// 16 = 0x10
    _Bool _postOutputDeviceChangedScheduled;	// 24 = 0x18
    _Bool _postOutputDevicesChangedScheduled;	// 25 = 0x19
    _Bool _postChangedScheduled;	// 26 = 0x1a
}

+ (id)notificationQueue;	// IMP=0x0000000000114564
+ (id)iTunesContext;	// IMP=0x000000000011454b
+ (id)sharedSystemScreenContext;	// IMP=0x0000000000114532
+ (id)sharedSystemAudioContext;	// IMP=0x0000000000114519
+ (id)sharedAudioPresentationContext;	// IMP=0x0000000000114500
- (void).cxx_destruct;	// IMP=0x0000000000116738
- (void)_notifyChangesInOutputDevicesWithAdded:(id)arg1 removed:(id)arg2 updated:(id)arg3 existing:(id)arg4 newDevices:(id)arg5;	// IMP=0x0000000000115372
- (void)_reloadWithOutputDevices:(id)arg1;	// IMP=0x00000000001149fd
- (void)_reloadOutputDevices;	// IMP=0x0000000000114974
- (void)_scheduleOutputContextDidChangeNotification;	// IMP=0x000000000011481b
- (void)_scheduleOutputContextDevicesDidChangeNotification;	// IMP=0x0000000000114700
- (void)_scheduleOutputContextDeviceDidChangeNotification;	// IMP=0x00000000001145e5
- (void)resetPredictedOutputDevice;	// IMP=0x0000000000114477
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000001143d8
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 fadeAudio:(_Bool)arg3 withCallbackQueue:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x000000000011432a
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000114302
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001142e8
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 password:(id)arg3 fadeAudio:(_Bool)arg4 withCallbackQueue:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000011422e
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000114206
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001141e0
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001141c6
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 fadeAudio:(_Bool)arg3 withCallbackQueue:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000000114118
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001140f0
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001140d6
@property(readonly, nonatomic) _Bool supportsMultipleBluetoothOutputDevices;
@property(nonatomic) float volume;
@property(readonly, nonatomic) _Bool supportsVolumeControl;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property(readonly, nonatomic) MRAVOutputDevice *predictedOutputDevice;
@property(readonly, nonatomic) _Bool containsLocalDevice;
- (_Bool)containsOutputDeviceUID:(id)arg1;	// IMP=0x0000000000113bfd
- (_Bool)containsOutputDevice:(id)arg1;	// IMP=0x0000000000113ba7
@property(readonly, nonatomic) NSArray *personalDeviceUIDs;
@property(readonly, nonatomic) NSArray *personalDevices;
@property(readonly, nonatomic) NSArray *outputDeviceUIDs;
@property(readonly, nonatomic) NSArray *outputDevicesSnapshot;
@property(retain, nonatomic) NSArray *outputDevices;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) NSString *contextID;
@property(readonly, nonatomic) NSString *uniqueIdentifier;

@end

