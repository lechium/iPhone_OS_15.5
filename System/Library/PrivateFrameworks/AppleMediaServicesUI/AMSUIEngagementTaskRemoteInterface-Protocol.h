//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class AMSEngagementRequest, AMSProcessInfo, NSData;

@protocol AMSUIEngagementTaskRemoteInterface <NSObject>
- (void)presentEngagementRequest:(AMSEngagementRequest *)arg1 bagData:(NSData *)arg2 clientInfo:(AMSProcessInfo *)arg3 completion:(void (^)(NSError *))arg4;
@end
