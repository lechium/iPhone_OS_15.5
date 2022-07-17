//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSEntitlementJSHandlerDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class CTDisplayPlanList, NSDictionary, NSError, NSMutableArray, NSObject, NSString, UIBarButtonItem, UIViewController;
@protocol OS_dispatch_group, TSSetupFlowItem;

@interface TSActivationFlowWithSimSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate>
{
    _Bool _requireSetup;	// 8 = 0x8
    _Bool _confirmationCodeRequired;	// 9 = 0x9
    _Bool _isTransferCapable;	// 10 = 0xa
    _Bool _isActivationPolicyMismatch;	// 11 = 0xb
    _Bool _isDualeSIMCapabilityLoss;	// 12 = 0xc
    NSError *_planInstallError;	// 16 = 0x10
    NSMutableArray *_danglingPlanItems;	// 24 = 0x18
    NSMutableArray *_transferItems;	// 32 = 0x20
    CTDisplayPlanList *_pendingInstallPlans;	// 40 = 0x28
    CTDisplayPlanList *_carrierSetupItems;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_carrierSetupUrl;	// 64 = 0x40
    NSDictionary *_carrierSetupPostData;	// 72 = 0x48
    unsigned long long _userConsentType;	// 80 = 0x50
    UIBarButtonItem *_cancelButton;	// 88 = 0x58
    long long _signupConsentResponse;	// 96 = 0x60
    UIViewController<TSSetupFlowItem> *_currentViewController;	// 104 = 0x68
    NSObject<OS_dispatch_group> *_queryGroup;	// 112 = 0x70
    _Bool _isPreinstallingViewControllerActive;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001a7a7
@property _Bool isPreinstallingViewControllerActive; // @synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive;
- (void)_userDidTapCancel;	// IMP=0x000000000001a5e5
- (void)_filterCarrierSetupItems:(id)arg1;	// IMP=0x000000000001a54b
- (void)getWebsheetInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a177
- (void)_requestCarrierSetupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019e89
- (void)_requestPendingInstallItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019ccc
- (void)_requestTransferPlanListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019377
- (void)_requestPlansWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018f89
- (void)_maybeShowPreinstallConsentOnViewController:(id)arg1 planItems:(id)arg2;	// IMP=0x0000000000018d87
- (id)_createFirstViewController:(id)arg1;	// IMP=0x000000000001886f
- (void)accountPendingRelease;	// IMP=0x000000000001882e
- (void)accountCancelled;	// IMP=0x00000000000187ed
- (void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7;	// IMP=0x0000000000018701
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;	// IMP=0x000000000001860f
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;	// IMP=0x0000000000017c4c
- (long long)signupUserConsentResponse;	// IMP=0x0000000000017c3b
- (void)setDefaultNavigationItems:(id)arg1;	// IMP=0x0000000000017b59
- (void)viewControllerDidComplete:(id)arg1;	// IMP=0x0000000000017aed
- (id)nextViewControllerFrom:(id)arg1;	// IMP=0x0000000000017299
- (void)firstViewController:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016f33
- (id)firstViewController;	// IMP=0x0000000000016ef0
- (void)dealloc;	// IMP=0x0000000000016e40
- (id)initRequireSetup:(_Bool)arg1;	// IMP=0x0000000000016d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
