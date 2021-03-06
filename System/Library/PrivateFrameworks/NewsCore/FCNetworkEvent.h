//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL;

@interface FCNetworkEvent : NSObject <NSCopying>
{
    int _type;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSString *_requestUUID;	// 24 = 0x18
    NSString *_operationID;	// 32 = 0x20
    double _startTime;	// 40 = 0x28
    NSDictionary *_w3cNavigationTiming;	// 48 = 0x30
    unsigned long long _requestSize;	// 56 = 0x38
    unsigned long long _responseSize;	// 64 = 0x40
    NSString *_responseMIMEType;	// 72 = 0x48
    unsigned long long _HTTPStatusCode;	// 80 = 0x50
    NSString *_HTTPMethod;	// 88 = 0x58
    NSDictionary *_HTTPResponseHeaders;	// 96 = 0x60
    NSString *_containerName;	// 104 = 0x68
    NSError *_error;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000002288ab
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(copy, nonatomic) NSDictionary *HTTPResponseHeaders; // @synthesize HTTPResponseHeaders=_HTTPResponseHeaders;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(nonatomic) unsigned long long HTTPStatusCode; // @synthesize HTTPStatusCode=_HTTPStatusCode;
@property(copy, nonatomic) NSString *responseMIMEType; // @synthesize responseMIMEType=_responseMIMEType;
@property(nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) unsigned long long requestSize; // @synthesize requestSize=_requestSize;
@property(copy, nonatomic) NSDictionary *w3cNavigationTiming; // @synthesize w3cNavigationTiming=_w3cNavigationTiming;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)debugDescription;	// IMP=0x0000000000228070
- (id)description;	// IMP=0x000000000022795c
@property(readonly, nonatomic) double responseEndTime;
@property(readonly, nonatomic) double responseDuration;
@property(readonly, nonatomic) double requestDuration;
@property(readonly, nonatomic) double connectDuration;
@property(readonly, nonatomic) double dnsDuration;
@property(readonly, nonatomic) double fetchStartTime;
@property(readonly, nonatomic) double totalDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000227208

@end

