//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCAssistantEndpointContext, MPCAssistantSendCommand, NSDate, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MPCAssistantCommand : NSObject
{
    MPCAssistantSendCommand *_sendCommand;	// 8 = 0x8
    MPCAssistantEndpointContext *_context;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sendCommandQueue;	// 24 = 0x18
    NSMutableDictionary *_analytics;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_analyticsGroup;	// 48 = 0x30
    NSDate *_startDate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000019c428
- (void)_setAnalyticsError:(id)arg1;	// IMP=0x000000000019c330
- (void)_setAnalyticsKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000019c268
- (void)_findOutputDevicesForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019c12e
- (id)_applyOriginatingDeviceUIDs:(id)arg1;	// IMP=0x000000000019bf38
- (void)sendPlaybackArchiveWithResult:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019b9bf
- (void)sendPlaybackArchiveWithResult:(id)arg1 toDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b9a7
- (void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019b904
- (void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b8ec
- (void)sendPlaybackQueueWithResult:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019b72f
- (void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019b68c
- (void)sendPlaybackQueueWithResult:(id)arg1 toDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b670
- (void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b5d5
- (void)sendCommandWithResult:(unsigned int)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019a96c
- (void)sendCommand:(unsigned int)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019a8c9
- (id)init;	// IMP=0x000000000019a774

@end

