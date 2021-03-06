//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface FIUIAnimatingSpriteImageView : UIView
{
    CALayer *_imageLayer;	// 8 = 0x8
    UIImage *_spriteImage;	// 16 = 0x10
    long long _spriteFrameCount;	// 24 = 0x18
    long long _spriteColumnCount;	// 32 = 0x20
    unsigned long long _framesPerSecond;	// 40 = 0x28
}

+ (void)_resetLayer:(id)arg1;	// IMP=0x000000000001996e
+ (void)_resumeLayer:(id)arg1;	// IMP=0x00000000000198cd
+ (void)_pauseLayer:(id)arg1;	// IMP=0x0000000000019863
+ (id)_createNewSpriteArray:(id)arg1 currentFrame:(unsigned long long)arg2 arraySize:(unsigned long long)arg3 interrupted:(_Bool)arg4;	// IMP=0x000000000001917a
+ (unsigned long long)_findSpriteIndex:(struct CGPoint)arg1 centerPoints:(id)arg2;	// IMP=0x00000000000190e8
- (void).cxx_destruct;	// IMP=0x0000000000009da2
@property(nonatomic) unsigned long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(nonatomic) long long spriteColumnCount; // @synthesize spriteColumnCount=_spriteColumnCount;
@property(nonatomic) long long spriteFrameCount; // @synthesize spriteFrameCount=_spriteFrameCount;
@property(retain, nonatomic) UIImage *spriteImage; // @synthesize spriteImage=_spriteImage;
- (void)_addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000197cc
- (void)resumeAnimating;	// IMP=0x0000000000019777
- (void)pauseAnimating;	// IMP=0x0000000000019731
- (void)animateOnce;	// IMP=0x00000000000195d3
- (_Bool)isAnimating;	// IMP=0x000000000000a3c7
- (void)stopAnimatingFinishingCycle:(_Bool)arg1;	// IMP=0x0000000000019330
- (void)startAnimating;	// IMP=0x00000000000082ff
- (id)_centerPointValues;	// IMP=0x0000000000018f84
- (struct CGSize)_spriteFrameSize;	// IMP=0x000000000000a40c
- (void)layoutSubviews;	// IMP=0x0000000000009dd3
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000018f72
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000018f60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000006a20

@end

