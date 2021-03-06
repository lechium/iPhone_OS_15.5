//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAuthenticationContext-Protocol.h>
#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKDevice, NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface AKCustodianContext : NSObject <AKAuthenticationContext, NSSecureCoding, NSCopying>
{
    _Bool _cliMode;	// 8 = 0x8
    _Bool _ownerDevice;	// 9 = 0x9
    NSString *_proxiedAppName;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    NSDictionary *_appProvidedData;	// 32 = 0x20
    AKDevice *_companionDevice;	// 40 = 0x28
    AKDevice *_proxiedDevice;	// 48 = 0x30
    long long _serviceType;	// 56 = 0x38
    NSString *_appProvidedContext;	// 64 = 0x40
    long long authenticationMode;	// 72 = 0x48
    NSString *_identityToken;	// 80 = 0x50
    NSString *_heartbeatToken;	// 88 = 0x58
    NSString *_ownerAppleID;	// 96 = 0x60
    NSString *_ownerCustodianAltDSID;	// 104 = 0x68
    NSUUID *_custodianUUID;	// 112 = 0x70
    NSData *_wrappingKeyRKC;	// 120 = 0x78
    NSString *_custodianSetupToken;	// 128 = 0x80
    NSString *_pushToken;	// 136 = 0x88
    NSString *_recoverySessionID;	// 144 = 0x90
    NSString *_custodianRecoveryToken;	// 152 = 0x98
    NSData *_aaData;	// 160 = 0xa0
    NSData *_idmsData;	// 168 = 0xa8
    NSData *_encryptedPRKC;	// 176 = 0xb0
    NSString *_recoveryStep;	// 184 = 0xb8
    long long _clientErrorCode;	// 192 = 0xc0
    long long _notificationAction;	// 200 = 0xc8
    NSString *_transactionID;	// 208 = 0xd0
    NSArray *_custodianUUIDs;	// 216 = 0xd8
    NSArray *_beneficiaryUUIDs;	// 224 = 0xe0
    NSDate *_lastDataSyncTimestamp;	// 232 = 0xe8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000195bc
- (void).cxx_destruct;	// IMP=0x0000000000019b8c
@property(copy, nonatomic) NSDate *lastDataSyncTimestamp; // @synthesize lastDataSyncTimestamp=_lastDataSyncTimestamp;
@property(copy, nonatomic) NSArray *beneficiaryUUIDs; // @synthesize beneficiaryUUIDs=_beneficiaryUUIDs;
@property(copy, nonatomic) NSArray *custodianUUIDs; // @synthesize custodianUUIDs=_custodianUUIDs;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(nonatomic) long long notificationAction; // @synthesize notificationAction=_notificationAction;
@property(nonatomic) long long clientErrorCode; // @synthesize clientErrorCode=_clientErrorCode;
@property(nonatomic) _Bool ownerDevice; // @synthesize ownerDevice=_ownerDevice;
@property(copy, nonatomic) NSString *recoveryStep; // @synthesize recoveryStep=_recoveryStep;
@property(copy, nonatomic) NSData *encryptedPRKC; // @synthesize encryptedPRKC=_encryptedPRKC;
@property(copy, nonatomic) NSData *idmsData; // @synthesize idmsData=_idmsData;
@property(copy, nonatomic) NSData *aaData; // @synthesize aaData=_aaData;
@property(copy, nonatomic) NSString *custodianRecoveryToken; // @synthesize custodianRecoveryToken=_custodianRecoveryToken;
@property(copy, nonatomic) NSString *recoverySessionID; // @synthesize recoverySessionID=_recoverySessionID;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *custodianSetupToken; // @synthesize custodianSetupToken=_custodianSetupToken;
@property(copy, nonatomic) NSData *wrappingKeyRKC; // @synthesize wrappingKeyRKC=_wrappingKeyRKC;
@property(copy, nonatomic) NSUUID *custodianUUID; // @synthesize custodianUUID=_custodianUUID;
@property(copy, nonatomic) NSString *ownerCustodianAltDSID; // @synthesize ownerCustodianAltDSID=_ownerCustodianAltDSID;
@property(copy, nonatomic) NSString *ownerAppleID; // @synthesize ownerAppleID=_ownerAppleID;
@property(nonatomic) _Bool _cliMode; // @synthesize _cliMode;
@property(copy, nonatomic, setter=_setHeartbeatToken:) NSString *_heartbeatToken; // @synthesize _heartbeatToken;
@property(copy, nonatomic, setter=_setIdentityToken:) NSString *_identityToken; // @synthesize _identityToken;
@property(nonatomic) long long authenticationMode; // @synthesize authenticationMode;
@property(copy, nonatomic) NSString *appProvidedContext; // @synthesize appProvidedContext=_appProvidedContext;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) AKDevice *proxiedDevice; // @synthesize proxiedDevice=_proxiedDevice;
@property(copy, nonatomic) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
@property(copy, nonatomic) NSDictionary *appProvidedData; // @synthesize appProvidedData=_appProvidedData;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName; // @synthesize _proxiedAppName;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000195c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019398
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018ee3

// Remaining properties
@property(nonatomic) _Bool cliMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

