//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

@interface SBSceneLayoutFrameCoordinateSpace
{
    CALayer *_containerLayer;	// 16 = 0x10
    CALayer *_contentLayer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006ce553
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000006ce34a
- (struct CGRect)bounds;	// IMP=0x00000000006ce30c
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00000000006ce213
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x00000000006ce12c
- (id)initWithFrame:(struct CGRect)arg1 withinCoordinateSpace:(id)arg2;	// IMP=0x00000000006cdfdc

@end
