//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGShader, PXGUniform;

@interface PXGPinchEffect
{
    PXGShader *_shader;	// 8 = 0x8
    PXGUniform *_normalizedCenter;	// 16 = 0x10
    PXGUniform *_scale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000202aa
- (id)shader;	// IMP=0x0000000000020295
@property(nonatomic) double scale;
@property(nonatomic) struct CGPoint normalizedCenter;
- (id)initWithEntityManager:(id)arg1;	// IMP=0x0000000000020055

@end
