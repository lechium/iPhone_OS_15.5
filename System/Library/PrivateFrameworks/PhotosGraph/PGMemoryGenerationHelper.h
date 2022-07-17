//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGMemoryGenerationHelper : NSObject
{
}

+ (_Bool)dates:(id)arg1 passSpreadicityWithMinimumCardinal:(unsigned long long)arg2 minimumTimeInterval:(double)arg3;	// IMP=0x0000000000381543
+ (id)assetFetchResultForMomentNodes:(id)arg1 inLocationOrAreaNode:(id)arg2 requireInteresting:(_Bool)arg3 curationManager:(id)arg4 progressReporter:(id)arg5;	// IMP=0x000000000038100a
+ (id)keyAssetFetchResultForHighlightGroupUUIDs:(id)arg1 curationManager:(id)arg2 allowGuestAsset:(_Bool)arg3;	// IMP=0x0000000000380f32
+ (id)assetLocalIdentifiersFromAssets:(id)arg1;	// IMP=0x0000000000380d77
+ (id)assetUUIDsFromAssets:(id)arg1;	// IMP=0x0000000000380bbc
+ (_Bool)prepareAssets:(id)arg1 forMemoriesWithTopTierAestheticScore:(double)arg2 curationContext:(id)arg3;	// IMP=0x0000000000380a06
+ (id)scoringContextForMemoriesWithAssets:(id)arg1 withTopTierAestheticScore:(double)arg2;	// IMP=0x00000000003809c1
+ (id)feederForMemoriesWithFeeder:(id)arg1 topTierAestheticScore:(double)arg2 didFeederChange:(_Bool *)arg3 curationContext:(id)arg4;	// IMP=0x0000000000380920
+ (id)feederForMemoriesWithAssetFetchResult:(id)arg1 memoryCurationSession:(id)arg2 graph:(id)arg3;	// IMP=0x00000000003806ff
+ (id)feederForMemoriesWithAssetLocalIdentifiers:(id)arg1 memoryCurationSession:(id)arg2 graph:(id)arg3 allowGuestAsset:(_Bool)arg4;	// IMP=0x00000000003805dd
+ (id)feederForMemoriesWithAssetCollection:(id)arg1 memoryCurationSession:(id)arg2 graph:(id)arg3 allowGuestAsset:(_Bool)arg4;	// IMP=0x00000000003804bb

@end
