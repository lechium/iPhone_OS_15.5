//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface B238SetupShareSettingsViewController
{
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    UIButton *_agreeButton;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UIImageView *_icon1ImageView;	// 56 = 0x38
    UIImageView *_siriIcon;	// 64 = 0x40
    UIImageView *_musicIcon;	// 72 = 0x48
    UIImageView *_icon4ImageView;	// 80 = 0x50
    UILabel *_infoLabel;	// 88 = 0x58
    UILabel *_appleIDLabel;	// 96 = 0x60
    UILabel *_appleIDAccount;	// 104 = 0x68
    UILabel *_iTunesLabel;	// 112 = 0x70
    UILabel *_iTunesAccount;	// 120 = 0x78
    NSString *_iCloudUserID;	// 128 = 0x80
    NSString *_iTunesUserID;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x002000000017fec2
@property(copy, nonatomic) NSString *iTunesUserID; // @synthesize iTunesUserID=_iTunesUserID;
@property(copy, nonatomic) NSString *iCloudUserID; // @synthesize iCloudUserID=_iCloudUserID;
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000017fdfe
- (void)handleAgreeButton:(id)arg1;	// IMP=0x001000000017fcc8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000017f903

@end

