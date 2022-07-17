//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, SBKResponseStatus;

@interface SBKResponse : NSObject
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
    unsigned long long _responseCode;	// 16 = 0x10
    NSDictionary *_responseHeaderFields;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    double _retrySeconds;	// 40 = 0x28
    NSString *_MIMEType;	// 48 = 0x30
    SBKResponseStatus *_responseStatus;	// 56 = 0x38
}

+ (id)responseWithResponse:(id)arg1;	// IMP=0x0000000000024d20
+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;	// IMP=0x0000000000024c63
+ (id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2;	// IMP=0x0000000000024bf7
- (void).cxx_destruct;	// IMP=0x00000000000243fc
@property(readonly, nonatomic) SBKResponseStatus *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) double retrySeconds; // @synthesize retrySeconds=_retrySeconds;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseHeaderFields; // @synthesize responseHeaderFields=_responseHeaderFields;
@property(readonly, nonatomic) unsigned long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, nonatomic) _Bool isPuntedError;
@property(readonly, nonatomic) _Bool isValidationError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
@property(readonly, nonatomic) _Bool isUnsupportedClient;
@property(readonly, nonatomic) _Bool isGenericError;
@property(readonly, nonatomic) _Bool shouldFileRadar;
@property(readonly, nonatomic) _Bool isError;
@property(readonly, nonatomic) _Bool isRecoverable;
@property(readonly, nonatomic) _Bool isSuccess;
@property(readonly, nonatomic) NSError *requestError;
@property(readonly, copy, nonatomic) NSString *consoleDescription;
@property(readonly, nonatomic) long long statusCode;
- (id)description;	// IMP=0x0000000000024216
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;	// IMP=0x0000000000024011
- (id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2;	// IMP=0x0000000000023f26

@end
