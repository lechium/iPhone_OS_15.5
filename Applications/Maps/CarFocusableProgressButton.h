//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CarFocusableProgressButton
{
    double _progress;	// 8 = 0x8
    UIView *_fillView;	// 16 = 0x10
    UIView *_barView;	// 24 = 0x18
    NSLayoutConstraint *_horizontalConstraint;	// 32 = 0x20
    UIColor *_progressFillColor;	// 40 = 0x28
    UIColor *_progressFillFocusedColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000254571
@property(retain, nonatomic) UIColor *progressFillFocusedColor; // @synthesize progressFillFocusedColor=_progressFillFocusedColor;
@property(retain, nonatomic) UIColor *progressFillColor; // @synthesize progressFillColor=_progressFillColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateProgressConstraint;	// IMP=0x0010000000254323
- (void)_updateColors;	// IMP=0x0010000000254237
- (void)focusDidChange:(_Bool)arg1;	// IMP=0x00100000002541e1
- (void)setProgessFillColor:(id)arg1;	// IMP=0x0010000000254151
- (void)_insertFillViewIfNecessary;	// IMP=0x00100000002539c6
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0010000000253962
- (void)didMoveToWindow;	// IMP=0x0010000000253921

@end

