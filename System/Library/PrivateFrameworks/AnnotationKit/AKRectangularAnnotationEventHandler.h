//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKRectangularAnnotationEventHandler
{
    struct CGPoint _lastMungedPositionInModel;	// 8 = 0x8
}

@property struct CGPoint lastMungedPositionInModel; // @synthesize lastMungedPositionInModel=_lastMungedPositionInModel;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint)arg1;	// IMP=0x00000000000a12a6
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000a0686
- (struct CGRect)_rectForModifiedRotatedRect:(struct CGRect)arg1 withOriginal:(struct CGRect)arg2 andRotation:(double)arg3;	// IMP=0x00000000000a0528
- (void)setupDraggingConstraints;	// IMP=0x00000000000a0474
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;	// IMP=0x000000000009ffd4

@end
