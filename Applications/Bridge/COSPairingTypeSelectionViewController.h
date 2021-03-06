//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSSatellitePairingHelper, UIActivityIndicatorView;

@interface COSPairingTypeSelectionViewController
{
    COSSatellitePairingHelper *_satellitePairingHelper;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x00400000000c3ee8
- (void).cxx_destruct;	// IMP=0x00200000000c52eb
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) COSSatellitePairingHelper *satellitePairingHelper; // @synthesize satellitePairingHelper=_satellitePairingHelper;
- (void)applyConfirmedOptinAndCheckMaxDeviceCount:(_Bool)arg1;	// IMP=0x00100000000c4d07
- (id)alternateButtonTitle;	// IMP=0x00100000000c4c9b
- (id)suggestedButtonTitle;	// IMP=0x00100000000c4c2f
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x00100000000c48c8
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x00100000000c48b4
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x00100000000c489d
- (id)learnMoreButtonTitle;	// IMP=0x00100000000c4895
- (id)captionText;	// IMP=0x00100000000c480a
- (id)detailString;	// IMP=0x00100000000c4768
- (id)titleString;	// IMP=0x00100000000c46c6
- (void)dismissSetupFlow:(id)arg1;	// IMP=0x00100000000c4681
- (void)viewDidLoad;	// IMP=0x00100000000c40c4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000c3fb7
- (id)init;	// IMP=0x00100000000c3ef0
- (_Bool)requiresActivationCheck;	// IMP=0x00100000000c3ee0

@end

