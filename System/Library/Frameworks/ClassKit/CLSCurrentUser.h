//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@class CKRecordID, CLSPerson, NSData, NSDictionary, NSError, NSString, NSURL;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasSecurityScopedSchoolworkUbiquitousContainerURL;	// 8 = 0x8
    _Bool _hasSecurityScopedMultimediaCacheDirectoryURL;	// 9 = 0x9
    _Bool _hasDataSeparatedAccount;	// 10 = 0xa
    _Bool _requiresPersonaMatch;	// 11 = 0xb
    _Bool _hasMatchingPersona;	// 12 = 0xc
    _Bool _hasManagedAccount;	// 13 = 0xd
    _Bool _hasEDUAccount;	// 14 = 0xe
    _Bool _hasUbiquityEnabled;	// 15 = 0xf
    _Bool _organizationProgressTrackingAllowed;	// 16 = 0x10
    _Bool _organizationMaidAnalyticsEnabled;	// 17 = 0x11
    _Bool _personMaidAnalyticsEnabled;	// 18 = 0x12
    int _devMode;	// 20 = 0x14
    int _rosterServiceAuthenticationState;	// 24 = 0x18
    int _handoutServiceAuthenticationState;	// 28 = 0x1c
    int _iCloudDriveAuthenticationState;	// 32 = 0x20
    CLSPerson *_person;	// 40 = 0x28
    NSString *_accountIdentifier;	// 48 = 0x30
    NSString *_accountPersonaUniqueIdentifier;	// 56 = 0x38
    NSString *_clientPersonaUniqueIdentifier;	// 64 = 0x40
    NSString *_organizationName;	// 72 = 0x48
    long long _catalogEnvironment;	// 80 = 0x50
    NSURL *_schoolworkUbiquitousContainerURL;	// 88 = 0x58
    NSError *_schoolworkUbiquitousContainerError;	// 96 = 0x60
    CKRecordID *_orgAdminUserRecordID;	// 104 = 0x68
    NSError *_orgAdminUserFetchError;	// 112 = 0x70
    CKRecordID *_userRecordID;	// 120 = 0x78
    NSError *_userFetchError;	// 128 = 0x80
    NSURL *_multimediaCacheDirectoryURL;	// 136 = 0x88
    NSError *_multimediaCacheDirectoryURLError;	// 144 = 0x90
    unsigned long long _roles;	// 152 = 0x98
    NSDictionary *_locationIDsByAXMRoleType;	// 160 = 0xa0
    NSData *_schoolworkUbiquitousContainerURLSandboxExtension;	// 168 = 0xa8
    NSData *_multimediaCacheDirectoryURLSandboxExtension;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000035322
+ (unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1;	// IMP=0x000000000003426b
+ (id)magicValue;	// IMP=0x000000000003425e
- (void).cxx_destruct;	// IMP=0x0000000000035d66
@property(copy, nonatomic) NSData *multimediaCacheDirectoryURLSandboxExtension; // @synthesize multimediaCacheDirectoryURLSandboxExtension=_multimediaCacheDirectoryURLSandboxExtension;
@property(copy, nonatomic) NSData *schoolworkUbiquitousContainerURLSandboxExtension; // @synthesize schoolworkUbiquitousContainerURLSandboxExtension=_schoolworkUbiquitousContainerURLSandboxExtension;
@property(retain, nonatomic) NSDictionary *locationIDsByAXMRoleType; // @synthesize locationIDsByAXMRoleType=_locationIDsByAXMRoleType;
@property(nonatomic) unsigned long long roles; // @synthesize roles=_roles;
@property(copy, nonatomic) NSError *multimediaCacheDirectoryURLError; // @synthesize multimediaCacheDirectoryURLError=_multimediaCacheDirectoryURLError;
@property(copy, nonatomic) NSURL *multimediaCacheDirectoryURL; // @synthesize multimediaCacheDirectoryURL=_multimediaCacheDirectoryURL;
@property(copy, nonatomic) NSError *userFetchError; // @synthesize userFetchError=_userFetchError;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
@property(copy, nonatomic) NSError *orgAdminUserFetchError; // @synthesize orgAdminUserFetchError=_orgAdminUserFetchError;
@property(retain, nonatomic) CKRecordID *orgAdminUserRecordID; // @synthesize orgAdminUserRecordID=_orgAdminUserRecordID;
@property(copy, nonatomic) NSError *schoolworkUbiquitousContainerError; // @synthesize schoolworkUbiquitousContainerError=_schoolworkUbiquitousContainerError;
@property(copy, nonatomic) NSURL *schoolworkUbiquitousContainerURL; // @synthesize schoolworkUbiquitousContainerURL=_schoolworkUbiquitousContainerURL;
@property(nonatomic) int iCloudDriveAuthenticationState; // @synthesize iCloudDriveAuthenticationState=_iCloudDriveAuthenticationState;
@property(nonatomic) int handoutServiceAuthenticationState; // @synthesize handoutServiceAuthenticationState=_handoutServiceAuthenticationState;
@property(nonatomic) int rosterServiceAuthenticationState; // @synthesize rosterServiceAuthenticationState=_rosterServiceAuthenticationState;
@property(nonatomic) long long catalogEnvironment; // @synthesize catalogEnvironment=_catalogEnvironment;
@property(nonatomic) _Bool personMaidAnalyticsEnabled; // @synthesize personMaidAnalyticsEnabled=_personMaidAnalyticsEnabled;
@property(nonatomic) _Bool organizationMaidAnalyticsEnabled; // @synthesize organizationMaidAnalyticsEnabled=_organizationMaidAnalyticsEnabled;
@property(nonatomic) _Bool organizationProgressTrackingAllowed; // @synthesize organizationProgressTrackingAllowed=_organizationProgressTrackingAllowed;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) _Bool hasUbiquityEnabled; // @synthesize hasUbiquityEnabled=_hasUbiquityEnabled;
@property(nonatomic) _Bool hasEDUAccount; // @synthesize hasEDUAccount=_hasEDUAccount;
@property(nonatomic) _Bool hasManagedAccount; // @synthesize hasManagedAccount=_hasManagedAccount;
@property(nonatomic) _Bool hasMatchingPersona; // @synthesize hasMatchingPersona=_hasMatchingPersona;
@property(nonatomic) _Bool requiresPersonaMatch; // @synthesize requiresPersonaMatch=_requiresPersonaMatch;
@property(nonatomic) _Bool hasDataSeparatedAccount; // @synthesize hasDataSeparatedAccount=_hasDataSeparatedAccount;
@property(copy, nonatomic) NSString *clientPersonaUniqueIdentifier; // @synthesize clientPersonaUniqueIdentifier=_clientPersonaUniqueIdentifier;
@property(copy, nonatomic) NSString *accountPersonaUniqueIdentifier; // @synthesize accountPersonaUniqueIdentifier=_accountPersonaUniqueIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) CLSPerson *person; // @synthesize person=_person;
@property(nonatomic) int devMode; // @synthesize devMode=_devMode;
- (id)description;	// IMP=0x000000000003532a
- (void)dealloc;	// IMP=0x00000000000352c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034fd8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003498a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000344cc
@property(readonly, copy, nonatomic) NSString *clientPersonaUniqueString;
@property(readonly, copy, nonatomic) NSString *personaUniqueString;
@property(readonly, nonatomic) _Bool isStudent;
@property(readonly, nonatomic) _Bool isInstructor;
@property(readonly, nonatomic) _Bool isAdministrator;
- (_Bool)hasRole:(unsigned long long)arg1;	// IMP=0x0000000000034451
- (_Bool)_hasRole:(unsigned long long)arg1;	// IMP=0x000000000003442e
- (unsigned long long)_useRoles;	// IMP=0x0000000000034400
- (id)_init;	// IMP=0x00000000000343d1

@end
