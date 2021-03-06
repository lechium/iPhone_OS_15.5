//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface HSRequest : NSObject
{
    NSDictionary *_arguments;	// 8 = 0x8
    _Bool _concurrent;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    long long _method;	// 32 = 0x20
    NSData *_bodyData;	// 40 = 0x28
}

+ (id)request;	// IMP=0x0000000000002ee3
- (void).cxx_destruct;	// IMP=0x0000000000002e2f
@property(copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(readonly, nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) _Bool acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x0000000000002dda
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0000000000002c98
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0000000000002acd
- (void)setValue:(id)arg1 forArgument:(id)arg2;	// IMP=0x0000000000002a4d
@property(readonly, nonatomic) double timeoutInterval;
- (id)description;	// IMP=0x00000000000029b0
- (id)initWithAction:(id)arg1;	// IMP=0x000000000000293d

@end

