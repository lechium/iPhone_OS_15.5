//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NTKFaceBundleLoader : NSObject
{
    NSArray *_cachedFaceBundles;	// 8 = 0x8
    struct os_unfair_lock_s _cacheLock;	// 16 = 0x10
}

+ (id)faceBundleLoaderWithDirectories:(id)arg1;	// IMP=0x0000000000160972
- (void).cxx_destruct;	// IMP=0x0000000000160e2f
- (void)enumerateFaceBundleClassesIgnoringCache:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001609f4
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001609ee
- (id)init;	// IMP=0x0000000000160937

@end
