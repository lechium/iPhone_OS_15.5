//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSKeychainView, CKKSLockStateTracker, CuttlefishXPCWrapper, NSString, OTCuttlefishAccountStateHolder;
@protocol CKKSPeerProvider, OTAuthKitAdapter, OTDeviceInformationAdapter, OTSOSAdapter, OctagonStateFlagHandler;

__attribute__((visibility("hidden")))
@interface OTOperationDependencies : NSObject
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_contextID;	// 16 = 0x10
    OTCuttlefishAccountStateHolder *_stateHolder;	// 24 = 0x18
    id <OctagonStateFlagHandler> _flagHandler;	// 32 = 0x20
    id <OTSOSAdapter> _sosAdapter;	// 40 = 0x28
    id <CKKSPeerProvider> _octagonAdapter;	// 48 = 0x30
    id <OTAuthKitAdapter> _authKitAdapter;	// 56 = 0x38
    id <OTDeviceInformationAdapter> _deviceInformationAdapter;	// 64 = 0x40
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 72 = 0x48
    CKKSKeychainView *_ckks;	// 80 = 0x50
    CKKSLockStateTracker *_lockStateTracker;	// 88 = 0x58
    Class _escrowRequestClass;	// 96 = 0x60
    Class _notifierClass;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000001c8ad4
@property(retain) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(retain) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property(readonly) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
@property(retain) id <OTDeviceInformationAdapter> deviceInformationAdapter; // @synthesize deviceInformationAdapter=_deviceInformationAdapter;
@property(retain) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(retain) id <CKKSPeerProvider> octagonAdapter; // @synthesize octagonAdapter=_octagonAdapter;
@property(retain) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
@property(retain) id <OctagonStateFlagHandler> flagHandler; // @synthesize flagHandler=_flagHandler;
@property(retain) OTCuttlefishAccountStateHolder *stateHolder; // @synthesize stateHolder=_stateHolder;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
- (id)initForContainer:(id)arg1 contextID:(id)arg2 stateHolder:(id)arg3 flagHandler:(id)arg4 sosAdapter:(id)arg5 octagonAdapter:(id)arg6 authKitAdapter:(id)arg7 deviceInfoAdapter:(id)arg8 ckksAccountSync:(id)arg9 lockStateTracker:(id)arg10 cuttlefishXPCWrapper:(id)arg11 escrowRequestClass:(Class)arg12 notifierClass:(Class)arg13;	// IMP=0x00100000001c871d

@end
