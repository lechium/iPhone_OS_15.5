//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface TROperationQueue : NSOperationQueue
{
    _Bool _cancelled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cancellationQ;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003c49
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQ; // @synthesize cancellationQ=_cancellationQ;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x00000000000039df
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000038c1
- (void)addOperation:(id)arg1;	// IMP=0x0000000000003784
- (void)invalidate;	// IMP=0x00000000000036eb
- (id)init;	// IMP=0x0000000000003687

@end

