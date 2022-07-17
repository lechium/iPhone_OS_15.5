//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITraitCollection.h>

@class UIBlurEffect, UIColor;

@interface UITraitCollection (MobileSafariExtras)
+ (id)sf_traitCollectionWithSidebarPresentation:(_Bool)arg1;	// IMP=0x000000000007838a
+ (id)sf_traitCollectionUsingVibrantAppearance;	// IMP=0x0000000000078248
+ (id)sf_traitCollectionWithBackgroundBlurEffect:(id)arg1;	// IMP=0x00000000000781c8
+ (id)sf_traitCollectionWithAlternateUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000077ff5
+ (id)sf_traitCollectionWithAlternateTraitCollection:(id)arg1;	// IMP=0x0000000000077f75
@property(readonly, nonatomic) _Bool sf_usesSidebarPresentation;
- (_Bool)sf_hasSameVisualEffectAs:(id)arg1;	// IMP=0x00000000000782d7
@property(readonly, nonatomic) _Bool sf_usesVibrantAppearance;
@property(readonly, nonatomic) UIBlurEffect *sf_backgroundBlurEffect;
@property(readonly, nonatomic) UITraitCollection *sf_traitCollectionWithAlternateUserInterfaceColorAsPrimary;
@property(readonly, nonatomic) long long sf_alternateUserInterfaceStyle;
@property(readonly, nonatomic) UIColor *sf_alternateTintColor;
@end
