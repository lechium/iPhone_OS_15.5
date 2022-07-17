//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIButtonBarDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIBlurEffect, UIVisualEffectView, _UIButtonBar, _UIButtonBarButtonVisualProvider;

@interface _UIGroupedBar <_UIButtonBarDelegate>
{
    _UIButtonBar *_leftBar;	// 120 = 0x78
    _UIButtonBar *_centerBar;	// 128 = 0x80
    _UIButtonBar *_rightBar;	// 136 = 0x88
    UIVisualEffectView *_backgroundView;	// 144 = 0x90
    NSLayoutConstraint *_centeringConstraint;	// 152 = 0x98
    NSLayoutConstraint *_leadingLimitConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_trailingLimitConstraint;	// 168 = 0xa8
    _Bool _independentGroupSizes;	// 176 = 0xb0
    double _margin;	// 184 = 0xb8
    double _minimumInterItemSpace;	// 192 = 0xc0
    double _minimumInterGroupSpace;	// 200 = 0xc8
    double _leadingBarSizeLimit;	// 208 = 0xd0
    double _trailingBarSizeLimit;	// 216 = 0xd8
    _UIButtonBarButtonVisualProvider *_visualProvider;	// 224 = 0xe0
    UIBlurEffect *_backgroundEffect;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000013574e
@property(copy, nonatomic) UIBlurEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property(copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
@property(nonatomic) double trailingBarSizeLimit; // @synthesize trailingBarSizeLimit=_trailingBarSizeLimit;
@property(nonatomic) double leadingBarSizeLimit; // @synthesize leadingBarSizeLimit=_leadingBarSizeLimit;
@property(nonatomic) double minimumInterGroupSpace; // @synthesize minimumInterGroupSpace=_minimumInterGroupSpace;
@property(nonatomic) double minimumInterItemSpace; // @synthesize minimumInterItemSpace=_minimumInterItemSpace;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool independentGroupSizes; // @synthesize independentGroupSizes=_independentGroupSizes;
- (id)_debug;	// IMP=0x0000000000135507
- (void)buttonBarWillUpdateLayout:(id)arg1;	// IMP=0x00000000001354f5
- (void)_setButtonAlpha:(double)arg1;	// IMP=0x0000000000135420
- (void)validateAllItems;	// IMP=0x00000000001353c6
@property(copy, nonatomic) NSArray *trailingBarButtonGroups;
@property(copy, nonatomic) NSArray *centerBarButtonGroups;
@property(copy, nonatomic) NSArray *leadingBarButtonGroups;
- (void)didMoveToSuperview;	// IMP=0x0000000000134f65
- (void)layoutMarginsDidChange;	// IMP=0x0000000000134f53
- (void)_updateVisualProvider;	// IMP=0x0000000000134ee7
- (void)_updateBarMargins;	// IMP=0x0000000000134cd7
- (void)layoutSubviews;	// IMP=0x0000000000134bbc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000134bb6
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x0000000000134bb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000134b6c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001344cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
