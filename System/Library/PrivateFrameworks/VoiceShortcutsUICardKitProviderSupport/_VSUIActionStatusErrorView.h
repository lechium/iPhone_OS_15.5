//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface _VSUIActionStatusErrorView : UIView
{
    UILabel *_errorLabel;	// 8 = 0x8
    UIImageView *_errorIconView;	// 16 = 0x10
    UIView *_errorIconBackgroundView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000005a24
@property(retain, nonatomic) UIView *errorIconBackgroundView; // @synthesize errorIconBackgroundView=_errorIconBackgroundView;
@property(retain, nonatomic) UIImageView *errorIconView; // @synthesize errorIconView=_errorIconView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
- (void)_setUpViews;	// IMP=0x0000000000004f32
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000004ea4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004e58
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000004dfb

@end

