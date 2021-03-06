//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AACCore/AELifecycleEventHandling-Protocol.h>

@class AEXPCProxy, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AELifecycleEventHandlingProxy : NSObject <AELifecycleEventHandling>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    AEXPCProxy *_xpcProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)proxyWithEndpoint:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000a54f
- (void).cxx_destruct;	// IMP=0x000000000000ab03
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleEventDidInvalidateWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a8e3
- (void)handleEventDidBeginWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a701

@end

