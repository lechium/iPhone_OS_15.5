//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayerItem.h>

#import <Home/AVAssetResourceLoaderDelegate-Protocol.h>
#import <Home/HFCameraClipQueuableItem-Protocol.h>

@class HFCameraClipVideoAssetContextProvider, HMCameraClip, HMCameraClipManager, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HFCameraClipPlayerItem : AVPlayerItem <AVAssetResourceLoaderDelegate, HFCameraClipQueuableItem>
{
    HMCameraClip *_clip;	// 16 = 0x10
    HMCameraClipManager *_clipManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;	// 32 = 0x20
    HFCameraClipVideoAssetContextProvider *_videoContextProvider;	// 40 = 0x28
}

+ (id)_assetOptionsForClip:(id)arg1;	// IMP=0x00000000001224f8
+ (id)_playlistURL;	// IMP=0x000000000012247b
- (void).cxx_destruct;	// IMP=0x000000000012378a
@property(readonly, nonatomic) HFCameraClipVideoAssetContextProvider *videoContextProvider; // @synthesize videoContextProvider=_videoContextProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceLoaderQueue; // @synthesize resourceLoaderQueue=_resourceLoaderQueue;
@property(readonly, nonatomic) HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(readonly, nonatomic) HMCameraClip *clip; // @synthesize clip=_clip;
- (void)dealloc;	// IMP=0x00000000001236b1
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x0000000000122a54
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2;	// IMP=0x000000000012263b
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;	// IMP=0x0000000000122586

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
