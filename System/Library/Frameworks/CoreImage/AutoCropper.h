//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AutoCropper : NSObject
{
    _Bool shouldFavorBottom;	// 8 = 0x8
    _Bool shouldFavorTop;	// 9 = 0x9
    struct CGSize originalImageSize;	// 16 = 0x10
}

@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize;
@property(nonatomic) _Bool shouldFavorBottom; // @synthesize shouldFavorBottom;
@property(nonatomic) _Bool shouldFavorTop; // @synthesize shouldFavorTop;
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 forMultipleRects:(id)arg2;	// IMP=0x0000000000003b93
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 forImportantRect:(struct CGRect)arg2 andType:(int)arg3 restrictRect:(struct CGRect)arg4;	// IMP=0x0000000000003a64
- (int)determineBestPositionWithinSize:(struct CGSize)arg1 forImportantRect:(struct CGRect)arg2 restrictRect:(struct CGRect)arg3;	// IMP=0x00000000000034d4
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 andImportantRects:(id)arg2;	// IMP=0x0000000000002d87
- (id)clusterRects:(id)arg1;	// IMP=0x0000000000002ad4
- (struct CGRect)rectContainingRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2;	// IMP=0x0000000000002a9e
- (struct CGRect)rectWithSize:(struct CGSize)arg1 andPoint:(struct CGPoint)arg2 inPosition:(int)arg3 fromOriginalSize:(struct CGSize)arg4;	// IMP=0x00000000000028b3
- (struct CGRect)scaleRect:(struct CGRect)arg1 toFitSize:(struct CGSize)arg2 withAnchorPoint:(struct CGPoint)arg3;	// IMP=0x000000000000276f
- (int)getRatioOfSize:(struct CGSize)arg1;	// IMP=0x00000000000026c7
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 andImportantRect:(struct CGRect)arg2;	// IMP=0x0000000000002564
- (struct CGRect)expandRect:(struct CGRect)arg1 toContainRect:(struct CGRect)arg2;	// IMP=0x00000000000024b9
- (struct CGRect)scaleRect:(struct CGRect)arg1 byScale:(double)arg2;	// IMP=0x0000000000002481
- (id)init;	// IMP=0x0000000000002415

@end
