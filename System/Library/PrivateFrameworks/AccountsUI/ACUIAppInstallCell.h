//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class SKUIItemOfferButton, UIImageView, UILabel;

@interface ACUIAppInstallCell : PSTableCell
{
    UILabel *_nameLabel;	// 120 = 0x78
    UILabel *_publisherLabel;	// 128 = 0x80
    UIImageView *_iconView;	// 136 = 0x88
    SKUIItemOfferButton *_installButton;	// 144 = 0x90
    int _installState;	// 152 = 0x98
}

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000001ba0
- (void).cxx_destruct;	// IMP=0x00000000000034c0
@property(nonatomic) int installState; // @synthesize installState=_installState;
- (void)_updateInstallButtonWithState:(int)arg1;	// IMP=0x0000000000003110
- (void)_updateSubviewsWithInstallState:(int)arg1;	// IMP=0x0000000000002a10
- (id)_createInstallButton;	// IMP=0x0000000000002870
- (id)_createLabelForPublisher:(id)arg1;	// IMP=0x0000000000002750
- (id)_createLabelForAppName:(id)arg1;	// IMP=0x0000000000002630
- (void)layoutSubviews;	// IMP=0x00000000000025d0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0000000000002180
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000002110
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000020a0
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000002030
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000001fc0

@end

