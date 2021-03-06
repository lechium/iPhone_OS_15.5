//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableSet;
@protocol TPDecrypter;

@interface TPModel : NSObject
{
    NSMutableDictionary *_peersByID;	// 8 = 0x8
    NSMutableDictionary *_policiesByVersion;	// 16 = 0x10
    NSMutableSet *_uncheckedVouchers;	// 24 = 0x18
    NSMutableSet *_vouchers;	// 32 = 0x20
    id <TPDecrypter> _decrypter;	// 40 = 0x28
    NSData *_recoverySigningPubKey;	// 48 = 0x30
    NSData *_recoveryEncryptionPubKey;	// 56 = 0x38
    NSMutableDictionary *_custodianRecoveryKeys;	// 64 = 0x40
}

+ (id)preapprovalsFromKeys:(id)arg1;	// IMP=0x0000000000015726
- (void).cxx_destruct;	// IMP=0x000000000001407f
@property(retain, nonatomic) NSMutableDictionary *custodianRecoveryKeys; // @synthesize custodianRecoveryKeys=_custodianRecoveryKeys;
@property(retain, nonatomic) NSData *recoveryEncryptionPubKey; // @synthesize recoveryEncryptionPubKey=_recoveryEncryptionPubKey;
@property(retain, nonatomic) NSData *recoverySigningPubKey; // @synthesize recoverySigningPubKey=_recoverySigningPubKey;
@property(retain, nonatomic) id <TPDecrypter> decrypter; // @synthesize decrypter=_decrypter;
@property(retain, nonatomic) NSMutableSet *vouchers; // @synthesize vouchers=_vouchers;
@property(retain, nonatomic) NSMutableSet *uncheckedVouchers; // @synthesize uncheckedVouchers=_uncheckedVouchers;
@property(retain, nonatomic) NSMutableDictionary *policiesByVersion; // @synthesize policiesByVersion=_policiesByVersion;
@property(retain, nonatomic) NSMutableDictionary *peersByID; // @synthesize peersByID=_peersByID;
- (_Bool)currentStatePossiblyMissingData;	// IMP=0x000000000001397b
- (id)allCustodianRecoveryKeyPeerIDs;	// IMP=0x000000000001392b
- (id)allCustodianRecoveryKeys;	// IMP=0x00000000000138b9
- (id)findCustodianRecoveryKeyWithUUID:(id)arg1;	// IMP=0x0000000000013636
- (void)removeCustodianRecoveryKey:(id)arg1;	// IMP=0x0000000000013551
- (void)registerCustodianRecoveryKey:(id)arg1;	// IMP=0x0000000000013300
- (id)recoveryEncryptionPublicKey;	// IMP=0x00000000000132f2
- (id)recoverySigningPublicKey;	// IMP=0x00000000000132e4
- (void)setRecoveryKeys:(id)arg1;	// IMP=0x0000000000013025
- (_Bool)isCustodianRecoveryKeyTrusted:(id)arg1;	// IMP=0x0000000000012d83
- (_Bool)isRecoveryKeyEnrolled;	// IMP=0x0000000000012a43
- (id)peerIDThatTrustsCustodianRecoveryKeys:(id)arg1 canIntroducePeer:(id)arg2 stableInfo:(id)arg3;	// IMP=0x0000000000012822
- (id)peerIDThatTrustsRecoveryKeys:(id)arg1 canIntroducePeer:(id)arg2 stableInfo:(id)arg3;	// IMP=0x000000000001263e
- (id)untrustedPeerIDs;	// IMP=0x000000000001250f
- (id)bestWalrusAcrossTrustedPeers;	// IMP=0x0000000000011fed
- (id)bestWalrusForStableInfo:(id)arg1 dynamicInfo:(id)arg2 walrusStableChanges:(id)arg3;	// IMP=0x00000000000118cd
- (id)bestRecoveryKeyForStableInfo:(id)arg1 dynamicInfo:(id)arg2;	// IMP=0x00000000000112ed
- (id)vectorClock;	// IMP=0x000000000001122b
- (id)getPeerIDsTrustedByPeerWithDynamicInfo:(id)arg1 toAccessView:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010eb7
- (id)getPeerIDsTrustedByPeerWithID:(id)arg1 toAccessView:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010df4
- (id)getViewsForCRK:(id)arg1 donorPermanentInfo:(id)arg2 donorStableInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000010b72
- (id)getViewsForPeer:(id)arg1 stableInfo:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010a1e
- (_Bool)considerPolicyFromPeerID:(id)arg1 stableInfo:(id)arg2 secrets:(id)arg3 newestPolicyDoc:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001023c
- (id)policyForPeerIDs:(id)arg1 candidatePeerID:(id)arg2 candidateStableInfo:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000fd94
- (id)dynamicInfoForJoiningPeerID:(id)arg1 peerPermanentInfo:(id)arg2 peerStableInfo:(id)arg3 sponsorID:(id)arg4 preapprovedKeys:(id)arg5 signingKeyPair:(id)arg6 currentMachineIDs:(id)arg7 error:(id *)arg8;	// IMP=0x000000000000f36e
- (void)filterPreapprovals:(id)arg1 forExistingPeers:(id)arg2;	// IMP=0x000000000000f0d7
- (id)peersWithMachineID:(id)arg1;	// IMP=0x000000000000edea
- (id)filterPeerList:(id)arg1 byMachineIDs:(id)arg2 dispositions:(id)arg3;	// IMP=0x000000000000e602
- (id)calculateDynamicInfoFromModel:(id)arg1 peer:(id)arg2 peerPermanentInfo:(id)arg3 peerStableInfo:(id)arg4 startingDynamicInfo:(id)arg5 addingPeerIDs:(id)arg6 removingPeerIDs:(id)arg7 preapprovedKeys:(id)arg8 signingKeyPair:(id)arg9 currentMachineIDs:(id)arg10 error:(id *)arg11;	// IMP=0x000000000000c0c4
- (id)calculateDynamicInfoForPeerWithID:(id)arg1 addingPeerIDs:(id)arg2 removingPeerIDs:(id)arg3 preapprovedKeys:(id)arg4 signingKeyPair:(id)arg5 currentMachineIDs:(id)arg6 error:(id *)arg7;	// IMP=0x000000000000be5c
- (void)recursivelyExpandIncludedPeerIDs:(id)arg1 andExcludedPeerIDs:(id)arg2 dispositions:(id)arg3 withPeersTrustedBySponsorID:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6;	// IMP=0x000000000000b875
- (void)considerPreapprovalsSponsoredByPeer:(id)arg1 toRecursivelyExpandIncludedPeerIDs:(id)arg2 andExcludedPeerIDs:(id)arg3 dispositions:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6;	// IMP=0x000000000000b258
- (void)considerVouchersSponsoredByPeerID:(id)arg1 sponsorPermanentInfo:(id)arg2 toRecursivelyExpandIncludedPeerIDs:(id)arg3 andExcludedPeerIDs:(id)arg4 dispositions:(id)arg5 currentMachineIDs:(id)arg6 forEpoch:(unsigned long long)arg7;	// IMP=0x000000000000aef9
- (id)considerCandidateID:(id)arg1 withSponsorID:(id)arg2 sponsorPermanentInfo:(id)arg3 toExpandIncludedPeerIDs:(id)arg4 andExcludedPeerIDs:(id)arg5 dispositions:(id)arg6 currentMachineIDs:(id)arg7 forEpoch:(unsigned long long)arg8;	// IMP=0x000000000000a6cb
- (void)checkVouchers;	// IMP=0x000000000000a38f
- (void)registerVoucher:(id)arg1;	// IMP=0x0000000000009d25
- (_Bool)validateVoucherForPeer:(id)arg1 sponsor:(id)arg2;	// IMP=0x0000000000009997
- (_Bool)verifyVoucherSignature:(id)arg1;	// IMP=0x00000000000095af
- (id)createVoucherForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 reason:(unsigned long long)arg4 signingKeyPair:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000094aa
- (_Bool)checkIntroductionForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000900a
- (_Bool)canIntroduceCandidate:(id)arg1 withSponsor:(id)arg2 toEpoch:(unsigned long long)arg3 underPolicy:(id)arg4 disposition:(id)arg5;	// IMP=0x0000000000008bf6
- (_Bool)canTrustCandidate:(id)arg1 inEpoch:(unsigned long long)arg2;	// IMP=0x0000000000008bcd
- (id)createDynamicInfoWithIncludedPeerIDs:(id)arg1 excludedPeerIDs:(id)arg2 dispositions:(id)arg3 preapprovals:(id)arg4 signingKeyPair:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000008ad1
- (unsigned long long)maxClock;	// IMP=0x0000000000008a0a
- (_Bool)updateDynamicInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000008779
- (id)createStableInfoWithFrozenPolicyVersion:(id)arg1 flexiblePolicyVersion:(id)arg2 policySecrets:(id)arg3 syncUserControllableViews:(int)arg4 secureElementIdentity:(id)arg5 walrusSetting:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 signingKeyPair:(id)arg10 recoverySigningPubKey:(id)arg11 recoveryEncryptionPubKey:(id)arg12 isInheritedAccount:(_Bool)arg13 error:(id *)arg14;	// IMP=0x00000000000085b6
- (_Bool)updateStableInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000008325
- (int)userViewSyncabilityConsensusAmongTrustedPeers:(id)arg1;	// IMP=0x0000000000007f73
- (id)getDynamicInfoForPeerWithID:(id)arg1;	// IMP=0x0000000000007f23
- (id)getStableInfoForPeerWithID:(id)arg1;	// IMP=0x0000000000007ed3
- (unsigned long long)statusOfPeerWithID:(id)arg1;	// IMP=0x0000000000007106
- (_Bool)validatePeerWithPreApproval:(id)arg1 sponsor:(id)arg2;	// IMP=0x0000000000006e79
- (_Bool)hasPotentiallyTrustedPeerWithSigningKey:(id)arg1;	// IMP=0x0000000000006ba5
- (_Bool)hasPotentiallyTrustedPeerPreapprovingKey:(id)arg1;	// IMP=0x00000000000068f2
- (id)peerCountsByMachineID;	// IMP=0x000000000000661c
- (id)viablePeerCountsByModelID;	// IMP=0x00000000000062b6
- (id)allMachineIDs;	// IMP=0x000000000000609f
- (id)actualPeerWithID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005f3f
- (id)custodianPeerWithID:(id)arg1;	// IMP=0x0000000000005ebc
- (id)peerWithID:(id)arg1;	// IMP=0x0000000000005e39
- (_Bool)hasPeerWithID:(id)arg1;	// IMP=0x0000000000005daf
- (void)deletePeerWithID:(id)arg1;	// IMP=0x0000000000005d3d
- (void)registerPeerWithPermanentInfo:(id)arg1;	// IMP=0x0000000000005af2
- (id)allRegisteredPolicyVersions;	// IMP=0x000000000000591a
- (id)allPolicyVersions;	// IMP=0x00000000000055eb
- (id)allVouchers;	// IMP=0x00000000000055d9
- (id)allPeers;	// IMP=0x0000000000005567
- (id)allPeerIDs;	// IMP=0x0000000000005517
- (id)policyWithVersion:(unsigned long long)arg1;	// IMP=0x0000000000005490
- (void)registerPolicyDocument:(id)arg1;	// IMP=0x0000000000005356
- (unsigned long long)latestEpochAmongPeerIDs:(id)arg1;	// IMP=0x0000000000005125
- (id)initWithDecrypter:(id)arg1;	// IMP=0x0000000000005038

@end

