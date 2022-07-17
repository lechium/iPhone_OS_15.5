//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/AKAppleIDServerAuthenticationUIProvider-Protocol.h>

@class AKCommandLineUtilities, NSDate, NSNumber, NSString;

@interface AKAppleIDAuthenticationCommandLineContext <AKAppleIDServerAuthenticationUIProvider>
{
    _Bool _termsAccepted;	// 8 = 0x8
    NSNumber *_secondFactorCode;	// 16 = 0x10
    long long _verificationType;	// 24 = 0x18
    NSString *_phoneNumber;	// 32 = 0x20
    NSString *_firstName;	// 40 = 0x28
    NSString *_lastName;	// 48 = 0x30
    NSDate *_birthday;	// 56 = 0x38
    NSString *_securityCode;	// 64 = 0x40
    AKCommandLineUtilities *_utility;	// 72 = 0x48
    NSString *_rootPath;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000060d0a
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(readonly, nonatomic) AKCommandLineUtilities *utility; // @synthesize utility=_utility;
@property(retain, nonatomic) NSString *securityCode; // @synthesize securityCode=_securityCode;
@property(nonatomic) _Bool termsAccepted; // @synthesize termsAccepted=_termsAccepted;
@property(copy, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) long long verificationType; // @synthesize verificationType=_verificationType;
@property(copy, nonatomic) NSNumber *secondFactorCode; // @synthesize secondFactorCode=_secondFactorCode;
- (id)_jsonPostbackDictionaryForCode:(id)arg1 numberId:(id)arg2;	// IMP=0x0000000000060a3d
- (id)_promptUserForTermsWithResponseDictionary:(id)arg1;	// IMP=0x00000000000605f3
- (id)_promptForLastName;	// IMP=0x000000000006055b
- (id)_promptForFirstName;	// IMP=0x00000000000604c3
- (id)_promptForPhoneNumber;	// IMP=0x000000000006042b
- (id)_promptForUsername;	// IMP=0x0000000000060393
- (id)_promptForPassword;	// IMP=0x00000000000602fb
- (id)_promptForBirthday;	// IMP=0x000000000006003b
- (id)_promptForVerificationCodeWithSecureEntry:(_Bool)arg1 forTrustedNumber:(id)arg2;	// IMP=0x000000000005fec3
- (id)_xmlUIRequestForURL:(id)arg1 withPostbackDictionary:(id)arg2;	// IMP=0x000000000005fdeb
- (id)_xmlUIRequestForURL:(id)arg1 withServerInfo:(id)arg2;	// IMP=0x000000000005fd40
- (id)_parseHeaderTitleForPasscodeView:(id)arg1;	// IMP=0x000000000005fad5
- (void)_beginDataTaskWithRequest:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f4be
- (id)_accountDictionary;	// IMP=0x000000000005f21e
- (id)_createContextDictionaryFromResponse:(id)arg1;	// IMP=0x000000000005f10f
- (id)_accountCreationRequestBodyFromResponseDictionary:(id)arg1 shouldIncludePhoneNumber:(_Bool)arg2 shouldIncludeForSecurityCode:(_Bool)arg3;	// IMP=0x000000000005ecca
- (id)_parseTrustedPhoneNumberFromResponseDictionary:(id)arg1;	// IMP=0x000000000005ebb6
- (id)_promptUserForSelectionWithTrustedNumbers:(id)arg1;	// IMP=0x000000000005e9ba
- (void)_collectAndPostSecondFactorCodeWithRequestBody:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e51e
- (void)_handleServerUISMSVerificationWithResponseDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005db92
- (void)_collectAndHandleTermsAndConditionsWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005d76b
- (void)_handleServerUIPhoneVerificationWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005d378
- (void)_handleServerUIPasswordVerificationWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005d0ac
- (void)_handleServerUIBirthdayVerificationWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cde0
- (void)_verifySecondFactorCodeWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005cc0c
- (void)_handleServerUIWithDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005c9df
- (void)_handleServerUISecondFactorWithObjectModel:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c42f
- (void)_presentServerUISecondFactorWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c27e
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c269
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c10c
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005c086
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c071
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bf03
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005be6e
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005be59
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bdd1
- (id)_rootPath;	// IMP=0x000000000005bda3
- (void)setNeedsNewAppleID:(_Bool)arg1;	// IMP=0x000000000005bd45
- (unsigned long long)_capabilityForUIDisplay;	// IMP=0x000000000005bd3a
- (id)initWithVerificationType:(long long)arg1;	// IMP=0x000000000005bc79
- (id)init;	// IMP=0x000000000005bc65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
