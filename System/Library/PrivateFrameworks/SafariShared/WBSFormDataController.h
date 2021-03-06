//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WBSAutoFillQuirksManager, WBSKeychainCredentialNotificationMonitor, WBSPair, WBSURLCredentialCache;
@protocol OS_dispatch_queue;

@interface WBSFormDataController : NSObject
{
    WBSURLCredentialCache *_credentialCache;	// 8 = 0x8
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;	// 16 = 0x10
    id _keychainNotificationRegistrationToken;	// 24 = 0x18
    NSMutableDictionary *_completionDB;	// 32 = 0x20
    NSMutableDictionary *_valuesDB;	// 40 = 0x28
    NSMutableDictionary *_preferredLabelsMap;	// 48 = 0x30
    unsigned long long _completionDBSize;	// 56 = 0x38
    NSMutableDictionary *_domainToLastUsedUsernameAndProtectionSpace;	// 64 = 0x40
    NSMutableArray *_recentlyUsedAutoFillSets;	// 72 = 0x48
    NSMutableDictionary *_preferredLabelForUniqueIDOfPersonMap;	// 80 = 0x50
    WBSPair *_cachedBirthdayAndLocalizedStrings;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_internalQueue;	// 96 = 0x60
    NSMutableDictionary *_mapOfHighLevelDomainToLastAutomaticFormSubmission;	// 104 = 0x68
    WBSAutoFillQuirksManager *_autoFillQuirksManager;	// 112 = 0x70
}

+ (_Bool)isFieldUnidentified:(id)arg1;	// IMP=0x00000000000aa34e
+ (_Bool)_password:(id)arg1 appearsToBeMoreThanOneSymbolAppendedToPassword:(id)arg2;	// IMP=0x00000000000a9f96
+ (_Bool)_password:(id)arg1 appearsToBeASixDigitCodeAppendedToPassword:(id)arg2;	// IMP=0x00000000000a9e12
+ (_Bool)password:(id)arg1 shouldBeConsideredEqualToExistingPassword:(id)arg2;	// IMP=0x00000000000a9d5d
+ (id)contactKeyForString:(id)arg1;	// IMP=0x00000000000a96f1
+ (_Bool)contactIsMe:(id)arg1;	// IMP=0x00000000000a96e9
+ (id)valuesFromUser:(id)arg1 password:(id)arg2 forLoginOrChangePasswordForm:(id)arg3;	// IMP=0x00000000000a4eb6
+ (id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;	// IMP=0x00000000000a4d9b
+ (id)localizedLowercaseContactProperty:(id)arg1;	// IMP=0x00000000000a0f18
+ (_Bool)isNameProperty:(id)arg1;	// IMP=0x00000000000a0e53
+ (id)controlsConsideredByAutoFillInForm:(id)arg1;	// IMP=0x00000000000a0c42
+ (id)lastFieldInControls:(id)arg1 inForm:(id)arg2;	// IMP=0x00000000000a0972
+ (id)nextFieldAfterControls:(id)arg1 inForm:(id)arg2;	// IMP=0x00000000000a05ae
+ (id)domainFromURL:(id)arg1;	// IMP=0x00000000000a050e
+ (_Bool)textFieldLooksLikeCreditCardNumericFormField:(id)arg1;	// IMP=0x000000000009e8fa
+ (_Bool)textFieldLooksLikeCreditCardFormField:(id)arg1 inForm:(id)arg2;	// IMP=0x000000000009e843
+ (long long)availableManualAutoFillActionForTextField:(id)arg1 form:(id)arg2 outUsernameElementUniqueID:(id *)arg3 outPasswordElementUniqueID:(id *)arg4 outConfirmPasswordElementUniqueID:(id *)arg5;	// IMP=0x0000000000099f97
+ (_Bool)canAutocompleteTextField:(id)arg1 inForm:(id)arg2;	// IMP=0x0000000000099ee4
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(_Bool)arg3 ignorePositioning:(_Bool)arg4;	// IMP=0x0000000000099169
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;	// IMP=0x00000000000986b4
+ (id)specifierForControl:(id)arg1;	// IMP=0x0000000000098490
+ (_Bool)shouldDisplayHideMyEmailForControl:(id)arg1;	// IMP=0x0000000000098376
+ (_Bool)shouldDisplayOneTimeCodeForControl:(id)arg1 inForm:(id)arg2;	// IMP=0x0000000000098011
+ (_Bool)formContainsDateFields:(id)arg1 matchingAddressBookMatch:(id)arg2;	// IMP=0x0000000000096795
+ (id)allSynonymsForMatch:(id)arg1;	// IMP=0x00000000000965ea
+ (id)specifierForAddressBookLabel:(id)arg1;	// IMP=0x00000000000965c1
+ (id)allAddressBookNonAddressPropertyKeys;	// IMP=0x00000000000964f5
+ (id)allAddressBookAddressComponentKeys;	// IMP=0x0000000000096453
+ (id)addressBookAddressPropertyKey;	// IMP=0x000000000009643f
+ (_Bool)formContainsCreditCardNumberOrCardSecurityCodeField:(id)arg1;	// IMP=0x0000000000095262
+ (_Bool)formContainsCreditCardNumberField:(id)arg1;	// IMP=0x000000000009510d
+ (_Bool)formContainsCreditCardData:(id)arg1;	// IMP=0x0000000000094ecb
+ (_Bool)stringLooksLikeCreditCardNumber:(id)arg1;	// IMP=0x0000000000094eb7
+ (id)fieldToFocusBeforeSubmittingForm:(id)arg1;	// IMP=0x0000000000092014
+ (id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2;	// IMP=0x0000000000091600
+ (id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2;	// IMP=0x00000000000913b7
+ (_Bool)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long *)arg2;	// IMP=0x0000000000091349
+ (id)dontSaveMarker;	// IMP=0x0000000000091330
- (void).cxx_destruct;	// IMP=0x00000000000aa3f2
@property(readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager; // @synthesize autoFillQuirksManager=_autoFillQuirksManager;
- (_Bool)textFieldIsEligibleForAutomaticStrongPassword:(id)arg1 form:(id)arg2 ignorePreviousDecision:(_Bool)arg3 textFieldCurrentlyContainsStrongPassword:(_Bool *)arg4;	// IMP=0x00000000000a9c7e
- (_Bool)textFieldMetadataMeetsRequirementsForAutomaticStrongPasswordTreatment:(id)arg1 form:(id)arg2;	// IMP=0x00000000000a9aca
- (void)notifyKeychainWasDirectlyAffectedBySafari;	// IMP=0x00000000000a9ab4
- (id)addressBookMatchesForFullNameForContact:(id)arg1;	// IMP=0x00000000000a9920
- (id)autoGeneratedPasswordForURL:(id)arg1 respectingPasswordRequirements:(id)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x00000000000a9578
- (void)searchForCredentialUsingDomainsToConsiderIdentical:(id)arg1 URL:(id *)arg2 hostForCredentials:(id *)arg3 credential:(id *)arg4 protectionSpace:(id *)arg5;	// IMP=0x00000000000a9121
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;	// IMP=0x00000000000a910b
- (id)_keyToLookUpInAnnotationsForPasswordForFormMetadata:(id)arg1;	// IMP=0x00000000000a90d4
- (void)updateLastUsedUsernameAndExtractUsernameAndPasswordFromForm:(id)arg1 shouldPreferAnnotatedCredentials:(_Bool)arg2 atURL:(id)arg3 username:(id *)arg4 password:(id *)arg5;	// IMP=0x00000000000a83e9
- (void)willSubmitFormWithCredentials:(id)arg1 shouldPreferAnnotatedCredentials:(_Bool)arg2 atURL:(id)arg3 username:(id *)arg4 password:(id *)arg5;	// IMP=0x00000000000a83c6
- (_Bool)isPasswordFieldForUserCredentialsWithMetadata:(id)arg1 formMetadata:(id)arg2;	// IMP=0x00000000000a825a
- (id)metadataOfBestFormForStreamlinedLogin:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2;	// IMP=0x00000000000a8093
- (id)metadataOfActiveFormOrBestFormForPageLevelAutoFill:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2;	// IMP=0x00000000000a7e34
- (id)_credentialMatchesWithCriteria:(id)arg1 protectionSpaceMatches:(id)arg2;	// IMP=0x00000000000a7137
- (id)_protectionSpaceMatchesWithCriteria:(id)arg1 credentialsByProtectionSpace:(id)arg2 associatedDomainsManager:(id)arg3;	// IMP=0x00000000000a67e1
- (void)credentialMatchesWithCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a62c2
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 matchesForAssociatedDomains:(id *)arg3 forURL:(id)arg4 matchingPartialUsername:(id)arg5 omittingCredentialsUserHasDeniedAccessTo:(_Bool)arg6;	// IMP=0x00000000000a6069
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(_Bool)arg5;	// IMP=0x00000000000a6042
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 matchesForAssociatedDomains:(id *)arg3 forURL:(id)arg4 matchingPartialUsername:(id)arg5;	// IMP=0x00000000000a6026
- (id)encryptOrDecryptData:(id)arg1 encrypt:(_Bool)arg2;	// IMP=0x00000000000a6009
- (id)completionDBPath;	// IMP=0x00000000000a6001
- (_Bool)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;	// IMP=0x00000000000a5ff9
- (_Bool)shouldAutoFillPasswords;	// IMP=0x00000000000a5ff1
- (_Bool)shouldAutoFillFromPreviousData;	// IMP=0x00000000000a5fe9
- (_Bool)shouldAutoFillFromAddressBook;	// IMP=0x00000000000a5fe1
- (id)_knownUsernamesForURL:(id)arg1;	// IMP=0x00000000000a5e62
- (id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id *)arg2;	// IMP=0x00000000000a57f3
- (id)lastUsedUsernameForURL:(id)arg1;	// IMP=0x00000000000a57cf
- (void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3;	// IMP=0x00000000000a56a4
- (id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id *)arg2;	// IMP=0x00000000000a55bd
- (id)annotationsFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;	// IMP=0x00000000000a547e
- (id)valuesForFormWithMetadata:(id)arg1 hideMyEmailRecord:(id)arg2;	// IMP=0x00000000000a514d
- (id)credentialMatchesForForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;	// IMP=0x00000000000a4b48
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 shouldUseExistingMatchesToFillFocusedField:(_Bool)arg5 contact:(id)arg6;	// IMP=0x00000000000a4afe
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 contact:(id)arg5;	// IMP=0x00000000000a4ad3
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4 contact:(id)arg5;	// IMP=0x00000000000a4a93
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4;	// IMP=0x00000000000a4a61
- (void)saveRecentlyUsedAutoFillSetWithMatchesToFill:(id)arg1 matchesForDoNotFill:(id)arg2;	// IMP=0x00000000000a463c
- (unsigned long long)_addMatchesForControl:(id)arg1 startingAtIndex:(unsigned long long)arg2 formMetadata:(id)arg3 fromExistingMatches:(id)arg4 fromAllMatchesIfNecessary:(id)arg5 addToFoundMatches:(id)arg6 addToAutoFillValues:(id)arg7 multiRoundAutoFillManager:(id)arg8 propertyToIdentifierMapForFoundMatches:(id)arg9 shouldUseExistingMatchesToFillFocusedField:(_Bool)arg10;	// IMP=0x00000000000a330d
- (_Bool)_matchHasPreferredIdentifierOrShouldBeFilledInMultiRoundAutoFill:(id)arg1 specifier:(id)arg2 multiRoundAutoFillManager:(id)arg3 contact:(id)arg4;	// IMP=0x00000000000a2f55
- (id)_valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 wantAllMatches:(_Bool)arg7 contact:(id)arg8 existingMatches:(id)arg9 shouldUseExistingMatchesToFillFocusedField:(_Bool)arg10 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg11;	// IMP=0x00000000000a1fe4
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6;	// IMP=0x00000000000a1f98
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 contact:(id)arg7 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg8;	// IMP=0x00000000000a1f42
- (id)contactAutoFillSetForRecentlyUsedAutoFillSet:(id)arg1 contact:(id)arg2 form:(id)arg3;	// IMP=0x00000000000a1a07
- (id)orderedHomeAndWorkSetsForContact:(id)arg1 form:(id)arg2;	// IMP=0x00000000000a13be
- (id)_autoFillSetFromMatches:(id)arg1 label:(id)arg2 contact:(id)arg3 form:(id)arg4;	// IMP=0x00000000000a0f20
- (_Bool)isControlASelectElement:(id)arg1;	// IMP=0x00000000000a04ac
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 withSingleCreditCardData:(id)arg3 inField:(id)arg4 inForm:(id)arg5;	// IMP=0x00000000000a00ea
- (id)_nextFieldToFocusAfterFillingFieldAtIndex:(unsigned long long)arg1 inForm:(id)arg2;	// IMP=0x000000000009ff98
- (unsigned long long)_indexForControlWithUniqueID:(id)arg1 inForm:(id)arg2;	// IMP=0x000000000009fe2a
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 andCreditCardDataTypesThatWillBeFilled:(id *)arg3 forCreditCardForm:(id)arg4 fromCreditCardData:(id)arg5;	// IMP=0x000000000009e959
- (unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 multiRoundAutoFillManager:(id)arg6;	// IMP=0x000000000009c310
- (unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 multiRoundAutoFillManager:(id)arg5;	// IMP=0x000000000009c1c1
- (void)_fillPhoneNumber:(id)arg1 intoValues:(id)arg2 controls:(id)arg3 formTextSample:(id)arg4 multiRoundAutoFillManager:(id)arg5;	// IMP=0x000000000009af50
- (id)_phoneNumberCandidates:(id)arg1 fillingMultipleFields:(_Bool)arg2;	// IMP=0x000000000009acd1
- (id)_singleFieldPhoneNumberCandidates:(id)arg1;	// IMP=0x000000000009a92d
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2 contact:(id)arg3;	// IMP=0x000000000009a29a
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg7;	// IMP=0x00000000000990d1
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg6;	// IMP=0x000000000009909d
- (id)cascadingAddressMatchesForMatch:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000098cb5
- (id)_matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg7;	// IMP=0x00000000000989bf
- (id)_matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg6;	// IMP=0x000000000009898b
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg6;	// IMP=0x000000000009886c
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg5;	// IMP=0x000000000009877e
- (_Bool)addressBookHasDataForLabel:(id)arg1;	// IMP=0x0000000000097e22
- (id)bestAddressBookLabelForFormMetadata:(id)arg1 formControlValue:(id)arg2;	// IMP=0x0000000000097369
- (id)_cachedLocalizedStringsForBirthdate:(id)arg1;	// IMP=0x0000000000097135
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x000000000009711b
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg6;	// IMP=0x00000000000956d8
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(_Bool)arg6;	// IMP=0x00000000000956d0
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;	// IMP=0x00000000000956a3
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;	// IMP=0x00000000000953fe
- (id)recentlyUsedAutoFillSets;	// IMP=0x0000000000094890
- (void)addRecentlyUsedAutoFillSet:(id)arg1 appendToTheEnd:(_Bool)arg2;	// IMP=0x00000000000947b0
- (id)_recentlyUsedAutoFillDictionaries;	// IMP=0x000000000009477b
- (_Bool)preferredIdentifierExistsForProperty:(id)arg1 withContact:(id)arg2;	// IMP=0x000000000009458e
- (id)preferredIdentifierForProperty:(id)arg1 withContact:(id)arg2;	// IMP=0x0000000000094349
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 withContact:(id)arg3;	// IMP=0x0000000000094151
- (id)uniqueIDOfContact:(id)arg1;	// IMP=0x000000000009412c
- (void)domainsWithPreviousDataChanged;	// IMP=0x0000000000094126
- (void)setInfo:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000094041
- (id)infoForDomain:(id)arg1;	// IMP=0x0000000000093e78
- (void)clearPreviousDataDatabase;	// IMP=0x0000000000093d4f
- (void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1;	// IMP=0x0000000000093778
- (void)clearPreviousDataForDomain:(id)arg1;	// IMP=0x00000000000935f2
- (id)domainsWithPreviousData;	// IMP=0x00000000000934ea
- (id)_domainsWithPreviousDataOnInternalQueue;	// IMP=0x00000000000934a0
- (void)saveCompletionDBSoon;	// IMP=0x000000000009349a
- (id)allFormDataForSaving;	// IMP=0x000000000009334c
- (id)_completionDB;	// IMP=0x000000000009322d
- (void)pruneCompletionDB;	// IMP=0x0000000000092a9e
- (void)loadCompletionDBIfNeeded;	// IMP=0x0000000000092a3d
- (void)_loadCompletionDBIfNeededOnInternalQueue;	// IMP=0x000000000009260b
- (void)dealloc;	// IMP=0x0000000000092572
- (id)initWithAggressiveKeychainCaching:(_Bool)arg1;	// IMP=0x00000000000920a2
- (id)init;	// IMP=0x000000000009208d
- (_Bool)_dateIsWithinGracePeriodForNotAutomaticallySubmittingLoginForms:(id)arg1;	// IMP=0x0000000000091ff3
- (void)_removeStaleEntriesFromMapOfHighLevelDomainToLastAutomaticFormSubmission;	// IMP=0x0000000000091ee3
- (id)_formKeyForMapOfHighLevelDomainToLastAutomaticFormSubmission:(id)arg1 formMetadata:(id)arg2;	// IMP=0x0000000000091a74
- (void)didAutomaticallySubmitFormWhenFillingOnURL:(id)arg1 formMetadata:(id)arg2;	// IMP=0x0000000000091900
- (_Bool)shouldSubmitForm:(id)arg1 withCredential:(id)arg2 onURL:(id)arg3;	// IMP=0x00000000000916de
- (long long)autoFillActionForFormType:(unsigned long long)arg1 onURL:(id)arg2 shouldSubmitAfterFilling:(_Bool)arg3;	// IMP=0x0000000000091664

@end

