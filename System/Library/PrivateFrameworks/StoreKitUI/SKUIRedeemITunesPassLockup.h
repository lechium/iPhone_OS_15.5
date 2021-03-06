//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class SKUIClientContext, SKUIITunesPassConfiguration, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLockup : UIControl
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIITunesPassConfiguration *_configuration;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UIView *_horizontalSeparatorView;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001bc7c5
- (id)_attributedDescriptionString;	// IMP=0x00000000001bc458
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001bc3af
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001bc333
- (void)layoutSubviews;	// IMP=0x00000000001bbfaa
- (id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000001bbc60

@end

