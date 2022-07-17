//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface iOSSetupDoneViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIButton *_reportBugButton;	// 48 = 0x30
    UIButton *_doneButton;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000196b96
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)handleReportBugButton:(id)arg1;	// IMP=0x0010000000196798
- (void)handleDismissButton:(id)arg1;	// IMP=0x0010000000196710
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000019668c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001962ac
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001962a4

@end
