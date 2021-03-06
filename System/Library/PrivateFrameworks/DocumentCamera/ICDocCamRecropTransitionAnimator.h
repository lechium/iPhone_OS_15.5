//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DocumentCamera/UIViewControllerAnimatedTransitioning-Protocol.h>

@class ICDocCamImageQuad, NSIndexPath, NSString, UIImage, UIView;

@interface ICDocCamRecropTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;	// 8 = 0x8
    UIImage *_filteredImage;	// 16 = 0x10
    UIImage *_unfilteredImage;	// 24 = 0x18
    NSIndexPath *_indexPath;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
    long long _orientation;	// 56 = 0x38
    UIView *_startView;	// 64 = 0x40
    ICDocCamImageQuad *_quadForOverlay;	// 72 = 0x48
    struct CGRect _containerViewFrame;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002233a
@property(retain, nonatomic) ICDocCamImageQuad *quadForOverlay; // @synthesize quadForOverlay=_quadForOverlay;
@property(nonatomic) __weak UIView *startView; // @synthesize startView=_startView;
@property(nonatomic) struct CGRect containerViewFrame; // @synthesize containerViewFrame=_containerViewFrame;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *unfilteredImage; // @synthesize unfilteredImage=_unfilteredImage;
@property(retain, nonatomic) UIImage *filteredImage; // @synthesize filteredImage=_filteredImage;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (CDStruct_d80e62f2)matrixTransformingToUnitSquareWithPoints:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 x2:(double)arg5 y2:(double)arg6 x3:(double)arg7 y3:(double)arg8;	// IMP=0x00000000000220c8
- (void)sortPoints:(struct CGPoint *)arg1 sorted:(struct CGPoint *)arg2;	// IMP=0x0000000000021b5d
- (CDStruct_d80e62f2)matrixTransformingQuadForOverlayToImageView:(_Bool *)arg1;	// IMP=0x000000000002155c
- (id)scrollViewTransform:(_Bool)arg1;	// IMP=0x0000000000020ff7
- (id)imageMeshTransform:(_Bool)arg1;	// IMP=0x00000000000207c3
- (void)performSimpleFadeInFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000002042c
- (void)performPopTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000001ece8
- (void)performPushTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000001d2f3
- (void)animateTransition:(id)arg1;	// IMP=0x000000000001d1c3
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000001d1b5
- (id)initWithImage:(id)arg1 unfilteredImage:(id)arg2 orientation:(long long)arg3 indexPath:(id)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000001d0b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

