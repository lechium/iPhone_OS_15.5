//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface FMFMapImageCache : NSObject
{
    NSCache *__cache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000001a1c8
- (void).cxx_destruct;	// IMP=0x000000000001a7ac
@property(retain, nonatomic) NSCache *_cache; // @synthesize _cache=__cache;
- (id)_imageForMap:(id)arg1;	// IMP=0x000000000001a60b
- (id)_keyForHandles:(id)arg1;	// IMP=0x000000000001a4b6
- (id)_orientationKey;	// IMP=0x000000000001a449
- (id)cachedMapForHandles:(id)arg1;	// IMP=0x000000000001a3c9
- (void)cacheMap:(id)arg1 forHandles:(id)arg2;	// IMP=0x000000000001a305
- (void)dealloc;	// IMP=0x000000000001a282

@end
