//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface UsedApp : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSDate *_lastExtensionLaunched;	// 16 = 0x10
    NSDate *_lastLaunched;	// 24 = 0x18
    long long _usageWindowMatchType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000031be5
@property(nonatomic) long long usageWindowMatchType; // @synthesize usageWindowMatchType=_usageWindowMatchType;
@property(copy, nonatomic) NSDate *lastLaunched; // @synthesize lastLaunched=_lastLaunched;
@property(copy, nonatomic) NSDate *lastExtensionLaunched; // @synthesize lastExtensionLaunched=_lastExtensionLaunched;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isExtensionUsage;	// IMP=0x0010000000031b52
- (id)description;	// IMP=0x0010000000031a96
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000319ff
- (id)initWithBundleID:(id)arg1;	// IMP=0x00100000000319a5

@end

