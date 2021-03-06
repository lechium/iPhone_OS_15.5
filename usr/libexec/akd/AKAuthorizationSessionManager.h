//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface AKAuthorizationSessionManager : NSObject
{
    NSMutableDictionary *_activeSessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clearanceQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_trafficQueue;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000026987
- (void).cxx_destruct;	// IMP=0x0020000000027f39
- (id)_activeSessionForContext:(id)arg1 client:(id)arg2;	// IMP=0x0010000000027ed9
- (id)_clientBundleIDForContext:(id)arg1 client:(id)arg2;	// IMP=0x0010000000027e27
- (_Bool)_hasSessionTimedOutForRequest:(id)arg1;	// IMP=0x0010000000027d0d
- (id)userResponseWithContext:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000027c02
- (void)updateUserResponse:(id)arg1 withContext:(id)arg2 forClient:(id)arg3;	// IMP=0x0010000000027aea
- (void)continueSessionWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000274ef
- (void)endSessionWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027122
- (void)beginSessionWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000026a6c
- (id)init;	// IMP=0x00100000000269dc

@end

