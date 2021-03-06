//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HAPPairingIdentity, HMDAccessory, HMDAccessoryInvitation, HMDUser, HMDUserManagementOperationManager, HMFTimer, NSArray, NSDate, NSDictionary, NSMutableArray, NSObject, NSString, NSUUID;
@protocol HMDUserManagementOperationDelegate, HMFLocking, OS_dispatch_queue;

@interface HMDUserManagementOperation : HMFObject <HMFTimerDelegate, NSSecureCoding>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSMutableArray *_dependencies;	// 16 = 0x10
    _Bool _executing;	// 24 = 0x18
    _Bool _backingOff;	// 25 = 0x19
    _Bool _lastOperationFailed;	// 26 = 0x1a
    unsigned long long _state;	// 32 = 0x20
    HMDUserManagementOperationManager *_operationManager;	// 40 = 0x28
    id <HMDUserManagementOperationDelegate> _delegate;	// 48 = 0x30
    NSUUID *_identifier;	// 56 = 0x38
    unsigned long long _operationType;	// 64 = 0x40
    HMDUser *_user;	// 72 = 0x48
    HMDAccessory *_accessory;	// 80 = 0x50
    NSDate *_expirationDate;	// 88 = 0x58
    HAPPairingIdentity *_ownerPairingIdentity;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_clientQueue;	// 104 = 0x68
    HMFTimer *_expirationTimer;	// 112 = 0x70
    double _backoffInterval;	// 120 = 0x78
    HMFTimer *_backoffTimer;	// 128 = 0x80
    NSArray *_auditUsersToBeAdded;	// 136 = 0x88
}

+ (id)operationWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x00000000006c823a
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006c8232
+ (id)shortDescription;	// IMP=0x00000000006c8220
+ (id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3;	// IMP=0x00000000006c8056
+ (id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3;	// IMP=0x00000000006c7e8c
+ (id)auditUserManagementOperationAccessory:(id)arg1 model:(id)arg2;	// IMP=0x00000000006c7cdd
+ (void)initialize;	// IMP=0x00000000006c7c8d
- (void).cxx_destruct;	// IMP=0x00000000006c48cc
@property(retain, nonatomic) NSArray *auditUsersToBeAdded; // @synthesize auditUsersToBeAdded=_auditUsersToBeAdded;
@property(retain, nonatomic) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) double backoffInterval; // @synthesize backoffInterval=_backoffInterval;
@property(readonly, nonatomic) HMFTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(copy, nonatomic) HAPPairingIdentity *ownerPairingIdentity; // @synthesize ownerPairingIdentity=_ownerPairingIdentity;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDUserManagementOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)populateModelObjectWithChangeType:(id)arg1 version:(long long)arg2;	// IMP=0x00000000006c42fa
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000006c4288
- (id)modelObjectWithChangeType:(unsigned long long)arg1 parentUUID:(id)arg2;	// IMP=0x00000000006c4234
- (id)transactionWithObjectChangeType:(unsigned long long)arg1 parentUUID:(id)arg2;	// IMP=0x00000000006c419f
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006c40ee
- (id)dictionaryEncoding;	// IMP=0x00000000006c3e54
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006c3ba9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006c38d3
@property(readonly, nonatomic) NSDictionary *accessoryInvitationInformation;
@property(readonly, nonatomic) HMDAccessoryInvitation *accessoryInvitation;
- (long long)_accessoryInvitationState;	// IMP=0x00000000006c3618
- (_Bool)mergeWithOperation:(id)arg1;	// IMP=0x00000000006c3581
- (void)_auditPairingsForHAPAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c3131
- (void)_removePairingFromHAPAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c2c49
- (void)_addPairingToHAPAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c284d
- (id)_findConflictingAccessory:(id)arg1;	// IMP=0x00000000006c2585
- (void)executeWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c24a9
- (void)cancel;	// IMP=0x00000000006c2438
- (void)addDependency:(id)arg1;	// IMP=0x00000000006c235d
@property(readonly, copy, nonatomic) NSArray *dependencies;
- (void)_endBackoffTimer;	// IMP=0x00000000006c21c7
- (void)_startBackoffTimer;	// IMP=0x00000000006c2026
- (double)nextBackoffInterval;	// IMP=0x00000000006c1fe9
@property(nonatomic, getter=isBackingOff) _Bool backingOff; // @synthesize backingOff=_backingOff;
@property(retain, nonatomic) HMDUserManagementOperationManager *operationManager; // @synthesize operationManager=_operationManager;
- (void)updateDelegate:(id)arg1;	// IMP=0x00000000006c1b8b
@property(nonatomic) _Bool lastOperationFailed; // @synthesize lastOperationFailed=_lastOperationFailed;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (_Bool)_isFinished;	// IMP=0x00000000006c1123
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isValid;	// IMP=0x00000000006c0ac1
@property(readonly, nonatomic, getter=isAuditOperation) _Bool auditOperation;
@property(readonly, nonatomic, getter=isRemoveOperation) _Bool removeOperation;
@property(readonly, nonatomic, getter=isAddOperation) _Bool addOperation;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000006c07e7
- (id)shortDescription;	// IMP=0x00000000006c0725
- (void)_setupExpirationTimer;	// IMP=0x00000000006c05b8
- (id)initWithOperationType:(unsigned long long)arg1 identifier:(id)arg2 user:(id)arg3 accessory:(id)arg4 expiration:(id)arg5;	// IMP=0x00000000006c016f
- (id)init;	// IMP=0x00000000006c00c7

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

