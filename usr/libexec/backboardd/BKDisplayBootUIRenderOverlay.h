//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAContext, CALayer, NSString;

@interface BKDisplayBootUIRenderOverlay
{
    CALayer *_backgroundLayer;	// 8 = 0x8
    unsigned long long _outstandingAnimationsCount;	// 16 = 0x10
    _Bool _lightBackground;	// 24 = 0x18
    CAContext *_context;	// 32 = 0x20
    CALayer *_contentLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000012c9f
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000012b78
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000012a96
- (id)_animationForBackgroundLayerCrossfading:(id)arg1;	// IMP=0x0010000000012a1f
- (id)_animationForContentLayerCrossfading:(id)arg1;	// IMP=0x0010000000012928
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000000128dc
- (void)_cleanUpContentLayer;	// IMP=0x00100000000128d6
- (id)_prepareContentLayerForPresentation:(id)arg1;	// IMP=0x00100000000128c1
- (void)_cleanup;	// IMP=0x0010000000012756
- (void)_freeze;	// IMP=0x0010000000012750
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x0010000000012566
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x0010000000011d94
- (_Bool)disablesDisplayUpdates;	// IMP=0x0010000000011d8c
@property(nonatomic, getter=_bounds, setter=_setBounds:) struct CGRect bounds;
@property(readonly, nonatomic, getter=_useLightBackground) _Bool lightBackground; // @synthesize lightBackground=_lightBackground;
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0010000000011766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

