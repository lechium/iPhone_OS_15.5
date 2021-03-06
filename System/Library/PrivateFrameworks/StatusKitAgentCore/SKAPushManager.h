//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StatusKitAgentCore/APSConnectionDelegate-Protocol.h>
#import <StatusKitAgentCore/SKAPushManaging-Protocol.h>
#import <StatusKitAgentCore/SKASystemMonitorListener-Protocol.h>

@class APSConnection, FTMessageDelivery, NSString, SKASystemMonitor;
@protocol OS_dispatch_queue, SKAPushManagingDelegate;

@interface SKAPushManager : NSObject <APSConnectionDelegate, SKASystemMonitorListener, SKAPushManaging>
{
    id <SKAPushManagingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    SKASystemMonitor *_systemMonitor;	// 24 = 0x18
    APSConnection *_connection;	// 32 = 0x20
    FTMessageDelivery *_messageDelivery;	// 40 = 0x28
}

+ (id)logger;	// IMP=0x00000000000237ca
- (void).cxx_destruct;	// IMP=0x00000000000238b9
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) SKASystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <SKAPushManagingDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_sharedChannelsIsDisabledByServer;	// IMP=0x00000000000236e6
- (void)connection:(id)arg1 channelSubscriptionsFailedWithFailures:(id)arg2;	// IMP=0x00000000000233cb
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000000000230b9
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000000000230b3
- (id)serverTime;	// IMP=0x0000000000022f54
- (void)subscribedChannelsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022af6
- (void)unsubscribeFromChannels:(id)arg1;	// IMP=0x00000000000227a0
- (void)subscribeToChannels:(id)arg1;	// IMP=0x000000000002244a
- (void)publishStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021e94
- (void)switchFilterToEnabled;	// IMP=0x0000000000021c8d
- (void)switchFilterToNonwaking;	// IMP=0x0000000000021a85
- (void)createChannelWithProtoData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000214c5
- (id)_pushEnvironment;	// IMP=0x0000000000021416
- (void)_initializeAPSConnection;	// IMP=0x000000000002129e
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x000000000002123c
- (id)initWithQueue:(id)arg1 systemMonitor:(id)arg2;	// IMP=0x00000000000210c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

