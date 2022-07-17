//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class NSDictionary;
@protocol HDSPSleepLockScreenAssertionManagerDelegate;

@protocol HDSPSleepLockScreenAssertionManager <NSObject>
@property(nonatomic) __weak id <HDSPSleepLockScreenAssertionManagerDelegate> delegate;
@property(readonly, nonatomic) _Bool hasLockScreenConnection;
- (void)invalidateAssertion;
- (void)sendLockScreenState:(long long)arg1 userInfo:(NSDictionary *)arg2;
- (void)takeAssertionIfNeeded;
@end
