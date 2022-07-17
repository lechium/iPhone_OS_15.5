//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTDisplayPlanList, NSDictionary, NSMutableArray, NSString;

@interface TSTransferFlowModel : NSObject
{
    _Bool _areTransferPlansReady;	// 8 = 0x8
    _Bool _hasPendingInstallPlansQueried;	// 9 = 0x9
    _Bool _isBootstrapTriggerred;	// 10 = 0xa
    _Bool _isProximityFlow;	// 11 = 0xb
    _Bool _hasCarrierSetupItemsQueried;	// 12 = 0xc
    _Bool _isActivationPolicyMismatch;	// 13 = 0xd
    _Bool _isDualeSIMCapablityLoss;	// 14 = 0xe
    _Bool _showTransferredPane;	// 15 = 0xf
    NSMutableArray *_transferItems;	// 16 = 0x10
    CTDisplayPlanList *_pendingInstallItems;	// 24 = 0x18
    CTDisplayPlanList *_carrierSetupItems;	// 32 = 0x20
    NSString *_websheetUrl;	// 40 = 0x28
    NSDictionary *_postdata;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000021b1b
- (void).cxx_destruct;	// IMP=0x00000000000244a3
@property(retain, nonatomic) NSDictionary *postdata; // @synthesize postdata=_postdata;
@property(retain, nonatomic) NSString *websheetUrl; // @synthesize websheetUrl=_websheetUrl;
@property(nonatomic) _Bool showTransferredPane; // @synthesize showTransferredPane=_showTransferredPane;
@property(nonatomic) _Bool isDualeSIMCapablityLoss; // @synthesize isDualeSIMCapablityLoss=_isDualeSIMCapablityLoss;
@property(nonatomic) _Bool isActivationPolicyMismatch; // @synthesize isActivationPolicyMismatch=_isActivationPolicyMismatch;
@property(retain, nonatomic) CTDisplayPlanList *carrierSetupItems; // @synthesize carrierSetupItems=_carrierSetupItems;
@property(retain, nonatomic) CTDisplayPlanList *pendingInstallItems; // @synthesize pendingInstallItems=_pendingInstallItems;
@property(retain, nonatomic) NSMutableArray *transferItems; // @synthesize transferItems=_transferItems;
- (void)requestPlans:(id)arg1 transferablePlanOnSource:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023d1c
- (_Bool)arePlansRequested;	// IMP=0x0000000000023cff
- (void)requestCarrierSetups:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023a82
- (_Bool)shouldShowCarrierSetupPane;	// IMP=0x0000000000023a11
- (void)getWebsheetInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023655
- (void)filterCarrierSetupItems:(id)arg1;	// IMP=0x000000000002332f
- (void)requestPendingInstallPlans:(CDUnknownBlockType)arg1;	// IMP=0x00000000000230a9
- (void)requestTransferPlans:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022be9
- (_Bool)shouldShowTransferredPane;	// IMP=0x0000000000022b97
- (void)filterTransferPlans:(id)arg1;	// IMP=0x0000000000021f48
- (void)bootstrap:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021ea3
- (void)arePlansAvailable:(id)arg1 transferablePlanOnSource:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021b70

@end
