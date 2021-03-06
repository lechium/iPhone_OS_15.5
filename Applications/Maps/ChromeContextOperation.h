//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NGChromeViewController, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChromeContextOperation : NSOperation
{
    NSMutableArray *_coordinationBlocks;	// 8 = 0x8
    NSMutableArray *_completionBlocks;	// 16 = 0x10
    CDUnknownBlockType _fallbackBlock;	// 24 = 0x18
    NGChromeViewController *_chromeViewController;	// 32 = 0x20
    _Bool _executing;	// 40 = 0x28
    _Bool _finished;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x002000000012052f
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012035a
- (void)setFallbackCoordinationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000120326
- (void)addContextCoordinationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012023f
- (void)start;	// IMP=0x001000000011f7df
- (_Bool)isAsynchronous;	// IMP=0x001000000011f7c7
- (_Bool)isConcurrent;	// IMP=0x001000000011f7bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011f682
- (id)initWithChromeViewController:(id)arg1 fallbackCoordinationBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f564

@end

