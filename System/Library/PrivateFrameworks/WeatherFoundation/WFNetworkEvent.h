//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WFNetworkEvent : NSObject
{
    long long _eventType;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    double _DNSDuration;	// 24 = 0x18
    double _connectDuration;	// 32 = 0x20
    double _requestDuration;	// 40 = 0x28
    double _responseDuration;	// 48 = 0x30
    unsigned long long _responseSize;	// 56 = 0x38
    unsigned long long _HTTPStatusCode;	// 64 = 0x40
    long long _errorCode;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003b765
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) unsigned long long HTTPStatusCode; // @synthesize HTTPStatusCode=_HTTPStatusCode;
@property(readonly, nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(readonly, nonatomic) double responseDuration; // @synthesize responseDuration=_responseDuration;
@property(readonly, nonatomic) double requestDuration; // @synthesize requestDuration=_requestDuration;
@property(readonly, nonatomic) double connectDuration; // @synthesize connectDuration=_connectDuration;
@property(readonly, nonatomic) double DNSDuration; // @synthesize DNSDuration=_DNSDuration;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (id)initWithEventType:(long long)arg1 startDate:(id)arg2 error:(id)arg3;	// IMP=0x000000000003b68b
- (id)initWithEventType:(long long)arg1 metrics:(id)arg2;	// IMP=0x000000000003b3f6
- (id)initWithEventType:(long long)arg1 startDate:(id)arg2 DNSDuration:(double)arg3 connectDuration:(double)arg4 requestDuration:(double)arg5 responseDuration:(double)arg6 responseSize:(unsigned long long)arg7 HTTPStatusCode:(unsigned long long)arg8 errorCode:(long long)arg9;	// IMP=0x000000000003b325

@end
