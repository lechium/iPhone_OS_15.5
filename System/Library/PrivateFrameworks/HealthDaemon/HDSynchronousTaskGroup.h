//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol HDSynchronousTaskGroupDelegate;

@interface HDSynchronousTaskGroup : NSObject
{
    _Atomic int _taskCount;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    _Bool _success;	// 16 = 0x10
    NSMutableArray *_errors;	// 24 = 0x18
    id <HDSynchronousTaskGroupDelegate> _delegate;	// 32 = 0x20
    CDUnknownBlockType _didFinish;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000038b2f9
@property(copy) CDUnknownBlockType didFinish; // @synthesize didFinish=_didFinish;
@property __weak id <HDSynchronousTaskGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finishTask;	// IMP=0x000000000038b126
- (void)failTaskWithError:(id)arg1;	// IMP=0x000000000038b096
- (long long)beginTask;	// IMP=0x000000000038b082
@property(readonly) int taskCount;
- (id)init;	// IMP=0x000000000038b03a

@end
