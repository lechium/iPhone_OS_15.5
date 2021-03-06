//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSCoding-Protocol.h>
#import <AnnotationKit/NSCopying-Protocol.h>

@interface AKTSDBezierPath : NSObject <NSCopying, NSCoding>
{
    long long sfr_elementCount;	// 8 = 0x8
    long long sfr_elementMax;	// 16 = 0x10
    struct PATHSEGMENT *sfr_head;	// 24 = 0x18
    double *sfr_elementLength;	// 32 = 0x20
    double sfr_totalLength;	// 40 = 0x28
    long long sfr_lastSubpathIndex;	// 48 = 0x30
    void *sfr_extraSegments;	// 56 = 0x38
    double sfr_lineWidth;	// 64 = 0x40
    struct CGRect sfr_controlPointBounds;	// 72 = 0x48
    double sfr_miterLimit;	// 104 = 0x68
    double sfr_flatness;	// 112 = 0x70
    double *sfr_dashedLinePattern;	// 120 = 0x78
    unsigned long long sfr_dashedLineCount;	// 128 = 0x80
    double sfr_dashedLinePhase;	// 136 = 0x88
    void *sfr_path;	// 144 = 0x90
    long long sfr_extraSegmentCount;	// 152 = 0x98
    long long sfr_extraSegmentMax;	// 160 = 0xa0
    struct {
        unsigned int sfr_flags:8;
        unsigned int sfr_pathState:2;
        unsigned int sfr_calculatedLengths:1;
        unsigned int sfr_unused:21;
    } sfr_bpFlags;	// 168 = 0xa8
}

+ (double)defaultLineWidth;	// IMP=0x0000000000045a9e
+ (void)setDefaultLineWidth:(double)arg1;	// IMP=0x0000000000045a90
+ (unsigned long long)defaultLineJoinStyle;	// IMP=0x0000000000045a83
+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;	// IMP=0x0000000000045a76
+ (unsigned long long)defaultLineCapStyle;	// IMP=0x0000000000045a69
+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;	// IMP=0x0000000000045a5c
+ (unsigned long long)defaultWindingRule;	// IMP=0x0000000000045a4f
+ (void)setDefaultWindingRule:(unsigned long long)arg1;	// IMP=0x0000000000045a42
+ (double)defaultFlatness;	// IMP=0x0000000000045a34
+ (void)setDefaultFlatness:(double)arg1;	// IMP=0x0000000000045a26
+ (double)defaultMiterLimit;	// IMP=0x0000000000045a18
+ (void)setDefaultMiterLimit:(double)arg1;	// IMP=0x0000000000045a0a
+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x000000000004596f
+ (void)clipRect:(struct CGRect)arg1;	// IMP=0x0000000000045945
+ (void)strokeRect:(struct CGRect)arg1;	// IMP=0x0000000000045792
+ (void)fillRect:(struct CGRect)arg1;	// IMP=0x0000000000045768
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;	// IMP=0x00000000000455e3
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;	// IMP=0x00000000000455db
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;	// IMP=0x0000000000045586
+ (id)bezierPathWithRect:(struct CGRect)arg1;	// IMP=0x0000000000045531
+ (id)bezierPathWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;	// IMP=0x00000000000454b8
+ (id)bezierPath;	// IMP=0x00000000000454a6
+ (void)initialize;	// IMP=0x0000000000045466
+ (double)lineWidth;	// IMP=0x0000000000049d58
+ (void)setLineWidth:(double)arg1;	// IMP=0x0000000000049d46
+ (unsigned long long)lineJoinStyle;	// IMP=0x0000000000049d34
+ (void)setLineJoinStyle:(unsigned long long)arg1;	// IMP=0x0000000000049d22
+ (unsigned long long)lineCapStyle;	// IMP=0x0000000000049d10
+ (void)setLineCapStyle:(unsigned long long)arg1;	// IMP=0x0000000000049cfe
+ (unsigned long long)windingRule;	// IMP=0x0000000000049cec
+ (void)setWindingRule:(unsigned long long)arg1;	// IMP=0x0000000000049cda
+ (double)flatness;	// IMP=0x0000000000049cc8
+ (void)setFlatness:(double)arg1;	// IMP=0x0000000000049cb6
+ (double)miterLimit;	// IMP=0x0000000000049ca4
+ (void)setMiterLimit:(double)arg1;	// IMP=0x0000000000049c92
- (id)initWithCString:(const char *)arg1;	// IMP=0x0000000000049504
- (const char *)cString;	// IMP=0x00000000000492dc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048a6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000048430
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x00000000000483ac
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;	// IMP=0x0000000000047fed
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;	// IMP=0x0000000000047fd6
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;	// IMP=0x0000000000047ce2
- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;	// IMP=0x0000000000047bc5
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;	// IMP=0x00000000000479f0
- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;	// IMP=0x0000000000047945
- (void)appendBezierPathWithRect:(struct CGRect)arg1;	// IMP=0x0000000000047834
- (void)appendBezierPath:(id)arg1;	// IMP=0x000000000004769c
- (void)_appendToPath:(id)arg1;	// IMP=0x0000000000047574
- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000047484
- (unsigned long long)elementAtIndex:(long long)arg1 allPoints:(struct CGPoint *)arg2;	// IMP=0x000000000004738e
- (unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;	// IMP=0x00000000000472b3
- (unsigned long long)elementAtIndex:(long long)arg1;	// IMP=0x000000000004729f
- (long long)elementCount;	// IMP=0x0000000000047295
- (double)lengthToElement:(long long)arg1;	// IMP=0x0000000000047248
- (double)lengthOfElement:(long long)arg1;	// IMP=0x0000000000047213
- (double)length;	// IMP=0x00000000000471e5
- (void)calculateLengths;	// IMP=0x0000000000047116
- (double)calculateLengthOfElement:(long long)arg1;	// IMP=0x0000000000047078
- (_Bool)isClockwise;	// IMP=0x0000000000046e55
- (_Bool)isFlat;	// IMP=0x0000000000046dc9
- (struct CGRect)bounds;	// IMP=0x0000000000046d5a
- (struct CGRect)controlPointBounds;	// IMP=0x0000000000046bf6
- (struct CGPoint)currentPoint;	// IMP=0x0000000000046b96
- (_Bool)isEmpty;	// IMP=0x0000000000046b88
- (struct CGPath *)CGPath;	// IMP=0x0000000000046b64
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000046a84
- (id)bezierPathByReversingPath;	// IMP=0x00000000000468af
- (id)_copyFlattenedPath;	// IMP=0x000000000004687a
- (id)bezierPathByFlatteningPath;	// IMP=0x0000000000046820
- (void)flattenIntoPath:(id)arg1;	// IMP=0x00000000000466e2
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;	// IMP=0x0000000000046536
- (void)addClip;	// IMP=0x00000000000464d3
- (void)fill;	// IMP=0x0000000000046470
- (void)stroke;	// IMP=0x00000000000462c4
- (void)_doPath;	// IMP=0x00000000000461aa
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;	// IMP=0x0000000000046155
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;	// IMP=0x000000000004608d
- (void)setFlatness:(double)arg1;	// IMP=0x0000000000046082
- (double)flatness;	// IMP=0x0000000000046077
- (void)setMiterLimit:(double)arg1;	// IMP=0x000000000004606c
- (double)miterLimit;	// IMP=0x0000000000046061
- (void)setWindingRule:(unsigned long long)arg1;	// IMP=0x0000000000046045
- (unsigned long long)windingRule;	// IMP=0x0000000000046033
- (void)setLineJoinStyle:(unsigned long long)arg1;	// IMP=0x0000000000046017
- (unsigned long long)lineJoinStyle;	// IMP=0x0000000000046005
- (void)setLineCapStyle:(unsigned long long)arg1;	// IMP=0x0000000000045feb
- (unsigned long long)lineCapStyle;	// IMP=0x0000000000045fd9
- (void)setLineWidth:(double)arg1;	// IMP=0x0000000000045fce
- (double)lineWidth;	// IMP=0x0000000000045fc3
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;	// IMP=0x0000000000045f31
- (void)relativeLineToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000045ee7
- (void)relativeMoveToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000045e9d
- (void)removeAllPoints;	// IMP=0x0000000000045e3c
- (void)closePath;	// IMP=0x0000000000045e2a
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;	// IMP=0x0000000000045d91
- (void)lineToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000045d23
- (void)moveToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000045d11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045c02
- (void)dealloc;	// IMP=0x0000000000045b92
- (id)init;	// IMP=0x0000000000045aac
- (void)_deviceClosePath;	// IMP=0x0000000000049bf3
- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;	// IMP=0x0000000000049a67
- (void)_deviceLineToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000049a2f
- (void)_deviceMoveToPoint:(struct CGPoint)arg1;	// IMP=0x00000000000499a2
- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;	// IMP=0x00000000000497b7
- (id)description;	// IMP=0x0000000000049d6a
- (id)chisel;	// IMP=0x00000000000e2a24
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(id)arg4;	// IMP=0x00000000000e2245
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 into:(id)arg3;	// IMP=0x00000000000e21ae
- (void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2;	// IMP=0x00000000000e2123
- (double)curvatureAt:(double)arg1 fromElement:(int)arg2;	// IMP=0x00000000000e098b
- (float)curvatureAt:(float)arg1;	// IMP=0x00000000000e090c
- (struct CGPoint)myGradientAt:(float)arg1 fromElement:(long long)arg2;	// IMP=0x00000000000e089a
- (struct CGPoint)myGradientAt:(float)arg1;	// IMP=0x00000000000e0800
- (struct CGPoint)rawGradientAt:(float)arg1 fromElement:(long long)arg2;	// IMP=0x00000000000e065d
- (float)elementPercentageFromElement:(int)arg1 forOverallPercentage:(float)arg2;	// IMP=0x00000000000e058e
- (struct CGPoint)transformedTotalCoordinate:(struct CGPoint)arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 withPressure:(id)arg4 getElement:(long long *)arg5 getPercentage:(float *)arg6;	// IMP=0x00000000000e03f3
- (struct CGPoint)transformedTotalCoordinate:(struct CGPoint)arg1 inElement:(long long)arg2 withPressure:(id)arg3;	// IMP=0x00000000000e02d1
- (struct CGPoint)transformedCoordinate:(struct CGPoint)arg1 withPressure:(id)arg2;	// IMP=0x00000000000e019f
- (struct CGPoint)gradientAt:(float)arg1;	// IMP=0x00000000000e0150
- (struct CGPoint)gradientAt:(double)arg1 fromElement:(long long)arg2;	// IMP=0x00000000000e0100
- (struct CGPoint)pointAt:(double)arg1 fromElement:(long long)arg2;	// IMP=0x00000000000dff31
- (long long)elementPercentage:(float *)arg1 forOverallPercentage:(float)arg2;	// IMP=0x00000000000dfdad
- (id)pressure;	// IMP=0x00000000000dfda5
- (struct CGPoint)nearestAngleOnPathToLine:(struct CGPoint [2])arg1;	// IMP=0x00000000000df7ce
- (struct CGPoint)nearestPointOnPathToLine:(struct CGPoint [2])arg1;	// IMP=0x00000000000df56b
- (id)copyFromSegment:(int)arg1 t:(float)arg2 toSegment:(int)arg3 t:(float)arg4;	// IMP=0x00000000000df488
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(_Bool)arg6;	// IMP=0x00000000000dee94
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3;	// IMP=0x00000000000ded58
- (void)addIntersectionsWithLine:(struct CGPoint [2])arg1 to:(id)arg2;	// IMP=0x00000000000dec12
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2;	// IMP=0x00000000000debf7
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(_Bool)arg3 reversed:(_Bool)arg4;	// IMP=0x00000000000de33f
- (void)getStartPoint:(struct CGPoint *)arg1 andEndPoint:(struct CGPoint *)arg2;	// IMP=0x00000000000de29c

@end

