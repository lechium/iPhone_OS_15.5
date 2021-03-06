//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject
{
    SGLongRunningTaskManager *_manager;	// 8 = 0x8
    NSDate *_deadline;	// 16 = 0x10
    _Atomic _Bool _deferRequested;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000109b72
- (void)markFinished;	// IMP=0x0000000000109b3c
- (void)requestDefer;	// IMP=0x0000000000109b31
- (_Bool)shouldDefer;	// IMP=0x0000000000109adb
- (id)init;	// IMP=0x0000000000109ad5
- (id)initWithDeadline:(id)arg1 manager:(id)arg2;	// IMP=0x0000000000109a3c

@end

