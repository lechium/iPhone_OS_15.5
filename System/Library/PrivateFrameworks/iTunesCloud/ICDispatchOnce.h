//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDispatchOnce : NSObject
{
    CDUnknownBlockType _booleanHandler;	// 8 = 0x8
    struct atomic_flag _didFire;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _objectHandler;	// 32 = 0x20
    ICDispatchOnce *_strongSelf;	// 40 = 0x28
    double _timeout;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f298d
- (void)_invalidate;	// IMP=0x00000000000f291e
- (void)startWithTimeout:(double)arg1 queue:(id)arg2;	// IMP=0x00000000000f27e8
- (void)startWithTimeout:(double)arg1;	// IMP=0x00000000000f27d4
- (void)finishWithObjectResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000f271d
- (void)finishWithBooleanResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000000f2680
- (void)failWithError:(id)arg1;	// IMP=0x00000000000f2620
- (id)initWithObjectHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f25ad
- (id)initWithBooleanHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f253a

@end

