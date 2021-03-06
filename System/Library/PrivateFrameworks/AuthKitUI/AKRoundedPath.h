//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AKRoundedPath : NSObject
{
    struct CGPath *_CGPath;	// 8 = 0x8
    NSMutableArray *_points;	// 16 = 0x10
}

+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;	// IMP=0x0000000000002d21
+ (id)pathWithEllipseInRect:(struct CGRect)arg1;	// IMP=0x000000000000291f
+ (id)pathWithRect:(struct CGRect)arg1;	// IMP=0x0000000000002803
- (void).cxx_destruct;	// IMP=0x0000000000003cde
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(_Bool)arg6 fullRadius:(_Bool)arg7;	// IMP=0x000000000000362a
- (id)initWithRect:(struct CGRect)arg1 cornerRadii:(id)arg2 smoothPillShapes:(_Bool)arg3;	// IMP=0x0000000000002e0b
- (struct CGRect)boundingRect;	// IMP=0x0000000000002a8a
- (void)closeSubpath;	// IMP=0x0000000000002a84
- (void)addLineToPointX:(double)arg1 y:(double)arg2;	// IMP=0x0000000000002a0e
- (void)dealloc;	// IMP=0x00000000000029cf
- (id)initWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;	// IMP=0x0000000000002931

@end

