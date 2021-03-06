//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCancelable-Protocol.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable>
{
    NSRunLoop *_runLoop;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b167
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b133
- (void)cancel;	// IMP=0x000000000002afae
- (void)performAfterDelay:(double)arg1;	// IMP=0x000000000002ae1a
- (id)initWithBlock:(CDUnknownBlockType)arg1 inRunLoop:(id)arg2;	// IMP=0x000000000002ac95

@end

