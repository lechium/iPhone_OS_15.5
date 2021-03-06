//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOBatchOpportunisticTileDownloaderDelegate-Protocol.h>

@class GEOBatchOpportunisticTileDownloader, GEODataSaverTileLoaderManager, GEOPowerAssertion, GEORequestCounter, GEOResourceManifestManager, GEOStaleTileUpdater, GEOTileDB, GEOXPCActivity, NSDictionary, NSMapTable, NSMutableArray, NSString;
@protocol GEOProactiveTileDownloaderDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GEOProactiveTileDownloader : NSObject <GEOBatchOpportunisticTileDownloaderDelegate>
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    id <GEOProactiveTileDownloaderDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    GEOTileDB *_diskCache;	// 40 = 0x28
    NSString *_startCountry;	// 48 = 0x30
    NSString *_startRegion;	// 56 = 0x38
    GEODataSaverTileLoaderManager *_dataSaverManager;	// 64 = 0x40
    GEOResourceManifestManager *_manifestManager;	// 72 = 0x48
    GEORequestCounter *_requestCounter;	// 80 = 0x50
    struct GEOOnce_s _didStart;	// 88 = 0x58
    struct GEOOnce_s _didFinish;	// 96 = 0x60
    NSDictionary *_testDownloaders;	// 104 = 0x68
    NSMutableArray *_remainingPolicies;	// 112 = 0x70
    GEOStaleTileUpdater *_staleUpdater;	// 120 = 0x78
    unsigned long long _currentPolicy;	// 128 = 0x80
    GEOBatchOpportunisticTileDownloader *_currentDownloader;	// 136 = 0x88
    _Bool _policyEnabled[2];	// 144 = 0x90
    GEOPowerAssertion *_powerAssertion;	// 152 = 0x98
    GEOXPCActivity *_activity;	// 160 = 0xa0
    NSMapTable *_tileRequesterClasses;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_deferCheckinTimer;	// 176 = 0xb0
}

+ (_Bool)shouldDownloadTileType:(int)arg1;	// IMP=0x00000000007388e4
+ (_Bool)usesDiscretionaryDownloads;	// IMP=0x00000000007388ca
+ (_Bool)_canUseXPCActivity;	// IMP=0x00000000007388c2
+ (unsigned long long)maximumDownloadBatchSize;	// IMP=0x00000000007388ab
- (void).cxx_destruct;	// IMP=0x000000000073a7af
- (void)batchOpportunisticTileDownloaderDidFinish:(id)arg1;	// IMP=0x000000000073a5d0
- (void)batchOpportunisticTileDownloader:(id)arg1 failedToLoadKey:(struct _GEOTileKey)arg2 error:(id)arg3;	// IMP=0x000000000073a5be
- (void)batchOpportunisticTileDownloader:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(CDUnion_23a7df3d)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;	// IMP=0x000000000073a271
- (void)_pauseIfNecessary;	// IMP=0x000000000073a19d
- (void)_startNextDownloader;	// IMP=0x0000000000739d39
- (void)_finish;	// IMP=0x0000000000739bad
- (void)_start;	// IMP=0x00000000007395e8
- (void)_xpcActivityFired;	// IMP=0x0000000000739538
- (void)_registerXPCActivity;	// IMP=0x00000000007391e8
- (void)cancel;	// IMP=0x000000000073905b
- (void)start;	// IMP=0x0000000000738fb1
- (void)_clearXPCDeferralTimer;	// IMP=0x0000000000738f72
- (void)_registerXPCDeferralTimer;	// IMP=0x0000000000738e5c
- (void)_clearPowerAssertion;	// IMP=0x0000000000738dcc
- (void)_takePowerAssertionIfNecessary;	// IMP=0x0000000000738cf3
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 tileRequesterClasses:(id)arg4 dataSaverManager:(id)arg5 manifestManager:(id)arg6 requestCounter:(id)arg7 downloaders:(id)arg8;	// IMP=0x0000000000738a47
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 tileRequesterClasses:(id)arg4;	// IMP=0x0000000000738a20
- (id)init;	// IMP=0x00000000007389f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

