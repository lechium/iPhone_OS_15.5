//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class HKSPSleepFocusConfiguration;
@protocol HKSPSleepFocusModeBridgeDelegate;

@protocol HKSPSleepFocusModeBridge <NSObject>
@property(nonatomic) __weak id <HKSPSleepFocusModeBridgeDelegate> delegate;
- (void)invalidate;
- (HKSPSleepFocusConfiguration *)sleepFocusConfiguration:(id *)arg1;
- (_Bool)hasSleepFocusMode:(id *)arg1;
@end

