//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface _CRKBundleManager : NSObject
{
    NSMutableSet *_bundles;	// 8 = 0x8
}

+ (Class)bundleClass;	// IMP=0x000000000001159c
+ (id)bundleDirectoryPath;	// IMP=0x0000000000011495
+ (id)sharedInstance;	// IMP=0x00000000000113ba
- (void).cxx_destruct;	// IMP=0x0000000000011ba5
@property(readonly, nonatomic) NSSet *bundles;
- (void)registerBundle:(id)arg1;	// IMP=0x0000000000011ad0
- (void)loadBundles;	// IMP=0x00000000000115ad
- (id)init;	// IMP=0x000000000001143f

@end

