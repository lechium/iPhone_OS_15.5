//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _KSRequestThrottle : NSObject
{
    CDUnknownBlockType _curveFunction;	// 8 = 0x8
    double _maximum;	// 16 = 0x10
    CDUnknownBlockType _request;	// 24 = 0x18
    int _retryCount;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSString *_debugIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001b5d9
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_launch;	// IMP=0x000000000001b209
- (void)postRequest:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b0c8
- (id)initWithCurve:(CDUnknownBlockType)arg1 maximumDelay:(double)arg2;	// IMP=0x000000000001b046
- (id)init;	// IMP=0x000000000001b012

@end
