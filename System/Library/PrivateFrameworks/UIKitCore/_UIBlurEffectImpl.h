//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;	// IMP=0x00000000000e1023
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000e13ca
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000e1313
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000e130d
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000e1304
- (_Bool)canProvideCoreMaterialVibrancyEffect;	// IMP=0x00000000000e12fc
- (_Bool)canProvideVibrancyEffect;	// IMP=0x00000000000e12f4
- (_Bool)invertAutomaticStyle;	// IMP=0x00000000000e12ec
- (id)tintColor;	// IMP=0x00000000000e12e4
- (long long)style;	// IMP=0x00000000000e12d4
- (void)setEffect:(id)arg1;	// IMP=0x00000000000e12ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e1251
- (unsigned long long)hash;	// IMP=0x00000000000e11d4
- (_Bool)requiresCopying;	// IMP=0x00000000000e11cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e11c6

@end

