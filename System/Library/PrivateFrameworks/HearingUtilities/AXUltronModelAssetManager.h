//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXAssetControllerObserver-Protocol.h>

@class AXAssetController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface AXUltronModelAssetManager : NSObject <AXAssetControllerObserver>
{
    NSMutableArray *_observers;	// 8 = 0x8
    AXAssetController *_assetController;	// 16 = 0x10
    NSMutableDictionary *_assetsTotalBytesWritten;	// 24 = 0x18
    NSMutableDictionary *_assetsTotalTimeExpected;	// 32 = 0x20
    NSMutableDictionary *_assetDownloadStalled;	// 40 = 0x28
    NSMutableDictionary *_cachedAssets;	// 48 = 0x30
    NSDictionary *_modelMap;	// 56 = 0x38
    long long _previousReportedSize;	// 64 = 0x40
    long long _expectedDownloadSize;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000000005fb4
- (void).cxx_destruct;	// IMP=0x00000000000085ef
@property(nonatomic) long long expectedDownloadSize; // @synthesize expectedDownloadSize=_expectedDownloadSize;
@property(nonatomic) long long previousReportedSize; // @synthesize previousReportedSize=_previousReportedSize;
- (void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000000844f
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4 hasRemainingDownloads:(_Bool)arg5;	// IMP=0x0000000000008160
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(_Bool)arg5 expectedTimeRemaining:(double)arg6;	// IMP=0x0000000000007f62
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000007977
- (void)refresh;	// IMP=0x00000000000078f3
- (void)cacheAsset:(id)arg1;	// IMP=0x0000000000007820
- (long long)assetStatus;	// IMP=0x00000000000076d7
- (_Bool)isAssetDownloadStalled;	// IMP=0x0000000000007538
- (long long)totalExpectedTimeOfAllAssets;	// IMP=0x0000000000007391
- (long long)totalBytesOfAllAssetsWritten;	// IMP=0x00000000000071ea
- (void)updateDownloadingAsset:(id)arg1 totalBytesWritten:(long long)arg2 isStalled:(_Bool)arg3 expectedTimeRemaining:(double)arg4;	// IMP=0x00000000000070e9
- (void)downloadAssets;	// IMP=0x0000000000006ce5
- (void)run;	// IMP=0x0000000000006c74
- (long long)totalSizeExpected;	// IMP=0x0000000000006c6a
- (long long)totalSizeOccupied;	// IMP=0x0000000000006a84
- (id)localURLForDetector:(id)arg1;	// IMP=0x0000000000006a30
- (void)notifyAssetsState;	// IMP=0x000000000000691a
- (void)notifyDownloadProgress:(long long)arg1 totalSizeExpected:(long long)arg2 totalRemainingTime:(double)arg3 isStalled:(_Bool)arg4;	// IMP=0x0000000000006773
- (void)notifyAssetsNotReady;	// IMP=0x0000000000006645
- (void)notifyAssetsReady;	// IMP=0x00000000000064d9
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000648a
- (void)addObserver:(id)arg1;	// IMP=0x00000000000063fa
- (id)soundDetectionTypeForString:(id)arg1;	// IMP=0x00000000000063e4
- (void)_reset;	// IMP=0x0000000000006395
- (void)initializeModelMap;	// IMP=0x0000000000006163
- (id)init;	// IMP=0x0000000000006009

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
