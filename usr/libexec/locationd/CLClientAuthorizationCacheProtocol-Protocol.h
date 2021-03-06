//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLClientManagerAuthorizationContext, NSDictionary, NSString;

@protocol CLClientAuthorizationCacheProtocol <CLIntersiloServiceProtocol>
- (int)syncgetAuthorizationOfClient:(NSString *)arg1 forServiceMask:(unsigned long long)arg2;
- (void)notifyWhenCacheIsPopulatedWithReply:(void (^)(void))arg1;
- (void)setClientsAuthorizationMap:(NSDictionary *)arg1;
- (void)getAuthorizationContextOfClient:(NSString *)arg1 withReply:(void (^)(CLClientManagerAuthorizationContext *))arg2;
- (CLClientManagerAuthorizationContext *)syncgetAuthorizationContextOfClient:(NSString *)arg1;
@end

