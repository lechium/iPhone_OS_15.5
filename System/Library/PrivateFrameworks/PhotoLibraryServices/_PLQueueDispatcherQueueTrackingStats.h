//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PLQueueDispatcherQueueTrackingStats : NSObject
{
    struct _PLQueueDispatcherBlockDebugInfoEntry *head;	// 8 = 0x8
    struct _PLQueueDispatcherBlockDebugInfoEntry *tail;	// 16 = 0x10
    struct os_unfair_lock_s lock;	// 24 = 0x18
}

@end
