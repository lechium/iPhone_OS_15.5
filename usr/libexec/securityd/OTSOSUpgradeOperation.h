//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSOperation, NSString, OTDeviceInformation, OTOperationDependencies, OTUpdateTrustedDeviceListOperation, TPPolicyVersion;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTSOSUpgradeOperation
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    TPPolicyVersion *_policyOverride;	// 32 = 0x20
    OTOperationDependencies *_deps;	// 40 = 0x28
    OTDeviceInformation *_deviceInfo;	// 48 = 0x30
    NSString<OctagonStateString> *_ckksConflictState;	// 56 = 0x38
    NSOperation *_finishedOp;	// 64 = 0x40
    OTUpdateTrustedDeviceListOperation *_updateOp;	// 72 = 0x48
    NSArray *_peerPreapprovedSPKIs;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000011c803
@property(retain) NSArray *peerPreapprovedSPKIs; // @synthesize peerPreapprovedSPKIs=_peerPreapprovedSPKIs;
@property(retain) OTUpdateTrustedDeviceListOperation *updateOp; // @synthesize updateOp=_updateOp;
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) NSString<OctagonStateString> *ckksConflictState; // @synthesize ckksConflictState=_ckksConflictState;
@property(retain) OTDeviceInformation *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) TPPolicyVersion *policyOverride; // @synthesize policyOverride=_policyOverride;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)proceedWithKeys:(id)arg1 pendingTLKShares:(id)arg2;	// IMP=0x001000000011c3ce
- (void)afterSuccessfulAllowList;	// IMP=0x001000000011c1f4
- (void)requestSilentEscrowUpdate;	// IMP=0x001000000011bfbd
- (void)afterUpdate;	// IMP=0x001000000011be28
- (void)handlePrepareErrors:(id)arg1 nextExpectedState:(id)arg2;	// IMP=0x001000000011bcc4
- (void)afterPreflight;	// IMP=0x001000000011baa4
- (void)afterPrepare;	// IMP=0x001000000011b8d8
- (void)groupStart;	// IMP=0x001000000011a3fd
- (MISSING_TYPE *)persistentKeyRef:error: /* Error: Ran out of types for this method. */;	// IMP=0x001000000011a365
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 ckksConflictState:(id)arg3 errorState:(id)arg4 deviceInfo:(id)arg5 policyOverride:(id)arg6;	// IMP=0x001000000011a224

@end
