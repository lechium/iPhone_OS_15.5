//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SKAMessagingProvidingDelegate <NSObject>
- (void)networkBecameReachable;
- (void)service:(NSString *)arg1 didReceiveIncomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 toID:(NSString *)arg4 messageGuid:(NSString *)arg5;
@end
