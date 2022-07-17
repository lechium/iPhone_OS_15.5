//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class NSString, PSKeychainSyncManager, UIButton;

@interface KeychainSyncSMSVerificationController <UIAlertViewDelegate>
{
    UIButton *_footerButton;	// 184 = 0xb8
    NSString *_phoneNumber;	// 192 = 0xc0
    NSString *_dialingPrefix;	// 200 = 0xc8
    NSString *_countryCode;	// 208 = 0xd0
    PSKeychainSyncManager *_keychainSyncManager;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000082f67
@property(nonatomic) __weak PSKeychainSyncManager *keychainSyncManager; // @synthesize keychainSyncManager=_keychainSyncManager;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *dialingPrefix; // @synthesize dialingPrefix=_dialingPrefix;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)dismissAlerts;	// IMP=0x0000000000082eb2
- (void)showSupportVerification;	// IMP=0x0000000000082b61
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000082861
- (void)loadView;	// IMP=0x0000000000082537
- (id)specifiers;	// IMP=0x0000000000082370
- (id)init;	// IMP=0x00000000000822f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
