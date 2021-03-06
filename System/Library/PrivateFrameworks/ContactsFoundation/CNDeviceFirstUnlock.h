//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNFuture, CNUnfairLock, NSMutableDictionary, NSOperationQueue;

@interface CNDeviceFirstUnlock : NSObject
{
    CNUnfairLock *_handlersLock;	// 8 = 0x8
    NSMutableDictionary *_unlockHandlers;	// 16 = 0x10
    NSOperationQueue *_workQueue;	// 24 = 0x18
    CNFuture *_firstUnlockFuture;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000045aea
- (void).cxx_destruct;	// IMP=0x0000000000046540
@property(retain, nonatomic) CNFuture *firstUnlockFuture; // @synthesize firstUnlockFuture=_firstUnlockFuture;
@property(retain, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *unlockHandlers; // @synthesize unlockHandlers=_unlockHandlers;
@property(retain, nonatomic) CNUnfairLock *handlersLock; // @synthesize handlersLock=_handlersLock;
- (long long)countOfUnlockHandlers;	// IMP=0x00000000000463b1
- (void)waitForAllOperationsToFinish;	// IMP=0x0000000000046374
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000046291
- (void)removeUnlockHandlerWithIdentifier:(id)arg1;	// IMP=0x00000000000461c2
- (void)withHandlersLock_registerForDeviceFirstUnlock;	// IMP=0x0000000000046088
- (void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045e41
- (void)addUnlockHandlerWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045c99
@property(readonly, nonatomic) _Bool isUnlockedSinceBoot;
- (void)dealloc;	// IMP=0x0000000000045c3e
- (id)init;	// IMP=0x0000000000045b6f

@end

