//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIShadowView
{
    UIImage *_image;	// 8 = 0x8
}

+ (id)bottomShadowImage;	// IMP=0x0000000000f04292
+ (id)topShadowImage;	// IMP=0x0000000000f04281
- (void).cxx_destruct;	// IMP=0x0000000000f042a3
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000f0422c
- (void)setShadowImage:(id)arg1 forEdge:(unsigned long long)arg2 inside:(_Bool)arg3;	// IMP=0x0000000000f0410e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f04098

@end

