//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface WKApplicationProxy : NSObject
{
    NSURL *_bundleURL;	// 8 = 0x8
}

+ (id)gizmoAppBundleUrlWithPluginUrl:(id)arg1;	// IMP=0x000000000001e1d5
+ (id)watchAppBundleUrlWithContainerUrl:(id)arg1;	// IMP=0x000000000001dfed
+ (id)applicationsForContainerProxy:(id)arg1;	// IMP=0x000000000001db4d
- (void).cxx_destruct;	// IMP=0x000000000001e3c7
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
- (id)initWithBundleURL:(id)arg1;	// IMP=0x000000000001daf8

@end

