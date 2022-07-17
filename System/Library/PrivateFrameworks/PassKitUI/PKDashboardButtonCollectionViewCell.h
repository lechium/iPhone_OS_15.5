//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivityIndicatorView, UILabel;

@interface PKDashboardButtonCollectionViewCell
{
    UIActivityIndicatorView *_activityIndicator;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    _Bool _showActivity;	// 24 = 0x18
    _Bool _enabled;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000004a5409
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showActivity; // @synthesize showActivity=_showActivity;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004a52e3
- (void)_resetFonts;	// IMP=0x00000000004a527b
- (void)_updateTextColor;	// IMP=0x00000000004a5207
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x00000000004a4fe2
@property(copy, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004a4e9d
- (void)layoutSubviews;	// IMP=0x00000000004a4dfe
- (void)createSubviews;	// IMP=0x00000000004a4d0f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004a4c80

@end
