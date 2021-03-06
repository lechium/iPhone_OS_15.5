//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAContext, NSString;

@interface BKDisplayRenderOverlayImage
{
    CAContext *_context;	// 8 = 0x8
    struct CGImage *_imageRef;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001e970
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x001000000001e5dc
- (id)_animationForKeyPath:(id)arg1 withSettings:(id)arg2;	// IMP=0x001000000001e52b
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000001e449
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x001000000001e437
- (void)_cleanup;	// IMP=0x001000000001e386
- (id)_persistenceData;	// IMP=0x001000000001e324
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x001000000001e191
- (void)_freeze;	// IMP=0x001000000001e136
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x001000000001d1fb
- (_Bool)disablesDisplayUpdates;	// IMP=0x001000000001d1c8
@property(readonly, nonatomic) struct CGImage *image;
- (void)dealloc;	// IMP=0x001000000001d014
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x001000000001cf69
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x001000000001cf18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

