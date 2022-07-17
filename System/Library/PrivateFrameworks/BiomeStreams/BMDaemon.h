//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMComputeSource-Protocol.h>

@class BMComputeSourceServer, BMComputeXPCPublisherServer, BMComputeXPCSubscriptionBookmarkStorage, NSString;
@protocol OS_dispatch_queue;

@interface BMDaemon : NSObject <BMComputeSource>
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BMComputeSourceServer *_sourceServer;	// 24 = 0x18
    BMComputeXPCPublisherServer *_publisherServer;	// 32 = 0x20
    BMComputeXPCSubscriptionBookmarkStorage *_bookmarkStorage;	// 40 = 0x28
}

+ (void)_handlePrivacyResetNotification;	// IMP=0x0000000000020a41
+ (void)registerXPCActivities;	// IMP=0x00000000000202f7
+ (void)prunePrivateStreamDirectory:(id)arg1 maxAge:(double)arg2 maxStreamSize:(unsigned long long)arg3;	// IMP=0x000000000001fe5c
+ (void)pruneRestrictedStreams;	// IMP=0x000000000001f9f9
+ (id)computePublisherServiceName;	// IMP=0x000000000001f9ec
+ (id)computePublisherStreamName;	// IMP=0x000000000001f9df
+ (id)computeSourceServiceName;	// IMP=0x000000000001f9d2
- (void).cxx_destruct;	// IMP=0x0000000000020b0c
@property(readonly, nonatomic) BMComputeXPCSubscriptionBookmarkStorage *bookmarkStorage; // @synthesize bookmarkStorage=_bookmarkStorage;
@property(readonly, nonatomic) BMComputeXPCPublisherServer *publisherServer; // @synthesize publisherServer=_publisherServer;
@property(readonly, nonatomic) BMComputeSourceServer *sourceServer; // @synthesize sourceServer=_sourceServer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)setUpNotificationHandler;	// IMP=0x0000000000020819
- (id)fetchBookmarkWithSubscription:(id)arg1 upToTimestamp:(id)arg2 success:(_Bool *)arg3;	// IMP=0x000000000001f226
- (void)sendEventWithStreamIdentifier:(id)arg1 timestamp:(id)arg2 storeEvent:(id)arg3;	// IMP=0x000000000001e039
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000001de21
- (id)init;	// IMP=0x000000000001de1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
