//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFluidSwitcherGestureExclusionShape-Protocol.h>

@class NSArray, NSString;

@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject <SBFluidSwitcherGestureExclusionShape>
{
    _Bool _allowHorizontalSwipesInsideShapes;	// 8 = 0x8
    NSArray *_rects;	// 16 = 0x10
    double _topEdgeY;	// 24 = 0x18
}

+ (id)exclusionCompositeShapeWithRects:(id)arg1 allowHorizontalSwipes:(_Bool)arg2;	// IMP=0x00000000005c517f
- (void).cxx_destruct;	// IMP=0x00000000005c55ed
@property(nonatomic) double topEdgeY; // @synthesize topEdgeY=_topEdgeY;
@property(nonatomic) _Bool allowHorizontalSwipesInsideShapes; // @synthesize allowHorizontalSwipesInsideShapes=_allowHorizontalSwipesInsideShapes;
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=_rects;
- (_Bool)shouldBeginGestureAtStartingPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 bounds:(struct CGRect)arg3;	// IMP=0x00000000005c5276
- (id)debugView;	// IMP=0x00000000005c51eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

