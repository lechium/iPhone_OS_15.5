//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay
{
    CUIPSDGradient *_gradient;	// 24 = 0x18
}

@property(retain) CUIPSDGradient *gradient; // @synthesize gradient=_gradient;
- (void)dealloc;	// IMP=0x0000000000092c2f
- (unsigned int)effectType;	// IMP=0x0000000000092c24
- (id)init;	// IMP=0x0000000000092bd1
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000003fcc0
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003f9bb

@end

