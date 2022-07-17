//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoginKit/LKLoginDaemonProtocol-Protocol.h>

@class NSXPCConnection;

@interface LKLoginController : NSObject <LKLoginDaemonProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x0000000000005d75
- (void).cxx_destruct;	// IMP=0x0000000000007338
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)interruptLocalUserSwitchTest;	// IMP=0x00000000000072bf
- (void)triggerLocalUserSwitchTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000007210
- (void)updateGlobalDefaultsValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007176
- (id)recentUsers;	// IMP=0x0000000000006f7a
- (void)checkInWithCurrentEnvironment:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006de3
- (void)isReadyToLogoutWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006c56
- (void)isReadyToLoginWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006ac9
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006920
- (void)loginAppleID:(id)arg1 password:(id)arg2 localLoginOnly:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006686
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000641e
- (void)logoutWithLogoutType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000063ae
- (id)proxy;	// IMP=0x000000000000627a
- (id)init;	// IMP=0x0000000000006227

@end
