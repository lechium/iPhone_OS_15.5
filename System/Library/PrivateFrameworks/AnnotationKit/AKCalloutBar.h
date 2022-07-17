//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, _UIBackdropView;

@interface AKCalloutBar : UIView
{
    double _arrowX;	// 8 = 0x8
    _Bool _up;	// 16 = 0x10
    NSArray *_controls;	// 24 = 0x18
    _UIBackdropView *_backgroundView;	// 32 = 0x20
    _UIBackdropView *_separatorBackgroundView;	// 40 = 0x28
    UIImageView *_blurMaskView;	// 48 = 0x30
    UIImageView *_tintMaskView;	// 56 = 0x38
    UIImageView *_separatorMaskView;	// 64 = 0x40
    struct CGRect _highlightRect;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000b874b
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(nonatomic) _Bool up; // @synthesize up=_up;
@property(nonatomic) double arrowX; // @synthesize arrowX=_arrowX;
- (struct CGSize)sizeThatFitsControls:(id)arg1;	// IMP=0x00000000000b851a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b80d6
- (struct CGRect)dividerLineRectForControl:(long long)arg1;	// IMP=0x00000000000b7e66
- (void)layoutSubviews;	// IMP=0x00000000000b71c0
- (void)setHighlighted:(_Bool)arg1 forControl:(id)arg2;	// IMP=0x00000000000b6fd3
- (void)setBlurDisabled:(_Bool)arg1;	// IMP=0x00000000000b6ed6
- (id)newMaskView:(long long)arg1;	// IMP=0x00000000000b6e83
- (void)dealloc;	// IMP=0x00000000000b6e43
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b6af6

@end
