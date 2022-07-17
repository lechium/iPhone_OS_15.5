//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface ASDMediaClipTaskURLBuilder : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    NSNumber *_externalVersionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000022306
@property(retain, nonatomic) NSNumber *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
- (id)_queryPromise;	// IMP=0x0000000000021ef8
- (id)_pathPromise;	// IMP=0x0000000000021b3d
- (id)_hostPromise;	// IMP=0x0000000000021ae2
- (id)_devicePlatform;	// IMP=0x0000000000021aa4
- (id)build;	// IMP=0x0000000000021818
- (id)initWithBundleID:(id)arg1 bag:(id)arg2;	// IMP=0x000000000002177f

@end
