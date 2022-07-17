//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDFrameImageCache : NSObject
{
    NSMutableArray *mEntries;	// 8 = 0x8
}

+ (id)sharedFrameImageCache;	// IMP=0x00000000001e0c14
- (void)p_didReceiveMemoryWarning:(id)arg1;	// IMP=0x00000000001e121d
- (id)p_newEntryForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(_Bool)arg4;	// IMP=0x00000000001e0fba
- (struct CGImage *)setCachedImage:(struct CGImage *)arg1 forFrame:(id)arg2 size:(struct CGSize)arg3 viewScale:(double)arg4 forCALayer:(_Bool)arg5 mask:(_Bool)arg6;	// IMP=0x00000000001e0eec
- (struct CGImage *)newCachedImageForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 forCALayer:(_Bool)arg4 mask:(_Bool)arg5;	// IMP=0x00000000001e0e3d
- (void)dealloc;	// IMP=0x00000000001e0dd6
- (id)init;	// IMP=0x00000000001e0d24
- (void)didCloseDocument;	// IMP=0x00000000001e0d0e

@end
