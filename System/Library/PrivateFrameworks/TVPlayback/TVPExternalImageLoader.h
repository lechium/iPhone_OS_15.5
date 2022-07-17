//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPPlaybackImageLoader-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, TVPExternalImageConfig;

__attribute__((visibility("hidden")))
@interface TVPExternalImageLoader : NSObject <TVPPlaybackImageLoader>
{
    TVPExternalImageConfig *_config;	// 8 = 0x8
    NSMutableSet *_imageProxies;	// 16 = 0x10
    NSMutableDictionary *_imageProxyMappings;	// 24 = 0x18
    NSMutableSet *_loadedImageActualTimes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000061f68
@property(retain, nonatomic) NSMutableSet *loadedImageActualTimes; // @synthesize loadedImageActualTimes=_loadedImageActualTimes;
@property(retain, nonatomic) NSMutableDictionary *imageProxyMappings; // @synthesize imageProxyMappings=_imageProxyMappings;
@property(retain, nonatomic) NSMutableSet *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(retain, nonatomic) TVPExternalImageConfig *config; // @synthesize config=_config;
- (id)_closestURLForImageTime:(double)arg1 actualTime:(double *)arg2;	// IMP=0x0000000000061cbb
- (unsigned long long)_closestImageIndexForTime:(double)arg1 actualTime:(double *)arg2 imageInterval:(double)arg3;	// IMP=0x0000000000061b30
- (id)loadedImageForTime:(double)arg1;	// IMP=0x0000000000061b28
- (_Bool)imageIsLoadedForTime:(double)arg1;	// IMP=0x0000000000061b20
@property(readonly, nonatomic) double lastImageTime;
@property(readonly, nonatomic) double firstImageTime;
- (void)cancelImageLoadingForIdentifiers:(id)arg1;	// IMP=0x0000000000061a27
- (id)loadImagesForTimes:(id)arg1 maxSize:(struct CGSize)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061a0e
- (double)closestImageTimeForTime:(double)arg1 imageInterval:(double)arg2;	// IMP=0x00000000000619e2
- (double)closestImageTimeForTime:(double)arg1;	// IMP=0x0000000000061974
- (void)invalidate;	// IMP=0x00000000000618f3
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000006177b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
