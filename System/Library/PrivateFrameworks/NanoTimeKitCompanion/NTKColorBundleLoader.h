//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, NTKBundleLoader;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKColorBundleLoader : NSObject
{
    NTKBundleLoader *_bundleLoader;	// 8 = 0x8
    NSURL *_colorBundlesDirectory;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_colorBundleSource;	// 32 = 0x20
    NSArray *_sortedBundles;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000000002c1f43
- (void).cxx_destruct;	// IMP=0x00000000002c271a
@property(retain, nonatomic) NSArray *sortedBundles; // @synthesize sortedBundles=_sortedBundles;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *colorBundleSource; // @synthesize colorBundleSource=_colorBundleSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSURL *colorBundlesDirectory; // @synthesize colorBundlesDirectory=_colorBundlesDirectory;
@property(retain, nonatomic) NTKBundleLoader *bundleLoader; // @synthesize bundleLoader=_bundleLoader;
- (id)sortedBundles:(id)arg1;	// IMP=0x00000000002c255e
- (void)_startMonitoringColorBundlesDirectoryIfNeeded;	// IMP=0x00000000002c2314
- (id)loadColorBundles;	// IMP=0x00000000002c2073
- (id)init;	// IMP=0x00000000002c1fc8

@end

