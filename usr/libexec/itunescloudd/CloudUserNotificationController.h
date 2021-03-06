//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface CloudUserNotificationController : NSObject
{
    UNUserNotificationCenter *_center;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_centerQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000341b4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *centerQueue; // @synthesize centerQueue=_centerQueue;
@property(retain, nonatomic) UNUserNotificationCenter *center; // @synthesize center=_center;
- (id)_createBag;	// IMP=0x00100000000340f2
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000033fcf
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x0010000000033dfa
- (id)init;	// IMP=0x0010000000033cab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

