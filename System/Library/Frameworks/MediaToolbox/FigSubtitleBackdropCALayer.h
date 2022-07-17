//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigSubtitleBackdropCALayer
{
    struct OpaqueFigSubtitleBackdropCALayerInternal *bdLayerInternal;	// 16 = 0x10
}

- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000404ac0
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000404981
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000404659
- (void)updateHDRContentState:(_Bool)arg1;	// IMP=0x00000000004045d4
- (void)updateWindowOpacity:(double)arg1;	// IMP=0x0000000000404549
- (void)updateBackdropLayer;	// IMP=0x0000000000404543
- (_Bool)shouldEnableBackdropLayer;	// IMP=0x000000000040453b
- (void)setNeedsLayout;	// IMP=0x000000000040450c
- (void)setNeedsDisplay;	// IMP=0x00000000004044dd
- (void)setContents:(id)arg1;	// IMP=0x00000000004044ae
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000040446e
- (void)setCornerRadius:(double)arg1;	// IMP=0x000000000040443f
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000404410
- (void)dealloc;	// IMP=0x00000000004043a9
- (id)init;	// IMP=0x00000000004042d8
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000004042bf

@end
