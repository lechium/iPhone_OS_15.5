//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSArray, UIImage, __TVAnimatedImageView;

__attribute__((visibility("hidden")))
@interface VUIAnimatedLabel
{
    _Bool _crossfading;	// 8 = 0x8
    _Bool _marqueeNeeded;	// 9 = 0x9
    _Bool _marqueeing;	// 10 = 0xa
    _Bool _starting;	// 11 = 0xb
    _Bool _stopping;	// 12 = 0xc
    CALayer *_maskLayer;	// 16 = 0x10
    _Bool _animating;	// 24 = 0x18
    _Bool _paused;	// 25 = 0x19
    float _scrollRate;	// 28 = 0x1c
    double _marqueeDelay;	// 32 = 0x20
    double _replicationPadding;	// 40 = 0x28
    double _maskCapWidth;	// 48 = 0x30
    double _crossfadeDuration;	// 56 = 0x38
    NSArray *_attributedStrings;	// 64 = 0x40
    unsigned long long _currentAttributedStringIndex;	// 72 = 0x48
    double _underPosterOutset;	// 80 = 0x50
    __TVAnimatedImageView *_currentMarqueeView;	// 88 = 0x58
    __TVAnimatedImageView *_nextMarqueeView;	// 96 = 0x60
    UIImage *_marqueeContentImage;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002025e7
@property(retain, nonatomic) UIImage *marqueeContentImage; // @synthesize marqueeContentImage=_marqueeContentImage;
@property(readonly, nonatomic) __weak __TVAnimatedImageView *nextMarqueeView; // @synthesize nextMarqueeView=_nextMarqueeView;
@property(readonly, nonatomic) __weak __TVAnimatedImageView *currentMarqueeView; // @synthesize currentMarqueeView=_currentMarqueeView;
@property(nonatomic) double underPosterOutset; // @synthesize underPosterOutset=_underPosterOutset;
@property(readonly, nonatomic) unsigned long long currentAttributedStringIndex; // @synthesize currentAttributedStringIndex=_currentAttributedStringIndex;
@property(copy, nonatomic) NSArray *attributedStrings; // @synthesize attributedStrings=_attributedStrings;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) float scrollRate; // @synthesize scrollRate=_scrollRate;
@property(nonatomic) double maskCapWidth; // @synthesize maskCapWidth=_maskCapWidth;
@property(nonatomic) double replicationPadding; // @synthesize replicationPadding=_replicationPadding;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000000202421
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x00000000002023cf
- (void)setMarqueeRunning:(_Bool)arg1;	// IMP=0x00000000002023bd
- (void)setMarqueeEnabled:(_Bool)arg1;	// IMP=0x00000000002023b7
- (void)_startMarqueeIfNeeded;	// IMP=0x00000000002014d2
- (_Bool)_shouldCycle;	// IMP=0x0000000000201489
- (void)_prepareNextMarqueeWithDelay:(double)arg1;	// IMP=0x0000000000200f47
- (id)_rasterizedTextWithMarquee:(_Bool)arg1;	// IMP=0x0000000000200c41
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x00000000002008be
- (_Bool)_isRTL;	// IMP=0x000000000020087a
- (void)didMoveToWindow;	// IMP=0x000000000020080c
- (void)stopAndResetScrollWithDuration:(double)arg1;	// IMP=0x00000000001fffef
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;	// IMP=0x00000000001ffd2b
- (void)stopAnimating;	// IMP=0x00000000001ffcf0
- (void)_clearAnimations;	// IMP=0x00000000001ff7b9
- (void)setNeedsDisplay;	// IMP=0x00000000001ff77d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001ff6b5
- (void)_clearAttributedStrings;	// IMP=0x00000000001ff15c
- (void)setAttributedText:(id)arg1;	// IMP=0x00000000001ff0b8
- (void)setText:(id)arg1;	// IMP=0x00000000001ff042
- (void)dealloc;	// IMP=0x00000000001fefc3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001fed36

@end

