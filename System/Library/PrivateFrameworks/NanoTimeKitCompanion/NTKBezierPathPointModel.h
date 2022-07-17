//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UIBezierPath;

@interface NTKBezierPathPointModel : NSObject
{
    UIBezierPath *_path;	// 8 = 0x8
    NSArray *_pathElements;	// 16 = 0x10
    NSDictionary *_horizontalPercentageCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011d6f5
@property(readonly, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (double)_computeDistanceBetweenPointA:(struct CGPoint)arg1 andPointB:(struct CGPoint)arg2;	// IMP=0x000000000011d6cc
- (double)_estimatePercentageForEndPadding:(double)arg1;	// IMP=0x000000000011d46e
- (struct CGPoint)_computePointOnPathForHorizontalPercentage:(double)arg1;	// IMP=0x000000000011d1e7
- (id)_buildHorizontalPercentageCache;	// IMP=0x000000000011d0dc
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 withEndPadding:(double)arg2;	// IMP=0x000000000011cdbc
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1;	// IMP=0x000000000011cda7
- (id)initWithPath:(id)arg1;	// IMP=0x000000000011cca7

@end
