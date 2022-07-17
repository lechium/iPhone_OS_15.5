//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKCloudServiceSetupViewController, UIView;

__attribute__((visibility("hidden")))
@interface B238SetupAppleMusicViewController
{
    UIView *_storeKitView;	// 32 = 0x20
    SKCloudServiceSetupViewController *_vcAppleMusic;	// 40 = 0x28
    NSString *_deviceGUID;	// 48 = 0x30
    NSString *_deviceSerialNumber;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000017a6d2
@property(copy, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property(copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
- (void)cloudServiceSetupViewControllerDidDismiss:(id)arg1;	// IMP=0x001000000017a5b0
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000017a530
- (void)_hideAppleMusicViewController;	// IMP=0x001000000017a475
- (void)_showAppleMusicViewController;	// IMP=0x001000000017a32d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000017a12f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
