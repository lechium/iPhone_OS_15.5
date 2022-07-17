//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SSRemoteNotificationClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
}

+ (id)sharedClient;	// IMP=0x00000000000ad2d3
- (void)unregisterForRemoteNotifications;	// IMP=0x00000000000ad6df
- (void)registerForRemoteNotifications;	// IMP=0x00000000000ad4eb
- (id)popQueuedNotifications;	// IMP=0x00000000000ad350
- (void)dealloc;	// IMP=0x00000000000ad291
- (id)init;	// IMP=0x00000000000ad243

@end
