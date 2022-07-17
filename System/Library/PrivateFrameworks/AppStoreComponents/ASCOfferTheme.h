//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class UIColor;

@interface ASCOfferTheme : NSObject <NSSecureCoding, NSCopying>
{
    UIColor *_titleBackgroundColor;	// 8 = 0x8
    UIColor *_titleTextColor;	// 16 = 0x10
    UIColor *_titleTextDisabledColor;	// 24 = 0x18
    UIColor *_subtitleTextColor;	// 32 = 0x20
    UIColor *_iconTintColor;	// 40 = 0x28
    UIColor *_progressColor;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e47a
+ (id)secondaryTheme;	// IMP=0x000000000000e315
+ (id)primaryTheme;	// IMP=0x000000000000e2fc
+ (id)adTheme;	// IMP=0x000000000000e0bf
+ (id)confirmationForTheme:(id)arg1;	// IMP=0x000000000000df50
+ (id)loadingTheme;	// IMP=0x000000000000df3e
+ (id)whiteTheme;	// IMP=0x000000000000dda7
+ (id)blueTheme;	// IMP=0x000000000000dc68
+ (id)grayTheme;	// IMP=0x000000000000db29
- (void).cxx_destruct;	// IMP=0x000000000000f094
@property(readonly, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(readonly, nonatomic) UIColor *iconTintColor; // @synthesize iconTintColor=_iconTintColor;
@property(readonly, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextDisabledColor; // @synthesize titleTextDisabledColor=_titleTextDisabledColor;
@property(readonly, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(readonly, nonatomic) UIColor *titleBackgroundColor; // @synthesize titleBackgroundColor=_titleBackgroundColor;
- (id)description;	// IMP=0x000000000000ee9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ea98
- (unsigned long long)hash;	// IMP=0x000000000000e922
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e917
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e797
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e482
- (id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 titleTextDisabledColor:(id)arg3 subtitleTextColor:(id)arg4 iconTintColor:(id)arg5 progressColor:(id)arg6;	// IMP=0x000000000000e352
- (id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5;	// IMP=0x000000000000e32e

@end
