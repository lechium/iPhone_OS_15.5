//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface PXPlacesImageCache : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000177c0
- (void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3;	// IMP=0x0000000000017717
- (id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;	// IMP=0x0000000000017673
- (void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;	// IMP=0x00000000000175e3
- (void)removeAllObjects;	// IMP=0x00000000000175cd
- (id)init;	// IMP=0x0000000000017561

@end
