//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue
{
    id <CATOperationQueueDelegate> _delegate;	// 8 = 0x8
}

+ (id)mainQueue;	// IMP=0x0000000000013988
+ (id)currentQueue;	// IMP=0x000000000001390f
+ (id)backgroundQueue;	// IMP=0x000000000001389f
- (void).cxx_destruct;	// IMP=0x0000000000014075
@property(nonatomic) __weak id <CATOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopObserving:(id)arg1;	// IMP=0x000000000001401f
- (void)startObserving:(id)arg1;	// IMP=0x0000000000013ff0
- (void)delegateWillAddOperation:(id)arg1;	// IMP=0x0000000000013f76
- (void)delegateOperationDidFinish:(id)arg1;	// IMP=0x0000000000013efc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000013d93
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x0000000000013b73
- (void)addOperation:(id)arg1;	// IMP=0x0000000000013ad2
- (id)description;	// IMP=0x0000000000013a01
- (void)setUnderlyingQueue:(id)arg1;	// IMP=0x0000000000013790

@end

