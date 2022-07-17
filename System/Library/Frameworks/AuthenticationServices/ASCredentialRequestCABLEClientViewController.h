//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASCABLELoginChoice, ASCAuthorizationPresentationContext;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestCABLEClientViewController
{
    ASCAuthorizationPresentationContext *_presentationContext;	// 8 = 0x8
    ASCABLELoginChoice *_loginChoice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000176dd
- (void)_addBelowQRCodeSpacerView;	// IMP=0x0000000000017529
- (void)_addAboveIconSpacerView;	// IMP=0x0000000000017423
- (double)_marginAboveIcon;	// IMP=0x00000000000173f3
- (struct CGSize)_qrCodeSize;	// IMP=0x00000000000173c0
- (id)_qrCodeCIImageWithSize:(struct CGSize)arg1;	// IMP=0x00000000000171c2
- (id)_qrCodeASImageWithSize:(struct CGSize)arg1;	// IMP=0x000000000001716b
- (id)_titleText;	// IMP=0x00000000000170a2
- (id)_iconImage;	// IMP=0x0000000000016fc0
- (void)_setUpQRCodeView;	// IMP=0x0000000000016e49
- (void)_setUpTitleView;	// IMP=0x0000000000016d99
- (void)_setUpIconView;	// IMP=0x0000000000016ceb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000016c71
- (void)viewDidLoad;	// IMP=0x0000000000016be7
- (id)initWithPresentationContext:(id)arg1 loginChoice:(id)arg2;	// IMP=0x0000000000016b34

@end
