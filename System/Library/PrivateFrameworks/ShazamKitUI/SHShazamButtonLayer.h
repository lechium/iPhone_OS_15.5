//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <ShazamKitUI/CAAnimationDelegate-Protocol.h>

@class CAShapeLayer, NSString;
@protocol SHShazamButtonViewDelegate;

__attribute__((visibility("hidden")))
@interface SHShazamButtonLayer : CALayer <CAAnimationDelegate>
{
    _Bool _initialAnimationPerformed;	// 8 = 0x8
    id <SHShazamButtonViewDelegate> _buttonDelegate;	// 16 = 0x10
    CALayer *_backgroundLayer;	// 24 = 0x18
    CALayer *_shapeLayer;	// 32 = 0x20
    CAShapeLayer *_topTransparentLayer;	// 40 = 0x28
    CAShapeLayer *_bottomTransparentLayer;	// 48 = 0x30
    CAShapeLayer *_topSolidLayer;	// 56 = 0x38
    CAShapeLayer *_bottomSolidLayer;	// 64 = 0x40
    CAShapeLayer *_topBorder;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000003d07
@property(nonatomic) _Bool initialAnimationPerformed; // @synthesize initialAnimationPerformed=_initialAnimationPerformed;
@property(retain, nonatomic) CAShapeLayer *topBorder; // @synthesize topBorder=_topBorder;
@property(retain, nonatomic) CAShapeLayer *bottomSolidLayer; // @synthesize bottomSolidLayer=_bottomSolidLayer;
@property(retain, nonatomic) CAShapeLayer *topSolidLayer; // @synthesize topSolidLayer=_topSolidLayer;
@property(retain, nonatomic) CAShapeLayer *bottomTransparentLayer; // @synthesize bottomTransparentLayer=_bottomTransparentLayer;
@property(retain, nonatomic) CAShapeLayer *topTransparentLayer; // @synthesize topTransparentLayer=_topTransparentLayer;
@property(retain, nonatomic) CALayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) __weak id <SHShazamButtonViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (struct CGPath *)bottomStrokePath;	// IMP=0x0000000000003a9f
- (struct CGPath *)topStrokePath;	// IMP=0x0000000000003987
- (struct CGPath *)bottomStrokeLongPath;	// IMP=0x0000000000003787
- (struct CGPath *)topStrokeLongPath;	// IMP=0x0000000000003587
- (id)strokeLayerWithPath:(struct CGPath *)arg1 color:(struct CGColor *)arg2;	// IMP=0x00000000000034c2
- (void)drawSolidShapeWithDuration:(double)arg1 delay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002d44
- (void)drawSolidShape;	// IMP=0x0000000000002b81
- (void)removeTransparentShapeWithDuration:(double)arg1 delay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000027ae
- (void)drawTransparentShape;	// IMP=0x00000000000023d6
- (void)removeTransparentShape;	// IMP=0x0000000000002337
- (void)performFadeInIntroAnimation:(double)arg1 delay:(double)arg2;	// IMP=0x0000000000001fe8
- (void)skipIntroAnimation;	// IMP=0x0000000000001fd6
- (void)performSDrawingAnimationWithDuration:(double)arg1 delay:(double)arg2;	// IMP=0x0000000000001e6e
- (void)performSDrawingIntroAnimation;	// IMP=0x0000000000001e17
- (void)layoutSublayers;	// IMP=0x0000000000001a6b
- (void)buildView;	// IMP=0x00000000000016a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001657
- (id)init;	// IMP=0x000000000000160b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

