//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPKGlyphWrapper, UIImpactFeedbackGenerator, UIView;

@interface LAUITouchIDGlyph : NSObject
{
    LAPKGlyphWrapper *_glyph;	// 8 = 0x8
    UIImpactFeedbackGenerator *_hapticGenerator;	// 16 = 0x10
    long long _state;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000076e0
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)shake;	// IMP=0x0000000000007570
@property(readonly, nonatomic) UIView *view;
- (void)dealloc;	// IMP=0x0000000000007497
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000073c9

@end
