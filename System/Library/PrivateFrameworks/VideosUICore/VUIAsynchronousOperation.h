//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface VUIAsynchronousOperation : NSOperation
{
    int _state;	// 8 = 0x8
}

- (void)start;	// IMP=0x000000000000b33e
- (_Bool)isFinished;	// IMP=0x000000000000b32a
- (_Bool)isExecuting;	// IMP=0x000000000000b316
- (_Bool)isAsynchronous;	// IMP=0x000000000000b30e
- (void)executionDidBegin;	// IMP=0x000000000000b308
- (void)finishExecutionIfPossible;	// IMP=0x000000000000b281

@end

