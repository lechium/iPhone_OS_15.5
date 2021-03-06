//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NUAnimationQueue : NSObject
{
    _Bool _running;	// 8 = 0x8
    NSMutableArray *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002813f
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void)runUntilEmpty;	// IMP=0x0000000000027f6c
- (void)cancel;	// IMP=0x0000000000027f18
- (void)addAnimation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027e4b
- (id)init;	// IMP=0x0000000000027df1

@end

