//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OBBoldTrayButton, OBButtonTray, UILabel;

@interface OBSetupAssistantFinishedController
{
    UILabel *_titleLabel;	// 8 = 0x8
    OBButtonTray *_buttonTray;	// 16 = 0x10
    OBBoldTrayButton *_boldButton;	// 24 = 0x18
    CDUnknownBlockType _boldButtonBlock;	// 32 = 0x20
    UILabel *_instructionalLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000013c64
@property(retain, nonatomic) UILabel *instructionalLabel; // @synthesize instructionalLabel=_instructionalLabel;
@property(copy, nonatomic) CDUnknownBlockType boldButtonBlock; // @synthesize boldButtonBlock=_boldButtonBlock;
@property(retain, nonatomic) OBBoldTrayButton *boldButton; // @synthesize boldButton=_boldButton;
@property(retain, nonatomic) OBButtonTray *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)buttonTapped:(id)arg1;	// IMP=0x0000000000013b3d
- (id)_instructionFont;	// IMP=0x0000000000013abf
- (id)_headerFont;	// IMP=0x00000000000139ca
- (void)setInstructionalText:(id)arg1;	// IMP=0x0000000000013900
- (void)setButtonTitle:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013721
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001363a
- (struct NSDirectionalEdgeInsets)directionalLayoutMargins;	// IMP=0x00000000000135f1
- (void)viewDidLoad;	// IMP=0x0000000000012481
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000001202f

@end
