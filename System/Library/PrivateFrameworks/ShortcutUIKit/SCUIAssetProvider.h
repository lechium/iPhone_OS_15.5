//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, _UIAssetManager;

@interface SCUIAssetProvider : NSObject
{
    NSURL *_bundleURL;	// 8 = 0x8
    _UIAssetManager *_assetManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001d0e
- (id)_assetManager;	// IMP=0x0000000000001c44
- (id)imageNamed:(id)arg1;	// IMP=0x0000000000001b52
- (id)initWithBundleURL:(id)arg1;	// IMP=0x0000000000001a6c

@end
