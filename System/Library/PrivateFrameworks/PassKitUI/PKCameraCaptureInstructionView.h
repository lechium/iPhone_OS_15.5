//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKTableHeaderView, UIButton, UIScrollView;

@interface PKCameraCaptureInstructionView : UIView
{
    long long _context;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIButton *_primaryButton;	// 24 = 0x18
    UIButton *_secondaryButton;	// 32 = 0x20
    PKTableHeaderView *_headerView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004a3a03
@property(retain, nonatomic) PKTableHeaderView *headerView; // @synthesize headerView=_headerView;
- (_Bool)isBuddyiPad;	// IMP=0x00000000004a395c
- (void)layoutSubviews;	// IMP=0x00000000004a32b1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004a3246
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004a314c
- (_Bool)hasSecondaryButton;	// IMP=0x00000000004a3137
- (void)removeSecondaryButton;	// IMP=0x00000000004a30ff
- (void)setSecondaryButtonTitle:(id)arg1;	// IMP=0x00000000004a30e2
- (void)setPrimaryButtonTitle:(id)arg1;	// IMP=0x00000000004a30c5
- (void)setPrimaryButtonHidden:(_Bool)arg1;	// IMP=0x00000000004a30a8
- (void)setPrimaryButtonEnabled:(_Bool)arg1;	// IMP=0x00000000004a308b
- (void)setupHeaderView;	// IMP=0x00000000004a2f8e
- (void)setupSecondaryButtonWithTitle:(id)arg1 action:(id)arg2;	// IMP=0x00000000004a2d87
- (void)setupPrimaryButtonWithTitle:(id)arg1 action:(id)arg2;	// IMP=0x00000000004a2b9e
- (void)setupScrollView;	// IMP=0x00000000004a2b5b
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2 primaryAction:(id)arg3 primaryActionTitle:(id)arg4 secondaryAction:(id)arg5 secondaryActionTitle:(id)arg6;	// IMP=0x00000000004a2a50

@end
