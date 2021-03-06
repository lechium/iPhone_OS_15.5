//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUITrustedContactDetailsActionHandler-Protocol.h>

@class AALocalContactInfo, AAUISpinnerManager, AIDAAccountManager, NSString;

@interface AAUIMyBeneficiaryActionHandler : NSObject <AAUITrustedContactDetailsActionHandler>
{
    AAUISpinnerManager *_spinnerManager;	// 8 = 0x8
    AIDAAccountManager *_accountManager;	// 16 = 0x10
    AALocalContactInfo *_contact;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000626f5
@property(readonly, nonatomic) AALocalContactInfo *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)_stopAllSpinners;	// IMP=0x000000000006261f
- (void)_startSpinnerInSpecifier:(id)arg1;	// IMP=0x00000000000624d9
- (void)_navigateToAccessKeyScreenFromViewController:(id)arg1;	// IMP=0x00000000000622fc
- (void)_showAuthPromptInViewController:(id)arg1;	// IMP=0x0000000000062038
- (void)_doBeneficiaryRemoveWithViewController:(id)arg1;	// IMP=0x0000000000061dd3
- (void)doPrimaryAction:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000061d72
- (void)doDestructiveAction:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000061a18
- (id)initWithAccountManager:(id)arg1 localContact:(id)arg2;	// IMP=0x0000000000061965

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

