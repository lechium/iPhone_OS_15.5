//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/NSCopying-Protocol.h>

@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying>
{
    UIColor *_backgroundColor;	// 8 = 0x8
}

+ (id)tertiarySystemGroupedBackgroundColor;	// IMP=0x000000000005abf1
+ (id)secondarySystemGroupedBackgroundColor;	// IMP=0x000000000005abd8
+ (id)systemGroupedBackgroundColor;	// IMP=0x000000000005abbf
+ (id)tertiarySystemBackgroundColor;	// IMP=0x000000000005aba6
+ (id)secondarySystemBackgroundColor;	// IMP=0x000000000005ab8d
+ (id)systemBackgroundColor;	// IMP=0x000000000005ab74
+ (id)tableViewAppearance;	// IMP=0x000000000005a87d
+ (id)defaultAppearance;	// IMP=0x000000000005a80f
- (void).cxx_destruct;	// IMP=0x000000000005ac25
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)updateBackgroundColorWithJSString:(id)arg1;	// IMP=0x000000000005a8eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a7ca

@end

