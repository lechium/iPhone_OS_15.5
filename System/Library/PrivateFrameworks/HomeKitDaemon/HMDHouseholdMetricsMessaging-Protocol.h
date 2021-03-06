//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, NSDictionary, NSString;

@protocol HMDHouseholdMetricsMessaging
- (void)deregisterForMessage:(NSString *)arg1;
- (void)registerForMessage:(NSString *)arg1 messageHandler:(NSDictionary * (^)(NSDictionary *, id *))arg2;
- (void)sendMessage:(NSString *)arg1 toDevice:(HMDDevice *)arg2 withPayload:(NSDictionary *)arg3 responseHandler:(void (^)(NSError *, NSDictionary *))arg4;
@end

