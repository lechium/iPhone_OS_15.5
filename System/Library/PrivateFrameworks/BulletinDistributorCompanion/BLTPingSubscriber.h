//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingSubscribing-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BLTPingService;

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing>
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
    NSMutableDictionary *_pingHandlers;	// 72 = 0x48
    id <BLTPingService> _service;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002918a
@property(retain, nonatomic) id <BLTPingService> service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableDictionary *pingHandlers; // @synthesize pingHandlers=_pingHandlers;
- (void)subscribeWithMachServiceName:(id)arg1;	// IMP=0x0000000000029100
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029073
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028ffa
- (void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3;	// IMP=0x0000000000028b94
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028adb
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;	// IMP=0x0000000000028ac6
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;	// IMP=0x00000000000289f7
- (void)pingWithBulletin:(id)arg1;	// IMP=0x00000000000289e3
- (void)subscribeToSectionID:(id)arg1 withNotificationAckForwardForAnyConnectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002896d
- (void)subscribeToSectionID:(id)arg1 withNotificationAckForwardHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000288f7
- (void)subscribeToSectionID:(id)arg1 withNotificationAckHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028881
- (void)subscribeToSectionID:(id)arg1 withNotificationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002880e
- (void)subscribeToSectionID:(id)arg1 withBulletinAckForwardForAnyConnectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000287a7
- (void)subscribeToSectionID:(id)arg1 withBulletinAckForwardHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028740
- (void)subscribeToSectionID:(id)arg1 withBulletinAckHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000286d9
- (void)subscribeToSectionID:(id)arg1 withBulletinHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028675
- (void)subscribeToSectionID:(id)arg1 withPingAckForwardHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028611
- (void)subscribeToSectionID:(id)arg1 withPingAckHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000285ad
- (void)subscribeToSectionID:(id)arg1 withPingHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002854c
- (void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(_Bool)arg4 forNotifications:(_Bool)arg5;	// IMP=0x0000000000028409
- (void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(_Bool)arg4;	// IMP=0x00000000000283e7
- (void)unsubscribeFromSectionID:(id)arg1;	// IMP=0x0000000000028350
- (id)subscriptionInfos;	// IMP=0x000000000002830a
- (id)sectionIDsForBulletins;	// IMP=0x00000000000282f8
- (id)sectionIDs;	// IMP=0x000000000002827b
- (void)pingSubscriberDidLoad;	// IMP=0x0000000000028275
- (void)dealloc;	// IMP=0x000000000002823b
- (id)init;	// IMP=0x00000000000281e3
- (id)initWithService:(id)arg1;	// IMP=0x0000000000028143

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
