//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, UIWindow;

@interface SKUIStackView : UIView
{
    UIImage *_image;	// 8 = 0x8
    NSMutableArray *_stackViews;	// 16 = 0x10
    long long _stackViewStyle;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002a84fd
@property(readonly, nonatomic) long long stackViewStyle; // @synthesize stackViewStyle=_stackViewStyle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (long long)_stackDepth;	// IMP=0x00000000002a84bc
- (struct CGSize)_sizeOfItemAtIndex:(double)arg1;	// IMP=0x00000000002a844e
- (struct UIOffset)_relativeOffsetOfItemAtIndex:(long long)arg1 withCenter:(struct CGPoint)arg2;	// IMP=0x00000000002a8368
- (struct UIOffset)_relativeOffsetForMinimumRelativeOffset:(struct UIOffset)arg1 maximumRelativeOffset:(struct UIOffset)arg2 normalizedDistanceFromVanishingPoint:(struct CGSize)arg3;	// IMP=0x00000000002a831a
- (struct CGSize)_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint)arg1 perspectiveTargetView:(id)arg2;	// IMP=0x00000000002a8239
- (struct CGSize)_levelInsetSize;	// IMP=0x00000000002a8228
- (struct CGPoint)_centerInPerspectiveTargetViewCoordinates;	// IMP=0x00000000002a817c
- (void)layoutSubviews;	// IMP=0x00000000002a7ec1
- (void)didMoveToWindow;	// IMP=0x00000000002a7e63
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a7431
- (id)initWithStackViewStyle:(long long)arg1;	// IMP=0x00000000002a7222
- (id)_initSKUIStackView;	// IMP=0x00000000002a71d4

@end
