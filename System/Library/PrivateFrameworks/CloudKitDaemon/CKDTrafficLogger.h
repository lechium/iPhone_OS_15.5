//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDTrafficLogger : NSObject
{
    long long _sequenceNumber;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fe2a4
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void)finishRequestLog;	// IMP=0x00000000000fe1f7
- (void)logPartialResponseObjectData:(id)arg1;	// IMP=0x00000000000fe133
- (void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2;	// IMP=0x00000000000fe005
- (void)logRequestBodyStreamReset;	// IMP=0x00000000000fdf87
- (void)logPartialRequestObjectData:(id)arg1;	// IMP=0x00000000000fdec3
- (void)logResponse:(id)arg1;	// IMP=0x00000000000fdd48
- (void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3 withMessageClassString:(id)arg4 parsingStandaloneMessage:(_Bool)arg5;	// IMP=0x00000000000fd887
- (_Bool)shouldLog;	// IMP=0x00000000000fd783
- (void)_logObject:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x00000000000fd3ef
- (id)initWithRequestID:(id)arg1;	// IMP=0x00000000000fd37c

@end
