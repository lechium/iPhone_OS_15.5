//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface CSLPRFApp : NSObject
{
    _Bool _supportsAlwaysOnDisplay;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    UIImage *_icon;	// 32 = 0x20
    NSString *_sdkVersion;	// 40 = 0x28
}

+ (id)appWithBundleID:(id)arg1 name:(id)arg2 icon:(id)arg3 sdkVersion:(id)arg4 supportsAlwaysOnDisplay:(_Bool)arg5;	// IMP=0x0000000000002505
- (void).cxx_destruct;	// IMP=0x000000000000284b
@property(nonatomic) _Bool supportsAlwaysOnDisplay; // @synthesize supportsAlwaysOnDisplay=_supportsAlwaysOnDisplay;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (long long)compare:(id)arg1;	// IMP=0x00000000000026d1
- (id)initWithBundleID:(id)arg1 name:(id)arg2 icon:(id)arg3 sdkVersion:(id)arg4 supportsAlwaysOnDisplay:(_Bool)arg5;	// IMP=0x00000000000025bc

@end
