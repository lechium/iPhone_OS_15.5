//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPUserNotification : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackInvocationQueue;	// 16 = 0x10
    CDUnknownBlockType _willShowNotificationHandler;	// 24 = 0x18
    id strongSelf;	// 32 = 0x20
    _Bool _isShowing;	// 40 = 0x28
    struct __CFRunLoopSource *_runLoopSource;	// 48 = 0x30
    NSMutableArray *_showingCompletionHandlers;	// 56 = 0x38
    struct __CFUserNotification *_cfUserNotification;	// 64 = 0x40
}

+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x00000000002c3416
+ (void)_setUserNotification:(id)arg1 forCFUserNotification:(struct __CFUserNotification *)arg2;	// IMP=0x00000000002c3363
+ (id)_userNotificationConversionAccessQueue;	// IMP=0x00000000002c3333
- (void).cxx_destruct;	// IMP=0x00000000002c2787
@property(readonly, nonatomic) struct __CFUserNotification *cfUserNotification; // @synthesize cfUserNotification=_cfUserNotification;
- (void)_didReceiveResponseWithFlags:(unsigned long long)arg1;	// IMP=0x00000000002c25be
- (void)_cancelSynchronously:(_Bool)arg1;	// IMP=0x00000000002c2546
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c24bb
- (void)cancel;	// IMP=0x00000000002c24a7
@property(copy, nonatomic) CDUnknownBlockType willShowNotificationHandler;
- (void)dealloc;	// IMP=0x00000000002c22f3
- (id)initWithCFUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x00000000002c21c6
- (id)init;	// IMP=0x00000000002c21b2

@end

