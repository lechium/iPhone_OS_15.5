//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSetupController.h>

@interface ACUISetupViewController : PSSetupController
{
    _Bool _didAttemptDataclassSetup;	// 56 = 0x38
    _Bool _shouldForceMailSetup;	// 57 = 0x39
}

+ (id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3;	// IMP=0x0000000000026680
+ (void)showDataclassConfigurationControllerForAccount:(id)arg1 name:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000025eb0
+ (void)showAlternateCreationControllerForAccountType:(id)arg1 username:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000025940
- (void)_dismissAndNotifyParent;	// IMP=0x0000000000026560
- (void)finishedAccountSetup;	// IMP=0x0000000000026530
- (void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2;	// IMP=0x00000000000250a0

@end

