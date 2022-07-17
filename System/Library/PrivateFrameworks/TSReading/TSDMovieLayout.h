//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDInfoGeometry;

@interface TSDMovieLayout
{
    TSDInfoGeometry *mDynamicInfoGeometry;	// 288 = 0x120
}

- (void)p_destroyDynamicCopies;	// IMP=0x00000000001c6b6e
- (void)p_createDynamicCopies;	// IMP=0x00000000001c6a8f
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;	// IMP=0x00000000001c6916
- (id)computeLayoutGeometry;	// IMP=0x00000000001c654b
- (struct CGRect)fullReflectionFrame;	// IMP=0x00000000001c64d0
- (struct CGRect)fullReflectionBoundsForRect:(struct CGRect)arg1;	// IMP=0x00000000001c643b
- (void)endDynamicOperation;	// IMP=0x00000000001c63c3
- (void)beginDynamicOperation;	// IMP=0x00000000001c6382
- (void)takeRotationFromTracker:(id)arg1;	// IMP=0x00000000001c6262
- (id)movieInfo;	// IMP=0x00000000001c622a
- (id)layoutGeometryFromInfo;	// IMP=0x00000000001c61b7
- (_Bool)supportsRotation;	// IMP=0x00000000001c61af
- (id)i_computeWrapPath;	// IMP=0x00000000001c6149
- (void)processChangedProperty:(int)arg1;	// IMP=0x00000000001c60fa
- (void)dealloc;	// IMP=0x00000000001c60ac
- (id)initWithInfo:(id)arg1;	// IMP=0x00000000001c603c

@end
