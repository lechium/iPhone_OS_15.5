//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging>
{
    unsigned int _powerAssertion;	// 8 = 0x8
    NSMutableSet *_currentRequestHandlerSessionIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000748e32
+ (id)sharedHandler;	// IMP=0x0000000000748e02
- (void).cxx_destruct;	// IMP=0x00000000007486c5
@property(nonatomic) unsigned int powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs; // @synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs;
- (void)deregisterRemoteRequestHandler:(id)arg1;	// IMP=0x00000000007485d2
- (void)registerRemoteRequestHandler:(id)arg1 forSessionID:(id)arg2;	// IMP=0x00000000007484f6
- (id)init;	// IMP=0x0000000000748425

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
