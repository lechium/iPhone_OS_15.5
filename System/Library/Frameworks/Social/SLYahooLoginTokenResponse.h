//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface SLYahooLoginTokenResponse : NSObject
{
    long long _statusCode;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSString *_body;	// 24 = 0x18
    NSString *_loginToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c686
@property(readonly) NSString *loginToken; // @synthesize loginToken=_loginToken;
@property(readonly) NSString *body; // @synthesize body=_body;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;	// IMP=0x000000000001c387

@end

