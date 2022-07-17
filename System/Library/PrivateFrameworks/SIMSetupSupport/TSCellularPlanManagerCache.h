//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol TSCellularPlanManagerCacheDelegate;

@interface TSCellularPlanManagerCache : NSObject
{
    id <TSCellularPlanManagerCacheDelegate> delegate;	// 8 = 0x8
    unsigned long long _supportedFlowTypes;	// 16 = 0x10
    NSArray *_cachedPlanItems;	// 24 = 0x18
    NSArray *_danglingPlanItems;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000001f449
- (void).cxx_destruct;	// IMP=0x0000000000021aea
@property(retain) NSArray *danglingPlanItems; // @synthesize danglingPlanItems=_danglingPlanItems;
@property(retain) NSArray *cachedPlanItems; // @synthesize cachedPlanItems=_cachedPlanItems;
@property(nonatomic) unsigned long long supportedFlowTypes; // @synthesize supportedFlowTypes=_supportedFlowTypes;
@property(nonatomic) __weak id <TSCellularPlanManagerCacheDelegate> delegate; // @synthesize delegate;
- (id)_getByteRepresentationOf:(id)arg1;	// IMP=0x000000000002197d
- (id)_getValidatedPlanItemFor:(id)arg1;	// IMP=0x000000000002177a
- (void)_updateLocalCachedPlanItems:(id)arg1;	// IMP=0x000000000002168a
- (void)_updateCachedPlanItems;	// IMP=0x000000000002153e
- (void)_updateCachedFlowTypes;	// IMP=0x00000000000214de
- (void)_initializePlanItems;	// IMP=0x0000000000021470
- (void)didEnablePlanItems:(id)arg1;	// IMP=0x0000000000021340
- (void)didTransferPlanForEid:(id)arg1 iccid:(id)arg2 srcIccid:(id)arg3 smdpURL:(id)arg4 state:(id)arg5;	// IMP=0x00000000000211ed
- (void)didPurchasePlanForCarrier:(id)arg1 mnc:(id)arg2 gid1:(id)arg3 gid2:(id)arg4 state:(id)arg5;	// IMP=0x0000000000021103
- (void)didPurchasePlanForEid:(id)arg1 iccid:(id)arg2 smdpURL:(id)arg3 state:(id)arg4;	// IMP=0x0000000000020fba
- (id)getSubscriptionContextUUIDforPlan:(id)arg1;	// IMP=0x0000000000020f33
- (void)sendUserResponse:(unsigned long long)arg1 confirmationCode:(id)arg2;	// IMP=0x0000000000020c7a
- (void)provideUserResponse:(long long)arg1 confirmationCode:(id)arg2;	// IMP=0x0000000000020a15
- (long long)calculateInstallConsentTextTypeFor:(id)arg1;	// IMP=0x00000000000209fc
- (id)remapSimLabel:(id)arg1 to:(id)arg2;	// IMP=0x0000000000020925
- (void)resumePlanProvisioning:(_Bool)arg1 userConsent:(long long)arg2;	// IMP=0x000000000002080e
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 confirmationCode:(id)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000205d9
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 userConsentResponse:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020355
- (void)setUserInPurchaseFlow:(_Bool)arg1;	// IMP=0x0000000000020302
- (id)getDanglingPlanItems;	// IMP=0x00000000000202a9
- (id)getShortLabelsForLabels:(id)arg1;	// IMP=0x0000000000020222
- (id)setLabelForPlan:(id)arg1 label:(id)arg2;	// IMP=0x00000000000200df
- (id)getPredefinedLabels;	// IMP=0x0000000000020088
- (void)selectPlansForIMessage:(id)arg1;	// IMP=0x000000000001fd02
- (void)selectPlanForVoice:(id)arg1;	// IMP=0x000000000001fbed
- (void)selectPlanForData:(id)arg1;	// IMP=0x000000000001fad8
- (void)shouldShowPlanSetupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fa62
@property(readonly) NSArray *planItems;
- (void)dealloc;	// IMP=0x000000000001f8c7
- (void)planItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f547
- (id)init;	// IMP=0x000000000001f49e

@end
