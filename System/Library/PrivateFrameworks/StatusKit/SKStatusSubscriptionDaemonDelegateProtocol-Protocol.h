//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKit/NSObject-Protocol.h>

@class NSArray, SKStatusSubscriptionMetadata;

@protocol SKStatusSubscriptionDaemonDelegateProtocol <NSObject>
- (void)subscriptionInvitationReceived:(SKStatusSubscriptionMetadata *)arg1 completion:(void (^)(void))arg2;
- (void)subscriptionReceivedStatusUpdate:(SKStatusSubscriptionMetadata *)arg1 completion:(void (^)(void))arg2;
- (void)subscriptionStateChangedForSubscriptions:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

