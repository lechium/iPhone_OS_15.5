//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDynamicAppDefinedColor
{
    NSDictionary *_colorsByThemeKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000808cc2
- (void).cxx_destruct;	// IMP=0x0000000000809252
- (id)description;	// IMP=0x00000000008091b0
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x0000000000808f2e
- (unsigned long long)hash;	// IMP=0x0000000000808f11
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000808ea9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000808e9e
- (id)_generateColorsByTraitCollection;	// IMP=0x0000000000808d66
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000808cca
- (id)_initWithColorsByThemeKey:(id)arg1;	// IMP=0x0000000000808bc9
- (id)initWithColorsByTraitCollection:(id)arg1;	// IMP=0x000000000080897c

@end

