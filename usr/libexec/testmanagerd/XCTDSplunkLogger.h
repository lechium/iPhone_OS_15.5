//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE, NSData;

@interface XCTDSplunkLogger : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *endpointURL;	// 0 = 0x0
    MISSING_TYPE *authorizationToken;	// 0 = 0x0
    MISSING_TYPE *urlSessionProtocolClasses;	// 0 = 0x0
    MISSING_TYPE *_session;	// 0 = 0x0
}

+ (id)loggerFromConfigurationFile;	// IMP=0x0020000000045faa
- (id)init;	// IMP=0x0040000000047192
- (void)postEventData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;	// IMP=0x0010000000046f78

@end
