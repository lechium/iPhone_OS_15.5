//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ENGCOAuth : NSObject
{
    NSDictionary *__parameters;	// 8 = 0x8
    NSString *__method;	// 16 = 0x10
    NSURL *__url;	// 24 = 0x18
    NSString *_signatureSecret;	// 32 = 0x20
    NSDictionary *_OAuthParameters;	// 40 = 0x28
}

+ (id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;	// IMP=0x00000000002f40b0
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8;	// IMP=0x00000000002f3db1
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;	// IMP=0x00000000002f3d73
+ (id)queryStringFromParameters:(id)arg1;	// IMP=0x00000000002f3c90
+ (id)timeStamp;	// IMP=0x00000000002f3c2a
+ (id)nonce;	// IMP=0x00000000002f3bf4
+ (void)setHTTPShouldHandleCookies:(_Bool)arg1;	// IMP=0x00000000002f3be8
+ (void)setTimeStampOffset:(long long)arg1;	// IMP=0x00000000002f3bdb
+ (void)setUserAgent:(id)arg1;	// IMP=0x00000000002f3bb2
- (void).cxx_destruct;	// IMP=0x00000000002f3a97
@property(retain, nonatomic) NSDictionary *OAuthParameters; // @synthesize OAuthParameters=_OAuthParameters;
@property(copy, nonatomic) NSString *signatureSecret; // @synthesize signatureSecret=_signatureSecret;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=__url;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=__method;
@property(copy, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=__parameters;
- (id)signatureBase;	// IMP=0x00000000002f3441
- (id)signature;	// IMP=0x00000000002f3285
- (id)authorizationHeader;	// IMP=0x00000000002f3119
- (id)request;	// IMP=0x00000000002f2fe3
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessToken:(id)arg3 tokenSecret:(id)arg4;	// IMP=0x00000000002f2d8c

@end

