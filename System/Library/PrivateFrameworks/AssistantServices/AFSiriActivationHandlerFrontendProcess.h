//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>
#import <AssistantServices/AFSiriActivationHandling-Protocol.h>

@class AFNotifyObserver, AFSiriActivationConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFNotifyObserverDelegate, AFSiriActivationHandling>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFSiriActivationConnection *_connection;	// 16 = 0x10
    AFNotifyObserver *_clientStateObserver;	// 24 = 0x18
    NSMutableDictionary *_clientStateTransitionHandlersByTimestamp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000cf43b
- (void)_waitUntilListeningForContext:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cee9b
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00000000000ced87
- (_Bool)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ce43a
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000000ce2dd
- (id)init;	// IMP=0x00000000000ce2c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

