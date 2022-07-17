//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVOutputDeviceCommunicationChannelImpl-Protocol.h>

@class AVOutputDeviceCommunicationChannel, NSString;

__attribute__((visibility("hidden")))
@interface AVAPSyncOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl>
{
    NSString *_deviceID;	// 8 = 0x8
    struct __CFString *_commChannelUUID;	// 16 = 0x10
    struct OpaqueAPSyncController *_syncController;	// 24 = 0x18
    AVOutputDeviceCommunicationChannel *_parentChannel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000bfbeb
@property __weak AVOutputDeviceCommunicationChannel *parentChannel; // @synthesize parentChannel=_parentChannel;
- (void)close;	// IMP=0x00000000000bfbb3
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bf984
- (void)dealloc;	// IMP=0x00000000000bf92d
- (id)initWithDeviceID:(id)arg1 channelUUID:(struct __CFString *)arg2 syncController:(struct OpaqueAPSyncController *)arg3;	// IMP=0x00000000000bf866

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
