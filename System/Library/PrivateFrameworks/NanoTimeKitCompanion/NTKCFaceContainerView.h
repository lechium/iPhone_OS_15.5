//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIView;

@interface NTKCFaceContainerView : UIControl
{
    _Bool _active;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    UIView *_faceView;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    CAShapeLayer *_outline;	// 40 = 0x28
    UIView *_faceContainer;	// 48 = 0x30
    UIView *_highlightView;	// 56 = 0x38
    struct CGSize _faceSize;	// 64 = 0x40
}

+ (double)_insetPaddingForStyle:(long long)arg1;	// IMP=0x00000000002b75e0
+ (struct CGSize)faceSizeForSize:(struct CGSize)arg1 style:(long long)arg2;	// IMP=0x00000000002b7574
+ (struct CGSize)sizeForFaceSize:(struct CGSize)arg1 style:(long long)arg2;	// IMP=0x00000000002b7501
- (void).cxx_destruct;	// IMP=0x00000000002b7737
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *faceContainer; // @synthesize faceContainer=_faceContainer;
@property(retain, nonatomic) CAShapeLayer *outline; // @synthesize outline=_outline;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct CGSize faceSize; // @synthesize faceSize=_faceSize;
- (void)_updateOutlineColor;	// IMP=0x00000000002b749b
- (double)_outlineLineWidth;	// IMP=0x00000000002b742c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002b741a
- (void)layoutSubviews;	// IMP=0x00000000002b6ba6
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000002b6b84
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002b6b43
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002b6a78
- (struct CGAffineTransform)_transformForFaceView;	// IMP=0x00000000002b6868
- (id)initWithFaceSize:(struct CGSize)arg1 style:(long long)arg2;	// IMP=0x00000000002b61c6

@end

