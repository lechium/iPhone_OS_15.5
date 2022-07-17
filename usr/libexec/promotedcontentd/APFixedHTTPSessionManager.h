//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, MISSING_TYPE, NSMutableDictionary;

@interface APFixedHTTPSessionManager : NSObject
{
    CDUnknownBlockType createSessionBlock;	// 8 = 0x8
    APUnfairLock *_lock;	// 16 = 0x10
    NSMutableDictionary *_sessions;	// 24 = 0x18
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000000d0ec1
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType createSessionBlock; // @synthesize createSessionBlock;
- (_Bool)invalidateService:(id)arg1 andCancelTasks:(_Bool)arg2;	// IMP=0x00100000000d0caa
- (_Bool)cancelTasksForService:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d0abd
- (void)invalidateAllServicesAndCancelTasks:(_Bool)arg1;	// IMP=0x00100000000d08bd
- (id)temporarySessionForService:(id)arg1;	// IMP=0x00100000000d08ab
- (id)sessionForService:(id)arg1;	// IMP=0x00100000000d072e
- (id)init;	// IMP=0x00100000000d068f

@end
