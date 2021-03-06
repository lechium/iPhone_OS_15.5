//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, UNUserNotificationCenter;

@interface LocalNotificationHandler : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
}

+ (id)sharedHandler;	// IMP=0x002000000000c1c3
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000000e5c4
@property(readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (id)_notificationContentWithRequest:(id)arg1 silently:(_Bool)arg2;	// IMP=0x001000000000e31d
- (void)_replaceNotificationWithRequest:(id)arg1;	// IMP=0x001000000000df4a
- (void)_presentNotificationWithRequest:(id)arg1 silently:(_Bool)arg2;	// IMP=0x001000000000daef
- (void)_handleUnknownRequestIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d973
- (void)_handleRequesterRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d628
- (void)_handleApproverRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d285
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000cf43
- (void)start;	// IMP=0x001000000000cde1
- (id)retrieveRequestWithIdentifier:(id)arg1;	// IMP=0x001000000000ca2e
- (void)presentNotificationWithRequest:(id)arg1 silently:(_Bool)arg2;	// IMP=0x001000000000c756
- (void)dismissNotificationWithIdentifier:(id)arg1;	// IMP=0x001000000000c506
@property(readonly, nonatomic) NSArray *presentedRequests;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

