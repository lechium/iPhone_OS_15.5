//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MDMClientProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol MDMUserXPCProtocol <NSObject, MDMClientProtocol>
- (void)processUserRequest:(NSDictionary *)arg1 encodeResponse:(_Bool)arg2 completion:(void (^)(NSError *, NSDictionary *, NSData *))arg3;
- (void)userPushTokenWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)simulatePushWithCompletion:(void (^)(NSError *))arg1;
- (void)scheduleTokenUpdateWithCompletion:(void (^)(NSError *))arg1;
@end

