//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Synapse/NSUserActivityObserver-Protocol.h>
#import <Synapse/SYNSUserActivityObserver_Extensions-Protocol.h>

@class NSDate, NSString, SYBacklinkMonitorClient, SYDefaultsClient, SYUserActivityIdentifierInfo;
@protocol OS_dispatch_queue;

@interface SYActivityObserver : NSObject <NSUserActivityObserver, SYNSUserActivityObserver_Extensions>
{
    _Bool __lastReportedActivityWasLinkable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *__observerQueue;	// 16 = 0x10
    SYBacklinkMonitorClient *__client;	// 24 = 0x18
    SYDefaultsClient *__defaultsClient;	// 32 = 0x20
    NSDate *__lastReportedActivityTime;	// 40 = 0x28
    SYUserActivityIdentifierInfo *__pendingActivityInfo;	// 48 = 0x30
    CDUnknownBlockType __delayedEvaluationBlock;	// 56 = 0x38
}

+ (_Bool)_appIsActive;	// IMP=0x000000000001d62d
+ (void)loadSynapseObserver;	// IMP=0x000000000001c475
+ (id)sharedInstance;	// IMP=0x000000000001c39c
- (void).cxx_destruct;	// IMP=0x000000000001dc72
@property(copy, nonatomic) CDUnknownBlockType _delayedEvaluationBlock; // @synthesize _delayedEvaluationBlock=__delayedEvaluationBlock;
@property(retain, nonatomic) SYUserActivityIdentifierInfo *_pendingActivityInfo; // @synthesize _pendingActivityInfo=__pendingActivityInfo;
@property _Bool _lastReportedActivityWasLinkable; // @synthesize _lastReportedActivityWasLinkable=__lastReportedActivityWasLinkable;
@property(retain, nonatomic) NSDate *_lastReportedActivityTime; // @synthesize _lastReportedActivityTime=__lastReportedActivityTime;
@property(retain, nonatomic) SYDefaultsClient *_defaultsClient; // @synthesize _defaultsClient=__defaultsClient;
@property(retain, nonatomic) SYBacklinkMonitorClient *_client; // @synthesize _client=__client;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue; // @synthesize _observerQueue=__observerQueue;
- (id)_defaultActivityObserverContext;	// IMP=0x000000000001db89
- (void)_handleAppResignActive:(id)arg1;	// IMP=0x000000000001da96
- (void)_handleAppBecomeActive:(id)arg1;	// IMP=0x000000000001d9a5
- (void)registerForAppStateNotifications;	// IMP=0x000000000001d7dc
- (void)userActivityCanonicalURLWasChanged:(id)arg1;	// IMP=0x000000000001d5bb
- (void)userActivityWebpageURLWasChanged:(id)arg1 webpageURL:(id)arg2 previousValue:(id)arg3;	// IMP=0x000000000001d549
- (void)userActivityTargetContentIdentifierWasChanged:(id)arg1 targetContentIdentifier:(id)arg2 previousValue:(id)arg3;	// IMP=0x000000000001d4d7
- (void)userActivityPersistentIdentifierWasChanged:(id)arg1 persistentIdentifier:(id)arg2 previousValue:(id)arg3;	// IMP=0x000000000001d465
- (void)userActivityDidBecomeCurrent:(id)arg1 current:(_Bool)arg2;	// IMP=0x000000000001d3d8
- (void)q_processActiveUserActivity:(id)arg1 identifier:(id)arg2 linkable:(_Bool)arg3 context:(id)arg4;	// IMP=0x000000000001cc57
- (void)_discoverAndProcessActiveUserActivityWithContext:(id)arg1;	// IMP=0x000000000001cb67
- (void)_reportActiveUserActivityChangeIfNeeded:(id)arg1 context:(id)arg2;	// IMP=0x000000000001c797
- (void)indexedContentItemsDidChange;	// IMP=0x000000000001c601
- (id)init;	// IMP=0x000000000001c3f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

