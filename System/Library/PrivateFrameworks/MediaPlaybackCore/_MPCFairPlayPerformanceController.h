//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPServerObjectDatabaseObserver-Protocol.h>

@class MPCPlaybackEngine, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MPCFairPlayPerformanceController : NSObject <MPCPlaybackEngineEventObserving, MPServerObjectDatabaseObserver>
{
    NSMutableSet *_SAPSignPrewarmingAccounts;	// 8 = 0x8
    NSMutableSet *_SAPSignPrewarmedAccounts;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_miniQueue;	// 24 = 0x18
    NSMutableSet *_miniSINFEndpointLoadingAccounts;	// 32 = 0x20
    NSMutableDictionary *_miniSINFAccounts;	// 40 = 0x28
    _Bool _scheduledMiniSINFs;	// 48 = 0x30
    MPCPlaybackEngine *_playbackEngine;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000016be87
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_prewarmSAPSigningForAccount:(id)arg1;	// IMP=0x000000000016b993
- (void)_prewarmMiniSINFEndpointForAccount:(id)arg1;	// IMP=0x000000000016b419
- (void)_fetchMiniSINFsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000016b215
- (void)scheduleMiniSINFFetch;	// IMP=0x000000000016b1ca
- (void)_optimisticallyFetchLeaseForAccount:(id)arg1;	// IMP=0x000000000016af05
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000000016ae6f
- (void)database:(id)arg1 didFinishImportRequest:(id)arg2;	// IMP=0x000000000016ae5d
- (void)engine:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x000000000016abed
- (void)dealloc;	// IMP=0x000000000016ab4e
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000016a9a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

