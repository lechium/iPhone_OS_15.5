//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC9Reminders34TTRIAboutYourDevicesViewController : OBWelcomeController
{
    MISSING_TYPE *upgradeInfo;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 48 = 0x30
    MISSING_TYPE *pageStackView;	// 64 = 0x40
    MISSING_TYPE *titleLabel;	// 72 = 0x48
    MISSING_TYPE *deviceSubtitle;	// 80 = 0x50
    MISSING_TYPE *deviceExplanation;	// 88 = 0x58
    MISSING_TYPE *deviceLearnMore;	// 96 = 0x60
    MISSING_TYPE *deviceList;	// 104 = 0x68
    MISSING_TYPE *unsupportedSubtitle;	// 112 = 0x70
    MISSING_TYPE *unsupportedDeviceList;	// 120 = 0x78
    MISSING_TYPE *sharedListSubtitle;	// 128 = 0x80
    MISSING_TYPE *sharedListExplanation;	// 136 = 0x88
    MISSING_TYPE *sharedListLearnMore;	// 144 = 0x90
    MISSING_TYPE *sharedListRecipients;	// 152 = 0x98
    MISSING_TYPE *macOSUnavailableLabel;	// 160 = 0xa0
    MISSING_TYPE *macOSUnavailableLearnMore;	// 168 = 0xa8
    MISSING_TYPE *viewModel;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0040000000187120
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x00100000001870b0
- (void)viewDidLoad;	// IMP=0x0010000000187080
- (void)didTapSharedListsParticipant:(id)arg1;	// IMP=0x0010000000184410
- (void)didTapMacOSUnavailableLearnMore:(id)arg1;	// IMP=0x0010000000187560
- (void)didTapSharedListsLearnMore:(id)arg1;	// IMP=0x0010000000187550
- (void)didTapDevicesLearnMore:(id)arg1;	// IMP=0x0010000000183fd0
- (void)didTapLaterButton:(id)arg1;	// IMP=0x0010000000183d00
- (void)didTapUpgradeButton:(id)arg1;	// IMP=0x0010000000183c80

@end

