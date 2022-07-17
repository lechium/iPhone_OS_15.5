//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EscrowPrerecord, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, SESWrapper;
@protocol OS_dispatch_queue;

@interface SecureBackup : NSObject
{
    _Bool _deleteAll;	// 8 = 0x8
    _Bool _emcsMode;	// 9 = 0x9
    _Bool _excludeiCDPRecords;	// 10 = 0xa
    _Bool _fmipRecovery;	// 11 = 0xb
    _Bool _icdp;	// 12 = 0xc
    _Bool _idmsRecovery;	// 13 = 0xd
    _Bool _silent;	// 14 = 0xe
    _Bool _stingray;	// 15 = 0xf
    _Bool _synchronize;	// 16 = 0x10
    _Bool _useCachedPassphrase;	// 17 = 0x11
    _Bool _useRecoveryPET;	// 18 = 0x12
    _Bool _usesMultipleiCSC;	// 19 = 0x13
    _Bool _usesRandomPassphrase;	// 20 = 0x14
    _Bool _usesRecoveryKey;	// 21 = 0x15
    _Bool _suppressServerFiltering;	// 22 = 0x16
    _Bool _deleteDoubleOnly;	// 23 = 0x17
    _Bool _recoveryResult;	// 24 = 0x18
    _Bool _silentDoubleRecovery;	// 25 = 0x19
    NSString *_appleID;	// 32 = 0x20
    NSString *_authToken;	// 40 = 0x28
    NSDate *_backOffDate;	// 48 = 0x30
    NSData *_certData;	// 56 = 0x38
    NSString *_countryDialCode;	// 64 = 0x40
    NSString *_countryCode;	// 72 = 0x48
    NSString *_dsid;	// 80 = 0x50
    NSString *_emcsCred;	// 88 = 0x58
    NSDictionary *_emcsDict;	// 96 = 0x60
    NSString *;	// 104 = 0x68
    NSString *_duplicateEncodedMetadata;	// 112 = 0x70
    NSDictionary *_escrowRecord;	// 120 = 0x78
    NSString *_escrowProxyURL;	// 128 = 0x80
    NSString *_fmipUUID;	// 136 = 0x88
    NSString *_iCloudEnv;	// 144 = 0x90
    NSData *_iCloudIdentityData;	// 152 = 0x98
    NSString *_iCloudPassword;	// 160 = 0xa0
    NSData *_idmsData;	// 168 = 0xa8
    NSDictionary *_metadata;	// 176 = 0xb0
    NSDictionary *_metadataHash;	// 184 = 0xb8
    NSString *_oldEMCSCred;	// 192 = 0xc0
    NSString *_passphrase;	// 200 = 0xc8
    NSString *_recordID;	// 208 = 0xd0
    NSString *_recoveryKey;	// 216 = 0xd8
    NSString *_smsTarget;	// 224 = 0xe0
    NSNumber *_specifiedFederation;	// 232 = 0xe8
    NSString *_verificationToken;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_queue;	// 248 = 0xf8
    NSError *_error;	// 256 = 0x100
    NSString *_activityLabel;	// 264 = 0x108
    NSString *_activityUUID;	// 272 = 0x110
    NSString *_recoveryUUID;	// 280 = 0x118
    NSString *_doubleRecoveryUUID;	// 288 = 0x120
    NSString *_hsa2CachedPrerecordUUID;	// 296 = 0x128
    EscrowPrerecord *_prerecord;	// 304 = 0x130
    SESWrapper *_ses;	// 312 = 0x138
}

+ (id)knownICDPFederations:(id *)arg1;	// IMP=0x002000000000eaf1
+ (_Bool)moveToFederationAllowed:(id)arg1 altDSID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000e694
+ (id)getAcceptedTermsForAltDSID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000000e624
+ (id)getAllAcceptedTermsWithError:(id *)arg1;	// IMP=0x001000000000e60d
+ (id)_getAcceptedTermsForAltDSID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000000e1b4
+ (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000dde0
+ (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000da78
+ (unsigned int)daemonPasscodeRequestOpinion:(id *)arg1;	// IMP=0x001000000000cbc1
+ (unsigned int)needPasscodeForHSA2EscrowRecordUpdate:(id *)arg1;	// IMP=0x001000000000c650
+ (void)asyncRequestEscrowRecordUpdate;	// IMP=0x001000000000c4ee
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000001c10
+ (id)_ClassCreateSecureBackupConcurrentConnection;	// IMP=0x0010000000001a7c
- (void).cxx_destruct;	// IMP=0x001000000000f453
@property(retain, nonatomic) SESWrapper *ses; // @synthesize ses=_ses;
@property(retain, nonatomic) EscrowPrerecord *prerecord; // @synthesize prerecord=_prerecord;
@property(copy, nonatomic) NSString *hsa2CachedPrerecordUUID; // @synthesize hsa2CachedPrerecordUUID=_hsa2CachedPrerecordUUID;
@property(nonatomic) _Bool silentDoubleRecovery; // @synthesize silentDoubleRecovery=_silentDoubleRecovery;
@property(nonatomic) _Bool recoveryResult; // @synthesize recoveryResult=_recoveryResult;
@property(retain, nonatomic) NSString *doubleRecoveryUUID; // @synthesize doubleRecoveryUUID=_doubleRecoveryUUID;
@property(retain, nonatomic) NSString *recoveryUUID; // @synthesize recoveryUUID=_recoveryUUID;
@property(nonatomic) _Bool deleteDoubleOnly; // @synthesize deleteDoubleOnly=_deleteDoubleOnly;
@property(nonatomic) _Bool suppressServerFiltering; // @synthesize suppressServerFiltering=_suppressServerFiltering;
@property(copy, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(copy, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;
@property(nonatomic) _Bool usesRecoveryKey; // @synthesize usesRecoveryKey=_usesRecoveryKey;
@property(nonatomic) _Bool usesRandomPassphrase; // @synthesize usesRandomPassphrase=_usesRandomPassphrase;
@property(nonatomic) _Bool usesMultipleiCSC; // @synthesize usesMultipleiCSC=_usesMultipleiCSC;
@property(nonatomic) _Bool useRecoveryPET; // @synthesize useRecoveryPET=_useRecoveryPET;
@property(nonatomic) _Bool useCachedPassphrase; // @synthesize useCachedPassphrase=_useCachedPassphrase;
@property(nonatomic) _Bool synchronize; // @synthesize synchronize=_synchronize;
@property(nonatomic) _Bool stingray; // @synthesize stingray=_stingray;
@property(copy, nonatomic) NSNumber *specifiedFederation; // @synthesize specifiedFederation=_specifiedFederation;
@property(nonatomic) _Bool silent; // @synthesize silent=_silent;
@property(copy, nonatomic) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(copy, nonatomic) NSString *oldEMCSCred; // @synthesize oldEMCSCred=_oldEMCSCred;
@property(retain, nonatomic) NSDictionary *metadataHash; // @synthesize metadataHash=_metadataHash;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool idmsRecovery; // @synthesize idmsRecovery=_idmsRecovery;
@property(retain, nonatomic) NSData *idmsData; // @synthesize idmsData=_idmsData;
@property(copy, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property(retain, nonatomic) NSData *iCloudIdentityData; // @synthesize iCloudIdentityData=_iCloudIdentityData;
@property(copy, nonatomic) NSString *iCloudEnv; // @synthesize iCloudEnv=_iCloudEnv;
@property(nonatomic) _Bool icdp; // @synthesize icdp=_icdp;
@property(copy, nonatomic) NSString *fmipUUID; // @synthesize fmipUUID=_fmipUUID;
@property(nonatomic) _Bool fmipRecovery; // @synthesize fmipRecovery=_fmipRecovery;
@property(nonatomic) _Bool excludeiCDPRecords; // @synthesize excludeiCDPRecords=_excludeiCDPRecords;
@property(copy, nonatomic) NSString *escrowProxyURL; // @synthesize escrowProxyURL=_escrowProxyURL;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *duplicateEncodedMetadata; // @synthesize duplicateEncodedMetadata=_duplicateEncodedMetadata;
@property(copy, nonatomic) NSString *encodedMetadata; // @synthesize encodedMetadata=_encodedMetadata;
@property(nonatomic) _Bool emcsMode; // @synthesize emcsMode=_emcsMode;
@property(retain, nonatomic) NSDictionary *emcsDict; // @synthesize emcsDict=_emcsDict;
@property(copy, nonatomic) NSString *emcsCred; // @synthesize emcsCred=_emcsCred;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(nonatomic) _Bool deleteAll; // @synthesize deleteAll=_deleteAll;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *countryDialCode; // @synthesize countryDialCode=_countryDialCode;
@property(retain, nonatomic) NSData *certData; // @synthesize certData=_certData;
- (void);	// IMP=0x001000000000ef45
@property(retain, nonatomic) NSDate *backOffDate; // @synthesize backOffDate=_backOffDate;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (_Bool)requiresDoubleEnrollment;	// IMP=0x001000000000da0a
- (void)getCertificates:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d6fb
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 uuid:(id)arg2 reason:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000d131
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 uuid:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000d119
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000000d078
- (void)prepareHSA2EscrowRecordContents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c158
- (id)srpRecoveryBlobFromSRPInitResponse:(id)arg1;	// IMP=0x001000000000c099
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;	// IMP=0x001000000000c013
- (id)srpInitNonce;	// IMP=0x001000000000bf4e
- (void)setBackOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000beed
- (void)backOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000be8c
- (id)backupWithInfo:(id)arg1;	// IMP=0x001000000000baa9
- (void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ba48
- (id)changeSMSTargetWithInfo:(id)arg1;	// IMP=0x001000000000b9d1
- (_Bool)changeSMSTargetWithError:(id *)arg1;	// IMP=0x001000000000b5fe
- (void)getCountrySMSCodesWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b59d
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b4f3
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b492
- (id)startSMSChallengeWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x001000000000b40d
- (id)startSMSChallengeWithError:(id *)arg1;	// IMP=0x001000000000afaf
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000af4e
- (id)uncachePassphraseWithInfo:(id)arg1;	// IMP=0x001000000000af1f
- (void)cachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000aebe
- (id)cachePassphraseWithInfo:(id)arg1;	// IMP=0x001000000000ae8f
- (void)stashRecoveryDataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000add5
- (void)disableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ad74
- (id)disableWithInfo:(id)arg1;	// IMP=0x001000000000acfd
- (_Bool)disableWithError:(id *)arg1;	// IMP=0x001000000000a92a
- (void)recoverWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a918
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a85e
- (id)recoverWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x001000000000a7d9
- (void)restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 error:(id *)arg5;	// IMP=0x001000000000a26c
- (id)recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000009d1f
- (id)recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000971f
- (id)recoverWithError:(id *)arg1;	// IMP=0x00100000000092c1
- (void)enableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009260
- (id)enableWithInfo:(id)arg1;	// IMP=0x00100000000091e9
- (_Bool)enableWithError:(id *)arg1;	// IMP=0x0010000000008e16
- (void)updateMetadataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008db5
- (id)updateMetadataWithInfo:(id)arg1;	// IMP=0x0010000000008d3e
- (_Bool)updateMetadataWithError:(id *)arg1;	// IMP=0x001000000000888f
- (void)getAccountInfoWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000887d
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x001000000000881c
- (id)getAccountInfoWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x0010000000008797
- (id)getAccountInfoWithError:(id *)arg1;	// IMP=0x00100000000081e5
- (void)stateCaptureWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007e4d
- (void)notificationInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007a45
- (void)setBackOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000770d
- (void)backOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000073b6
- (void)backupWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000704e
- (void)changeSMSTargetWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006d16
- (void)getCountrySMSCodesWithResults:(CDUnknownBlockType)arg1;	// IMP=0x00100000000069bf
- (void)startSMSChallengeWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006668
- (void)uncachePassphrase;	// IMP=0x00100000000064af
- (void)uncacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000061ff
- (void)cacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005f4f
- (void)uncachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005c9f
- (void)cachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000059ef
- (void)cachePassphrase;	// IMP=0x0010000000005811
- (void)updateMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000054d9
- (void)stashRecoveryDataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000051a1
- (void)disableWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004e69
- (void)createICDPRecordWithContents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004aee
- (void)recoverRecordContents:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004797
- (void)recoverWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004440
- (void)enableWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003ec9
- (void)getAccountInfoWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003ace
- (void)populateWithInfo:(id)arg1;	// IMP=0x0010000000002f8f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002658
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000001df4
- (id)init;	// IMP=0x0010000000001ddb
- (id)initWithUserActivityLabel:(id)arg1;	// IMP=0x0010000000001c18
- (id)_CreateSecureBackupConnection;	// IMP=0x00100000000018e8

@end
