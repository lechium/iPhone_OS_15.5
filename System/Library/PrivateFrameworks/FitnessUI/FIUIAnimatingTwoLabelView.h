//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface FIUIAnimatingTwoLabelView : UIView
{
    UILabel *_visibleLabel;	// 8 = 0x8
    UILabel *_mainLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000025679
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void)applyFont:(id)arg1;	// IMP=0x000000000002558f
- (void)_updateHidden;	// IMP=0x0000000000025513
- (void)showSecondaryLabelAnimated:(_Bool)arg1;	// IMP=0x00000000000252e6
- (void)showMainLabelAnimated:(_Bool)arg1;	// IMP=0x00000000000250b9
@property(readonly, nonatomic) UILabel *visibleLabel;
- (struct CGRect)_frameBelowBounds;	// IMP=0x0000000000025019
- (struct CGRect)_frameAboveBounds;	// IMP=0x0000000000024f87
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000024cce
- (void)layoutSubviews;	// IMP=0x0000000000024bd9
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000024b87
- (id)initWithFrame:(struct CGRect)arg1 mainLabel:(id)arg2 secondaryLabel:(id)arg3;	// IMP=0x0000000000024a0a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000024983

@end

