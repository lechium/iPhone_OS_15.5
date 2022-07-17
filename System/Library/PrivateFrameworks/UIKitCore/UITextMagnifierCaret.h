//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret
{
    double _yOffset;	// 112 = 0x70
    struct CGPoint _offset;	// 120 = 0x78
}

+ (Class)renderClass;	// IMP=0x0000000000ff8ba5
+ (id)activeCaretMagnifier;	// IMP=0x0000000000ff8b94
+ (id)sharedCaretMagnifier;	// IMP=0x0000000000ff8a53
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (double)offsetFromMagnificationPoint;	// IMP=0x0000000000ff94ee
- (_Bool)isHorizontal;	// IMP=0x0000000000ff94e6
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;	// IMP=0x0000000000ff93e9
- (void)updateFrameAndOffset;	// IMP=0x0000000000ff9143
- (void)remove;	// IMP=0x0000000000ff90df
- (void)zoomDownAnimation;	// IMP=0x0000000000ff8dc8
- (void)zoomUpAnimation;	// IMP=0x0000000000ff8c91
- (_Bool)terminalPointPlacedCarefully;	// IMP=0x0000000000ff8c2c
- (void)setAnimationPoint:(struct CGPoint)arg1;	// IMP=0x0000000000ff8c1a
- (struct CGPoint)animationPoint;	// IMP=0x0000000000ff8c08
- (id)initWithFrame;	// IMP=0x0000000000ff8bb6

@end
