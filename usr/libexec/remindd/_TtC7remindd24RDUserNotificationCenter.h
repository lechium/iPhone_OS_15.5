//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd24RDUserNotificationCenter : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *reminderAlarmDelegate;	// 16 = 0x10
    MISSING_TYPE *beforeFirstUnlockReminderDelegate;	// 32 = 0x20
    MISSING_TYPE *assignmentNotificationDelegate;	// 48 = 0x30
    MISSING_TYPE *notificationCenter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002f1490
- (id)init;	// IMP=0x00100000002f1410
- (id)initWithQueue:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00100000002f0ad0
- (id)calDAVSharedListNotificationContentWithList:(id)arg1;	// IMP=0x001000000044b010
- (void)showNotificationWithIdentifier:(id)arg1 content:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000044aed0

@end
