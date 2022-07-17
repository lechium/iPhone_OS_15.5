//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKPaymentRegistrationUtilities : NSObject
{
}

+ (void)registrationIsSupportedInCurrentRegionWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070419
+ (void)_shouldShowAddCardFlowForWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007003b
+ (_Bool)_isPaymentSetupSupportedForWebService:(id)arg1;	// IMP=0x000000000007001f
+ (void)configureWebServiceIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006fe30
+ (void)shouldShowPasscodeAccessibilityOverride:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006fbc2
+ (void)shouldShowWalletInSettingsWithApplePaySupportInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f8d6
+ (void)shouldShowWalletInSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f82c
+ (void)shouldShowWalletInBuddy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f783

@end
