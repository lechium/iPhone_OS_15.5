//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMutableReplayableGesture
{
}

- (id)_forcesByFingerIdentifierAtEventIndex:(unsigned long long)arg1;	// IMP=0x00000000000a8fe7
- (id)_pointsByFingerIdentifierAtEventIndex:(unsigned long long)arg1;	// IMP=0x00000000000a8f8c
- (void)_removeFingersAtEventIndex:(unsigned long long)arg1;	// IMP=0x00000000000a8e6d
- (void)_addPoint:(struct CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atEventIndex:(unsigned long long)arg4;	// IMP=0x00000000000a8c02
- (void)_addPoint:(struct CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atTime:(double)arg4;	// IMP=0x00000000000a89b4
- (void)addPointsFromReplayableGesture:(id)arg1;	// IMP=0x00000000000a8951
- (void)addPointsByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3;	// IMP=0x00000000000a87c8

@end
