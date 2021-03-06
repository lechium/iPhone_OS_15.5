//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSDate, NSHTTPURLResponse;

@protocol SXProxyAuthenticationCredentialFactory <NSObject>
- (void)createCredentialForResponse:(NSHTTPURLResponse *)arg1 date:(NSDate *)arg2 completion:(void (^)(NSURLCredential *))arg3;
@end

