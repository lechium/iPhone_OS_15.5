//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/TVPContentKeyLoading-Protocol.h>
#import <VideosUI/TVPMediaItemReporting-Protocol.h>
#import <VideosUI/TVPMediaItemReportingDelegate-Protocol.h>
#import <VideosUI/VUIStoreFPSKeyLoaderDelegate-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSObject, NSString, NSURL, TVPPlayer, VUIMutableBookmark, VUIStoreFPSKeyLoader, VUIVideoManagedObject;

@interface VUIStoreAuxMediaItem <VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate>
{
    _Bool _isAudioOnly;	// 8 = 0x8
    _Bool _disableResumeMenu;	// 9 = 0x9
    _Bool _disableScrubbing;	// 10 = 0xa
    _Bool _isiTunesPurchasedOrRentedContent;	// 11 = 0xb
    _Bool _ignoreExistingOfflineKeyData;	// 12 = 0xc
    _Bool _isFamilySharingContent;	// 13 = 0xd
    _Bool _isLiveContent;	// 14 = 0xe
    _Bool _isHLS;	// 15 = 0xf
    _Bool _isForStartingDownload;	// 16 = 0x10
    NSURL *_streamingOverrideURLForDownload;	// 24 = 0x18
    NSURL *_fpsCertificateURL;	// 32 = 0x20
    NSURL *_fpsKeyServerURL;	// 40 = 0x28
    NSDictionary *_fpsAdditionalServerParams;	// 48 = 0x30
    NSString *_bookmarkID;	// 56 = 0x38
    NSNumber *_bookmarkOverrideTime;	// 64 = 0x40
    NSURL *_url;	// 72 = 0x48
    VUIMutableBookmark *_bookmark;	// 80 = 0x50
    TVPPlayer *_scrubPlayer;	// 88 = 0x58
    VUIStoreFPSKeyLoader *_storeFPSKeyLoader;	// 96 = 0x60
    NSError *_fpsKeyError;	// 104 = 0x68
    NSObject *_parentReportingToken;	// 112 = 0x70
    long long _playbackType;	// 120 = 0x78
    VUIVideoManagedObject *_videoManagedObject;	// 128 = 0x80
}

+ (void)initialize;	// IMP=0x00000000002b1d1d
- (void).cxx_destruct;	// IMP=0x00000000002b7e2c
@property(nonatomic) _Bool isForStartingDownload; // @synthesize isForStartingDownload=_isForStartingDownload;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // @synthesize videoManagedObject=_videoManagedObject;
@property(nonatomic) _Bool isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(retain, nonatomic) NSObject *parentReportingToken; // @synthesize parentReportingToken=_parentReportingToken;
@property(retain, nonatomic) NSError *fpsKeyError; // @synthesize fpsKeyError=_fpsKeyError;
@property(retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader; // @synthesize storeFPSKeyLoader=_storeFPSKeyLoader;
@property(retain, nonatomic) TVPPlayer *scrubPlayer; // @synthesize scrubPlayer=_scrubPlayer;
@property(retain, nonatomic) VUIMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool isLiveContent; // @synthesize isLiveContent=_isLiveContent;
@property(nonatomic) _Bool isFamilySharingContent; // @synthesize isFamilySharingContent=_isFamilySharingContent;
@property(nonatomic) _Bool ignoreExistingOfflineKeyData; // @synthesize ignoreExistingOfflineKeyData=_ignoreExistingOfflineKeyData;
@property(nonatomic) _Bool isiTunesPurchasedOrRentedContent; // @synthesize isiTunesPurchasedOrRentedContent=_isiTunesPurchasedOrRentedContent;
@property(nonatomic) _Bool disableScrubbing; // @synthesize disableScrubbing=_disableScrubbing;
@property(nonatomic) _Bool disableResumeMenu; // @synthesize disableResumeMenu=_disableResumeMenu;
@property(copy, nonatomic) NSNumber *bookmarkOverrideTime; // @synthesize bookmarkOverrideTime=_bookmarkOverrideTime;
@property(copy, nonatomic) NSString *bookmarkID; // @synthesize bookmarkID=_bookmarkID;
@property(nonatomic) _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(copy, nonatomic) NSDictionary *fpsAdditionalServerParams; // @synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @synthesize fpsKeyServerURL=_fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsCertificateURL; // @synthesize fpsCertificateURL=_fpsCertificateURL;
@property(copy, nonatomic) NSURL *streamingOverrideURLForDownload; // @synthesize streamingOverrideURLForDownload=_streamingOverrideURLForDownload;
- (id)_offlineKeyDataForKeyRequest:(id)arg1;	// IMP=0x00000000002b79a3
- (void)_scrubPlayerItemDidLoad:(id)arg1;	// IMP=0x00000000002b7921
- (void)_keepKeyLoaderAlive:(id)arg1;	// IMP=0x00000000002b791b
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;	// IMP=0x00000000002b755b
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;	// IMP=0x00000000002b71bc
- (void)updateOfflineKeyWithIdentifier:(id)arg1 updatedOfflineKeyData:(id)arg2;	// IMP=0x00000000002b6d6f
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b6586
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;	// IMP=0x00000000002b6572
- (void)mediaItem:(id)arg1 didChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5;	// IMP=0x00000000002b6495
- (void)mediaItem:(id)arg1 errorDidOccur:(id)arg2 player:(id)arg3;	// IMP=0x00000000002b60b1
- (id)reportingDelegate;	// IMP=0x00000000002b60a8
- (void)cleanUpMediaItem;	// IMP=0x00000000002b5f42
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x00000000002b5a49
- (id)_replacementErrorForITunesPlaybackError:(id)arg1;	// IMP=0x00000000002b550a
- (id)_replacementErrorForPlaybackError:(id)arg1;	// IMP=0x00000000002b4ef0
- (id)replacementErrorForPlaybackError:(id)arg1;	// IMP=0x00000000002b4e7b
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b4183
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000002b3f7d
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000002b3751
- (_Bool)hasTrait:(id)arg1;	// IMP=0x00000000002b33f6
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x00000000002b3338
- (id)mediaItemURL;	// IMP=0x00000000002b3326
- (void)dealloc;	// IMP=0x00000000002b32b4
- (void)resetReportingEventCollection;	// IMP=0x00000000002b3218
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1;	// IMP=0x00000000002b31b2
- (id)initWithVideoManagedObject:(id)arg1 isForStartingDownload:(_Bool)arg2 externalBookmarkTime:(id)arg3 externalBookmarkTimestamp:(id)arg4;	// IMP=0x00000000002b2029
- (id)initWithURL:(id)arg1;	// IMP=0x00000000002b1d9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

