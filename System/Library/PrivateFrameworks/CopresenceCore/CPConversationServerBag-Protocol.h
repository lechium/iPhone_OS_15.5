//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/NSObject-Protocol.h>

@class NSString;

@protocol CPConversationServerBag <NSObject>
- (NSString *)stableBundleIdentifierForLocalBundleIdentifier:(NSString *)arg1;
@property(nonatomic, readonly) long long timeBetweenMacOSSharePlayNotificationsSeconds;
@property(nonatomic, readonly) long long qrPluginRpcStreamRetryIntervalMillis;
@property(nonatomic, readonly) long long qrPluginMaxRpcStreamAttempts;
@property(nonatomic, readonly) long long qrPluginConnectionRetryIntervalMillis;
@property(nonatomic, readonly) long long qrPluginMaxConnectionAttempts;
@property(nonatomic, readonly) long long backgroundAppPolicyHandleExpiryDays;
@property(nonatomic, readonly) long long maxActiveParticipantFetchRetries;
@property(nonatomic, readonly) long long activeParticipantRefreshDelay;
@property(nonatomic, readonly) long long rebroadcastTimeThreshold;
@property(nonatomic, readonly) long long AVCBlobRecoveryTimeout;
@property(nonatomic, readonly) long long AVCBlobRecoveryGracePeriod;
@property(nonatomic, readonly) long long sessionCleanupTimeout;
@property(nonatomic, readonly) long long activeParticipantPruningTimeout;
@end

