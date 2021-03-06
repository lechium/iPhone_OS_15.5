//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundImagesDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_imageSavingQueue;	// 16 = 0x10
    NSArray *_defaultImageURLs;	// 24 = 0x18
    NSArray *_imageURLsWithLuminance;	// 32 = 0x20
    NSMutableDictionary *_pendingImageThumbnailRequests;	// 40 = 0x28
    struct Vector<WTF::RetainPtr<CGImage *>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _imageCache;	// 48 = 0x30
    NSURL *_thumbnailsPath;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x0000000000070f1a
- (void).cxx_destruct;	// IMP=0x0000000000070ebd
- (long long)indexOfBackgroundImageWithName:(id)arg1;	// IMP=0x0000000000070b90
- (RetainPtr_c27edd19)_createThumbnail:(id)arg1 imageSource:(RetainPtr_36f90b78)arg2;	// IMP=0x000000000007079d
- (id)_thumbnailURLWithItemIndex:(long long)arg1;	// IMP=0x0000000000070631
- (id)imageURLAndLuminanceWithItemIndex:(long long)arg1;	// IMP=0x000000000007061b
- (void)imageThumbnailWithItemIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ff17
@property(readonly, nonatomic) long long itemCount;
- (id)initWithBundle:(id)arg1 localCachesDirectory:(id)arg2;	// IMP=0x000000000006fd72
- (id)initWithBuiltInImageURLs:(id)arg1 localCachesDirectory:(id)arg2;	// IMP=0x000000000006f196

@end

