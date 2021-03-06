//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXPath : NSObject
{
    struct CGPath *_CGPath;	// 8 = 0x8
    NSMutableArray *_points;	// 16 = 0x10
}

+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;	// IMP=0x00000000005d3126
+ (id)pathWithEllipseInRect:(struct CGRect)arg1;	// IMP=0x00000000005d3114
+ (id)pathWithRect:(struct CGRect)arg1;	// IMP=0x00000000005d2ff8
- (void).cxx_destruct;	// IMP=0x00000000005d2f6b
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(_Bool)arg6 fullRadius:(_Bool)arg7;	// IMP=0x00000000005d2932
- (id)initWithRect:(struct CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(_Bool)arg4;	// IMP=0x00000000005d2112
- (struct CGRect)boundingRect;	// IMP=0x00000000005d1e7b
- (void)closeSubpath;	// IMP=0x00000000005d1e75
- (void)addLineToPointX:(double)arg1 y:(double)arg2;	// IMP=0x00000000005d1dff
- (id)initWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;	// IMP=0x00000000005d1d61

@end

