//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSLock, NSMutableArray, NSMutableSet, NSPointerArray, RTTUtterance;
@protocol OS_dispatch_queue;

@interface RTTUIConversationControllerCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;	// 8 = 0x8
    NSPointerArray *_conversationControllers;	// 16 = 0x10
    NSLock *_realtimeSendLock;	// 24 = 0x18
    NSIndexPath *_inProgressRealTimeIndexPath;	// 32 = 0x20
    RTTUtterance *_inProgressRealTimeUtterance;	// 40 = 0x28
    struct __CTServerConnection *_ctConnection;	// 48 = 0x30
    NSMutableSet *_registeredCalls;	// 56 = 0x38
    _Bool _processingUtteranceBuffer;	// 64 = 0x40
    NSMutableArray *_utteranceBuffer;	// 72 = 0x48
}

+ (id)coordinator;	// IMP=0x000000000000167b
- (void).cxx_destruct;	// IMP=0x0000000000004261
@property(nonatomic) _Bool processingUtteranceBuffer; // @synthesize processingUtteranceBuffer=_processingUtteranceBuffer;
@property(retain, nonatomic) NSMutableArray *utteranceBuffer; // @synthesize utteranceBuffer=_utteranceBuffer;
@property(readonly, nonatomic) RTTUtterance *inProgressRealTimeUtterance; // @synthesize inProgressRealTimeUtterance=_inProgressRealTimeUtterance;
@property(readonly, nonatomic) NSIndexPath *inProgressRealTimeIndexPath; // @synthesize inProgressRealTimeIndexPath=_inProgressRealTimeIndexPath;
- (void)processUtteranceQueue;	// IMP=0x0000000000003955
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 call:(id)arg4;	// IMP=0x000000000000331c
- (_Bool)realtimeTextDidChange:(id)arg1 forUtterance:(id)arg2 lastRowPath:(id)arg3;	// IMP=0x00000000000029dc
- (void)registerForCallUpdates:(id)arg1;	// IMP=0x0000000000001feb
- (id)viewControllerForCallUUID:(id)arg1;	// IMP=0x0000000000001e55
- (void)sendNewUtteranceString:(id)arg1 controller:(id)arg2;	// IMP=0x0000000000001846
- (id)conversationControllers;	// IMP=0x0000000000001830
- (void)addConversationController:(id)arg1;	// IMP=0x000000000000181a
- (id)init;	// IMP=0x000000000000170c

@end
