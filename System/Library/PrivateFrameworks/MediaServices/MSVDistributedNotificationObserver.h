//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol MSVDistributedNotificationObserverDelegate, OS_dispatch_queue;

@interface MSVDistributedNotificationObserver : NSObject
{
    int _notifyToken;	// 8 = 0x8
    NSString *_distributedName;	// 16 = 0x10
    NSString *_localName;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <MSVDistributedNotificationObserverDelegate> _delegate;	// 40 = 0x28
    NSDictionary *_userInfoForLocalNotification;	// 48 = 0x30
}

+ (id)observerWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;	// IMP=0x000000000000b7c3
- (void).cxx_destruct;	// IMP=0x000000000000b741
@property(copy, nonatomic) NSDictionary *userInfoForLocalNotification; // @synthesize userInfoForLocalNotification=_userInfoForLocalNotification;
@property(nonatomic) __weak id <MSVDistributedNotificationObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *localName; // @synthesize localName=_localName;
@property(readonly, nonatomic) NSString *distributedName; // @synthesize distributedName=_distributedName;
- (void)_handleDistributedNotificationWithNotifyToken:(int)arg1;	// IMP=0x000000000000b623
- (int)notifyToken;	// IMP=0x000000000000b61a
- (void)dealloc;	// IMP=0x000000000000b5e1
- (id)init;	// IMP=0x000000000000b549
- (id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;	// IMP=0x000000000000b35e

@end
