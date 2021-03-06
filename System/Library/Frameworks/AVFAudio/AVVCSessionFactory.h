//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVCSessionManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVVCSessionFactory : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableDictionary *_sessionManagerMap;	// 16 = 0x10
    AVVCSessionManager *_primarySessionManager;	// 24 = 0x18
    CDUnknownBlockType _sessionWasCreatedBlock;	// 32 = 0x20
    CDUnknownBlockType _sessionWillBeDestroyedBlock;	// 40 = 0x28
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039e1d
+ (id)sharedInstance;	// IMP=0x0000000000039d9e
@property(copy, nonatomic) CDUnknownBlockType sessionWillBeDestroyedBlock; // @synthesize sessionWillBeDestroyedBlock=_sessionWillBeDestroyedBlock;
@property(copy, nonatomic) CDUnknownBlockType sessionWasCreatedBlock; // @synthesize sessionWasCreatedBlock=_sessionWasCreatedBlock;
@property(retain, nonatomic) AVVCSessionManager *primarySessionManager; // @synthesize primarySessionManager=_primarySessionManager;
@property(retain, nonatomic) NSMutableDictionary *sessionManagerMap; // @synthesize sessionManagerMap=_sessionManagerMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)releasePrimarySessionManager;	// IMP=0x000000000003aed0
- (id)auxSessionManagers;	// IMP=0x000000000003ae2e
- (void)cleanupContext:(id)arg1;	// IMP=0x000000000003addf
- (id)sessionManagerForContext:(id)arg1 clientType:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000003ad28
- (void)sessionManagerForContext:(id)arg1 clientType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003acd1
- (id)sessionForContext:(id)arg1 clientType:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000003ac1a
- (void)sessionForContext:(id)arg1 clientType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003abc3
- (id)sessionForContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003aba9
- (void)sessionForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ab8f
- (void)_wqSessionAndManagerForContext:(id)arg1 clientType:(long long)arg2 session:(id *)arg3 manager:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000003a74f
- (id)_wqCreatePrimarySessionManagerIfNeeded:(id)arg1 clientType:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000003a588
- (void)_wqCreateAuxSessionAndManagerForDeviceUID:(id)arg1 clientType:(long long)arg2 session:(id *)arg3 manager:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000039f39
- (id)init;	// IMP=0x0000000000039ecc
- (void)dealloc;	// IMP=0x0000000000039e66
- (id)autorelease;	// IMP=0x0000000000039e5d
- (oneway void)release;	// IMP=0x0000000000039e57
- (unsigned long long)retainCount;	// IMP=0x0000000000039e4a
- (id)retain;	// IMP=0x0000000000039e41
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039e38

@end

