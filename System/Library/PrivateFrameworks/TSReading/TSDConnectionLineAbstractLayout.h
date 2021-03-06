//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout;

@interface TSDConnectionLineAbstractLayout
{
    TSDBezierPath *mClippedBezierPath;	// 600 = 0x258
    TSDConnectionLinePathSource *mOriginalPathSource;	// 608 = 0x260
    TSDConnectionLinePathSource *mConnectedPathSource;	// 616 = 0x268
    TSDInfoGeometry *mConnectedInfoGeometry;	// 624 = 0x270
    TSDLayout *mConnectedFrom;	// 632 = 0x278
    TSDLayout *mConnectedTo;	// 640 = 0x280
    TSDBezierPath *mCachedFromWrapPath;	// 648 = 0x288
    TSDBezierPath *mCachedToWrapPath;	// 656 = 0x290
    double mCachedFromOutset;	// 664 = 0x298
    double mCachedToOutset;	// 672 = 0x2a0
    TSDBezierPath *mCachedFromOutsetWrapPath;	// 680 = 0x2a8
    TSDBezierPath *mCachedToOutsetWrapPath;	// 688 = 0x2b0
    TSDLayout *mOldConnectedFrom;	// 696 = 0x2b8
    TSDLayout *mOldConnectedTo;	// 704 = 0x2c0
    _Bool mValidConnections;	// 712 = 0x2c8
    _Bool mVisibleLine;	// 713 = 0x2c9
    _Bool mValidLine;	// 714 = 0x2ca
    struct CGPoint mLooseEndPosition;	// 720 = 0x2d0
    struct CGPoint mAcumulatedDrag;	// 736 = 0x2e0
    _Bool mUseResizePoints[3];	// 752 = 0x2f0
    struct CGPoint mResizeControlPoints[3];	// 760 = 0x2f8
    _Bool mUseDynamicOutsets;	// 808 = 0x328
    double mDynamicOutsetFrom;	// 816 = 0x330
    double mDynamicOutsetTo;	// 824 = 0x338
}

@property(nonatomic) double dynamicOutsetTo; // @synthesize dynamicOutsetTo=mDynamicOutsetTo;
@property(nonatomic) double dynamicOutsetFrom; // @synthesize dynamicOutsetFrom=mDynamicOutsetFrom;
@property(nonatomic) _Bool useDynamicOutsets; // @synthesize useDynamicOutsets=mUseDynamicOutsets;
@property(readonly, nonatomic) _Bool validLine; // @synthesize validLine=mValidLine;
@property(nonatomic) TSDLayout *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property(nonatomic) TSDLayout *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
- (id)p_infoForConnectingToInfo:(id)arg1;	// IMP=0x0000000000252f55
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x0000000000252f24
- (_Bool)isStraightLine;	// IMP=0x0000000000252d8d
- (void)pauseDynamicTransformation;	// IMP=0x0000000000252bbb
- (struct CGPoint)i_accumulatedDrag;	// IMP=0x0000000000252ba3
- (void)endDynamicOperation;	// IMP=0x0000000000252b14
- (void)beginDynamicOperation;	// IMP=0x000000000025292a
- (_Bool)shouldDisplayGuides;	// IMP=0x00000000002528ec
- (struct CGPoint)unclippedTailPoint;	// IMP=0x0000000000252840
- (struct CGPoint)unclippedHeadPoint;	// IMP=0x0000000000252794
- (id)path;	// IMP=0x0000000000252754
- (_Bool)pathIsOpen;	// IMP=0x000000000025274c
- (_Bool)pathIsLineSegment;	// IMP=0x0000000000252744
- (void)invalidatePath;	// IMP=0x00000000002526b8
- (void)invalidatePosition;	// IMP=0x000000000025266a
- (struct CGRect)boundsForStandardKnobs;	// IMP=0x00000000002525aa
- (id)layoutInfoGeometry;	// IMP=0x000000000025255d
- (id)pathSource;	// IMP=0x0000000000252520
@property(readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
- (int)wrapType;	// IMP=0x000000000025249a
- (_Bool)canResetTextAndObjectHandles;	// IMP=0x0000000000252492
- (_Bool)canBeIntersected;	// IMP=0x000000000025248a
- (_Bool)canFlip;	// IMP=0x000000000025244c
- (_Bool)canEndpointsCoincide;	// IMP=0x0000000000252444
- (_Bool)isInvisible;	// IMP=0x000000000025241f
- (void)updateConnectedPath;	// IMP=0x0000000000251ae7
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(_Bool)arg4 isValid:(_Bool *)arg5;	// IMP=0x000000000025139a
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;	// IMP=0x0000000000251384
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;	// IMP=0x000000000025137c
- (void)checkConnections;	// IMP=0x00000000002511c5
- (void)validate;	// IMP=0x0000000000251173
- (void)invalidateConnections;	// IMP=0x000000000025112d
- (void)removeConnections;	// IMP=0x00000000002510c0
- (void)connectedLayoutInvalidated:(id)arg1;	// IMP=0x0000000000250d96
- (void)processChangedProperty:(int)arg1;	// IMP=0x0000000000250cde
- (void)parentDidChange;	// IMP=0x0000000000250c7b
- (void)updateRepPath;	// IMP=0x0000000000250c1e
- (_Bool)supportsFlipping;	// IMP=0x0000000000250be2
- (_Bool)supportsRotation;	// IMP=0x0000000000250bda
- (_Bool)supportsResize;	// IMP=0x0000000000250bd2
- (id)additionalLayoutsForRepCreation;	// IMP=0x0000000000250ba7
- (id)reliedOnLayouts;	// IMP=0x0000000000250b30
- (_Bool)shouldValidate;	// IMP=0x0000000000250b09
- (id)connectionLineInfo;	// IMP=0x0000000000250af7
@property(readonly, nonatomic) double outsetTo;
@property(readonly, nonatomic) double outsetFrom;
- (void)dealloc;	// IMP=0x0000000000250768

@end

