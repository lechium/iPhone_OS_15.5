//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUserConsentViewController <TSSetupFlowItem>
{
    _Bool _didReceiveResponse;	// 8 = 0x8
    NSString *_confirmationCode;	// 16 = 0x10
    unsigned long long _consentType;	// 24 = 0x18
    _Bool _requireAdditionalConsent;	// 32 = 0x20
    id <TSSIMSetupFlowDelegate> _delegate;	// 40 = 0x28
}

+ (void)calculateTitleAndDetailsWithName:(id)arg1 consentType:(unsigned long long)arg2 title:(id *)arg3 details:(id *)arg4;	// IMP=0x0000000000036164
- (void).cxx_destruct;	// IMP=0x0000000000037512
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long consentType; // @synthesize consentType=_consentType;
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000000374cc
- (void)_cancelButtonTapped;	// IMP=0x00000000000373d7
- (void)_declineButtonTapped;	// IMP=0x00000000000372e2
- (void)_acceptButtonTapped;	// IMP=0x0000000000037163
- (void)_setNavigationItems;	// IMP=0x0000000000037047
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000036f2c
- (void)viewDidLoad;	// IMP=0x0000000000036ba7
- (id)initWithConfirmationCode:(id)arg1 consentType:(unsigned long long)arg2 requireAdditionalConsent:(_Bool)arg3 confirmationCode:(id)arg4;	// IMP=0x0000000000036a9b
- (id)initWithName:(id)arg1 consentType:(unsigned long long)arg2 requireAdditionalConsent:(_Bool)arg3;	// IMP=0x00000000000369bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
