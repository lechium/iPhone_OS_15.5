//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADNormalTextBodyAutoFit
{
    float mFontScalePercent;	// 12 = 0xc
    float mLineSpacingReductionPercent;	// 16 = 0x10
}

- (id)description;	// IMP=0x000000000032de7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032dd92
- (unsigned long long)hash;	// IMP=0x000000000032dd05
- (float)lineSpacingReductionPercent;	// IMP=0x000000000032dcf3
- (float)fontScalePercent;	// IMP=0x000000000032dce1
- (id)initWithFontScalePercent:(float)arg1 lineSpacingReductionPercent:(float)arg2;	// IMP=0x00000000001cc8a4

@end

