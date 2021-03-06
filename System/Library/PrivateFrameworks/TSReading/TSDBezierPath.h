//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSSecureCoding-Protocol.h>

@interface TSDBezierPath : NSObject <NSCopying, NSSecureCoding>
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

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013d788
+ (double)defaultLineWidth;	// IMP=0x000000000013a346
+ (void)setDefaultLineWidth:(double)arg1;	// IMP=0x000000000013a338
+ (unsigned long long)defaultLineJoinStyle;	// IMP=0x000000000013a32b
+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;	// IMP=0x000000000013a31e
+ (unsigned long long)defaultLineCapStyle;	// IMP=0x000000000013a311
+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;	// IMP=0x000000000013a304
+ (unsigned long long)defaultWindingRule;	// IMP=0x000000000013a2f7
+ (void)setDefaultWindingRule:(unsigned long long)arg1;	// IMP=0x000000000013a2ea
+ (double)defaultFlatness;	// IMP=0x000000000013a2dc
+ (void)setDefaultFlatness:(double)arg1;	// IMP=0x000000000013a2ce
+ (double)defaultMiterLimit;	// IMP=0x000000000013a2c0
+ (void)setDefaultMiterLimit:(double)arg1;	// IMP=0x000000000013a2b2
+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x000000000013a217
+ (void)clipRect:(struct CGRect)arg1;	// IMP=0x000000000013a1ed
+ (void)strokeRect:(struct CGRect)arg1;	// IMP=0x000000000013a03a
+ (void)fillRect:(struct CGRect)arg1;	// IMP=0x000000000013a010
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;	// IMP=0x0000000000139e57
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;	// IMP=0x0000000000139d0f
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;	// IMP=0x0000000000139cc6
+ (id)bezierPathWithRect:(struct CGRect)arg1;	// IMP=0x0000000000139c7d
+ (id)bezierPathWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;	// IMP=0x0000000000139c10
+ (id)bezierPath;	// IMP=0x0000000000139bfe
+ (void)initialize;	// IMP=0x0000000000139bbe
+ (double)lineWidth;	// IMP=0x000000000013f45b
+ (void)setLineWidth:(double)arg1;	// IMP=0x000000000013f449
+ (unsigned long long)lineJoinStyle;	// IMP=0x000000000013f437
+ (void)setLineJoinStyle:(unsigned long long)arg1;	// IMP=0x000000000013f425
+ (unsigned long long)lineCapStyle;	// IMP=0x000000000013f413
+ (void)setLineCapStyle:(unsigned long long)arg1;	// IMP=0x000000000013f401
+ (unsigned long long)windingRule;	// IMP=0x000000000013f3ef
+ (void)setWindingRule:(unsigned long long)arg1;	// IMP=0x000000000013f3dd
+ (double)flatness;	// IMP=0x000000000013f3cb
+ (void)setFlatness:(double)arg1;	// IMP=0x000000000013f3b9
+ (double)miterLimit;	// IMP=0x000000000013f3a7
+ (void)setMiterLimit:(double)arg1;	// IMP=0x000000000013f395
+ (id)bezierPathWithConvexHullOfPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000014954d
+ (id)smoothBezierPath:(id)arg1 withThreshold:(double)arg2;	// IMP=0x000000000014a179
+ (id)exteriorOfBezierPath:(id)arg1;	// IMP=0x0000000000149f8d
+ (id)outsideEdgeOfBezierPath:(id)arg1;	// IMP=0x0000000000149df6
+ (id)outlineBezierPath:(id)arg1 withThreshold:(double)arg2;	// IMP=0x0000000000149b1c
+ (id)outlineBezierPath:(id)arg1;	// IMP=0x0000000000149afb
+ (id)appendBezierPaths:(id)arg1;	// IMP=0x0000000000149a80
+ (id)excludeBezierPaths:(id)arg1;	// IMP=0x00000000001499ff
+ (id)subtractBezierPaths:(id)arg1;	// IMP=0x00000000001499e8
+ (id)intersectBezierPaths:(id)arg1;	// IMP=0x00000000001499d1
+ (id)uniteBezierPaths:(id)arg1;	// IMP=0x00000000001499bd
+ (id)p_booleanWithBezierPaths:(id)arg1 operation:(int)arg2;	// IMP=0x000000000014abb0
+ (struct CGRect)p_pathToBounds:(struct Path *)arg1;	// IMP=0x000000000014ab10
+ (id)p_pathToBezier:(struct Path *)arg1;	// IMP=0x000000000014a504
+ (struct Path *)p_bezierToPath:(id)arg1;	// IMP=0x000000000014a1f8
+ (id)tracedPathForInstantAlphaBinaryBitmap:(id)arg1 pointSpacing:(double)arg2;	// IMP=0x000000000015a39d
+ (id)tracedPathForImage:(struct CGImage *)arg1 alphaThreshold:(double)arg2 pointSpacing:(double)arg3;	// IMP=0x0000000000159b25
- (id)initWithCString:(const char *)arg1;	// IMP=0x000000000013e940
- (const char *)cString;	// IMP=0x000000000013e644
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013de31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013d790
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x000000000013d704
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;	// IMP=0x000000000013d345
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;	// IMP=0x000000000013d32e
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;	// IMP=0x000000000013d04e
- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;	// IMP=0x000000000013cf31
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;	// IMP=0x000000000013cd5c
- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;	// IMP=0x000000000013ccb1
- (void)appendBezierPathWithRect:(struct CGRect)arg1;	// IMP=0x000000000013cba0
- (void)appendBezierPath:(id)arg1;	// IMP=0x000000000013ca00
- (void)_appendToPath:(id)arg1;	// IMP=0x000000000013c8e0
- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;	// IMP=0x000000000013c80b
- (unsigned long long)elementAtIndex:(long long)arg1 allPoints:(struct CGPoint *)arg2;	// IMP=0x000000000013c731
- (unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;	// IMP=0x000000000013c672
- (unsigned long long)elementAtIndex:(long long)arg1;	// IMP=0x000000000013c65e
- (long long)elementCount;	// IMP=0x000000000013c654
- (double)lengthToElement:(long long)arg1;	// IMP=0x000000000013c5a4
- (double)lengthOfElement:(long long)arg1;	// IMP=0x000000000013c56f
- (double)length;	// IMP=0x000000000013c541
- (void)calculateLengths;	// IMP=0x000000000013c49a
- (double)calculateLengthOfElement:(long long)arg1;	// IMP=0x000000000013c3fc
- (_Bool)isClockwise;	// IMP=0x000000000013c1d6
- (_Bool)isFlat;	// IMP=0x000000000013c14a
- (struct CGRect)bounds;	// IMP=0x000000000013c0db
- (struct CGRect)controlPointBounds;	// IMP=0x000000000013bf7f
- (struct CGPoint)currentPoint;	// IMP=0x000000000013bf1f
- (_Bool)isEmpty;	// IMP=0x000000000013bf11
- (_Bool)isCircular;	// IMP=0x000000000013bd15
- (_Bool)isRectangular;	// IMP=0x000000000013b9a8
- (_Bool)isDiamond;	// IMP=0x000000000013b75b
- (_Bool)isTriangular;	// IMP=0x000000000013b600
- (struct CGPath *)CGPath;	// IMP=0x000000000013b5dc
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000013b4fc
- (id)bezierPathByReversingPath;	// IMP=0x000000000013b327
- (id)_copyFlattenedPath;	// IMP=0x000000000013b2ea
- (id)bezierPathByFlatteningPathWithFlatness:(double)arg1;	// IMP=0x000000000013b276
- (id)bezierPathByFlatteningPath;	// IMP=0x000000000013b214
- (void)flattenIntoPath:(id)arg1 flatness:(double)arg2;	// IMP=0x000000000013b0e0
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;	// IMP=0x000000000013af34
- (void)addClip;	// IMP=0x000000000013ae10
- (void)fill;	// IMP=0x000000000013acec
- (void)stroke;	// IMP=0x000000000013ab7c
- (void)_doPath;	// IMP=0x000000000013aa61
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;	// IMP=0x000000000013aa0c
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;	// IMP=0x000000000013a932
- (void)setFlatness:(double)arg1;	// IMP=0x000000000013a927
- (double)flatness;	// IMP=0x000000000013a91c
- (void)setMiterLimit:(double)arg1;	// IMP=0x000000000013a911
- (double)miterLimit;	// IMP=0x000000000013a906
- (void)setWindingRule:(unsigned long long)arg1;	// IMP=0x000000000013a8ea
- (unsigned long long)windingRule;	// IMP=0x000000000013a8d8
- (void)setLineJoinStyle:(unsigned long long)arg1;	// IMP=0x000000000013a8bc
- (unsigned long long)lineJoinStyle;	// IMP=0x000000000013a8aa
- (void)setLineCapStyle:(unsigned long long)arg1;	// IMP=0x000000000013a890
- (unsigned long long)lineCapStyle;	// IMP=0x000000000013a87e
- (void)setLineWidth:(double)arg1;	// IMP=0x000000000013a873
- (double)lineWidth;	// IMP=0x000000000013a868
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;	// IMP=0x000000000013a7d6
- (void)relativeLineToPoint:(struct CGPoint)arg1;	// IMP=0x000000000013a78c
- (void)relativeMoveToPoint:(struct CGPoint)arg1;	// IMP=0x000000000013a742
- (void)removeAllPoints;	// IMP=0x000000000013a6e1
- (void)closePath;	// IMP=0x000000000013a6cf
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;	// IMP=0x000000000013a636
- (void)lineToPoint:(struct CGPoint)arg1;	// IMP=0x000000000013a5c8
- (void)moveToPoint:(struct CGPoint)arg1;	// IMP=0x000000000013a5b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013a4a7
- (void)dealloc;	// IMP=0x000000000013a417
- (id)init;	// IMP=0x000000000013a354
- (void)copyPathAttributesTo:(id)arg1;	// IMP=0x0000000000139d61
- (id)chisel;	// IMP=0x000000000010f671
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(id)arg4;	// IMP=0x000000000010ee70
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 into:(id)arg3;	// IMP=0x000000000010ee09
- (void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2;	// IMP=0x000000000010edb3
- (double)curvatureAt:(double)arg1 fromElement:(int)arg2;	// IMP=0x000000000010d763
- (float)curvatureAt:(float)arg1;	// IMP=0x000000000010d6e4
- (struct CGPoint)myGradientAt:(float)arg1 fromElement:(long long)arg2;	// IMP=0x000000000010d672
- (struct CGPoint)myGradientAt:(float)arg1;	// IMP=0x000000000010d5d8
- (struct CGPoint)rawGradientAt:(float)arg1 fromElement:(long long)arg2;	// IMP=0x000000000010d437
- (float)elementPercentageFromElement:(int)arg1 forOverallPercentage:(float)arg2;	// IMP=0x000000000010d368
- (struct CGPoint)transformedTotalCoordinate:(struct CGPoint)arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 withPressure:(id)arg4 getElement:(long long *)arg5 getPercentage:(float *)arg6;	// IMP=0x000000000010d1fa
- (struct CGPoint)transformedTotalCoordinate:(struct CGPoint)arg1 inElement:(long long)arg2 withPressure:(id)arg3;	// IMP=0x000000000010d108
- (struct CGPoint)transformedCoordinate:(struct CGPoint)arg1 withPressure:(id)arg2;	// IMP=0x000000000010d003
- (struct CGPoint)gradientAt:(float)arg1;	// IMP=0x000000000010cfb4
- (struct CGPoint)gradientAt:(double)arg1 fromElement:(long long)arg2;	// IMP=0x000000000010cf64
- (struct CGPoint)pointAt:(double)arg1 fromElement:(long long)arg2;	// IMP=0x000000000010cd95
- (long long)elementPercentage:(double *)arg1 forOverallPercentage:(double)arg2 startingElementIndex:(long long)arg3 lengthToStartingElement:(double)arg4;	// IMP=0x000000000010cb77
- (long long)elementPercentage:(float *)arg1 forOverallPercentage:(float)arg2;	// IMP=0x000000000010c9f3
- (id)pressure;	// IMP=0x000000000010c9eb
- (struct CGPoint)nearestAngleOnPathToLine:(struct CGPoint [2])arg1;	// IMP=0x000000000010c44a
- (struct CGPoint)nearestPointOnPathToLine:(struct CGPoint [2])arg1;	// IMP=0x000000000010c1e7
- (id)copyFromSegment:(int)arg1 t:(float)arg2 toSegment:(int)arg3 t:(float)arg4;	// IMP=0x000000000010c104
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(_Bool)arg6;	// IMP=0x000000000010bb28
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3;	// IMP=0x000000000010b9ec
- (void)addIntersectionsWithLine:(struct CGPoint [2])arg1 to:(id)arg2;	// IMP=0x000000000010b8bc
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2;	// IMP=0x000000000010b8a1
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(_Bool)arg3 reversed:(_Bool)arg4;	// IMP=0x000000000010b076
- (void)getStartPoint:(struct CGPoint *)arg1 andEndPoint:(struct CGPoint *)arg2;	// IMP=0x000000000010afd3
- (void)_deviceClosePath;	// IMP=0x000000000013f264
- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;	// IMP=0x000000000013f103
- (void)_deviceLineToPoint:(struct CGPoint)arg1;	// IMP=0x000000000013f0cb
- (void)_deviceMoveToPoint:(struct CGPoint)arg1;	// IMP=0x000000000013f03e
- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;	// IMP=0x000000000013eead
- (id)description;	// IMP=0x000000000013f46d
- (id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2;	// IMP=0x0000000000149539
- (id)aliasedPathInContext:(struct CGContext *)arg1 effectiveStrokeWidth:(float)arg2;	// IMP=0x000000000014951c
- (id)p_aliasedPathInContext:(struct CGContext *)arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3;	// IMP=0x00000000001488f6
- (struct CGPoint)roundPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2 strokeWidth:(int)arg3;	// IMP=0x0000000000148870
- (void)addPathToContext:(struct CGContext *)arg1;	// IMP=0x000000000014875d
- (_Bool)intersectsRect:(struct CGRect)arg1 hasFill:(_Bool)arg2;	// IMP=0x00000000001483fa
@property(readonly, nonatomic) _Bool isLineSegment;
@property(readonly, nonatomic) _Bool isOpen;
- (id)pathByWobblingByUpTo:(double)arg1 subdivisions:(unsigned long long)arg2;	// IMP=0x0000000000147d0f
- (void)clearStroke:(struct CGContext *)arg1;	// IMP=0x0000000000147bef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000147a70
- (id)intersectBezierPath:(id)arg1;	// IMP=0x0000000000147a29
- (id)subtractBezierPath:(id)arg1;	// IMP=0x00000000001479e2
- (id)uniteWithBezierPath:(id)arg1;	// IMP=0x000000000014799b
- (id)outlineStroke;	// IMP=0x000000000014797f
- (id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 withThreshold:(double)arg3;	// IMP=0x00000000001477bc
- (id)p_beziersFromSegmentIntersections:(id)arg1;	// IMP=0x0000000000147174
- (id)p_pathAsSegments;	// IMP=0x0000000000146c11
- (id)p_elementCountForSubpaths;	// IMP=0x0000000000146b3d
- (id)pathSplitAtSubpathBoundariesWithSoftElementLimit:(unsigned long long)arg1 hardElementLimit:(unsigned long long)arg2;	// IMP=0x000000000014672a
- (id)copyWithPointsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000146704
- (id)p_copyWithPointsInRange:(struct _NSRange)arg1 countingSubpaths:(unsigned long long *)arg2;	// IMP=0x0000000000146490
- (id)bezierPathByRemovingRedundantElements;	// IMP=0x0000000000146113
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startRadialVector:(struct CGPoint)arg2 endRadialVector:(struct CGPoint)arg3 angleSign:(int)arg4 startNewPath:(_Bool)arg5;	// IMP=0x0000000000145f3c
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(_Bool)arg5;	// IMP=0x0000000000145a46
@property(readonly, nonatomic) _Bool containsClosePathElement;
@property(readonly, nonatomic) _Bool isEffectivelyClosed;
- (struct CGPoint)pointAlongPathAtPercentage:(double)arg1;	// IMP=0x0000000000145254
- (double)distanceToPoint:(struct CGPoint)arg1 elementIndex:(unsigned long long *)arg2 tValue:(double *)arg3 threshold:(double)arg4;	// IMP=0x0000000000144fc8
- (_Bool)pointOnPath:(struct CGPoint)arg1 tolerance:(double)arg2;	// IMP=0x0000000000144f90
- (struct CGRect)boundsIncludingTSDStroke:(id)arg1;	// IMP=0x0000000000144cc2
- (struct CGRect)boundsIncludingStroke;	// IMP=0x0000000000144c20
- (struct CGRect)boundsIncludingStrokeWidth:(double)arg1 joinStyle:(unsigned long long)arg2 capStyle:(unsigned long long)arg3 miterLimit:(double)arg4 needsToExtendJoins:(_Bool)arg5;	// IMP=0x00000000001449ce
- (struct CGRect)_addMitersFromSegments:(id)arg1 toRect:(struct CGRect)arg2;	// IMP=0x0000000000144656
- (void)takeAttributesFromStroke:(id)arg1;	// IMP=0x0000000000144594
@property(readonly, nonatomic) _Bool isSelfIntersecting;
@property(readonly, nonatomic) _Bool isCompound;
- (void)alignBoundsToOrigin;	// IMP=0x0000000000144432
- (double)yValueFromXValue:(double)arg1;	// IMP=0x000000000014441c
- (id)pathBySplittingAtPointOnPath:(struct CGPoint)arg1;	// IMP=0x0000000000143dc0
- (double)yValueFromXValue:(double)arg1 elementIndex:(long long *)arg2 parametricValue:(double *)arg3;	// IMP=0x00000000001433e8
- (id)bezierPathByFittingCurve:(id)arg1;	// IMP=0x0000000000149782
- (id)bezierPathByFittingCurve;	// IMP=0x000000000014974a

@end

