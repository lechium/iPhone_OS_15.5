//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    BSServiceConnection *_connection;	// 16 = 0x10
}

+ (_Bool)currentProcessServicesDefaultShellEndpoint;	// IMP=0x000000000003c31e
+ (id)serviceWithDefaultShellEndpoint;	// IMP=0x000000000003c207
+ (id)serviceWithEndpoint:(id)arg1;	// IMP=0x000000000003c1ba
+ (id)serviceName;	// IMP=0x000000000003c1a1
+ (id)new;	// IMP=0x000000000003bb44
- (void).cxx_destruct;	// IMP=0x000000000003d37e
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003c981
- (id)_remoteTarget;	// IMP=0x000000000003c91a
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c86e
- (_Bool)canOpenApplication:(id)arg1 reason:(long long *)arg2;	// IMP=0x000000000003c6a6
- (void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003c3fd
- (void)dealloc;	// IMP=0x000000000003c15f
- (id)_initWithEndpoint:(id)arg1;	// IMP=0x000000000003bcb6
- (id)init;	// IMP=0x000000000003bb4e

@end

