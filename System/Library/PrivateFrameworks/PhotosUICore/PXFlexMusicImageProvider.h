//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface PXFlexMusicImageProvider
{
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000735eef
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
- (id)resultForCompletedImageLoader:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000735af3
- (id)createImageLoaderForRequest:(id)arg1;	// IMP=0x000000000073587b
- (id)imageLoaderCoalescingKeyForRequest:(id)arg1;	// IMP=0x0000000000735869
- (id)imageCacheKeyForRequest:(id)arg1;	// IMP=0x00000000007355b6
- (id)init;	// IMP=0x000000000073554c

@end
