//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class NSString, UIColor;

@interface SBPIPStashMaterialSettings : PTSettings
{
    NSString *_chevronCompositingFilter;	// 8 = 0x8
    UIColor *_chevronTintColor;	// 16 = 0x10
    double _darkTintAlpha;	// 24 = 0x18
    double _lightTintAlpha;	// 32 = 0x20
}

+ (_Bool)ignoresKey:(id)arg1;	// IMP=0x000000000067d50c
+ (id)settingsControllerModule;	// IMP=0x000000000067ce61
- (void).cxx_destruct;	// IMP=0x000000000067d657
@property(nonatomic) double lightTintAlpha; // @synthesize lightTintAlpha=_lightTintAlpha;
@property(nonatomic) double darkTintAlpha; // @synthesize darkTintAlpha=_darkTintAlpha;
@property(retain, nonatomic) UIColor *chevronTintColor; // @synthesize chevronTintColor=_chevronTintColor;
@property(copy, nonatomic) NSString *chevronCompositingFilter; // @synthesize chevronCompositingFilter=_chevronCompositingFilter;
@property(readonly, nonatomic) UIColor *lightTintColor;
@property(readonly, nonatomic) UIColor *darkTintColor;
- (void)setDefaultValues;	// IMP=0x000000000067cdab

@end
