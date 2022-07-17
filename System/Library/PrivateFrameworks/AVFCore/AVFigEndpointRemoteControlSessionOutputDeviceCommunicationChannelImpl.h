//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVOutputDeviceCommunicationChannelImpl-Protocol.h>

@class AVOutputDeviceCommunicationChannel, NSString;

__attribute__((visibility("hidden")))
@interface AVFigEndpointRemoteControlSessionOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl>
{
    struct OpaqueFigEndpointRemoteControlSession *_remoteControlSession;	// 8 = 0x8
    AVOutputDeviceCommunicationChannel *_parentChannel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002fbb1
@property __weak AVOutputDeviceCommunicationChannel *parentChannel; // @synthesize parentChannel=_parentChannel;
- (void)close;	// IMP=0x000000000002fb3f
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f8df
- (void)_didCloseCommunicationChannel;	// IMP=0x000000000002f7d7
- (void)_didReceiveData:(id)arg1;	// IMP=0x000000000002f69f
- (void)dealloc;	// IMP=0x000000000002f653
- (id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession *)arg1;	// IMP=0x000000000002f42a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
