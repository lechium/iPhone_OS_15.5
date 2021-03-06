//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASDispatch : NSObject
{
}

+ (void)notifyGroup:(id)arg1 onQueue:(id)arg2 withTimeout:(double)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000004b661
+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1 qosClass:(unsigned int)arg2;	// IMP=0x000000000004b556
+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1;	// IMP=0x000000000004b50e
+ (void)runSyncOnMainThreadWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b4a5
+ (void)runAsyncOnQueue:(id)arg1 afterDelaySeconds:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b234
+ (void)waitForBlock:(CDUnknownBlockType)arg1 timeoutSeconds:(double)arg2 onBlockComplete:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;	// IMP=0x000000000004b001
+ (unsigned char)waitForBlock:(CDUnknownBlockType)arg1 timeoutSeconds:(double)arg2;	// IMP=0x000000000004af6f
+ (void)waitForBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004aebb
+ (void)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 onGroupComplete:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ac84
+ (unsigned char)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2;	// IMP=0x000000000004abf2
+ (void)waitForGroup:(id)arg1;	// IMP=0x000000000004ab3e
+ (void)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 onAcquire:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a907
+ (unsigned char)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2;	// IMP=0x000000000004a875
+ (void)waitForSemaphore:(id)arg1;	// IMP=0x000000000004a7c1
+ (unsigned long long)dispatchTimeWithSecondsFromNow:(double)arg1;	// IMP=0x000000000004a789

@end

