//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PINEntryView, UIActivityIndicatorView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface iOSSetupAuthViewController
{
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    PINEntryView *_pinEntryView;	// 48 = 0x30
    UILabel *_pinLabel1;	// 56 = 0x38
    UILabel *_pinLabel2;	// 64 = 0x40
    UILabel *_pinLabel3;	// 72 = 0x48
    UILabel *_pinLabel4;	// 80 = 0x50
    UILabel *_pinLabel5;	// 88 = 0x58
    UILabel *_pinLabel6;	// 96 = 0x60
    UIView *_pinWell1;	// 104 = 0x68
    UIView *_pinWell2;	// 112 = 0x70
    UIView *_pinWell3;	// 120 = 0x78
    UIView *_pinWell4;	// 128 = 0x80
    UIView *_pinWell5;	// 136 = 0x88
    UIView *_pinWell6;	// 144 = 0x90
    _Bool _viewBottomConstantValid;	// 152 = 0x98
    double _viewBottomConstant;	// 160 = 0xa0
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000001946d0
- (void)showWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x001000000019444b
- (void)_handlePINEntered:(id)arg1;	// IMP=0x00100000001942f2
- (void)_handleKeyboardWillShow:(id)arg1;	// IMP=0x0010000000193f69
- (void)handleDismissButton:(id)arg1;	// IMP=0x0010000000193eba
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000193eb2
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000193de1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000193b2e

@end
