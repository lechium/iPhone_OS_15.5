//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDConnectionLineOrthogonalLayout
{
}

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x0000000000254c66
- (void)addEndpointSnapsToXs:(void *)arg1 andYs:(void *)arg2;	// IMP=0x0000000000254657
- (struct CGPoint)axisSnapPoint:(struct CGPoint)arg1 toXs:(vector_0e047154)arg2 toYs:(vector_0e047154)arg3 withThreshold:(double)arg4;	// IMP=0x00000000002544a6
- (_Bool)canEndpointsCoincide;	// IMP=0x000000000025449e
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;	// IMP=0x0000000000254386
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;	// IMP=0x000000000025330e
- (struct CGRect)orthoRectOfLayout:(id)arg1 outset:(double)arg2;	// IMP=0x000000000025306c

@end
