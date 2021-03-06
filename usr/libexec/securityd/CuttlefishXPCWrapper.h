//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface CuttlefishXPCWrapper : NSObject
{
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 8 = 0x8
}

+ (_Bool)retryable:(id)arg1;	// IMP=0x0020000000025f9b
- (void).cxx_destruct;	// IMP=0x00200000000216f2
@property(readonly) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)recoverTLKSharesForInheritorWithContainer:(id)arg1 context:(id)arg2 crk:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000214ba
- (void)prepareInheritancePeerWithContainer:(id)arg1 context:(id)arg2 epoch:(unsigned long long)arg3 machineID:(id)arg4 bottleSalt:(id)arg5 bottleID:(id)arg6 modelID:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 policyVersion:(id)arg11 policySecrets:(id)arg12 syncUserControllableViews:(int)arg13 secureElementIdentity:(id)arg14 signingPrivKeyPersistentRef:(id)arg15 encPrivKeyPersistentRef:(id)arg16 crk:(id)arg17 reply:(CDUnknownBlockType)arg18;	// IMP=0x0010000000021106
- (void)fetchAccountSettingsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020f19
- (void)fetchRecoverableTLKSharesWithContainer:(id)arg1 context:(id)arg2 peerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000020d10
- (void)resetAccountCDPContentsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020b23
- (void)removeEscrowCacheWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020936
- (void)fetchViableEscrowRecordsWithContainer:(id)arg1 context:(id)arg2 forceFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002073d
- (void)getSupportAppInfoWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020550
- (void)requestHealthCheckWithContainer:(id)arg1 context:(id)arg2 requiresEscrowCheck:(_Bool)arg3 knownFederations:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000002033d
- (void)pushHealthInquiryWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020150
- (void)reportHealthWithContainer:(id)arg1 context:(id)arg2 stateMachineState:(id)arg3 trustState:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001ff2c
- (void)removeCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001fd23
- (void)createCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 ckksKeys:(id)arg5 uuid:(id)arg6 kind:(int)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000001fab1
- (void)setRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 ckksKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001f866
- (void)fetchTrustStateWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f679
- (void)validatePeersWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f48c
- (void)fetchCurrentPolicyWithContainer:(id)arg1 context:(id)arg2 modelIDOverride:(id)arg3 isInheritedAccount:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001f279
- (void)fetchPolicyDocumentsWithContainer:(id)arg1 context:(id)arg2 versions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001f070
- (void)fetchEscrowContentsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ee83
- (void)fetchViableBottlesWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ec96
- (void)updateTLKsWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001ea72
- (void)setPreapprovedKeysWithContainer:(id)arg1 context:(id)arg2 preapprovedKeys:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e869
- (void)updateWithContainer:(id)arg1 context:(id)arg2 forceRefetch:(_Bool)arg3 deviceName:(id)arg4 serialNumber:(id)arg5 osVersion:(id)arg6 policyVersion:(id)arg7 policySecrets:(id)arg8 syncUserControllableViews:(id)arg9 secureElementIdentity:(id)arg10 reply:(CDUnknownBlockType)arg11;	// IMP=0x001000000001e5a1
- (void)attemptPreapprovedJoinWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 preapprovedKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001e356
- (void)preflightPreapprovedJoinWithContainer:(id)arg1 context:(id)arg2 preapprovedKeys:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e14d
- (void)joinWithContainer:(id)arg1 context:(id)arg2 voucherData:(id)arg3 voucherSig:(id)arg4 ckksKeys:(id)arg5 tlkShares:(id)arg6 preapprovedKeys:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000001dec8
- (void)vouchWithCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 crk:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001dca4
- (void)vouchWithRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 tlkShares:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001da59
- (void)preflightVouchWithCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 crk:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d850
- (void)preflightVouchWithRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001d62c
- (void)vouchWithBottleWithContainer:(id)arg1 context:(id)arg2 bottleID:(id)arg3 entropy:(id)arg4 bottleSalt:(id)arg5 tlkShares:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000001d3c1
- (void)preflightVouchWithBottleWithContainer:(id)arg1 context:(id)arg2 bottleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d1b8
- (void)vouchWithContainer:(id)arg1 context:(id)arg2 peerID:(id)arg3 permanentInfo:(id)arg4 permanentInfoSig:(id)arg5 stableInfo:(id)arg6 stableInfoSig:(id)arg7 ckksKeys:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x001000000001cf16
- (void)establishWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 preapprovedKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001cccb
- (void)prepareWithContainer:(id)arg1 context:(id)arg2 epoch:(unsigned long long)arg3 machineID:(id)arg4 bottleSalt:(id)arg5 bottleID:(id)arg6 modelID:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 policyVersion:(id)arg11 policySecrets:(id)arg12 syncUserControllableViews:(int)arg13 secureElementIdentity:(id)arg14 setting:(id)arg15 signingPrivKeyPersistentRef:(id)arg16 encPrivKeyPersistentRef:(id)arg17 reply:(CDUnknownBlockType)arg18;	// IMP=0x001000000001c917
- (void)fetchEgoEpochWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c72a
- (void)fetchAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c53d
- (void)removeAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 machineIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c334
- (void)addAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 machineIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c12b
- (void)setAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 allowedMachineIDs:(id)arg3 honorIDMSListChanges:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001bf18
- (void)localResetWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bd2b
- (void)resetWithContainer:(id)arg1 context:(id)arg2 resetReason:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001bb33
- (void)trustStatusWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b946
- (void)distrustPeerIDsWithContainer:(id)arg1 context:(id)arg2 peerIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001b73d
- (void)departByDistrustingSelfWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b550
- (void)dumpWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b363
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b1ca
- (id)initWithCuttlefishXPCConnection:(id)arg1;	// IMP=0x001000000001b15f

@end

