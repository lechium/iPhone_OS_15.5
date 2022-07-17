//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CLKTreatedImageCache : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    NSMutableArray *_recentlyUsedKeys;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000000605a9
- (void).cxx_destruct;	// IMP=0x0000000000061303
- (id)_imageForKey:(id)arg1;	// IMP=0x0000000000060c14
- (void)_queue_pruneCacheIfNecessary;	// IMP=0x0000000000060b69
- (id)imageForRawImage:(id)arg1 maxSDKSize:(struct CGSize)arg2 maxDeviceSize:(struct CGSize)arg3 cornerRadius:(double)arg4;	// IMP=0x0000000000060a4a
- (id)imageForRawImage:(id)arg1 maxSDKSize:(struct CGSize)arg2 maxDeviceSize:(struct CGSize)arg3 maskMode:(long long)arg4;	// IMP=0x000000000006092f
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 cornerRadius:(double)arg4;	// IMP=0x000000000006082c
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 maskMode:(long long)arg4;	// IMP=0x000000000006072d
- (id)init;	// IMP=0x000000000006069f
- (void)purgeCache;	// IMP=0x0000000000060664

@end
