//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCCommandDelegate-Protocol.h>
#import <NewsCore/FCNetworkReachabilityObserving-Protocol.h>

@class FCCloudContext, FCKeyValueStore, NSMutableArray, NSString;
@protocol FCCommandQueueDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate>
{
    _Bool _suspended;	// 8 = 0x8
    _Bool _executingCommand;	// 9 = 0x9
    FCCloudContext *_context;	// 16 = 0x10
    NSString *_persistentStorePath;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    FCKeyValueStore *_persistentStore;	// 40 = 0x28
    long long _urgency;	// 48 = 0x30
    id <FCCommandQueueDelegate> _delegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NSMutableArray *_pendingCommands;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_cooldownTimer;	// 80 = 0x50
    NSObject<OS_dispatch_group> *_pendingCommandsGroup;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_executingCommandsGroup;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000169a53
- (void)activityObservingApplicationDidEnterBackground;	// IMP=0x0000000000169864
- (void)networkReachabilityDidChange:(id)arg1;	// IMP=0x00000000001697b5
- (void)command:(id)arg1 didFinishWithStatus:(unsigned long long)arg2;	// IMP=0x0000000000169206
- (void)clear;	// IMP=0x0000000000168908
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000168168
- (void)addCommand:(id)arg1 saveCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000167bfe
- (void)addCommand:(id)arg1;	// IMP=0x00000000001679d9
- (void)resume;	// IMP=0x000000000016755b
- (void)dealloc;	// IMP=0x00000000001674a9
- (id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(long long)arg4 suspended:(_Bool)arg5 delegate:(id)arg6;	// IMP=0x00000000001672ea
- (id)initWithContext:(id)arg1 urgency:(long long)arg2 suspended:(_Bool)arg3 delegate:(id)arg4;	// IMP=0x00000000001672db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

