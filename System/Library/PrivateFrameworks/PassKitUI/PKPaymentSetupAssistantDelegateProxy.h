//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSString, PKPaymentProvisioningController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupAssistantDelegateProxy : NSObject <PKPaymentSetupViewControllerDelegate>
{
    PKPaymentProvisioningController *_provisoningController;	// 8 = 0x8
    id <PKPaymentSetupViewControllerDelegate> _externalDelegate;	// 16 = 0x10
    _Bool _didTerminateSetupFlow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000412d0b
- (void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000412ba7
- (void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000412a4a
- (void)viewControllerDidFailToChangePasscodeComplex:(id)arg1;	// IMP=0x0000000000412960
- (void)viewControllerDidFinishChangingPasscodeComplex:(id)arg1;	// IMP=0x0000000000412876
- (void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000004126ec
- (void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000412573
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;	// IMP=0x000000000041243e
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;	// IMP=0x00000000004122e6
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;	// IMP=0x000000000041208e
- (void)viewControllerDidBeginSetupFlow:(id)arg1;	// IMP=0x0000000000411f0d
- (void)_setExternalDelegate:(id)arg1;	// IMP=0x0000000000411e8d
- (id)initWithDelegate:(id)arg1 provisoningController:(id)arg2;	// IMP=0x0000000000411df4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
