//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAAffineImageTransform
{
    _Bool _canAlignToPixelsExactly;	// 8 = 0x8
    struct Matrix4d _matrix;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000000d68c
- (id)description;	// IMP=0x000000000000d534
- (_Bool)canAlignToPixelsExactly;	// IMP=0x000000000000d524
- (struct Vector2d)mapVector:(struct Vector2d)arg1;	// IMP=0x000000000000d4d4
- (id)inverseTransform;	// IMP=0x000000000000d356
- (struct Matrix4d)matrix;	// IMP=0x000000000000d300
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const struct Matrix4d *)arg3 canAlignToPixelsExactly:(_Bool)arg4;	// IMP=0x000000000000d268

@end
