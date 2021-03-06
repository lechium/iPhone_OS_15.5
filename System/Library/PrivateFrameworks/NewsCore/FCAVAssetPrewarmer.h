//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAVAssetPrewarming-Protocol.h>
#import <NewsCore/FCKeyedOperationQueueDelegate-Protocol.h>

@class FCKeyedOperationQueue, NSCountedSet, NSMutableDictionary, NSString, NSTimer;
@protocol FCAVAssetResourceLoaderType;

@interface FCAVAssetPrewarmer : NSObject <FCKeyedOperationQueueDelegate, FCAVAssetPrewarming>
{
    id <FCAVAssetResourceLoaderType> _assetResourceLoader;	// 8 = 0x8
    FCKeyedOperationQueue *_prefetchQueue;	// 16 = 0x10
    NSCountedSet *_interestedAssets;	// 24 = 0x18
    NSMutableDictionary *_interestModificationDates;	// 32 = 0x20
    NSMutableDictionary *_interestTokensByAsset;	// 40 = 0x28
    unsigned long long _highWaterMark;	// 48 = 0x30
    NSTimer *_reprocessTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000143971
- (void)_revisitSuspendedState;	// IMP=0x000000000014387a
- (void)_reprocessInterestedAssets;	// IMP=0x0000000000143627
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000142982
- (void)removeInterestInAsset:(id)arg1;	// IMP=0x00000000001427c2
- (void)addInterestInAsset:(id)arg1;	// IMP=0x0000000000142587
- (id)init;	// IMP=0x0000000000142446

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

