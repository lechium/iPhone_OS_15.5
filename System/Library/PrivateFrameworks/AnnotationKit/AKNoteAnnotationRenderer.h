//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKNoteAnnotationRenderer
{
}

+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;	// IMP=0x00000000000f70fb
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;	// IMP=0x00000000000f70f3
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;	// IMP=0x00000000000f6e05
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;	// IMP=0x00000000000f6df4
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;	// IMP=0x00000000000f6d82

@end
