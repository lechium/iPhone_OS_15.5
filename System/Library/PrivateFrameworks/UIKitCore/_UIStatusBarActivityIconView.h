//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIStatusBarPersistentAnimation-Protocol.h>

@class CAShapeLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIconView <_UIStatusBarPersistentAnimation>
{
    _Bool _ringing;	// 120 = 0x78
    double _ringingIconScale;	// 128 = 0x80
    CAShapeLayer *_innerRingShapeLayer;	// 136 = 0x88
    CAShapeLayer *_outerRingShapeLayer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000e95c7f
@property(retain, nonatomic) CAShapeLayer *outerRingShapeLayer; // @synthesize outerRingShapeLayer=_outerRingShapeLayer;
@property(retain, nonatomic) CAShapeLayer *innerRingShapeLayer; // @synthesize innerRingShapeLayer=_innerRingShapeLayer;
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000e95b8c
- (void)setRinging:(_Bool)arg1 forUpdate:(id)arg2;	// IMP=0x0000000000e95ae7
- (void)resumePersistentAnimation;	// IMP=0x0000000000e95669
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000e95564
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000e9536b
- (void)layoutSubviews;	// IMP=0x0000000000e95255
- (void)_teardownRingingLayers;	// IMP=0x0000000000e951cf
- (void)_setupRingingLayersForStyleAttributes:(id)arg1;	// IMP=0x0000000000e94d30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
