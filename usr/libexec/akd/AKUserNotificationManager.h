//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNUserNotificationCenter;

@interface AKUserNotificationManager : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002e744
- (id)_notificationCategories;	// IMP=0x001000000002e5a3
- (id)_notificationContent:(id)arg1;	// IMP=0x001000000002e2c9
- (void)postUserNotification:(id)arg1;	// IMP=0x001000000002e02e
- (id)initWithNotificationCenter:(id)arg1;	// IMP=0x001000000002df86
- (id)init;	// IMP=0x001000000002df25

@end
