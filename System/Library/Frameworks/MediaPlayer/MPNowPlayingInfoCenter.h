//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaRemoteEntityArtworkGenerator-Protocol.h>

@class MPArtworkResizeUtility, MPNowPlayingContentItem, MPNowPlayingInfoCenterArtworkContext, MRPlayerPath, MSVLRUDictionary, MSVTimer, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDataSource, MPNowPlayingPlaybackQueueDelegate, OS_dispatch_queue;

@interface MPNowPlayingInfoCenter : NSObject <MPMediaRemoteEntityArtworkGenerator>
{
    NSDictionary *_nowPlayingInfo;	// 8 = 0x8
    NSDictionary *_queuedNowPlayingInfo;	// 16 = 0x10
    NSDictionary *_convertedNowPlayingInfo;	// 24 = 0x18
    NSDate *_pushDate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    MPNowPlayingInfoCenterArtworkContext *_publishedContext;	// 56 = 0x38
    NSMutableDictionary *_mutatedContentItems;	// 64 = 0x40
    NSMutableDictionary *_mutatedPlaybackQueueRequests;	// 72 = 0x48
    struct _MSVSignedRange _loadedContentItemsRange;	// 80 = 0x50
    struct _MSVSignedRange _requestedContentItemsRange;	// 96 = 0x60
    NSMutableArray *_contentItemIdentifiers;	// 112 = 0x70
    MSVLRUDictionary *_contentItems;	// 120 = 0x78
    MPNowPlayingContentItem *_nowPlayingContentItem;	// 128 = 0x80
    unsigned long long _playbackState;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_utilityQueue;	// 144 = 0x90
    MPArtworkResizeUtility *_artworkResizeUtility;	// 152 = 0x98
    MSVTimer *_contentItemInvalidationTimer;	// 160 = 0xa0
    id <MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;	// 168 = 0xa8
    id <MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;	// 176 = 0xb0
    struct {
        void *createPlaybackQueue;
        void *createContentItem;
        void *createChildItem;
        void *metadata;
        void *artwork;
        void *info;
        void *languageOptions;
        void *lyrics;
    } _callbacks;	// 184 = 0xb8
    void *_fallbackActivity;	// 248 = 0xf8
    _Bool _invalidated;	// 256 = 0x100
    unsigned long long _stateHandle;	// 264 = 0x108
    id <MPNowPlayingPlaybackQueueDelegate> _playbackQueueDelegate;	// 272 = 0x110
    MRPlayerPath *_playerPath;	// 280 = 0x118
    NSString *_representedApplicationBundleIdentifier;	// 288 = 0x120
    NSObject<OS_dispatch_queue> *_dataSourceQueue;	// 296 = 0x128
}

+ (id)serviceQueue;	// IMP=0x00000000001c5b8d
+ (id)infoCenterForPlayerPath:(id)arg1;	// IMP=0x00000000001c5af8
+ (id)infoCenterForPlayerID:(id)arg1;	// IMP=0x00000000001c59eb
+ (id)defaultCenter;	// IMP=0x00000000001c59bb
- (void).cxx_destruct;	// IMP=0x00000000001c033d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue; // @synthesize dataSourceQueue=_dataSourceQueue;
@property(copy, nonatomic) NSString *representedApplicationBundleIdentifier; // @synthesize representedApplicationBundleIdentifier=_representedApplicationBundleIdentifier;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) __weak id <MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate; // @synthesize playbackQueueDelegate=_playbackQueueDelegate;
- (void)_onQueue_pushContentItemsUpdate;	// IMP=0x00000000001bfc61
- (void)_contentItemChangedNotification:(id)arg1;	// IMP=0x00000000001bfb09
- (id)_onQueue_stateDictionary;	// IMP=0x00000000001bf840
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg1;	// IMP=0x00000000001bf079
- (void)_onQueue_registerLyricsDelegateCallbacks:(id)arg1;	// IMP=0x00000000001beeac
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;	// IMP=0x00000000001bedc6
- (void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001be910
- (id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg1;	// IMP=0x00000000001be874
- (void)_invalidatePlaybackQueueImmediatelyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001be485
- (void)_getTransportablePlaybackSessionRepresentationWithIdentifier:(id)arg1 preferredSessionType:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001be387
- (void)_getMetadataForContentItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001be0de
- (void *)_createPlaybackQueueForRequest:(void *)arg1;	// IMP=0x00000000001bdea0
- (id)_contentItemForIdentifier:(id)arg1 alreadyOnDataSourceQueue:(_Bool)arg2;	// IMP=0x00000000001bdc8d
- (id)_contentItemForIdentifier:(id)arg1;	// IMP=0x00000000001bdc79
- (id)_contentItemIDsInRange:(CDStruct_912cb5d2)arg1 itemsRange:(CDStruct_912cb5d2 *)arg2;	// IMP=0x00000000001bda59
- (id)_childContentItemForContentItem:(id)arg1 index:(long long)arg2;	// IMP=0x00000000001bd987
- (void)_becomeActiveIfPossibleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001bd896
- (void)_becomeActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001bd79c
- (id)_artworkCatalogForContentItem:(id)arg1;	// IMP=0x00000000001bd688
@property(readonly, nonatomic) _Bool supportsArtworkCatalogLoading;
- (_Bool)isInvalidated;	// IMP=0x00000000001bd541
- (CDUnknownBlockType)artworkCatalogBlockForContentItem:(id)arg1;	// IMP=0x00000000001bd481
@property(retain, nonatomic) MPNowPlayingContentItem *nowPlayingContentItem;
- (void)invalidatePlaybackQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001bd222
- (void)invalidatePlaybackQueue;	// IMP=0x00000000001bd209
@property(nonatomic) __weak id <MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property(nonatomic) __weak id <MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
- (void)resignActiveSystemFallback;	// IMP=0x00000000001bce52
- (void)becomeActiveSystemFallback;	// IMP=0x00000000001bcd7a
- (void)becomeActive;	// IMP=0x00000000001bcd66
@property(readonly, nonatomic) NSString *playerID;
@property(nonatomic) unsigned long long playbackState;
- (void)invalidate;	// IMP=0x00000000001bca98
- (void)dealloc;	// IMP=0x00000000001bc9d2
- (id)init;	// IMP=0x00000000001bc990
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x00000000001bc578
- (id)initWithPlayerID:(id)arg1;	// IMP=0x00000000001bc45a
- (void)_onQueue_pushNowPlayingInfoAndRetry:(_Bool)arg1;	// IMP=0x00000000001ca2c8
@property(copy, nonatomic) NSDictionary *nowPlayingInfo; // @dynamic nowPlayingInfo;
- (void)_initializeNowPlayingInfo;	// IMP=0x00000000001ca159

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
