//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDBezierPath, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDMutableStroke, TSDPathSource;

@interface TSDShapeLayout
{
    struct {
        unsigned int path:1;
        unsigned int pathBounds:1;
        unsigned int pathBoundsWithoutStroke:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int alignmentFrame:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;	// 288 = 0x120
    TSDBezierPath *mCachedPath;	// 296 = 0x128
    struct CGRect mCachedPathBounds;	// 304 = 0x130
    struct CGRect mCachedPathBoundsWithoutStroke;	// 336 = 0x150
    _Bool mCachedPathIsOpen;	// 368 = 0x170
    _Bool mCachedPathIsLineSegment;	// 369 = 0x171
    struct CGRect mCachedAlignmentFrame;	// 376 = 0x178
    struct CGPoint mHeadPoint;	// 408 = 0x198
    struct CGPoint mTailPoint;	// 424 = 0x1a8
    struct CGPoint mHeadLineEndPoint;	// 440 = 0x1b8
    struct CGPoint mTailLineEndPoint;	// 456 = 0x1c8
    double mHeadLineEndAngle;	// 472 = 0x1d8
    double mTailLineEndAngle;	// 480 = 0x1e0
    long long mHeadCutSegment;	// 488 = 0x1e8
    long long mTailCutSegment;	// 496 = 0x1f0
    double mHeadCutT;	// 504 = 0x1f8
    double mTailCutT;	// 512 = 0x200
    TSDBezierPath *mCachedClippedPath;	// 520 = 0x208
    TSDPathSource *mShrunkenPathSource;	// 528 = 0x210
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;	// 536 = 0x218
    TSDPathSource *mCachedPathSource;	// 544 = 0x220
    TSDPathSource *mResizePathSource;	// 552 = 0x228
    TSDInfoGeometry *mResizeInfoGeometry;	// 560 = 0x230
    TSDInfoGeometry *mInitialInfoGeometry;	// 568 = 0x238
    TSDPathSource *mProvidedPathSource;	// 576 = 0x240
    TSDMutableStroke *mDynamicStroke;	// 584 = 0x248
    TSDFill *mDynamicFill;	// 592 = 0x250
}

@property(retain, nonatomic) TSDFill *dynamicFill; // @synthesize dynamicFill=mDynamicFill;
- (void)p_updateResizeInfoGeometryFromResizePathSource;	// IMP=0x000000000011f982
- (id)p_unitePath:(id)arg1 withLineEndForHead:(_Bool)arg2 stroke:(id)arg3;	// IMP=0x000000000011f870
- (struct CGRect)p_boundsOfLineEndForHead:(_Bool)arg1 transform:(struct CGAffineTransform)arg2;	// IMP=0x000000000011f719
- (id)p_createClippedPath;	// IMP=0x000000000011f442
- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(_Bool)arg5;	// IMP=0x000000000011f0a5
- (void)p_validateTailLineEnd;	// IMP=0x000000000011f041
- (void)p_validateHeadLineEnd;	// IMP=0x000000000011efcc
- (void)p_validateHeadAndTail;	// IMP=0x000000000011ef6b
- (void)p_invalidateClippedPath;	// IMP=0x000000000011ef37
- (void)p_invalidateTail;	// IMP=0x000000000011ef18
- (void)p_invalidateHead;	// IMP=0x000000000011eefb
- (_Bool)p_cachedPathIsLineSegment;	// IMP=0x000000000011ee99
- (_Bool)p_cachedPathIsOpen;	// IMP=0x000000000011ee37
- (struct CGRect)p_cachedPathBoundsWithoutStroke;	// IMP=0x000000000011ed90
- (struct CGRect)p_cachedPathBounds;	// IMP=0x000000000011eb66
- (id)p_cachedPath;	// IMP=0x000000000011eaf9
- (id)i_computeWrapPathClosed:(_Bool)arg1;	// IMP=0x000000000011e891
- (id)i_computeWrapPath;	// IMP=0x000000000011e847
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x000000000011e7e5
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x000000000011e76c
- (unsigned long long)numberOfControlKnobs;	// IMP=0x000000000011e719
- (id)strokeTailLineEnd;	// IMP=0x000000000011e686
- (id)strokeHeadLineEnd;	// IMP=0x000000000011e5f3
- (struct CGPoint)unclippedTailPoint;	// IMP=0x000000000011e5e1
- (struct CGPoint)unclippedHeadPoint;	// IMP=0x000000000011e5cf
- (_Bool)isBeingManipulated;	// IMP=0x000000000011e589
- (_Bool)supportsRotation;	// IMP=0x000000000011e581
- (id)initialInfoGeometry;	// IMP=0x000000000011e570
- (struct CGSize)minimumSize;	// IMP=0x000000000011e51d
- (void)endDynamicOperation;	// IMP=0x000000000011e381
- (void)beginDynamicOperation;	// IMP=0x000000000011e0bc
- (_Bool)supportsResize;	// IMP=0x000000000011e013
- (void)invalidatePathBounds;	// IMP=0x000000000011dfc8
- (void)invalidatePath;	// IMP=0x000000000011df59
- (void)invalidateFrame;	// IMP=0x000000000011df1d
- (_Bool)canResetTextAndObjectHandles;	// IMP=0x000000000011df08
- (_Bool)canBeIntersected;	// IMP=0x000000000011def3
@property(readonly, nonatomic) TSDFill *fill;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id *)arg3 adjustedPath:(id *)arg4 startDelta:(struct CGPoint *)arg5 endDelta:(struct CGPoint *)arg6;	// IMP=0x000000000011d9d5
- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id *)arg2 adjustedPath:(id *)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5;	// IMP=0x000000000011d96c
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;	// IMP=0x000000000011d47f
- (struct CGPoint)centerForConnecting;	// IMP=0x000000000011d3f2
- (_Bool)isInvisibleAutosizingShape;	// IMP=0x000000000011d352
- (_Bool)shouldBeDisplayedInShowMode;	// IMP=0x000000000011d2c2
- (_Bool)isInvisible;	// IMP=0x000000000011d2ba
- (struct CGRect)shapeFrameWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000011cf8b
- (id)clippedPathForLineEnds;	// IMP=0x000000000011cf3f
- (double)lineEndScale;	// IMP=0x000000000011ced9
- (_Bool)isTailEndOnLeft;	// IMP=0x000000000011ccad
- (double)tailLineEndAngle;	// IMP=0x000000000011cc84
- (double)headLineEndAngle;	// IMP=0x000000000011cc5b
- (struct CGPoint)tailLineEndPoint;	// IMP=0x000000000011cc2c
- (struct CGPoint)headLineEndPoint;	// IMP=0x000000000011cbfd
- (struct CGPoint)tailPoint;	// IMP=0x000000000011cbce
- (struct CGPoint)headPoint;	// IMP=0x000000000011cb9f
- (id)layoutInfoGeometry;	// IMP=0x000000000011cb5d
- (_Bool)pathIsLineSegment;	// IMP=0x000000000011cb4b
- (_Bool)pathIsOpen;	// IMP=0x000000000011cb39
- (id)smartPathSource;	// IMP=0x000000000011cb0e
- (struct CGRect)pathBoundsWithoutStroke;	// IMP=0x000000000011cadb
- (struct CGRect)pathBounds;	// IMP=0x000000000011caa8
- (id)path;	// IMP=0x000000000011ca96
- (id)editablePathSource;	// IMP=0x000000000011c9b1
- (id)pathSource;	// IMP=0x000000000011c94f
- (id)shapeInfo;	// IMP=0x000000000011c917
- (_Bool)isStrokeBeingManipulated;	// IMP=0x000000000011c902
- (void)dynamicStrokeWidthChangeDidEnd;	// IMP=0x000000000011c8da
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;	// IMP=0x000000000011c796
- (void)dynamicStrokeWidthChangeDidBegin;	// IMP=0x000000000011c6b7
- (id)stroke;	// IMP=0x000000000011c675
- (struct CGRect)boundsForStandardKnobs;	// IMP=0x000000000011c5b8
- (void)processChangedProperty:(int)arg1;	// IMP=0x000000000011c4d2
- (struct CGRect)alignmentFrameInRoot;	// IMP=0x000000000011c426
- (struct CGRect)alignmentFrame;	// IMP=0x000000000011c36d
- (void)setGeometry:(id)arg1;	// IMP=0x000000000011c176
- (struct CGAffineTransform)computeLayoutTransform;	// IMP=0x000000000011c09e
- (id)computeLayoutGeometry;	// IMP=0x000000000011ba76
- (id)layoutGeometryFromInfo;	// IMP=0x000000000011ba03
- (void)dealloc;	// IMP=0x000000000011b957
- (id)initWithInfo:(id)arg1;	// IMP=0x000000000011b8ec

@end

