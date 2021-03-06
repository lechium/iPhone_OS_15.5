//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIGradient;

@interface SUReflectionImageModifier
{
    UIGradient *_gradient;	// 8 = 0x8
    double _reflectionHeight;	// 16 = 0x10
}

@property(nonatomic) double reflectionHeight; // @synthesize reflectionHeight=_reflectionHeight;
@property(retain, nonatomic) UIGradient *gradient; // @synthesize gradient=_gradient;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;	// IMP=0x0000000000061fba
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;	// IMP=0x0000000000061f80
- (struct CGSize)finalSizeForSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;	// IMP=0x0000000000061f4d
- (void)dealloc;	// IMP=0x0000000000061eff

@end

