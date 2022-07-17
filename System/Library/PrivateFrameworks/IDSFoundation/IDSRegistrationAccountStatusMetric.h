//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTAWDMetric-Protocol.h>
#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>
#import <IDSFoundation/CUTRTCMetric-Protocol.h>

@class NSDictionary, NSString, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTCoreAnalyticsMetric, CUTRTCMetric, CUTAWDMetric>
{
    _Bool _doesExist;	// 8 = 0x8
    _Bool _isEnabled;	// 9 = 0x9
    _Bool _isUserDisabled;	// 10 = 0xa
    _Bool _doesMatchiCloudAccount;	// 11 = 0xb
    _Bool _isiCloudSignedIn;	// 12 = 0xc
    _Bool _isiTunesSignedIn;	// 13 = 0xd
    _Bool _hasEverRegistered;	// 14 = 0xe
    _Bool _areAllAliasesSelected;	// 15 = 0xf
    _Bool _areAllSelectedAliasesRegistered;	// 16 = 0x10
    _Bool _isProdEnvironment;	// 17 = 0x11
    int _accountType;	// 20 = 0x14
    int _registrationErrorReason;	// 24 = 0x18
    int _accountRegistrationStatus;	// 28 = 0x1c
    NSString *_serviceIdentifier;	// 32 = 0x20
    long long _registrationError;	// 40 = 0x28
    long long _registrationStatus;	// 48 = 0x30
    long long _lastRegistrationFailureError;	// 56 = 0x38
    double _timeIntervalSinceLastRegistrationFailure;	// 64 = 0x40
    double _timeIntervalSinceLastRegistrationSuccess;	// 72 = 0x48
    long long _accountSecurityLevel;	// 80 = 0x50
    long long _numberOfSelected;	// 88 = 0x58
    long long _numberOfVetted;	// 96 = 0x60
    long long _numberOfUnselectReasonUnknown;	// 104 = 0x68
    long long _numberOfUnselectReasonAlertDenial;	// 112 = 0x70
    long long _numberOfUnselectReasonClientCall;	// 120 = 0x78
    long long _numberOfUnselectReasonBadAlias;	// 128 = 0x80
    long long _numberOfUnselectReasonUpdateInfo;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000c13b5
@property(readonly, nonatomic) long long numberOfUnselectReasonUpdateInfo; // @synthesize numberOfUnselectReasonUpdateInfo=_numberOfUnselectReasonUpdateInfo;
@property(readonly, nonatomic) long long numberOfUnselectReasonBadAlias; // @synthesize numberOfUnselectReasonBadAlias=_numberOfUnselectReasonBadAlias;
@property(readonly, nonatomic) long long numberOfUnselectReasonClientCall; // @synthesize numberOfUnselectReasonClientCall=_numberOfUnselectReasonClientCall;
@property(readonly, nonatomic) long long numberOfUnselectReasonAlertDenial; // @synthesize numberOfUnselectReasonAlertDenial=_numberOfUnselectReasonAlertDenial;
@property(readonly, nonatomic) long long numberOfUnselectReasonUnknown; // @synthesize numberOfUnselectReasonUnknown=_numberOfUnselectReasonUnknown;
@property(readonly, nonatomic) long long numberOfVetted; // @synthesize numberOfVetted=_numberOfVetted;
@property(readonly, nonatomic) long long numberOfSelected; // @synthesize numberOfSelected=_numberOfSelected;
@property(readonly, nonatomic) _Bool isProdEnvironment; // @synthesize isProdEnvironment=_isProdEnvironment;
@property(readonly, nonatomic) _Bool areAllSelectedAliasesRegistered; // @synthesize areAllSelectedAliasesRegistered=_areAllSelectedAliasesRegistered;
@property(readonly, nonatomic) _Bool areAllAliasesSelected; // @synthesize areAllAliasesSelected=_areAllAliasesSelected;
@property(readonly, nonatomic) long long accountSecurityLevel; // @synthesize accountSecurityLevel=_accountSecurityLevel;
@property(readonly, nonatomic) double timeIntervalSinceLastRegistrationSuccess; // @synthesize timeIntervalSinceLastRegistrationSuccess=_timeIntervalSinceLastRegistrationSuccess;
@property(readonly, nonatomic) double timeIntervalSinceLastRegistrationFailure; // @synthesize timeIntervalSinceLastRegistrationFailure=_timeIntervalSinceLastRegistrationFailure;
@property(readonly, nonatomic) _Bool hasEverRegistered; // @synthesize hasEverRegistered=_hasEverRegistered;
@property(readonly, nonatomic) long long lastRegistrationFailureError; // @synthesize lastRegistrationFailureError=_lastRegistrationFailureError;
@property(readonly, nonatomic) int accountRegistrationStatus; // @synthesize accountRegistrationStatus=_accountRegistrationStatus;
@property(readonly, nonatomic) long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;
@property(readonly, nonatomic) int registrationErrorReason; // @synthesize registrationErrorReason=_registrationErrorReason;
@property(readonly, nonatomic) long long registrationError; // @synthesize registrationError=_registrationError;
@property(readonly, nonatomic) _Bool isiTunesSignedIn; // @synthesize isiTunesSignedIn=_isiTunesSignedIn;
@property(readonly, nonatomic) _Bool isiCloudSignedIn; // @synthesize isiCloudSignedIn=_isiCloudSignedIn;
@property(readonly, nonatomic) _Bool doesMatchiCloudAccount; // @synthesize doesMatchiCloudAccount=_doesMatchiCloudAccount;
@property(readonly, nonatomic) _Bool isUserDisabled; // @synthesize isUserDisabled=_isUserDisabled;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) _Bool doesExist; // @synthesize doesExist=_doesExist;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(readonly) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(_Bool)arg3 isEnabled:(_Bool)arg4 isUserDisabled:(_Bool)arg5 isiCloudSignedIn:(_Bool)arg6 doesMatchiCloudAccount:(_Bool)arg7 isiTunesSignedIn:(_Bool)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10 registrationStatus:(long long)arg11 accountRegistrationStatus:(int)arg12 hasEverRegistered:(_Bool)arg13 lastRegistrationFailureError:(long long)arg14 timeIntervalSinceLastRegistrationFailure:(double)arg15 timeIntervalSinceLastRegistrationSuccess:(double)arg16 accountSecurityLevel:(long long)arg17 areAllAliasesSelected:(_Bool)arg18 areAllSelectedAliasesRegistered:(_Bool)arg19 numberOfSelected:(long long)arg20 numberOfVetted:(long long)arg21 numberOfUnselectReasonUnknown:(long long)arg22 numberOfUnselectReasonAlertDenial:(long long)arg23 numberOfUnselectReasonClientCall:(long long)arg24 numberOfUnselectReasonBadAlias:(long long)arg25 numberOfUnselectReasonUpdateInfo:(long long)arg26 isProdEnvironment:(_Bool)arg27;	// IMP=0x00000000000c05a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
