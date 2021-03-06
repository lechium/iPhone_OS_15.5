//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UILabel;

@interface COSUnlockPlaceholderViewController
{
    UIButton *_acceptButton;	// 8 = 0x8
    UIButton *_declineButton;	// 16 = 0x10
    UILabel *_footerLabel;	// 24 = 0x18
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x004000000002ebe3
+ (_Bool)isMandatory;	// IMP=0x001000000002ea8d
- (void).cxx_destruct;	// IMP=0x002000000002f299
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
- (void)okayButtonPressed:(id)arg1;	// IMP=0x001000000002f1cf
- (id)detailTitleString;	// IMP=0x001000000002f163
- (id)okayButtonTitle;	// IMP=0x001000000002f0f7
- (void)unlockPairingComplete:(id)arg1;	// IMP=0x001000000002f0ab
- (id)imageResource;	// IMP=0x001000000002effd
- (id)detailString;	// IMP=0x001000000002ef65
- (id)titleString;	// IMP=0x001000000002eef9
- (id)init;	// IMP=0x001000000002eddb
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x001000000002edd3

@end

