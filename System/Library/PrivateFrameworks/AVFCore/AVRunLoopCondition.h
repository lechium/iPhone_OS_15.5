//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition
{
    NSMutableArray *_runLoopStateList;	// 16 = 0x10
}

- (void)_signalRunLoopWithState:(id)arg1;	// IMP=0x00000000000d9870
- (void)broadcast;	// IMP=0x00000000000d9754
- (void)signal;	// IMP=0x00000000000d96fb
- (_Bool)_waitInMode:(id)arg1 untilDate:(id)arg2;	// IMP=0x00000000000d94c5
- (_Bool)waitUntilDate:(id)arg1 inMode:(id)arg2;	// IMP=0x00000000000d94aa
- (void)waitInMode:(id)arg1;	// IMP=0x00000000000d9496
- (_Bool)waitUntilDate:(id)arg1;	// IMP=0x00000000000d9482
- (void)wait;	// IMP=0x00000000000d946e
- (void)dealloc;	// IMP=0x00000000000d942c
- (id)init;	// IMP=0x00000000000d93d9

@end

