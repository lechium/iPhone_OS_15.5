//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIApplicationNotificationManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000000024253
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000000024735
- (void)_applicationWillTerminateNotification:(id)arg1;	// IMP=0x000000000002468e
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x00000000000245e7
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000000024540
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000000024499
- (void)listenForApplicationNotifications;	// IMP=0x000000000002431d
- (void)dealloc;	// IMP=0x00000000000242a8

@end
