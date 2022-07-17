//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBObserverClientInterface-Protocol.h>
#import <BulletinBoard/BBObserverServerInterface-Protocol.h>

@class BBObserver, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface>
{
    _Bool _isValid;	// 8 = 0x8
    _Bool _isEstablished;	// 9 = 0x9
    BBObserver *_observer;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
}

+ (id)xpcInterface;	// IMP=0x0000000000074334
- (void).cxx_destruct;	// IMP=0x00000000000777e3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak BBObserver *observer; // @synthesize observer=_observer;
- (void)getObserverDebugInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000007767d
- (void)noteBulletinsLoadedForSectionID:(id)arg1;	// IMP=0x00000000000775a1
- (void)noteServerReceivedResponseForBulletin:(id)arg1;	// IMP=0x00000000000774c5
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;	// IMP=0x00000000000773b8
- (void)updateGlobalSettings:(id)arg1;	// IMP=0x00000000000772dc
- (void)removeSection:(id)arg1;	// IMP=0x0000000000077200
- (void)updateSectionInfo:(id)arg1;	// IMP=0x0000000000077124
- (void)updateBulletin:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076fa3
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000076d17
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076abb
- (void)getBulletinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007689c
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076640
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000763e4
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076188
- (void)getSectionInfoForActiveSectionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000075f69
- (void)getSectionInfoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000075d4a
- (void)requestNoticesBulletinsForAllSections;	// IMP=0x0000000000075cba
- (void)requestNoticesBulletinsForSectionID:(id)arg1;	// IMP=0x0000000000075bda
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;	// IMP=0x0000000000075aba
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000000759a9
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;	// IMP=0x0000000000075867
- (void)clearSection:(id)arg1;	// IMP=0x0000000000075787
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;	// IMP=0x0000000000075697
- (void)handleResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075399
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;	// IMP=0x000000000007529e
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;	// IMP=0x00000000000751ae
- (_Bool)established;	// IMP=0x00000000000751a5
- (_Bool)isValid;	// IMP=0x000000000007519c
- (void)invalidate;	// IMP=0x0000000000075175
- (void)dealloc;	// IMP=0x000000000007510b
- (id)initWithObserver:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4;	// IMP=0x0000000000074bf8

@end
