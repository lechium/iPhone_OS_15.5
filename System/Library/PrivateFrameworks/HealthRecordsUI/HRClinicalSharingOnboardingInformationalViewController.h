//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface HRClinicalSharingOnboardingInformationalViewController : OBWelcomeController
{
    MISSING_TYPE *onboardingSession;	// 8 = 0x8
    MISSING_TYPE *flowType;	// 16 = 0x10
    MISSING_TYPE *selectedAccount;	// 24 = 0x18
    MISSING_TYPE *accountIconProvider;	// 32 = 0x20
    MISSING_TYPE *gatewayProxyToTry;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001d41b0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x00000000001d6100
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x00000000001d5fb0
- (void)skipButtonTappedForAuthorizationSelection:(id)arg1;	// IMP=0x00000000001d5f20
- (void)nextButtonTappedForAuthorizationSelection:(id)arg1;	// IMP=0x00000000001d57e0
- (void)nextButtonTappedForAccountLogin:(id)arg1;	// IMP=0x00000000001d5580
- (void)nextButtonTappedForProviderSearch:(id)arg1;	// IMP=0x00000000001d4fd0
- (void)viewDidLoad;	// IMP=0x00000000001d4dc0
- (void)dealloc;	// IMP=0x00000000001d4140
- (id)initWithOnboardingSession:(id)arg1 flowType:(long long)arg2 selectedAccount:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000001d4050

@end
