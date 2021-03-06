//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface AVEventWaiter : NSObject
{
    NSCondition *_condition;	// 8 = 0x8
    _Bool _eventCompleted;	// 16 = 0x10
}

- (void)waitUntilEventIsCompleted;	// IMP=0x00000000000f20e5
- (void)markEventAsCompleted;	// IMP=0x00000000000f20a0
- (void)dealloc;	// IMP=0x00000000000f2065
- (id)init;	// IMP=0x00000000000f1ff7

@end

