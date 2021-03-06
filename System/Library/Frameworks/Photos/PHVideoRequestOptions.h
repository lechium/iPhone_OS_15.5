//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestLiveRenderingOptions-Protocol.h>
#import <Photos/PHMediaRequestThreadingOptions-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PHVideoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions>
{
    _Bool _networkAccessAllowed;	// 8 = 0x8
    _Bool _streamingAllowed;	// 9 = 0x9
    _Bool _videoComplementAllowed;	// 10 = 0xa
    _Bool _allowMediumHighQuality;	// 11 = 0xb
    _Bool _restrictToPlayableOnCurrentDevice;	// 12 = 0xc
    _Bool _liveRenderVideoIfNeeded;	// 13 = 0xd
    _Bool _liveRenderAndOnDemandRenderVideoConcurrently;	// 14 = 0xe
    long long _version;	// 16 = 0x10
    long long _deliveryMode;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    long long _streamingVideoIntent;	// 40 = 0x28
    long long _contentMode;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;	// 56 = 0x38
    long long _downloadIntent;	// 64 = 0x40
    long long _downloadPriority;	// 72 = 0x48
    struct CGSize _targetSize;	// 80 = 0x50
    CDStruct_e83c9415 _timeRange;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000202aab
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) long long downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(nonatomic) long long downloadIntent; // @synthesize downloadIntent=_downloadIntent;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(nonatomic) _Bool liveRenderAndOnDemandRenderVideoConcurrently; // @synthesize liveRenderAndOnDemandRenderVideoConcurrently=_liveRenderAndOnDemandRenderVideoConcurrently;
@property(nonatomic) _Bool liveRenderVideoIfNeeded; // @synthesize liveRenderVideoIfNeeded=_liveRenderVideoIfNeeded;
@property(nonatomic) _Bool restrictToPlayableOnCurrentDevice; // @synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic, getter=isMediumHighQualityAllowed) _Bool allowMediumHighQuality; // @synthesize allowMediumHighQuality=_allowMediumHighQuality;
@property(nonatomic, getter=isVideoComplementAllowed) _Bool videoComplementAllowed; // @synthesize videoComplementAllowed=_videoComplementAllowed;
@property(nonatomic) long long streamingVideoIntent; // @synthesize streamingVideoIntent=_streamingVideoIntent;
@property(nonatomic, getter=isStreamingAllowed) _Bool streamingAllowed; // @synthesize streamingAllowed=_streamingAllowed;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
- (_Bool)hasValidTimeRange;	// IMP=0x0000000000202888
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002022e2
- (id)init;	// IMP=0x000000000020227f
- (id)renderResultHandlerQueue;	// IMP=0x00000000001b1879
- (_Bool)isCurrentVersion;	// IMP=0x00000000001b1860
- (_Bool)isSynchronous;	// IMP=0x000000000020b9ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

