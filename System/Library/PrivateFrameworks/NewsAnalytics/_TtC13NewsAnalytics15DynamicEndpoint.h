//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <NewsAnalytics/AAEndpointProvider-Protocol.h>

@class MISSING_TYPE, NSString, NSURL;

@interface _TtC13NewsAnalytics15DynamicEndpoint : _TtCs12_SwiftObject <AAEndpointProvider>
{
    MISSING_TYPE *appConfigurationManager;	// 16 = 0x10
    MISSING_TYPE *environment;	// 24 = 0x18
}

- (id)endpointURLWithContentType:(long long)arg1;	// IMP=0x00000000002449a0
@property(nonatomic, readonly) NSString *sharedContainerIdentifier;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSURL *url;

@end
