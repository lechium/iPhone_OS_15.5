//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICSharedPasswordUtilities : NSObject
{
    id _displayedSheet;	// 8 = 0x8
}

+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(_Bool)arg2 removingOriginalNote:(_Bool)arg3;	// IMP=0x0000000000032e19
+ (void)resetAllSharedPasswords;	// IMP=0x0000000000032c34
+ (void)resetPasswordForAccount:(id)arg1;	// IMP=0x0000000000032ba1
+ (void)updateAllNotesWithOldPassword:(id)arg1 toAccountPassword:(id)arg2 fromAccount:(id)arg3;	// IMP=0x0000000000031432
+ (void)resetTimeoutTimer;	// IMP=0x0000000000031419
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;	// IMP=0x0000000000031316
+ (id)preferredHintAccount;	// IMP=0x0000000000030ffb
+ (id)passwordCapableAccounts;	// IMP=0x0000000000030f73
+ (_Bool)hasMultiplePasswordCapableAccounts;	// IMP=0x0000000000030f2a
+ (_Bool)passwordCapableAccountExists;	// IMP=0x0000000000030ee2
+ (id)defaultAccountForPasswordProtectedNotes;	// IMP=0x0000000000030ca9
+ (_Bool)setPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3 forAccount:(id)arg4;	// IMP=0x0000000000030c90
+ (_Bool)setPassword:(id)arg1 hint:(id)arg2 forAccount:(id)arg3;	// IMP=0x0000000000030c77
+ (_Bool)isDefaultAccountForPasswordNotesiCloudAccount;	// IMP=0x0000000000030bbc
+ (_Bool)isDefaultAccountForPasswordNotesLocalAccount;	// IMP=0x0000000000030b01
+ (_Bool)hasAnyAccountWithPassword;	// IMP=0x00000000000309f6
+ (id)accountWithPassword:(id)arg1;	// IMP=0x000000000003082c
+ (_Bool)isPassword:(id)arg1 correctForAccount:(id)arg2;	// IMP=0x0000000000030813
+ (_Bool)isPassword:(id)arg1 correctForNote:(id)arg2;	// IMP=0x00000000000307fa
+ (_Bool)authenticateWithPassword:(id)arg1 forNote:(id)arg2;	// IMP=0x00000000000307e1
+ (_Bool)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000000000307c8
+ (_Bool)isAuthenticatedForDefaultAccount;	// IMP=0x0000000000030775
+ (_Bool)isAuthenticatedForNote:(id)arg1;	// IMP=0x000000000003075c
+ (_Bool)isAuthenticatedForAccount:(id)arg1;	// IMP=0x0000000000030743
+ (void)lockAllNotes;	// IMP=0x000000000003072a
+ (_Bool)unlockedNotesOrKeysExist;	// IMP=0x0000000000030711
+ (_Bool)isPasswordSetForAccount:(id)arg1;	// IMP=0x00000000000306f8
+ (_Bool)hasSameCryptoKeyForNote:(id)arg1 andAccount:(id)arg2;	// IMP=0x0000000000030613
+ (_Bool)accountPasswordExists;	// IMP=0x00000000000305e0
+ (id)alertMessageForDontForgetPasswordAlertIsForFaceID:(_Bool)arg1;	// IMP=0x0000000000030597
+ (id)alertTitleForDontForgetPasswordAlert;	// IMP=0x000000000003056b
+ (void)showDontForgetPasswordAlertForAccountIdentifier:(id)arg1 isForFaceID:(_Bool)arg2 withDisplayWindow:(id)arg3;	// IMP=0x0000000000030565
+ (void)showDontForgetPasswordAlertIfNecessaryForAccountIdentifier:(id)arg1 withDisplayWindow:(id)arg2;	// IMP=0x00000000000303e4
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1;	// IMP=0x00000000000303de
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(id)arg1;	// IMP=0x0000000000030313
+ (id)passwordChangeCountUserDefaultsKeyAsReset:(_Bool)arg1;	// IMP=0x00000000000302f5
+ (void)clearRecentPasswordChangeCountAsReset:(_Bool)arg1;	// IMP=0x000000000003022c
+ (void)incrementRecentPasswordChangeCountAsReset:(_Bool)arg1;	// IMP=0x00000000000300e1
+ (long long)recentPasswordChangeCountAsReset:(_Bool)arg1;	// IMP=0x0000000000030057
- (void).cxx_destruct;	// IMP=0x0000000000033089
@property(retain, nonatomic) id displayedSheet; // @synthesize displayedSheet=_displayedSheet;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000033068
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033062
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032b9b
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032b95
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032b8f
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032959
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000325f2
- (void)authenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000032562
- (void)_authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000031f99
- (void)authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000318bf
- (void)cryptorCachedKeysDidEmpty:(id)arg1;	// IMP=0x000000000002fe21
- (void)dealloc;	// IMP=0x000000000002fdac
- (id)init;	// IMP=0x000000000002fd18

@end
