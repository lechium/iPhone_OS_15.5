//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLInUseAssertion, NSString;

@interface PKApplyProgramConsentViewController
{
    CLInUseAssertion *_inUseAssertion;	// 8 = 0x8
    NSString *_pathTermsIdentifier;	// 16 = 0x10
    NSString *_pathIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000165d22
- (void)_termsAccepted:(_Bool)arg1;	// IMP=0x0000000000165b46
- (void)explanationViewDidSelectBodyButton:(id)arg1;	// IMP=0x000000000016595d
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x00000000001658e0
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x0000000000165860
- (void)dealloc;	// IMP=0x00000000001657fc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000165798
- (void)viewDidLoad;	// IMP=0x00000000001656c3
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;	// IMP=0x00000000001655aa

@end
