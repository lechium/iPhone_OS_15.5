//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol PKEditTableNoPassesViewDelegate;

@interface PKEditTableNoPassesView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_descriptionLabel;	// 16 = 0x10
    UIButton *_buttonScanCode;	// 24 = 0x18
    UIButton *_buttonFindApps;	// 32 = 0x20
    id <PKEditTableNoPassesViewDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d42f8
@property(nonatomic) __weak id <PKEditTableNoPassesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)findAppsForWalletTapped;	// IMP=0x00000000000d426f
- (void)scanCodeButtonTapped;	// IMP=0x00000000000d4213
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000d4097
- (void)layoutSubviews;	// IMP=0x00000000000d3bf2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d365a

@end
