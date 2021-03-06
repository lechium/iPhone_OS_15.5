//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <IMSharedUI/IMTypingIndicatorLayerProtocol-Protocol.h>

@class CAReplicatorLayer, NSString, UIColor, UITraitCollection;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol>
{
    _Bool _hasDarkBackground;	// 8 = 0x8
    _Bool _highlighted;	// 9 = 0x9
    id _iconImage;	// 16 = 0x10
    UIColor *_bubbleColor;	// 24 = 0x18
    UIColor *_thinkingDotColor;	// 32 = 0x20
    UITraitCollection *_traitCollection;	// 40 = 0x28
    double _bubbleOpacity;	// 48 = 0x30
    double _thinkingDotOpacity;	// 56 = 0x38
    UIColor *_customBubbleColor;	// 64 = 0x40
    CALayer *_bubbleContainer;	// 72 = 0x48
    CALayer *_smallBubble;	// 80 = 0x50
    CALayer *_mediumBubble;	// 88 = 0x58
    CALayer *_largeBubble;	// 96 = 0x60
    CALayer *_thinkingDotContainer;	// 104 = 0x68
    CALayer *_thinkingDot;	// 112 = 0x70
    CAReplicatorLayer *_thinkingDots;	// 120 = 0x78
    CALayer *_iconImageLayer;	// 128 = 0x80
}

+ (double)thinkingDotSpace;	// IMP=0x000000000000fcb7
+ (double)thinkingDotDiameter;	// IMP=0x000000000000fca9
+ (struct CGPoint)thinkingDotsOffset;	// IMP=0x000000000000fc93
+ (double)iconImageTrailingSpace;	// IMP=0x000000000000fc85
+ (struct CGRect)iconImageFrame;	// IMP=0x000000000000fc67
+ (struct CGPoint)largeBubbleGrowOffset;	// IMP=0x000000000000fc51
+ (struct CGRect)largeBubbleFrame;	// IMP=0x000000000000fbfc
+ (struct CGPoint)mediumBubbleGrowOffset;	// IMP=0x000000000000fbe6
+ (struct CGRect)mediumBubbleFrame;	// IMP=0x000000000000fb91
+ (struct CGPoint)smallBubbleGrowOffset;	// IMP=0x000000000000fb7b
+ (struct CGRect)smallBubbleFrame;	// IMP=0x000000000000fb5d
+ (_Bool)supportsTypingIndicatorAnimation;	// IMP=0x000000000000fb0d
+ (struct CGSize)defaultSize;	// IMP=0x000000000000f991
- (void).cxx_destruct;	// IMP=0x00000000000066b3
@property(retain, nonatomic) CALayer *iconImageLayer; // @synthesize iconImageLayer=_iconImageLayer;
@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;
@property(retain, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property(retain, nonatomic) CALayer *thinkingDotContainer; // @synthesize thinkingDotContainer=_thinkingDotContainer;
@property(retain, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;
@property(retain, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;
@property(retain, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;
@property(retain, nonatomic) CALayer *bubbleContainer; // @synthesize bubbleContainer=_bubbleContainer;
@property(copy, nonatomic) UIColor *customBubbleColor; // @synthesize customBubbleColor=_customBubbleColor;
@property(nonatomic) double thinkingDotOpacity; // @synthesize thinkingDotOpacity=_thinkingDotOpacity;
@property(nonatomic) double bubbleOpacity; // @synthesize bubbleOpacity=_bubbleOpacity;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(copy, nonatomic) UIColor *thinkingDotColor; // @synthesize thinkingDotColor=_thinkingDotColor;
@property(copy, nonatomic) UIColor *bubbleColor; // @synthesize bubbleColor=_bubbleColor;
@property(retain, nonatomic) id iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
- (void)stopAnimation;	// IMP=0x0000000000006439
- (void)startShrinkAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005c49
- (void)stopPulseAnimation;	// IMP=0x0000000000005b9b
- (void)startPulseAnimation;	// IMP=0x00000000000059bf
- (void)startGrowAnimation;	// IMP=0x00000000000059ab
- (void)startGrowAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000052f9
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;	// IMP=0x000000000000518f
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000004a56
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;	// IMP=0x00000000000048ec
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;	// IMP=0x00000000000041b3
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;	// IMP=0x0000000000004049
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000000398e
- (void)_updateBubbleOpacity;	// IMP=0x00000000000038a9
- (void)_updateBubbleColors;	// IMP=0x00000000000037bc
- (void)_buildThinkingDots;	// IMP=0x00000000000031f6
- (void)_buildIconImage;	// IMP=0x0000000000002f5f
- (void)_updateForImage;	// IMP=0x0000000000002dc2
- (void)_setup;	// IMP=0x00000000000027a9
- (id)resolvedColor:(id)arg1 forTraitCollection:(id)arg2;	// IMP=0x00000000000024e8
- (double)convertedCurrentMediaTime;	// IMP=0x0000000000002434
- (id)initHighlighted:(_Bool)arg1;	// IMP=0x00000000000023d6
- (id)init;	// IMP=0x000000000000238a
@property(readonly, nonatomic) double defaultBubbleOpacity;
@property(readonly, nonatomic) double defaultThinkingDotOpacity;
@property(readonly, nonatomic) UIColor *defaultThinkingDotColor;
@property(readonly, nonatomic) UIColor *defaultBubbleColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

