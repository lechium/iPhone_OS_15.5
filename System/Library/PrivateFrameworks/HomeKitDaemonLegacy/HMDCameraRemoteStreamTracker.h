//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraRemoteStreamTracker : HMFObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableSet *_currentStreamIdentifiers;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000064a426
+ (id)sharedTracker;	// IMP=0x000000000064a3f6
- (void).cxx_destruct;	// IMP=0x0000000000649d68
@property(readonly) NSMutableSet *currentStreamIdentifiers; // @synthesize currentStreamIdentifiers=_currentStreamIdentifiers;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)stopTrackingStreamWithSessionID:(id)arg1;	// IMP=0x0000000000649c8b
- (_Bool)startTrackingStreamSession:(id)arg1;	// IMP=0x0000000000649b83
- (id)init;	// IMP=0x0000000000649ab2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

