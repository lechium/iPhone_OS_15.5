//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryMusicCurationProvider-Protocol.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXStoryPhotoKitMusicCurationProvider : NSObject <PXStoryMusicCurationProvider>
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSMutableDictionary *_stateQueue_cache;	// 24 = 0x18
    NSMutableDictionary *_stateQueue_requests;	// 32 = 0x20
    NSArray *_stateQueue_recentlyUsedFlexSongIDs;	// 40 = 0x28
    NSArray *_stateQueue_recentlyUsedAppleMusicSongIDs;	// 48 = 0x30
    NSObject<OS_os_log> *_log;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000000005ec09
- (void).cxx_destruct;	// IMP=0x000000000005be8f
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSArray *stateQueue_recentlyUsedAppleMusicSongIDs; // @synthesize stateQueue_recentlyUsedAppleMusicSongIDs=_stateQueue_recentlyUsedAppleMusicSongIDs;
@property(retain, nonatomic) NSArray *stateQueue_recentlyUsedFlexSongIDs; // @synthesize stateQueue_recentlyUsedFlexSongIDs=_stateQueue_recentlyUsedFlexSongIDs;
@property(readonly, nonatomic) NSMutableDictionary *stateQueue_requests; // @synthesize stateQueue_requests=_stateQueue_requests;
@property(readonly, nonatomic) NSMutableDictionary *stateQueue_cache; // @synthesize stateQueue_cache=_stateQueue_cache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)_saveNegativeFeedbackForSongIdentifier:(id)arg1 memory:(id)arg2;	// IMP=0x000000000005bd54
- (void)_replaceSongWithSong:(id)arg1 inCachedResultForAssetCollection:(id)arg2;	// IMP=0x000000000005bc78
- (void)_removeRejectedSong:(id)arg1 fromCachedResultForAssetCollection:(id)arg2;	// IMP=0x000000000005bb9c
- (id)_cachedResultForAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x000000000005b9da
- (void)_handleMusicCurationResult:(id)arg1 forAssetCollection:(id)arg2 options:(id)arg3;	// IMP=0x000000000005b8cf
- (id)_performRequestForAssetCollection:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b44a
- (void)updateAudioAsset:(id)arg1 forAssetCollection:(id)arg2;	// IMP=0x000000000005b35d
- (void)applyNegativeFeedbackToSong:(id)arg1 forMemory:(id)arg2;	// IMP=0x000000000005b236
- (id)requestMusicCurationForAssetCollection:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005acf2
@property(retain, nonatomic) NSArray *recentlyUsedAppleMusicSongIDs;
@property(retain, nonatomic) NSArray *recentlyUsedFlexSongIDs;
- (id)init;	// IMP=0x000000000005a87e

@end
