//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKStarAnnotationRenderer
{
}

+ (struct CGPath *)_newPathForAnnotation:(id)arg1;	// IMP=0x00000000000fb37e
+ (double)_segLengthOfStarWithPoints:(id)arg1;	// IMP=0x00000000000fb21b
+ (id)_innerStarPoints:(id)arg1 withInnerRadiusFactor:(double)arg2;	// IMP=0x00000000000fb023
+ (id)innerStarPoints:(id)arg1;	// IMP=0x00000000000fafbe
+ (id)starPoints:(id)arg1;	// IMP=0x00000000000fae7a
+ (double)innerRadiusFactorForPoint:(struct CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00000000000fab9f
+ (double)defaultInnerRadiusForStar:(id)arg1;	// IMP=0x00000000000fa814
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;	// IMP=0x00000000000fa7e5
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;	// IMP=0x00000000000fa7b6
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;	// IMP=0x00000000000fa787
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;	// IMP=0x00000000000fa73f
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;	// IMP=0x00000000000fa6f7
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;	// IMP=0x00000000000fa6c0

@end
