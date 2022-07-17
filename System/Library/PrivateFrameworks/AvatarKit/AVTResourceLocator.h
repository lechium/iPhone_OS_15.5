//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface AVTResourceLocator : NSObject
{
    NSMutableDictionary *_imageCache;	// 8 = 0x8
    NSURL *_resourcesURL;	// 16 = 0x10
    NSURL *_environmentResourcesURL;	// 24 = 0x18
    NSURL *_memojiResourcesURL;	// 32 = 0x20
    NSURL *_animojiResourcesURL;	// 40 = 0x28
    NSURL *_stickerResourcesURL;	// 48 = 0x30
    NSURL *_poseResourcesURL;	// 56 = 0x38
    NSURL *_memojiAssetsURL;	// 64 = 0x40
    NSURL *_rootCacheURL;	// 72 = 0x48
    NSURL *_subdivDataCacheURL;	// 80 = 0x50
}

+ (id)_resourcePathInDirectoryURL:(id)arg1 subDirectory:(id)arg2 name:(id)arg3 ofType:(id)arg4;	// IMP=0x0000000000013906
+ (id)sharedResourceLocator;	// IMP=0x000000000001383b
- (void).cxx_destruct;	// IMP=0x0000000000014e63
- (void)deleteLegacyCache;	// IMP=0x0000000000014952
- (void)deleteObsoleteVersionsInCache:(id)arg1 currentVersion:(unsigned long long)arg2;	// IMP=0x0000000000014210
@property(readonly) NSURL *subdivDataCacheURL;
@property(readonly) NSURL *rootCacheURL;
- (void)initCaches;	// IMP=0x0000000000013daa
- (struct CGImage *)imageWithPath:(id)arg1;	// IMP=0x0000000000013bf3
@property(readonly) NSURL *memojiAssetsURL;
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x0000000000013bb9
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000013b91
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x0000000000013b65
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000013b3d
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x0000000000013b11
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000013ae9
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x0000000000013abd
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000013a95
- (id)pathForEnvironmentResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x0000000000013a69
- (id)pathForEnvironmentResource:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000013a41
@property(readonly) NSURL *poseResourcesURL;
@property(readonly) NSURL *stickerResourcesURL;
@property(readonly) NSURL *animojiResourcesURL;
@property(readonly) NSURL *memojiResourcesURL;
@property(readonly) NSURL *resourcesURL;
- (id)init;	// IMP=0x0000000000013310

@end
