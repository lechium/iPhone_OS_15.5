//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject
{
    NSMutableDictionary *_notifications;	// 8 = 0x8
}

+ (void)cancelNotificationsWithIdentifiers:(id)arg1;	// IMP=0x0000000000096883
+ (void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000960f2
+ (id)sharedInstance;	// IMP=0x0000000000096047
- (void).cxx_destruct;	// IMP=0x0000000000096b3a
@property(retain, nonatomic) NSMutableDictionary *notifications; // @synthesize notifications=_notifications;
- (id)init;	// IMP=0x000000000009609c

@end

