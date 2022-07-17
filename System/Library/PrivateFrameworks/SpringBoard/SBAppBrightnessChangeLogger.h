//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SBAppBrightnessChangeLogger : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    long long _brightnessLevel;	// 16 = 0x10
    NSDate *_eventTimestamp;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000005bcfee
- (void).cxx_destruct;	// IMP=0x00000000005bd4bf
- (void)_screenLocked;	// IMP=0x00000000005bd4ad
- (void)_publishMetrics;	// IMP=0x00000000005bd2d2
- (void)_publishMetricsIfNeeded;	// IMP=0x00000000005bd28f
- (void)noteApp:(id)arg1 setScreenBrightness:(double)arg2;	// IMP=0x00000000005bd0fc
- (id)init;	// IMP=0x00000000005bd043

@end
