//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>

@class CTDisplayPlan, CTRemotePlan, NSDictionary, NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSSinglePlanTransferViewController <UINavigationControllerDelegate, TSSetupFlowItem>
{
    unsigned long long _planType;	// 8 = 0x8
    NSDictionary *_transferPlan;	// 16 = 0x10
    CTDisplayPlan *_pendingInstallPlan;	// 24 = 0x18
    NSString *_deviceName;	// 32 = 0x20
    NSString *_phoneNumber;	// 40 = 0x28
    CTRemotePlan *_planItem;	// 48 = 0x30
    _Bool _inBuddy;	// 56 = 0x38
    _Bool _isScanButtonTapped;	// 57 = 0x39
    _Bool _showSIMSetup;	// 58 = 0x3a
    id <TSSIMSetupFlowDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003cd17
@property _Bool showSIMSetup; // @synthesize showSIMSetup=_showSIMSetup;
@property _Bool isScanButtonTapped; // @synthesize isScanButtonTapped=_isScanButtonTapped;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_maybeDisplaySecureIntentConsent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ca08
- (void)_showAlert:(id)arg1;	// IMP=0x000000000003c6ba
- (void)_startPendingInstall:(id)arg1;	// IMP=0x000000000003c32b
- (void)_startPlanTransfer:(id)arg1;	// IMP=0x000000000003bda4
- (void)_startLocalPlanConversion;	// IMP=0x000000000003b999
- (void)_scanButtonTapped;	// IMP=0x000000000003b8a8
- (void)_cancelButtonTapped;	// IMP=0x000000000003b7c8
- (void)_continueButtonTapped;	// IMP=0x000000000003af8a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000003af0c
- (void)viewDidLoad;	// IMP=0x000000000003a99c
- (id)initWithLocalPhysical:(id)arg1 carrierName:(id)arg2;	// IMP=0x000000000003a6c3
- (id)initWithPendingInstallPlan:(id)arg1;	// IMP=0x000000000003a370
- (id)initWithTransferPlan:(id)arg1 isPhysical:(_Bool)arg2 isIneligible:(_Bool)arg3 inBuddy:(_Bool)arg4;	// IMP=0x000000000003978d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

