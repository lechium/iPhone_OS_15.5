//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSOpenApplicationService, FBSSystemAppProxy;

@interface FBSSystemService : NSObject
{
    FBSSystemAppProxy *_systemAppProxy;	// 8 = 0x8
    FBSOpenApplicationService *_defaultOpenApplicationService;	// 16 = 0x10
}

+ (id)clientCallbackQueue;	// IMP=0x0000000000030f2b
+ (id)sharedService;	// IMP=0x000000000002ff53
- (void).cxx_destruct;	// IMP=0x0000000000030f3c
- (void)setKeyboardFocusApplicationPID:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030f14
- (void)setKeyboardFocusApplicationPID:(int)arg1 deferringToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030e34
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030e1d
- (void)shutdownWithOptions:(id)arg1;	// IMP=0x0000000000030e07
- (void)shutdown;	// IMP=0x0000000000030dad
- (void)reboot;	// IMP=0x0000000000030d41
- (void)dataResetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030b75
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000000030aeb
- (id)badgeValueForBundleID:(id)arg1;	// IMP=0x0000000000030a72
- (id)processHandleForApplication:(id)arg1;	// IMP=0x0000000000030a40
- (void)cleanupClientPort:(unsigned int)arg1;	// IMP=0x0000000000030a3a
- (unsigned int)createClientPort;	// IMP=0x0000000000030a32
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(CDUnknownBlockType)arg5;	// IMP=0x000000000003095d
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(CDUnknownBlockType)arg4;	// IMP=0x000000000003062c
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000030534
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;	// IMP=0x0000000000030511
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000030419
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;	// IMP=0x00000000000303f6
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000003031d
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030290
- (_Bool)canOpenApplication:(id)arg1 reason:(long long *)arg2;	// IMP=0x0000000000030265
- (int)pidForApplication:(id)arg1;	// IMP=0x000000000003017f
- (_Bool)isPasscodeLockedOrBlocked;	// IMP=0x0000000000030169
- (id)systemApplicationBundleIdentifier;	// IMP=0x0000000000030153
- (void)dealloc;	// IMP=0x000000000003006d
- (id)initWithEndpoint:(id)arg1;	// IMP=0x000000000002ffbc
- (id)init;	// IMP=0x000000000002ffa8

@end
