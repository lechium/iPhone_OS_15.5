//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADLuminanceEffect
{
    float mBrightness;	// 12 = 0xc
    float mContrast;	// 16 = 0x10
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030b84e
- (unsigned long long)hash;	// IMP=0x000000000030b7c1
- (void)setContrast:(float)arg1;	// IMP=0x0000000000103846
- (float)contrast;	// IMP=0x000000000030b7af
- (void)setBrightness:(float)arg1;	// IMP=0x0000000000103874
- (float)brightness;	// IMP=0x000000000030b79d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030b708
- (id)init;	// IMP=0x00000000001037f5

@end

