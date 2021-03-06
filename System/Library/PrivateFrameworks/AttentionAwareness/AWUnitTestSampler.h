//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWUnitTestSampler-Protocol.h>

@protocol NSXPCProxyCreating, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestSampler : NSObject <AWUnitTestSampler>
{
    id <NSXPCProxyCreating> _remoteSamplerProxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedSampler;	// IMP=0x0000000000010dbb
- (void).cxx_destruct;	// IMP=0x0000000000010024
- (void)setPearlErrorState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fff8
- (void)setPearlErrorState:(_Bool)arg1;	// IMP=0x000000000000fe4a
- (void)setSmartCoverCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fe1e
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fdf2
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x000000000000fc44
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fc18
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;	// IMP=0x000000000000fa67
- (void)setSampleState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fa3b
- (void)setSampleState:(_Bool)arg1;	// IMP=0x000000000000f88d
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f861
- (void)setDisplayState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f835
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x000000000000f687
- (void)resetStats;	// IMP=0x000000000000f52d
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f2fc
- (id)invokeSampler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f201
- (id)connect;	// IMP=0x000000000000f1d9
- (id)_connect;	// IMP=0x000000000000f13c
- (id)init;	// IMP=0x000000000000f0e4

@end

