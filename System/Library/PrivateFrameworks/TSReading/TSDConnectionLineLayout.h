//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDConnectionLineLayout
{
    double mStartClipT;	// 832 = 0x340
    double mEndClipT;	// 840 = 0x348
}

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x00000000002133c3
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;	// IMP=0x0000000000213202
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;	// IMP=0x0000000000212fae
- (id)quadraticCurve:(struct CGPoint [3])arg1;	// IMP=0x0000000000212df6

@end

