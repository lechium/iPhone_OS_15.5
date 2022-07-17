//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentGlyphView : UIView
{
    double _animationDuration;	// 8 = 0x8
    UIColor *_glyphColor;	// 16 = 0x10
    struct CGPoint _glyphOffset;	// 24 = 0x18
}

+ (void)cacheGlyphView:(id)arg1;	// IMP=0x00000000004e04d4
+ (id)glyphViewForAcknowledgmentType:(long long)arg1 glyphColor:(BOOL)arg2;	// IMP=0x00000000004e0384
+ (id)viewCache;	// IMP=0x00000000004e02ef
- (void).cxx_destruct;	// IMP=0x00000000004e0596
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) struct CGPoint glyphOffset; // @synthesize glyphOffset=_glyphOffset;
@property(readonly, nonatomic) long long acknowledgmentType; // @dynamic acknowledgmentType;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e052d
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;	// IMP=0x00000000004e0344

@end
