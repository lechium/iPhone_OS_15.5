//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

__attribute__((visibility("hidden")))
@interface CKThumbsUpAcknowledgmentGlyphView
{
    CALayer *_animationLayer;	// 48 = 0x30
    CALayer *_contentLayer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004e1b81
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
- (void)setGlyphColor:(id)arg1;	// IMP=0x00000000004e1a37
- (double)animationDuration;	// IMP=0x00000000004e1a29
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e0f45
- (long long)acknowledgmentType;	// IMP=0x00000000004e0f3a

@end
