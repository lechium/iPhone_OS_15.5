//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject;
@protocol NSSecureCoding, _MXExtensionRequestDispatching><NSSecureCoding;

@protocol _MXExtensionRequestHandling <NSObject>
- (void)handleRequest:(NSObject<NSSecureCoding> *)arg1 requestDispatcher:(NSObject<_MXExtensionRequestDispatching><NSSecureCoding> *)arg2 completion:(void (^)(NSObject<NSSecureCoding> *, NSError *))arg3;
@end

