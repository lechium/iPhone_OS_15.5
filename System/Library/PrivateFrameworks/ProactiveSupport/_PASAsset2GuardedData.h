//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAsset, NSMutableDictionary, NSString;

@interface _PASAsset2GuardedData : NSObject
{
    NSString *_defaultBundlePath;	// 8 = 0x8
    unsigned long long _defaultBundleVersion;	// 16 = 0x10
    unsigned long long _bestAvailableVersion;	// 24 = 0x18
    unsigned long long _bestAssetVersionObserved;	// 32 = 0x20
    MAAsset *_bestAvailableAsset;	// 40 = 0x28
    _Bool _purgeObsoleteInstalledAssets;	// 48 = 0x30
    NSMutableDictionary *_overrides;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005bf9c

@end
