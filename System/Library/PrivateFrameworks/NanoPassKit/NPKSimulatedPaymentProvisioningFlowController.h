//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NPKSimulatedPaymentProvisioningFlowController
{
}

+ (id)_easyProvisioningCredentials;	// IMP=0x00000000000d320d
+ (id)_broadwayCredential;	// IMP=0x00000000000d3205
+ (id)_passWithDescription:(id)arg1 credentialType:(long long)arg2;	// IMP=0x00000000000d2d32
- (void)_performProvision:(id)arg1;	// IMP=0x00000000000d4007
- (void)_performTerms:(id)arg1;	// IMP=0x00000000000d3f82
- (void)_performEligibility:(id)arg1;	// IMP=0x00000000000d3e88
- (void)_requestRequirements:(id)arg1;	// IMP=0x00000000000d3bc8
- (void)_startProvisioningForCredential:(id)arg1 requestContext:(id)arg2;	// IMP=0x00000000000d3ae5
- (void)handleManualEntryFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3;	// IMP=0x00000000000d3a4d
- (void)chooseFlowForPickerItem:(id)arg1 requestContext:(id)arg2;	// IMP=0x00000000000d3916
- (void)acknowledgeWelcome:(id)arg1;	// IMP=0x00000000000d3703
- (void)startProvisioningFlow:(id)arg1;	// IMP=0x00000000000d3576

@end

