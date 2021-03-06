//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUAssetTransitionInfo, UIView;

@interface PUOneUpAssetTransitionContext : NSObject
{
    _Bool _shouldHideBackground;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UIView *_fromView;	// 24 = 0x18
    UIView *_snapshotView;	// 32 = 0x20
    PUAssetTransitionInfo *_transitionInfo;	// 40 = 0x28
    PUAssetTransitionInfo *_trailingAssetTransitionInfo;	// 48 = 0x30
    PUAssetTransitionInfo *_leadingAssetTransitionInfo;	// 56 = 0x38
    CDUnknownBlockType _animationBlock;	// 64 = 0x40
}

+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4 trailingAssetTransitionInfo:(id)arg5 leadingAssetTransitionInfo:(id)arg6;	// IMP=0x000000000022672e
+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4;	// IMP=0x0000000000226650
- (void).cxx_destruct;	// IMP=0x00000000002265f1
@property(copy, nonatomic, setter=_setAnimationBlock:) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(retain, nonatomic, setter=_setLeadingAssetTransitionInfo:) PUAssetTransitionInfo *leadingAssetTransitionInfo; // @synthesize leadingAssetTransitionInfo=_leadingAssetTransitionInfo;
@property(retain, nonatomic, setter=_setTrailingAssetTransitionInfo:) PUAssetTransitionInfo *trailingAssetTransitionInfo; // @synthesize trailingAssetTransitionInfo=_trailingAssetTransitionInfo;
@property(retain, nonatomic, setter=_setTransitionInfo:) PUAssetTransitionInfo *transitionInfo; // @synthesize transitionInfo=_transitionInfo;
@property(nonatomic, setter=_setShouldHideBackground:) _Bool shouldHideBackground; // @synthesize shouldHideBackground=_shouldHideBackground;
@property(retain, nonatomic, setter=_setSnapshotView:) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic, setter=_setFromView:) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic, setter=_setContainerView:) UIView *containerView; // @synthesize containerView=_containerView;
- (id)oneUpTransitionContextWithAnimationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000226450
- (id)oneUpTransitionContextWithContextShouldHideBackground:(_Bool)arg1;	// IMP=0x00000000002263a3
- (id)oneUpTransitionContextWithContextWithContainerView:(id)arg1;	// IMP=0x00000000002262e0

@end

