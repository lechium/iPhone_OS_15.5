//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBSceneLayoutOrientationCoordinateSpace
{
    long long _referenceOrientation;	// 16 = 0x10
    long long _orientation;	// 24 = 0x18
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000006cddf2
- (struct CGRect)bounds;	// IMP=0x00000000006cdd5a
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00000000006cdc24
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x00000000006cdaed
- (id)initWithInterfaceOrientation:(long long)arg1 withReferenceCoordinateSpace:(id)arg2 inOrientation:(long long)arg3;	// IMP=0x00000000006cda94

@end

