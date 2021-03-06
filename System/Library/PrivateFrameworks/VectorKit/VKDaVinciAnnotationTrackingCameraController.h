//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKDaVinciAnnotationTrackingCameraController
{
    float _currentAnimationCompletedFraction;	// 196 = 0xc4
    _Bool _zooming;	// 200 = 0xc8
    CDStruct_2c43369c _currentAnimationPresentationStartCoordinate;	// 208 = 0xd0
    CDStruct_2c43369c _currentAnimationPresentationEndCoordinate;	// 224 = 0xe0
}

- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;	// IMP=0x000000000047cb09
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3 isInitial:(_Bool)arg4;	// IMP=0x000000000047b485
- (void)updateFramerate;	// IMP=0x000000000047b412
- (struct VKEdgeInsets)_effectiveEdgeInsets;	// IMP=0x000000000047b33f
- (struct VKEdgeInsets)_scaledEdgeInsets:(struct VKEdgeInsets)arg1 withCanvasSize:(struct CGSize)arg2;	// IMP=0x000000000047b2ff
- (Coordinate3D_bc242218)_centerCoordinate:(Coordinate3D_bc242218)arg1 forEdgeInsets:(struct VKEdgeInsets)arg2;	// IMP=0x000000000047b151
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x000000000047acc3
- (double)_minTrackingCameraDistance:(_Bool)arg1;	// IMP=0x000000000047a8ca
- (double)_zoomLevelForDistance:(Unit_09325524)arg1;	// IMP=0x000000000047a7ae

@end

