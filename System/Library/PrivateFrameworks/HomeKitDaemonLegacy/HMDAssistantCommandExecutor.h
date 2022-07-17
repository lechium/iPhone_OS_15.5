//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDAssistantCommand, HMFMessageDispatcher, HMFTimer, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandExecutor : NSObject <HMFTimerDelegate>
{
    HMDAssistantCommand *_initialCommand;	// 8 = 0x8
    HMFMessageDispatcher *_msgDispatcher;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSMutableArray *_actionResults;	// 32 = 0x20
    NSMutableDictionary *_pendingCommands;	// 40 = 0x28
    NSString *_clientValidity;	// 48 = 0x30
    HMFTimer *_executionTimer;	// 56 = 0x38
    CDUnknownBlockType _completionHandler;	// 64 = 0x40
}

+ (id)executorWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x00000000005a4c32
- (void).cxx_destruct;	// IMP=0x00000000005a40d0
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005a3dcd
- (id)_command;	// IMP=0x00000000005a3db4
- (void)performWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005a3118
- (id)initWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x00000000005a3008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
