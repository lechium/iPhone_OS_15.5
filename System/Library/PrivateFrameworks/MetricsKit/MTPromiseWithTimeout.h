//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTPromise, NSDate;
@protocol OS_dispatch_source;

@interface MTPromiseWithTimeout : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    MTPromise *_promise;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_dispatchSourceTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000313c0
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceTimer; // @synthesize dispatchSourceTimer=_dispatchSourceTimer;
@property(retain, nonatomic) MTPromise *promise; // @synthesize promise=_promise;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)dealloc;	// IMP=0x00000000000312e5
- (void)finishWithResult:(id)arg1;	// IMP=0x00000000000311e0
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 timeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030ef5

@end
