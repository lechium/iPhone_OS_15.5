//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDPUICodeEntryViewModel, UIButton;

@interface CDPUICodeEntryPane
{
    UIButton *_footerButton;	// 136 = 0x88
    CDPUICodeEntryViewModel *_viewModel;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000015ffb
- (void)setViewModel:(id)arg1;	// IMP=0x0000000000015d47
- (void)didFinishResizingPinView;	// IMP=0x00000000000156e9
- (void)didFinishResizingHeaderView;	// IMP=0x000000000001569d
- (id)_createFooterButton;	// IMP=0x00000000000155c5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000015526

@end

