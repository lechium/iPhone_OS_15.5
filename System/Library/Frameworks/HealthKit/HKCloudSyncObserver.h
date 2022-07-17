//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKCloudSyncObserverClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKCloudSyncObserverStatus, HKTaskServerProxyProvider, NSProgress, NSString, NSUUID;
@protocol HKCloudSyncObserverDelegate;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface>
{
    NSUUID *_identifier;	// 8 = 0x8
    HKTaskServerProxyProvider *_proxyProvider;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
    HKCloudSyncObserverStatus *_status;	// 32 = 0x20
    id <HKCloudSyncObserverDelegate> _delegate;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
}

+ (id)clientInterface;	// IMP=0x000000000009a13e
+ (id)serverInterface;	// IMP=0x000000000009a11e
- (void).cxx_destruct;	// IMP=0x000000000009a243
- (void)connectionInvalidated;	// IMP=0x000000000009a23d
- (id)remoteInterface;	// IMP=0x000000000009a223
- (id)exportedInterface;	// IMP=0x000000000009a209
- (void)_clientQueue_didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2;	// IMP=0x000000000009a055
- (void)clientRemote_didFailToPopulateStatusWithError:(id)arg1;	// IMP=0x0000000000099f26
- (void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1;	// IMP=0x0000000000099dda
- (void)clientRemote_syncDidStart;	// IMP=0x0000000000099cab
- (void)startSyncIfRestoreNotCompleted;	// IMP=0x000000000009998b
- (void)startObservingSyncStatus;	// IMP=0x00000000000997e7
- (id)progress;	// IMP=0x00000000000997b0
@property(nonatomic) __weak id <HKCloudSyncObserverDelegate> delegate;
@property(readonly, copy, nonatomic) HKCloudSyncObserverStatus *status;
- (void)setProgress:(id)arg1;	// IMP=0x00000000000996fb
- (void)setStatus:(id)arg1;	// IMP=0x0000000000099642
- (id)initWithHealthStore:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000009954a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
