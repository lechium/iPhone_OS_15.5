//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VSNonChannelAppDecider : NSObject
{
    NSArray *_appDescriptions;	// 8 = 0x8
    NSString *_preferredAppBundleOrAdamID;	// 16 = 0x10
    NSString *_preferredDeviceFamily;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000537e3
@property(copy, nonatomic) NSString *preferredDeviceFamily; // @synthesize preferredDeviceFamily=_preferredDeviceFamily;
@property(copy, nonatomic) NSString *preferredAppBundleOrAdamID; // @synthesize preferredAppBundleOrAdamID=_preferredAppBundleOrAdamID;
@property(copy, nonatomic) NSArray *appDescriptions; // @synthesize appDescriptions=_appDescriptions;
- (id)decidedNonChannelApps;	// IMP=0x0000000000053022
- (id)init;	// IMP=0x0000000000052fd1

@end

