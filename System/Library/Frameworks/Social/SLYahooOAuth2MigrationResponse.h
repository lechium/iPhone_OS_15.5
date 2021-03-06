//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface SLYahooOAuth2MigrationResponse : NSObject
{
    long long _statusCode;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDictionary *_responseBody;	// 24 = 0x18
    NSString *_accessToken;	// 32 = 0x20
    NSString *_refreshToken;	// 40 = 0x28
    NSDate *_expiryDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001cce4
@property(readonly) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly) NSDictionary *responseBody; // @synthesize responseBody=_responseBody;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;	// IMP=0x000000000001c8d9

@end

