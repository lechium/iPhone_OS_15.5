//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClipServices/NSCopying-Protocol.h>
#import <ClipServices/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CPSClipLaunchOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _skipsLaunching;	// 8 = 0x8
    _Bool _showsAppAttributionBanner;	// 9 = 0x9
    NSNumber *_userNotificationGranted;	// 16 = 0x10
    NSNumber *_locationConfirmationGranted;	// 24 = 0x18
    NSString *_predefinedBundleID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000cfc2
+ (id)optionsForAppClipRecord:(id)arg1;	// IMP=0x000000000000ce5b
- (void).cxx_destruct;	// IMP=0x000000000000d23f
@property(nonatomic) _Bool showsAppAttributionBanner; // @synthesize showsAppAttributionBanner=_showsAppAttributionBanner;
@property(nonatomic) _Bool skipsLaunching; // @synthesize skipsLaunching=_skipsLaunching;
@property(copy, nonatomic) NSString *predefinedBundleID; // @synthesize predefinedBundleID=_predefinedBundleID;
@property(retain, nonatomic) NSNumber *locationConfirmationGranted; // @synthesize locationConfirmationGranted=_locationConfirmationGranted;
@property(retain, nonatomic) NSNumber *userNotificationGranted; // @synthesize userNotificationGranted=_userNotificationGranted;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d11a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cfca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000cf09

@end

